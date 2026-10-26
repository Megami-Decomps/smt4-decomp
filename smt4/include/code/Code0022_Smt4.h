#pragma once
#include "common.h"

/* Functions in the 0x00220000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Obj;
struct Scene;
struct Owner;
struct Target;
struct ModelController;
struct Context;
struct GaugeOwner0022e0b0;
struct ResetCounterOwner;
extern "C" {

u8 FUN_0022f1b8(void);

u32 FUN_0022b8c0(Obj *obj);

void objClearFields(Obj *obj);

void FUN_0022fa2c(Scene *scene);

u32 FUN_0022b238(Obj *obj, s32 index);

int FUN_00227630(Owner *owner);

void FUN_0022abe0(Obj *obj, Target *target);

void FUN_0022afc4(ModelController *controller, u32 a, u32 b);

void FUN_0022b6c4(Context *ctx);

u8 gaugePercent(GaugeOwner0022e0b0 *owner);

void battleResetCounterAndFlag(ResetCounterOwner *owner);

} /* extern "C" */
