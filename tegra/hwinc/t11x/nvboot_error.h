/*
 * Copyright (c) 2007 - 2009 NVIDIA Corporation.  All rights reserved.
 *
 * NVIDIA Corporation and its licensors retain all intellectual property
 * and proprietary rights in and to this software and related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA Corporation is strictly prohibited.
 */

/*
 * nvboot_error.h - error codes.
 */

#ifndef INCLUDED_NVBOOT_ERROR_H
#define INCLUDED_NVBOOT_ERROR_H

#if defined(__cplusplus)
extern "C"
{
#endif

/*
 * NvBootError: Enumerated error codes
 */
typedef enum
{
    NvBootError_None = 0,
    NvBootError_Success = 0,
    NvBootError_SE_Signature_Valid = 0, //TODO: remove this in favor of NvBootError_Success?
    NvBootError_InvalidParameter,
    NvBootError_IllegalParameter,
    NvBootError_HwTimeOut,
    NvBootError_NotInitialized,
    NvBootError_DeviceNotResponding,
    NvBootError_DataCorrupted,
    NvBootError_DataUnderflow,
    NvBootError_DeviceError,
    NvBootError_DeviceReadError,
    NvBootError_DeviceUnsupported,
    NvBootError_DeviceResponseError,
    NvBootError_Unimplemented,
    NvBootError_ValidationFailure,
    NvBootError_EccDiscoveryFailed,
    NvBootError_EccFailureCorrected,
    NvBootError_EccFailureUncorrected,
    NvBootError_Busy,
    NvBootError_Idle,
    NvBootError_MemoryNotAllocated,
    NvBootError_MemoryNotAligned,
    NvBootError_BctNotFound,
    NvBootError_BootLoaderLoadFailure,
    NvBootError_BctBlockInfoMismatch,
    NvBootError_IdentificationFailed,
    NvBootError_HashMismatch,
    NvBootError_TxferFailed,
    NvBootError_WriteFailed,
    NvBootError_EpNotConfigured,
    NvBootError_WarmBoot0_Failure,
    NvBootError_AccessDenied,
    NvBootError_InvalidOscFrequency,
    NvBootError_PllNotLocked,
    NvBootError_InvalidDevParams,
    NvBootError_InvalidBootDeviceEncoding,
    NvBootError_CableNotConnected,
    NvBootError_InvalidBlDst,
    NvBootError_SE_ModExp_OOR,   // Message or Signature representative
                                 // out of range
    NvBootError_SE_RsaPssVerify_Inconsistent, //TODO: add more granulatiry on the errors
    NvBootError_FuseHashMismatch, // Mismatch of hash of public key modulus read from
                                  // secondary storage and fuses

    //Xusb related new error codes
    NvBootError_XusbDeviceNotAttached,
    NvBootError_XusbPortResetFailed,
    NvBootError_XusbInvalidBmRequest,
    NvBootError_XusbParseConfigDescFail,
    NvBootError_XusbMscInvalidCmd,
    NvBootError_XusbCswStatusCmdFail,
    NvBootError_XusbMscResetRecovery,
    NvBootError_XusbEpStalled,
    NvBootError_XusbEpError,
    NvBootError_XusbEpRetry,
    NvBootError_XusbEpNotReady,
    //end Xusb

    NvBootError_Force32 = 0x7fffffff
} NvBootError;

#if defined(__cplusplus)
}
#endif

#endif /* #ifndef INCLUDED_NVBOOT_ERROR_H */
