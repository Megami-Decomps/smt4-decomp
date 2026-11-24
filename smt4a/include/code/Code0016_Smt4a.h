#pragma once
#include "common.h"
#include "sys/PlatformFault.h"

/* Functions in the 0x00160000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Buffer;
struct Vector;
struct FileHeader;
struct TextLine;
extern "C" {

s32 FUN_0016003c(Buffer *buffer);

void vectorClear(Vector *vector);

u8 * fileSectionGetData(FileHeader *file, int index, u32 *size);

s32 statusDownScanSelectedEntryIndex(TextLine *line);

} /* extern "C" */
