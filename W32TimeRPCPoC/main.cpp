#include <iostream>
#include <windows.h>
#include "W32Time_x64.h"
// Links the rpcrt4.lib that exposes the WinAPI RPC functions
#pragma comment(lib, "rpcrt4.lib")

int main()
{
	RPC_STATUS status;                 // Store the RPC status
	RPC_WSTR szStringBinding = NULL;   // Store the binding string
	RPC_BINDING_HANDLE ImplicitHandle = NULL;

	// Used to get a valid binding string
	status = RpcStringBindingComposeW(
		NULL,                         // UUID of the interface
		(RPC_WSTR)L"ncalrpc",    // TCP binding 
		NULL, // Server IP address
		(RPC_WSTR)L"W32TIME_ALT",           // Port on which the interface is listening
		NULL,                         // Network protocol to use
		&szStringBinding              // Variable in which the binding string is to be stored
	);

	printf("BindingString: %s\n", szStringBinding);

	// Validates the binding string and retrieves a binding handle
	status = RpcBindingFromStringBindingW(
		szStringBinding,      // The binding string to validate
		&ImplicitHandle       // The variable in which is stored the binding handle
	);

	PW32TIME_PROVIDER_INFO* pProviderInfo = (PW32TIME_PROVIDER_INFO*)malloc(sizeof(PW32TIME_PROVIDER_INFO));

	RpcTryExcept{
		// Calls the remote function
		int ret = W32TimeQueryProviderStatus(ImplicitHandle, 0, _wcsdup(L"NtpServer"), pProviderInfo);
		printf("Return: %d\n", ret);
	}
		RpcExcept(1) {
		printf("RPCExec: %d\n", RpcExceptionCode());
	}
	RpcEndExcept

	status = RpcStringFreeW(&szStringBinding);
	status = RpcBindingFree(&ImplicitHandle);
}

// Function used to allocate memory to the interface
void* __RPC_USER midl_user_allocate(size_t size) {
	return malloc(size);
}

// Function used to free memory allocated to the interface
void __RPC_USER midl_user_free(void* p) {
	free(p);
}