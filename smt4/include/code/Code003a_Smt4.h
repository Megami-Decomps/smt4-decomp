#pragma once
#include "common.h"

/* Functions in the 0x003a0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Scene;
struct BtlUi;
extern "C" {

void btlUiRefreshSpriteRowMarks(BtlUi *unused, s8 rowDelta, s8 markDelta);

void FUN_003a3914(Scene *scene);

} /* extern "C" */
