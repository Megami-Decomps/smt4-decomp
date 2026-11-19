#pragma once
#include "common.h"
#include "sys/PlatformFault.h"

/* Functions in the 0x002b0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct FileHandle;
struct ObjFUN_002bf4f0;
struct Obj;
extern "C" {

u8 infoWindowIsActive(void);

f32 FUN_002b0800(void *text, f32 x, f32 y, f32 depth, f32 opacity);

void FUN_002b011c(void);

u8 FUN_002bfdd4(void);

void FUN_002bf4f0(ObjFUN_002bf4f0 *obj);

FileHandle * fileHandleClose(FileHandle *file);

void FUN_002b3194(Obj *obj);

void FUN_002b2ae8(Obj *obj, u32 unused, u32 *out);

} /* extern "C" */
