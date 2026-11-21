#pragma once
#include "common.h"
#include "nn/Result.h"

/* Functions in the 0x00420000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

s32 FUN_004268ec(u8 *out, u8 arg1, u32 arg2, u32 arg3);

nn::Result FUN_00427e28(void *arg0, void *arg1, u32 arg2);

/* Apocalypse: service queries that report an nn::Result (0 or a failure code). */
nn::Result FUN_00427bf0(u64 handle);
nn::Result ipcRequest04Forward(u32 mode, u64 handle, void *buffer, u32 size);

} /* extern "C" */
