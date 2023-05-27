

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __W32Time_x64_h__
#define __W32Time_x64_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_W32Time_0000_0000 */
/* [local] */ 

typedef /* [public] */ struct __MIDL___MIDL_itf_W32Time_0000_0000_0001
    {
    unsigned __int32 ulSize;
    unsigned __int32 ulResolveAttempts;
    unsigned __int64 u64TimeRemaining;
    unsigned __int64 u64LastSuccessfulSync;
    unsigned __int32 ulLastSyncError;
    unsigned __int32 ulLastSyncErrorMsgId;
    unsigned __int32 ulValidDataCounter;
    unsigned __int32 ulAuthTypeMsgId;
    /* [unique][string] */ wchar_t *wszUniqueName;
    unsigned char ulMode;
    unsigned char ulStratum;
    unsigned char ulReachability;
    unsigned char ulPeerPollInterval;
    unsigned char ulHostPollInterval;
    } 	W32TIME_NTP_PEER_INFO;

typedef struct __MIDL___MIDL_itf_W32Time_0000_0000_0001 *PW32TIME_NTP_PEER_INFO;

typedef /* [public][public][public][public][public] */ struct __MIDL___MIDL_itf_W32Time_0000_0000_0002
    {
    unsigned __int32 ulSize;
    unsigned __int32 ulError;
    unsigned __int32 ulErrorMsgId;
    unsigned __int32 cPeerInfo;
    /* [size_is] */ PW32TIME_NTP_PEER_INFO pPeerInfo;
    } 	W32TIME_NTP_PROVIDER_DATA;

typedef struct __MIDL___MIDL_itf_W32Time_0000_0000_0002 *PW32TIME_NTP_PROVIDER_DATA;

typedef /* [public][public][public][public][public] */ struct __MIDL___MIDL_itf_W32Time_0000_0000_0003
    {
    unsigned __int32 ulSize;
    unsigned __int32 ulError;
    unsigned __int32 ulErrorMsgId;
    /* [unique][string] */ wchar_t *wszReferenceIdentifier;
    } 	W32TIME_HARDWARE_PROVIDER_DATA;

typedef struct __MIDL___MIDL_itf_W32Time_0000_0000_0003 *PW32TIME_HARDWARE_PROVIDER_DATA;

typedef /* [public][public][public][public][switch_type] */ union __MIDL___MIDL_itf_W32Time_0000_0000_0004
    {
    /* [case()] */ W32TIME_NTP_PROVIDER_DATA *pNtpProviderData;
    /* [case()] */ W32TIME_HARDWARE_PROVIDER_DATA *pHardwareProviderData;
    } 	W32TIME_PROVIDER_DATA;

typedef /* [public] */ struct __MIDL___MIDL_itf_W32Time_0000_0000_0005
    {
    unsigned __int32 ulProviderType;
    /* [switch_is] */ W32TIME_PROVIDER_DATA ProviderData;
    } 	W32TIME_PROVIDER_INFO;

typedef struct __MIDL___MIDL_itf_W32Time_0000_0000_0005 *PW32TIME_PROVIDER_INFO;

typedef /* [public] */ struct __MIDL___MIDL_itf_W32Time_0000_0000_0006
    {
    unsigned __int32 ulSize;
    /* [unique][string] */ wchar_t *wszName;
    /* [unique][string] */ wchar_t *wszValue;
    /* [unique][string] */ wchar_t *wszHelp;
    } 	W32TIME_ENTRY;

typedef struct __MIDL___MIDL_itf_W32Time_0000_0000_0006 *PW32TIME_ENTRY;

typedef /* [public] */ struct __MIDL___MIDL_itf_W32Time_0000_0000_0007
    {
    unsigned __int32 ulSize;
    unsigned __int32 ulAllowNonstandardModeCombinations;
    unsigned __int32 ulCrossSiteSyncFlags;
    unsigned __int32 ulResolvePeerBackoffMinutes;
    unsigned __int32 ulResolvePeerBackoffMaxTimes;
    unsigned __int32 ulCompatibilityFlags;
    unsigned __int32 ulEventLogFlags;
    unsigned __int32 ulLargeSampleSkew;
    unsigned __int32 ulSpecialPollInterval;
    /* [unique][string] */ wchar_t *wszType;
    /* [unique][string] */ wchar_t *wszNtpServer;
    unsigned __int32 ulAllowNonstandardModeCombinationsFlag;
    unsigned __int32 ulCrossSiteSyncFlagsFlag;
    unsigned __int32 ulResolvePeerBackoffMinutesFlag;
    unsigned __int32 ulResolvePeerBackoffMaxTimesFlag;
    unsigned __int32 ulCompatibilityFlagsFlag;
    unsigned __int32 ulEventLogFlagsFlag;
    unsigned __int32 ulLargeSampleSkewFlag;
    unsigned __int32 ulSpecialPollIntervalFlag;
    unsigned __int32 ulTypeFlag;
    unsigned __int32 ulNtpServerFlag;
    unsigned __int32 cEntries;
    /* [size_is] */ PW32TIME_ENTRY pEntries;
    } 	W32TIME_NTPCLIENT_PROVIDER_CONFIG_DATA;

typedef struct __MIDL___MIDL_itf_W32Time_0000_0000_0007 *PW32TIME_NTPCLIENT_PROVIDER_CONFIG_DATA;

typedef /* [public] */ struct __MIDL___MIDL_itf_W32Time_0000_0000_0008
    {
    unsigned __int32 ulSize;
    unsigned __int32 ulAllowNonstandardModeCombinations;
    unsigned __int32 ulAllowNonstandardModeCombinationsFlag;
    unsigned __int32 ulEventLogFlags;
    unsigned __int32 ulEventLogFlagsFlag;
    unsigned __int32 cEntries;
    /* [size_is] */ PW32TIME_ENTRY pEntries;
    } 	W32TIME_NTPSERVER_PROVIDER_CONFIG_DATA;

typedef struct __MIDL___MIDL_itf_W32Time_0000_0000_0008 *PW32TIME_NTPSERVER_PROVIDER_CONFIG_DATA;

typedef /* [public][switch_type] */ union __MIDL___MIDL_itf_W32Time_0000_0000_0009
    {
    /* [case()] */ PW32TIME_NTPCLIENT_PROVIDER_CONFIG_DATA pNtpClientProviderConfigData;
    /* [case()] */ PW32TIME_NTPSERVER_PROVIDER_CONFIG_DATA pNtpServerProviderConfigData;
    } 	W32TIME_PROVIDER_CONFIG_DATA;

typedef /* [switch_type] */ union __MIDL___MIDL_itf_W32Time_0000_0000_0009 *PW32TIME_PROVIDER_CONFIG_DATA;

typedef /* [public] */ struct __MIDL___MIDL_itf_W32Time_0000_0000_0010
    {
    unsigned __int32 ulSize;
    unsigned __int32 ulProviderType;
    /* [switch_is] */ PW32TIME_PROVIDER_CONFIG_DATA pProviderConfigData;
    } 	W32TIME_PROVIDER_CONFIG;

typedef struct __MIDL___MIDL_itf_W32Time_0000_0000_0010 *PW32TIME_PROVIDER_CONFIG;

typedef /* [public][public][public][public] */ struct __MIDL___MIDL_itf_W32Time_0000_0000_0011
    {
    unsigned __int32 ulSize;
    unsigned __int32 ulEventLogFlags;
    unsigned __int32 ulAnnounceFlags;
    unsigned __int32 ulTimeJumpAuditOffset;
    unsigned __int32 ulMinPollInterval;
    unsigned __int32 ulMaxPollInterval;
    unsigned __int32 ulMaxNegPhaseCorrection;
    unsigned __int32 ulMaxPosPhaseCorrection;
    unsigned __int32 ulMaxAllowedPhaseOffset;
    unsigned __int32 ulEventLogFlagsFlag;
    unsigned __int32 ulAnnounceFlagsFlag;
    unsigned __int32 ulTimeJumpAuditOffsetFlag;
    unsigned __int32 ulMinPollIntervalFlag;
    unsigned __int32 ulMaxPollIntervalFlag;
    unsigned __int32 ulMaxNegPhaseCorrectionFlag;
    unsigned __int32 ulMaxPosPhaseCorrectionFlag;
    unsigned __int32 ulMaxAllowedPhaseOffsetFlag;
    } 	W32TIME_CONFIGURATION_BASIC;

typedef struct __MIDL___MIDL_itf_W32Time_0000_0000_0011 *PW32TIME_CONFIGURATION_BASIC;

typedef /* [public][public][public][public] */ struct __MIDL___MIDL_itf_W32Time_0000_0000_0012
    {
    unsigned __int32 ulSize;
    unsigned __int32 ulFrequencyCorrectRate;
    unsigned __int32 ulPollAdjustFactor;
    unsigned __int32 ulLargePhaseOffset;
    unsigned __int32 ulSpikeWatchPeriod;
    unsigned __int32 ulLocalClockDispersion;
    unsigned __int32 ulHoldPeriod;
    unsigned __int32 ulPhaseCorrectRate;
    unsigned __int32 ulUpdateInterval;
    unsigned __int32 ulFrequencyCorrectRateFlag;
    unsigned __int32 ulPollAdjustFactorFlag;
    unsigned __int32 ulLargePhaseOffsetFlag;
    unsigned __int32 ulSpikeWatchPeriodFlag;
    unsigned __int32 ulLocalClockDispersionFlag;
    unsigned __int32 ulHoldPeriodFlag;
    unsigned __int32 ulPhaseCorrectRateFlag;
    unsigned __int32 ulUpdateIntervalFlag;
    } 	W32TIME_CONFIGURATION_ADVANCED;

typedef struct __MIDL___MIDL_itf_W32Time_0000_0000_0012 *PW32TIME_CONFIGURATION_ADVANCED;

typedef /* [public][public][public][public] */ struct __MIDL___MIDL_itf_W32Time_0000_0000_0013
    {
    unsigned __int32 ulSize;
    /* [unique][string] */ wchar_t *wszFileLogName;
    /* [unique][string] */ wchar_t *wszFileLogEntries;
    unsigned __int32 ulFileLogSize;
    unsigned __int32 ulFileLogFlags;
    unsigned __int32 ulFileLogNameFlag;
    unsigned __int32 ulFileLogEntriesFlag;
    unsigned __int32 ulFileLogSizeFlag;
    unsigned __int32 ulFileLogFlagsFlag;
    } 	W32TIME_CONFIGURATION_DEFAULT;

typedef struct __MIDL___MIDL_itf_W32Time_0000_0000_0013 *PW32TIME_CONFIGURATION_DEFAULT;

typedef /* [public] */ struct __MIDL___MIDL_itf_W32Time_0000_0000_0014
    {
    unsigned __int32 ulSize;
    unsigned __int32 ulInputProvider;
    unsigned __int32 ulEnabled;
    /* [unique][string] */ wchar_t *wszDllName;
    /* [unique][string] */ wchar_t *wszProviderName;
    unsigned __int32 ulDllNameFlag;
    unsigned __int32 ulProviderNameFlag;
    unsigned __int32 ulInputProviderFlag;
    unsigned __int32 ulEnabledFlag;
    PW32TIME_PROVIDER_CONFIG pProviderConfig;
    } 	W32TIME_CONFIGURATION_PROVIDER;

typedef struct __MIDL___MIDL_itf_W32Time_0000_0000_0014 *PW32TIME_CONFIGURATION_PROVIDER;

typedef /* [public] */ struct __MIDL___MIDL_itf_W32Time_0000_0000_0015
    {
    unsigned __int32 ulSize;
    W32TIME_CONFIGURATION_BASIC basicConfig;
    W32TIME_CONFIGURATION_ADVANCED advancedConfig;
    W32TIME_CONFIGURATION_DEFAULT defaultConfig;
    unsigned __int32 cProviderConfig;
    /* [size_is] */ PW32TIME_CONFIGURATION_PROVIDER *pProviderConfig;
    unsigned __int32 cEntries;
    /* [size_is] */ PW32TIME_ENTRY pEntries;
    } 	W32TIME_CONFIGURATION_INFO;

typedef struct __MIDL___MIDL_itf_W32Time_0000_0000_0015 *PW32TIME_CONFIGURATION_INFO;

typedef /* [public] */ struct __MIDL___MIDL_itf_W32Time_0000_0000_0016
    {
    unsigned __int32 ulSize;
    unsigned __int32 eLeapIndicator;
    unsigned __int32 nStratum;
    __int32 nPollInterval;
    unsigned __int32 refidSource;
    unsigned __int64 qwLastSyncTicks;
    __int64 toRootDelay;
    unsigned __int64 tpRootDispersion;
    __int32 nClockPrecision;
    /* [unique][string] */ wchar_t *wszSource;
    __int64 toSysPhaseOffset;
    unsigned __int32 ulLcState;
    unsigned __int32 ulTSFlags;
    unsigned __int32 ulClockRate;
    unsigned __int32 ulNetlogonServiceBits;
    unsigned __int32 eLastSyncResult;
    unsigned __int64 tpTimeLastGoodSync;
    unsigned __int32 cEntries;
    /* [size_is] */ PW32TIME_ENTRY pEntries;
    } 	W32TIME_STATUS_INFO;

typedef struct __MIDL___MIDL_itf_W32Time_0000_0000_0016 *PW32TIME_STATUS_INFO;



extern RPC_IF_HANDLE __MIDL_itf_W32Time_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_W32Time_0000_0000_v0_0_s_ifspec;

#ifndef __W32Time_INTERFACE_DEFINED__
#define __W32Time_INTERFACE_DEFINED__

/* interface W32Time */
/* [unique][version][uuid] */ 

unsigned long W32TimeSync( 
    /* [in] */ handle_t hBinding,
    /* [in] */ unsigned long uWait,
    /* [in] */ unsigned long ulFlags);

unsigned long W32TimeGetNetlogonServiceBits( 
    /* [in] */ handle_t hBinding);

unsigned long W32TimeQueryProviderStatus( 
    /* [in] */ handle_t hRPCBinding,
    /* [in] */ unsigned __int32 ulFlags,
    /* [string][in] */ wchar_t *pwszProvider,
    /* [ref][out] */ PW32TIME_PROVIDER_INFO *pProviderInfo);

unsigned long W32TimeQuerySource( 
    /* [in] */ handle_t hBinding,
    /* [string][out] */ wchar_t **pwszSource);

unsigned long W32TimeQueryProviderConfiguration( 
    /* [in] */ handle_t hBinding,
    /* [in] */ unsigned __int32 ulFlags,
    /* [string][in] */ wchar_t *pwszProvider,
    /* [ref][out] */ PW32TIME_CONFIGURATION_PROVIDER *pConfigurationProviderInfo);

unsigned long W32TimeQueryConfiguration( 
    /* [in] */ handle_t hBinding,
    /* [ref][out] */ PW32TIME_CONFIGURATION_INFO *pConfigurationInfo);

unsigned long W32TimeQueryStatus( 
    /* [in] */ handle_t hBinding,
    /* [ref][out] */ PW32TIME_STATUS_INFO *pStatusInfo);

unsigned long W32TimeLog( 
    /* [in] */ handle_t hBinding);



extern RPC_IF_HANDLE W32Time_v4_1_c_ifspec;
extern RPC_IF_HANDLE W32Time_v4_1_s_ifspec;
#endif /* __W32Time_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


