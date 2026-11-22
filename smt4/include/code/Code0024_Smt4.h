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

u8 * overlayGetStatusScene(void);

u32 FUN_00245c78(void);

void textureSlotReplace(TextureSlot *slot, u32 id);

void effectEditorObjectDestroy(Obj *obj);

void halves34Copy(Source *source, u16 *dst);

void geometryOwnerSetGeometry(GeometryOwner *owner, u32 id, u32 kind);

u32 partyHasStoredDemon(u32 id);

void mdlHandleArrayDestroy(Obj *obj);

void btlSpritePlacementRelease(Obj *obj);

void bufferObjDestroy(Obj *obj);

struct Table2dSection2Record *FUN_0024ad14(u32 index);

f32 shiftRandomNextFraction(ShiftRandomState* state);

int effEditorNodeListCount(Owner *owner);

void FUN_00242000(MenuScreen *menu);

} /* extern "C" */
