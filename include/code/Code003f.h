#pragma once
#include "common.h"

/* Functions in the 0x003f0000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

/* The record of `value` in data table 0x14's first sub-table (6-byte records), or NULL. */
void *dataTable14Sub0GetRecord(u8 value);

void FUN_003f5b14(void *owner, s32 y, u32 color, s32 firstX, s32 secondX, f32 alpha);

u32 FUN_003f9ab0(u32 value);

u32 FUN_003fdadc(void *obj);

} /* extern "C" */
