

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for W32Time.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/

#include <string.h>

#include "W32Time_x64.h"

#define TYPE_FORMAT_STRING_SIZE   599                               
#define PROC_FORMAT_STRING_SIZE   355                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _W32Time_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } W32Time_MIDL_TYPE_FORMAT_STRING;

typedef struct _W32Time_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } W32Time_MIDL_PROC_FORMAT_STRING;

typedef struct _W32Time_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } W32Time_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const W32Time_MIDL_TYPE_FORMAT_STRING W32Time__MIDL_TypeFormatString;
extern const W32Time_MIDL_PROC_FORMAT_STRING W32Time__MIDL_ProcFormatString;
extern const W32Time_MIDL_EXPR_FORMAT_STRING W32Time__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: __MIDL_itf_W32Time_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: W32Time, ver. 4.1,
   GUID={0x8fb6d884,0x2388,0x11d0,{0x8c,0x35,0x00,0xc0,0x4f,0xda,0x27,0x95}} */



static const RPC_CLIENT_INTERFACE W32Time___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x8fb6d884,0x2388,0x11d0,{0x8c,0x35,0x00,0xc0,0x4f,0xda,0x27,0x95}},{4,1}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE W32Time_v4_1_c_ifspec = (RPC_IF_HANDLE)& W32Time___RpcClientInterface;

extern const MIDL_STUB_DESC W32Time_StubDesc;

static RPC_BINDING_HANDLE W32Time__MIDL_AutoBindHandle;


unsigned long W32TimeSync( 
    /* [in] */ handle_t hBinding,
    /* [in] */ unsigned long uWait,
    /* [in] */ unsigned long ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&W32Time_StubDesc,
                  (PFORMAT_STRING) &W32Time__MIDL_ProcFormatString.Format[0],
                  hBinding,
                  uWait,
                  ulFlags);
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long W32TimeGetNetlogonServiceBits( 
    /* [in] */ handle_t hBinding)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&W32Time_StubDesc,
                  (PFORMAT_STRING) &W32Time__MIDL_ProcFormatString.Format[48],
                  hBinding);
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long W32TimeQueryProviderStatus( 
    /* [in] */ handle_t hRPCBinding,
    /* [in] */ unsigned __int32 ulFlags,
    /* [string][in] */ wchar_t *pwszProvider,
    /* [ref][out] */ PW32TIME_PROVIDER_INFO *pProviderInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&W32Time_StubDesc,
                  (PFORMAT_STRING) &W32Time__MIDL_ProcFormatString.Format[84],
                  hRPCBinding,
                  ulFlags,
                  pwszProvider,
                  pProviderInfo);
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long W32TimeQuerySource( 
    /* [in] */ handle_t hBinding,
    /* [string][out] */ wchar_t **pwszSource)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&W32Time_StubDesc,
                  (PFORMAT_STRING) &W32Time__MIDL_ProcFormatString.Format[138],
                  hBinding,
                  pwszSource);
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long W32TimeQueryProviderConfiguration( 
    /* [in] */ handle_t hBinding,
    /* [in] */ unsigned __int32 ulFlags,
    /* [string][in] */ wchar_t *pwszProvider,
    /* [ref][out] */ PW32TIME_CONFIGURATION_PROVIDER *pConfigurationProviderInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&W32Time_StubDesc,
                  (PFORMAT_STRING) &W32Time__MIDL_ProcFormatString.Format[180],
                  hBinding,
                  ulFlags,
                  pwszProvider,
                  pConfigurationProviderInfo);
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long W32TimeQueryConfiguration( 
    /* [in] */ handle_t hBinding,
    /* [ref][out] */ PW32TIME_CONFIGURATION_INFO *pConfigurationInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&W32Time_StubDesc,
                  (PFORMAT_STRING) &W32Time__MIDL_ProcFormatString.Format[234],
                  hBinding,
                  pConfigurationInfo);
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long W32TimeQueryStatus( 
    /* [in] */ handle_t hBinding,
    /* [ref][out] */ PW32TIME_STATUS_INFO *pStatusInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&W32Time_StubDesc,
                  (PFORMAT_STRING) &W32Time__MIDL_ProcFormatString.Format[276],
                  hBinding,
                  pStatusInfo);
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long W32TimeLog( 
    /* [in] */ handle_t hBinding)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&W32Time_StubDesc,
                  (PFORMAT_STRING) &W32Time__MIDL_ProcFormatString.Format[318],
                  hBinding);
    return ( unsigned long  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const W32Time_MIDL_PROC_FORMAT_STRING W32Time__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure W32TimeSync */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x10 ),	/* 16 */
/* 16 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 20 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uWait */

/* 30 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ulFlags */

/* 36 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 38 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 42 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 44 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure W32TimeGetNetlogonServiceBits */

/* 48 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 50 */	NdrFcLong( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x1 ),	/* 1 */
/* 56 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 58 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x8 ),	/* 8 */
/* 66 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 68 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 78 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 80 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure W32TimeQueryProviderStatus */

/* 84 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 86 */	NdrFcLong( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x2 ),	/* 2 */
/* 92 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 94 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 96 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 98 */	NdrFcShort( 0x8 ),	/* 8 */
/* 100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 102 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 104 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 106 */	NdrFcShort( 0x1 ),	/* 1 */
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ulFlags */

/* 114 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 116 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pwszProvider */

/* 120 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 122 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 124 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pProviderInfo */

/* 126 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 128 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 130 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 134 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure W32TimeQuerySource */

/* 138 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x3 ),	/* 3 */
/* 146 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 148 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 150 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 156 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 158 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszSource */

/* 168 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 170 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 172 */	NdrFcShort( 0x98 ),	/* Type Offset=152 */

	/* Return value */

/* 174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 176 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure W32TimeQueryProviderConfiguration */

/* 180 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x4 ),	/* 4 */
/* 188 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 190 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 192 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 198 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 200 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 202 */	NdrFcShort( 0x1 ),	/* 1 */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ulFlags */

/* 210 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 212 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pwszProvider */

/* 216 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 218 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 220 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pConfigurationProviderInfo */

/* 222 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 224 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 226 */	NdrFcShort( 0xa0 ),	/* Type Offset=160 */

	/* Return value */

/* 228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 230 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure W32TimeQueryConfiguration */

/* 234 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0x5 ),	/* 5 */
/* 242 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 244 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 246 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x8 ),	/* 8 */
/* 252 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 254 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 256 */	NdrFcShort( 0x1 ),	/* 1 */
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pConfigurationInfo */

/* 264 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 266 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 268 */	NdrFcShort( 0x184 ),	/* Type Offset=388 */

	/* Return value */

/* 270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 272 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure W32TimeQueryStatus */

/* 276 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 282 */	NdrFcShort( 0x6 ),	/* 6 */
/* 284 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 286 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 288 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 294 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 296 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 298 */	NdrFcShort( 0x1 ),	/* 1 */
/* 300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStatusInfo */

/* 306 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 308 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 310 */	NdrFcShort( 0x210 ),	/* Type Offset=528 */

	/* Return value */

/* 312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 314 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure W32TimeLog */

/* 318 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 324 */	NdrFcShort( 0x7 ),	/* 7 */
/* 326 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 328 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 330 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 336 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 338 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 350 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const W32Time_MIDL_TYPE_FORMAT_STRING W32Time__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  4 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	
			0x12, 0x0,	/* FC_UP */
/* 12 */	NdrFcShort( 0x7c ),	/* Offset= 124 (136) */
/* 14 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 16 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 18 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 20 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 22 */	NdrFcShort( 0x2 ),	/* Offset= 2 (24) */
/* 24 */	NdrFcShort( 0x8 ),	/* 8 */
/* 26 */	NdrFcShort( 0x2 ),	/* 2 */
/* 28 */	NdrFcLong( 0x0 ),	/* 0 */
/* 32 */	NdrFcShort( 0xa ),	/* Offset= 10 (42) */
/* 34 */	NdrFcLong( 0x1 ),	/* 1 */
/* 38 */	NdrFcShort( 0x4c ),	/* Offset= 76 (114) */
/* 40 */	NdrFcShort( 0xffff ),	/* Offset= -1 (39) */
/* 42 */	
			0x12, 0x0,	/* FC_UP */
/* 44 */	NdrFcShort( 0x34 ),	/* Offset= 52 (96) */
/* 46 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 48 */	NdrFcShort( 0x38 ),	/* 56 */
/* 50 */	NdrFcShort( 0x0 ),	/* 0 */
/* 52 */	NdrFcShort( 0x12 ),	/* Offset= 18 (70) */
/* 54 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 56 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 58 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 60 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 62 */	0x36,		/* FC_POINTER */
			0x2,		/* FC_CHAR */
/* 64 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 66 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 68 */	0x3f,		/* FC_STRUCTPAD3 */
			0x5b,		/* FC_END */
/* 70 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 72 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 74 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */
/* 78 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 80 */	NdrFcShort( 0xc ),	/* 12 */
/* 82 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 84 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 88 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 90 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 92 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (46) */
/* 94 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 96 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 98 */	NdrFcShort( 0x18 ),	/* 24 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x8 ),	/* Offset= 8 (110) */
/* 104 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 106 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 108 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 110 */	
			0x12, 0x0,	/* FC_UP */
/* 112 */	NdrFcShort( 0xffda ),	/* Offset= -38 (74) */
/* 114 */	
			0x12, 0x0,	/* FC_UP */
/* 116 */	NdrFcShort( 0x2 ),	/* Offset= 2 (118) */
/* 118 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 120 */	NdrFcShort( 0x18 ),	/* 24 */
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x8 ),	/* Offset= 8 (132) */
/* 126 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 128 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 130 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 132 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 134 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 136 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 138 */	NdrFcShort( 0x10 ),	/* 16 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0x0 ),	/* Offset= 0 (142) */
/* 144 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 146 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 148 */	NdrFcShort( 0xff7a ),	/* Offset= -134 (14) */
/* 150 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 152 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 154 */	NdrFcShort( 0x2 ),	/* Offset= 2 (156) */
/* 156 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 158 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 160 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 162 */	NdrFcShort( 0x2 ),	/* Offset= 2 (164) */
/* 164 */	
			0x12, 0x0,	/* FC_UP */
/* 166 */	NdrFcShort( 0xbe ),	/* Offset= 190 (356) */
/* 168 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 170 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 172 */	NdrFcShort( 0x4 ),	/* 4 */
/* 174 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 176 */	NdrFcShort( 0x2 ),	/* Offset= 2 (178) */
/* 178 */	NdrFcShort( 0x8 ),	/* 8 */
/* 180 */	NdrFcShort( 0x2 ),	/* 2 */
/* 182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0xa ),	/* Offset= 10 (196) */
/* 188 */	NdrFcLong( 0x1 ),	/* 1 */
/* 192 */	NdrFcShort( 0x66 ),	/* Offset= 102 (294) */
/* 194 */	NdrFcShort( 0xffff ),	/* Offset= -1 (193) */
/* 196 */	
			0x12, 0x0,	/* FC_UP */
/* 198 */	NdrFcShort( 0x32 ),	/* Offset= 50 (248) */
/* 200 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 202 */	NdrFcShort( 0x20 ),	/* 32 */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x8 ),	/* Offset= 8 (214) */
/* 208 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 210 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 212 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 214 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 216 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 218 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 220 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 222 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 224 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 226 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 230 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 232 */	NdrFcShort( 0x60 ),	/* 96 */
/* 234 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 236 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 240 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 242 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 244 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (200) */
/* 246 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 248 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 250 */	NdrFcShort( 0x70 ),	/* 112 */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x1c ),	/* Offset= 28 (282) */
/* 256 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 258 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 260 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 262 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 264 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 266 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 268 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 270 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 272 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 274 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 276 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 278 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 280 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 282 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 284 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 286 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 288 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 290 */	
			0x12, 0x0,	/* FC_UP */
/* 292 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (226) */
/* 294 */	
			0x12, 0x0,	/* FC_UP */
/* 296 */	NdrFcShort( 0x18 ),	/* Offset= 24 (320) */
/* 298 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 302 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 304 */	NdrFcShort( 0x14 ),	/* 20 */
/* 306 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 308 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 312 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 314 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 316 */	NdrFcShort( 0xff8c ),	/* Offset= -116 (200) */
/* 318 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 320 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 322 */	NdrFcShort( 0x20 ),	/* 32 */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0xa ),	/* Offset= 10 (336) */
/* 328 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 330 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 332 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 334 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 336 */	
			0x12, 0x0,	/* FC_UP */
/* 338 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (298) */
/* 340 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 342 */	NdrFcShort( 0x10 ),	/* 16 */
/* 344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0x6 ),	/* Offset= 6 (352) */
/* 348 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 350 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 352 */	
			0x12, 0x0,	/* FC_UP */
/* 354 */	NdrFcShort( 0xff46 ),	/* Offset= -186 (168) */
/* 356 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 358 */	NdrFcShort( 0x38 ),	/* 56 */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0xe ),	/* Offset= 14 (376) */
/* 364 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 366 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 368 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 370 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 372 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 374 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 376 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 378 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 380 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 382 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 384 */	
			0x12, 0x0,	/* FC_UP */
/* 386 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (340) */
/* 388 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 390 */	NdrFcShort( 0x2 ),	/* Offset= 2 (392) */
/* 392 */	
			0x12, 0x0,	/* FC_UP */
/* 394 */	NdrFcShort( 0x60 ),	/* Offset= 96 (490) */
/* 396 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 398 */	NdrFcShort( 0x44 ),	/* 68 */
/* 400 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 402 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 404 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 406 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 408 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 410 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 412 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 414 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 416 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 418 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 420 */	NdrFcShort( 0x30 ),	/* 48 */
/* 422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 424 */	NdrFcShort( 0xe ),	/* Offset= 14 (438) */
/* 426 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 428 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 430 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 432 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 434 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 436 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 438 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 440 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 442 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 444 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 446 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 450 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 452 */	NdrFcShort( 0xc0 ),	/* 192 */
/* 454 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 456 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 460 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 462 */	
			0x12, 0x0,	/* FC_UP */
/* 464 */	NdrFcShort( 0xff94 ),	/* Offset= -108 (356) */
/* 466 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 468 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 472 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 474 */	NdrFcShort( 0xd0 ),	/* 208 */
/* 476 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 478 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 482 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 484 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 486 */	NdrFcShort( 0xfee2 ),	/* Offset= -286 (200) */
/* 488 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 490 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 492 */	NdrFcShort( 0xe0 ),	/* 224 */
/* 494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 496 */	NdrFcShort( 0x18 ),	/* Offset= 24 (520) */
/* 498 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 500 */	0x0,		/* 0 */
			NdrFcShort( 0xff97 ),	/* Offset= -105 (396) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 504 */	0x0,		/* 0 */
			NdrFcShort( 0xff93 ),	/* Offset= -109 (396) */
			0x40,		/* FC_STRUCTPAD4 */
/* 508 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 510 */	NdrFcShort( 0xffa4 ),	/* Offset= -92 (418) */
/* 512 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 514 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 516 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 518 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 520 */	
			0x12, 0x0,	/* FC_UP */
/* 522 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (446) */
/* 524 */	
			0x12, 0x0,	/* FC_UP */
/* 526 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (468) */
/* 528 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 530 */	NdrFcShort( 0x2 ),	/* Offset= 2 (532) */
/* 532 */	
			0x12, 0x0,	/* FC_UP */
/* 534 */	NdrFcShort( 0x18 ),	/* Offset= 24 (558) */
/* 536 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 540 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 542 */	NdrFcShort( 0x68 ),	/* 104 */
/* 544 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 546 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 550 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 552 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 554 */	NdrFcShort( 0xfe9e ),	/* Offset= -354 (200) */
/* 556 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 558 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 560 */	NdrFcShort( 0x78 ),	/* 120 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0x1a ),	/* Offset= 26 (590) */
/* 566 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 568 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 570 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 572 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 574 */	0xb,		/* FC_HYPER */
			0x8,		/* FC_LONG */
/* 576 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 578 */	0xb,		/* FC_HYPER */
			0x8,		/* FC_LONG */
/* 580 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 582 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 584 */	0x40,		/* FC_STRUCTPAD4 */
			0xb,		/* FC_HYPER */
/* 586 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 588 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 590 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 592 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 594 */	
			0x12, 0x0,	/* FC_UP */
/* 596 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (536) */

			0x0
        }
    };

static const unsigned short W32Time_FormatStringOffsetTable[] =
    {
    0,
    48,
    84,
    138,
    180,
    234,
    276,
    318
    };


static const MIDL_STUB_DESC W32Time_StubDesc = 
    {
    (void *)& W32Time___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &W32Time__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    W32Time__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

