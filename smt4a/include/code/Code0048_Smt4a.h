#pragma once
#include "common.h"

/* Functions in the 0x00480000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct CallbackControllerOwner;
struct ItemBoxCounts;
struct TimedController;
extern "C" {

void callbackCreateControllerForKind(CallbackControllerOwner* owner, s32 kind);

void FUN_0048111c(ItemBoxCounts *dst, const ItemBoxCounts *src);

void controllerUpdateWithIdleTimer(TimedController *controller);

} /* extern "C" */
