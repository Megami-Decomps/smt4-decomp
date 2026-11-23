#pragma once
#include "common.h"

/* Functions in the 0x00310000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct BinFile;
struct DataEntry;
extern "C" {

void FUN_00319aec(u8 value);

u16 saveIsRecordValueBounded(u32 index);

s32 binFileGetValue(BinFile *file);

struct Table2dSection4Record *FUN_00314638(u32 index);

s32 FUN_0031d174(void *list);

} /* extern "C" */
