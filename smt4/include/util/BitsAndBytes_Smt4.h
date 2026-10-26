#pragma once
#include "common.h"

/* BitsAndBytes (declarations migrated from callers). */
struct Obj;
extern "C" {

u8 bitsetTestBit(Obj *obj, u32 bit);

} /* extern "C" */
