#pragma once
#include "common.h"

/* Functions in the 0x002a0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Obj;
struct ArchiveView;
struct Placement;
struct Owner;
extern "C" {

void FUN_002ae028(Obj *obj);

u32 soundArchiveFileEntryIsLoaded(ArchiveView *archive);

u8 objGetFlagBit0(Obj *obj);

void nwFontGlyphInit(Obj *obj);

u32 bustupPlaceActiveSlot(Placement *placement, s32 mode);

void requestParamsInitialize(Obj *obj, u32 a, u32 b, u32 c, u32 d);

void messageStatesSetFirst(u8 value);

void wordTripleClear(Obj *obj);

void cameraExportProviderEntryWords(Owner *owner, u32 *a, u32 *b, u32 *c, u32 *d);

} /* extern "C" */
