#ifndef NN_SRV_SESSION_IPC_H
#define NN_SRV_SESSION_IPC_H

#include "common.h"

enum {
    SRV_GET_SERVICE_HANDLE_HEADER = 0x50100,
    SRV_SERVICE_NAME_BYTES = 8
};

extern "C" {

/* Sends the srv:GetServiceHandle command. The public wrapper validates the name length. */
s32 FUN_00129628(u32 *handle, const char *name, s32 nameLength, u32 flags);
s32 FUN_0016fa4c(u32 *handle, const char *name, s32 nameLength, u32 flags);

} /* extern "C" */

#endif
