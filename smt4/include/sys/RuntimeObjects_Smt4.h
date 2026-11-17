#pragma once
#include "common.h"

/* RuntimeObjects (declarations migrated from callers). */
struct Obj;
extern "C" {

void jobStopIfValidA(Obj *obj);

/* Sets the halfword pair at 0x18 (a sprite's offset). */
void pairSetHalves(Obj *obj, s16 a, s16 b);

} /* extern "C" */
