#pragma once
#include "common.h"

/* Functions in the 0x00160000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Buffer;
struct Vector;
struct FileHeader;
struct TextLine;
extern "C" {

void FUN_0016e800(s32 key, u32 address, u32 failed);

void FUN_00168470(s32 id, u32 arg0, u32 arg1, u32 arg2);

s32 FUN_0016003c(Buffer *buffer);

void vectorClear(Vector *vector);

u8 * fileSectionGetData(FileHeader *file, int index, u32 *size);

s32 FUN_001688c4(TextLine *line);

} /* extern "C" */
