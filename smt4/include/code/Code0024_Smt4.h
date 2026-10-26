#pragma once
#include "common.h"

/* Functions in the 0x00240000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct TextureSlot;
struct Obj;
struct Source;
struct GeometryOwner;
struct DataEntry;
struct ShiftRandomState;
struct Owner;
struct MenuScreen;
extern "C" {

u8 * FUN_0024aaa0(void);

u32 FUN_00245c78(void);

void textureSlotReplace(TextureSlot *slot, u32 id);

void FUN_00247240(Obj *obj);

void FUN_002485d4(Source *source, u16 *dst);

void FUN_002493a4(GeometryOwner *owner, u32 id, u32 kind);

u32 partyHasStoredDemon(u32 id);

void mdlHandleArrayDestroy(Obj *obj);

void FUN_00241d58(Obj *obj);

void bufferObjDestroy(Obj *obj);

DataEntry * FUN_0024ad14(u32 index);

f32 shiftRandomNextFraction(ShiftRandomState* state);

int effEditorNodeListCount(Owner *owner);

void FUN_00242000(MenuScreen *menu);

} /* extern "C" */
