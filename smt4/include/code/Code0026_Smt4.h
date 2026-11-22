#pragma once
#include "common.h"

/* Functions in the 0x00260000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Record;
struct StatBlock;
struct PackedIdentifiers;
struct PlacedObject;
struct Timer;
struct EntryList;
struct Object;
extern "C" {

void FUN_0026d670(void);

void FUN_0026a858(int id, Record *record);

/* Builds the fusion preview of two units from their ids (fusionBuildPreviewResult). */
u32 fusionBuildPreviewFromUnits(void *unit, StatBlock *first, StatBlock *second, PackedIdentifiers *result);

s32 FUN_0026f784(PlacedObject *placed);

void FUN_002648e8(Timer *timer);

void entryListCollectMatches(EntryList *list);

void objectReleaseIfSet(Object *object);

} /* extern "C" */
