#pragma once
#include "common.h"
#include "ui/UiSpriteApi.h"

/* Window, menu, dialog and touch-region control. */
extern "C" {

u32 bannerShow(void);

u32 buttonHelpHasEnabledEntryForId(u32 requestedId);

u32 categoryGetColor(u32 category);

u32 dialogIsActive(void);

/* Opens the info window's dialog in style `mode`. Every retail caller also sets r1 (`mov r1, #1; mov r0, r1`,
 * `mov r1, #0; mov r0, r1`); the body does not read it. */
void dialogOpen(u8 mode, s32 flag);

void drawTextAtRelativePosition(const void *position, u32 drawContext, s32 xOffset, s32 yOffset, s32 option0, s32 option1, u32 color, s32 option2, const char *text);

void ifTouchRegionRemove(void);

u32 markerKindGetColor(u32 kind);

void messageKindForward(s32 category, u32 arg1, u32 arg2, u32 arg3);

void messageSetMode(u8 mode);

void msgBoxFlagsSetBit7(void *obj);

u32 panelSetTarget(u32 value, u8 flag);

void pickerAdvance(void *picker);

void screenStartOrClear(s32 id, u32 arg);

void statusDownSwitchTab(u32 tab);

void touchLayoutRebuildRegions(void *layout);


} /* extern "C" */
