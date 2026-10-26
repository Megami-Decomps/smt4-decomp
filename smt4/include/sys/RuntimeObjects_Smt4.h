#pragma once
#include "common.h"

/* RuntimeObjects (declarations migrated from callers). */
struct Obj;
extern "C" {

void jobStopIfValidA(Obj *obj);

void pairSetHalves(Obj *obj, u16 a, u16 b);

} /* extern "C" */
