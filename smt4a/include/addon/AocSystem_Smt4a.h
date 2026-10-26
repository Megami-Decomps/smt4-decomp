#pragma once
#include "common.h"

/* AocSystem (declarations migrated from callers). */
struct AocTexCtrl;
struct AocDisplay;
struct AocMenuSprites;
struct AocPricedItem;
extern "C" {

void aocTexCtrlInit(AocTexCtrl *ctrl);

void aocQueueFileLoad(AocDisplay *display, const char *path, u32 *completion, u32 mode, u32 bytes, void *context);

void aocMenuInitializeSprites(AocMenuSprites *menu);

s32 aocItemGetPrice(AocPricedItem *item);

} /* extern "C" */
