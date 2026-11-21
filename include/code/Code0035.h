#pragma once
#include "common.h"
#include "nn/Result.h"

/* Functions in the 0x00350000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

/* Apocalypse: draw the message associated with the selected table-0C record. */
void FUN_0035bd4c(u16 id, u32 x, u32 y, u32 style);

void entryTableResetAndInit(s32 index, u32 a, u32 b, u32 c);

/* IV: service queries that report an nn::Result (0 or a failure code). */
nn::Result FUN_00352f50(u64 handle);
nn::Result ipcRequest04Forward(u32 mode, u64 handle, void *buffer, u32 size);

} /* extern "C" */
