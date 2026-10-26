#pragma once
#include "common.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

/* Functions in the 0x002c0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct ScenePass;
struct Visitor;
struct Obj;
extern "C" {

unsigned int FUN_002c40f8(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4, unsigned int param_5);

void FUN_002c29d8(u32 index, u32 value, u32 extra);

void FUN_002c2968(ScenePass *pass, Visitor *visitor);

u32 FUN_002c1850(Obj *obj);

u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work, void *owner);

} /* extern "C" */
