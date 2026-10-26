#pragma once
#include "common.h"

/* List, list-box and linked-container helpers of the Asd SDK. */
extern "C" {

/* Creates a debug list box under the job `first` and returns its job handle (the handle the
 * asdListBox* functions take). */
u32 asdListBoxCreateDefault(u32 first, u32 second, u32 third, u32 fourth);

s32 asdListBoxCreateDefaultFlags(u32 parent, u32 configuration, u32 items, u32 itemCount);

f32 *asdListBoxGetFloatValuePtr(u32 listBox, s32 id);

u8 *asdListBoxGetItemText(void *listBox, u32 id);

void asdListBoxMarkDirty(u32 listBox);

s32 asdListInsert(void *list, void *node, s32 index);

s32 listBoxItemHasOwner(u32 arg0, u32 arg1);

void nodeTreeReleaseFollowingSiblings(void *node);

void ptrListRemoveClearOwner(void *list, void *item);

} /* extern "C" */
