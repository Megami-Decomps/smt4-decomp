#pragma once
#include "common.h"

/* Functions in the 0x004d0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct EntryFUN_004d7a60;
struct CountAt30;
struct Tree;
struct PtrTable44;
struct HandleRef;
extern "C" {

u32 FUN_004d0420(u32 first,u32 second,u32 third,u32 fourth);

void FUN_004d7a60(void *obj, EntryFUN_004d7a60 *entry, int arg);

void releaseEntriesA(CountAt30 *obj);

u32 containerGrowCapacity(u32 capacity,u32 required);

void treeClear(Tree *tree);

PtrTable44 * ptrTable44FreeAll(PtrTable44 *obj);

void callOnHandleField4D(HandleRef **ref);

void callOnHandleField4B(HandleRef **ref);

} /* extern "C" */
