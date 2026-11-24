#pragma once
#include "common.h"

/* Functions in the 0x00250000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

s32 FUN_00256540(void);

struct MsSearchRecord;
MsSearchRecord *msSearchGetRecordAt(u32 index);

} /* extern "C" */
