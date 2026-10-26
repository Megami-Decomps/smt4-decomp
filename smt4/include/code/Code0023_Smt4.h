#pragma once
#include "common.h"

/* Functions in the 0x00230000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Obj;
struct CounterBlock;
struct StateRef;
struct TextureContent;
struct Inner;
struct Owner;
struct TransitionRecord;
extern "C" {

unsigned int FUN_00230b90(unsigned int param_1,unsigned int param_2);

void FUN_002355ac(u8 value);

void FUN_00233818(Obj *obj);

void FUN_002332e8(Obj *obj, u32 a, u32 b);

int FUN_002333f0(Obj *obj);

u32 FUN_0023c0d0(StateRef *ref, CounterBlock *block, s32 index, s32 delta);

void textureContentRelease(TextureContent *content);

u32 FUN_00234618(Inner **owner);

void providerEntrySetVector(Owner *owner, u32 *vector);

u32 NaviMain_GetPosX(void);

void FUN_00233410(Obj *obj);

void transitionConfigureAndReset(TransitionRecord *record,u32 first,u32 second,f32 value);

} /* extern "C" */
