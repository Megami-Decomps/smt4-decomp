#pragma once
#include "common.h"

/* Functions in the 0x002c0000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

void *FUN_002c17c0(s32 index);

u8 *saveGetFlagRowTable(void);

u32 asdCameraGetSavedRenderPairs(void);

u8 *gameGlobalsGetBlock1390(void);

void gameGlobalsSetOverlayActive(u8 value);

} /* extern "C" */
