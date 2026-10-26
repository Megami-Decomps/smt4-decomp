#pragma once
#include "common.h"

/* Functions in the 0x003e0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct ControllerGroup;
struct Holder;
struct Owner;
struct IdRecord;
struct RecordOwner;
struct ValueAtF0;
struct FourPtrs;
struct HalfRec;
extern "C" {

void FUN_003e5558(ControllerGroup *group, f32 x, f32 y, f32 z);

void FUN_003e55f4(Holder *holder);

void uiEntriesReset(Owner *owner);

IdRecord * FUN_003ec668(RecordOwner *owner, u32 unused, u32 id);

u32 valueAtF0IsReady(ValueAtF0 *obj);

IdRecord * FUN_003eca48(RecordOwner *owner, s32 id);

u32 fourPtrsAllNull(FourPtrs *obj);

void halfRecClear(u32 unused, HalfRec *rec);

} /* extern "C" */
