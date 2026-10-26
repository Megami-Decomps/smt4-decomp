#pragma once
#include "common.h"

/* Functions in the 0x00310000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct BinFile;
struct DataEntry;
struct ObjFUN_0031d174;
extern "C" {

void FUN_00319aec(u8 value);

u16 FUN_0031cfd0(u32 index);

s32 binFileGetValue(BinFile *file);

DataEntry * FUN_00314638(u32 index);

void FUN_0031d174(ObjFUN_0031d174 *obj);

} /* extern "C" */
