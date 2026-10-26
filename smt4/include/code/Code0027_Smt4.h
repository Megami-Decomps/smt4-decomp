#pragma once
#include "common.h"

/* Functions in the 0x00270000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct EntryFUN_0027e3e8;
struct Entry;
struct Obj;
struct List;
extern "C" {

void FUN_0027e3e8(void *obj, EntryFUN_0027e3e8 *entry, int arg);

Entry * FUN_0027ee24(u32 index);

int FUN_0027e974(Obj *obj);

int nodeListCountActiveById(List *list, int id);

} /* extern "C" */
