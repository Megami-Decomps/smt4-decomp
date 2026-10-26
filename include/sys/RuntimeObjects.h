#pragma once
#include "common.h"

/* Runtime object, job and event helpers. */
extern "C" {

/* True when the object exists, is enabled, and none of its blocking state bits (0x2, 0x4, 0x400) are set. */
u32 actorIsActive(void *actor);

void asdFatalError(void);

void eventQueueAddUnique(s32 event);

u32 jobIsValid(u32 handle);

char *jobSetText(u32 job,const char *text);

u32 jobStop(u32 handle, u16 delay);

u32 legacyResourceIdRemap(const void *resource);

/* Sets the word at 0x04 of `object` (a sprite's animation selection) to `first` and the word at
 * 0x08 to -1. */
void pairSetFirstResetSecond(void *object, u32 first);

void refCountIncrement(int *counter);

void resourceOwnerReleaseAndReset(void *owner);

void slotSetRequest(u32 index, u32 value, u32 extra);

u32 sysGetTableWord(s32 index);

/* Calls slot 12 of the vtable of the object at `handle` (a tail call) when the handle is not 0. */
void vcallSlot12IfValid(u32 handle);

} /* extern "C" */
