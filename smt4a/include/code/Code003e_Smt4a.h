#pragma once
#include "common.h"

/* Functions in the 0x003e0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct ControllerGroup;
struct Holder;
struct Owner;
struct BtlMainStateA;
struct BattleMotionSelection;
struct BattleMotionSequence;
struct ValueAtF0;
struct FourPtrs;
struct HalfRec;
extern "C" {

void FUN_003e5558(ControllerGroup *group, f32 x, f32 y, f32 z);

void FUN_003e55f4(Holder *holder);

void uiEntriesReset(Owner *owner);

/* The sequence of `motion` in the motion file's table `kind` (the kind passes through to the table lookup). */
BattleMotionSequence *btlMotionFindSequence(BtlMainStateA *battle, s32 kind, u32 motion);

u32 valueAtF0IsReady(ValueAtF0 *obj);

/* The motion selection of the unit `id` in the motion file's table 0. */
BattleMotionSelection *btlMotionFindSelection(BtlMainStateA *battle, s32 id);

u32 fourPtrsAllNull(FourPtrs *obj);

void halfRecClear(u32 unused, HalfRec *rec);

} /* extern "C" */
