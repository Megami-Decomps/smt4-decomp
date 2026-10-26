#pragma once
#include "common.h"

/* Functions in the 0x00260000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Record;
struct Obj002624b8;
struct PlacedObject;
struct Timer;
struct EntryList;
struct Object;
extern "C" {

void FUN_0026d670(void);

void FUN_0026a858(int id, Record *record);

void FUN_002624b8(void *a, Obj002624b8 *b, Obj002624b8 *c);

s32 FUN_0026f784(PlacedObject *placed);

void FUN_002648e8(Timer *timer);

void entryListCollectMatches(EntryList *list);

void FUN_002628fc(Object *object);

} /* extern "C" */
