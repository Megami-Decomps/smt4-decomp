#pragma once
#include "common.h"

/* Functions in the 0x003f0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct PairedEntryTable;
struct SlotManager;
struct SlotRecord;
struct Pair40;
struct IdRecord;
struct RecordOwner;
extern "C" {

void FUN_003f2aac(u32 unused0, u32 unused1, s32 first);

s32 pairedEntryTableContains(PairedEntryTable *table, s32 value);

SlotRecord * FUN_003f0e20(SlotManager *manager, s32 id);

void pair40Set(Pair40 *obj, u32 a, u32 b);

IdRecord * FUN_003f01d0(RecordOwner *owner, u32 id);

} /* extern "C" */
