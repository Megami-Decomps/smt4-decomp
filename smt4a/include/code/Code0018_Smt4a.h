#pragma once
#include "common.h"

/* Functions in the 0x00180000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct FileHandle;
struct Holder;
struct Owner;
extern "C" {

void * FUN_001858ec(u32 a, u32 b, u32 c, u32 size, u32 alignment, u32 extra);

void FUN_00180000(void);

FileHandle * fileHandleClose(FileHandle *file);

void FUN_001844f8(Holder *object, u32 unused, u32 *out);

void FUN_001882fc(Owner *owner);

} /* extern "C" */
