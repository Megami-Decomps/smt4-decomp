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

unsigned int playerSlotHoldsEntry(unsigned int param_1,unsigned int param_2);

void FUN_002355ac(u8 value);

void releaseEntriesA(Obj *obj);

int selectOwnerGetSelected(Obj *obj);

u32 FUN_0023c0d0(StateRef *ref, CounterBlock *block, s32 index, s32 delta);

void textureContentRelease(TextureContent *content);

u32 FUN_00234618(Inner **owner);

void providerEntrySetVector(Owner *owner, u32 *vector);

/* The navigator's X position; callers pass their navi handle (`unused`), which it never reads. */
u32 NaviMain_GetPosX(const void *unused);

void sub10OwnerStart(Obj *obj);

void transitionConfigureAndReset(TransitionRecord *record,u32 first,u32 second,f32 value);

/* Colours the global unit's model slot; `unused` is passed by the callers and never read. */
void asdModelSetUnitSlotColor(void *unused, f32 red, f32 green, f32 blue);

} /* extern "C" */
