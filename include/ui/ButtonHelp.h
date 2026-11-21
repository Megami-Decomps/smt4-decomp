/* camp/ButtonHelp/ButtonHelp: the button-help bar (the touch-screen button prompts with a help line).
 *
 * buttonHelpCreate (Apocalypse campButtonHelpAcquire) allocates the work on the first reference and
 * creates its "ButtonHelp CALC" process and "ButtonHelp DRAW" task; g_buttonHelp holds the reference
 * counts, the work and the camp.mbm / camp.bf resources. A preset (data table 0x0E) fills the six slots;
 * each slot shows a button sprite whose touch region the touch update tests. IV's work is
 * ButtonHelpWork (0x564 bytes), Apocalypse's ButtonHelpWorkA (0x684 bytes: four panel sprites, a slot
 * count and a 16-bit preset). g_buttonHelp is declared per game in ui/ButtonHelpGlobal.h. */
#ifndef UI_BUTTONHELP_H
#define UI_BUTTONHELP_H
#include "common.h"
#include "ui/UiSpriteState.h"
#include "script/ScriptVm.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"

/* One of the six slots: the action kind it prompts (0: empty; 8 and 9 are combined slots that also
 * stand for kinds 4 and 3) and its value. */
typedef struct ButtonHelpSlot {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u16 value;
} ButtonHelpSlot;

/* One line of the help text. */
typedef struct ButtonHelpTextLine {
    /* 0x00 */ char text[0x40];
} ButtonHelpTextLine;

/* The help text: two lines in `style`, `highlightLength` characters of line `highlightLine` from
 * `highlightStart` in `highlightStyle` (line 0xFF: none); `useDirectoryText` draws `directoryText`
 * instead. Same layout in both games. */
typedef struct ButtonHelpText {
    /* 0x00 */ u32 style;
    /* 0x04 */ ButtonHelpTextLine lines[2];
    /* 0x84 */ u32 highlightStyle;
    /* 0x88 */ u8 highlightLine;
    /* 0x89 */ u8 highlightStart;
    /* 0x8A */ u8 highlightLength;
    /* 0x8B */ u8 unk8B;
    /* 0x8C */ u32 directoryText;       /* AsdText handle (asdTextCreate) for directory entries */
    /* 0x90 */ s8 useDirectoryText;
    /* 0x91 */ u8 unk91[3];
} ButtonHelpText;

typedef struct ButtonHelpWork {
    /* 0x000 */ u32 calcProcess;         /* "ButtonHelp CALC" */
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ u32 drawTask;            /* "ButtonHelp DRAW" */
    /* 0x00C */ s32 phase;               /* frames into the open/close transition */
    /* 0x010 */ s32 state;               /* 0 closed, 1 opening, 2 shown, 3 closing */
    /* 0x014 */ UiResourceParameters resources;
    /* 0x034 */ UiSpriteState slotSprites[6];
    /* 0x37C */ UiSpriteState panelSprites[2];
    /* 0x494 */ ButtonHelpSlot slots[6];
    /* 0x4AC */ s16 touchRegions[6];     /* each slot's touch region id */
    /* 0x4B8 */ u8 touchPressed[6];      /* the slot's region is selected in touch selection modes 1 and 2 */
    /* 0x4BE */ u8 touchSelected[6];     /* the slot's region is selected in the other modes */
    /* 0x4C4 */ u8 drawEnabled;
    /* 0x4C5 */ s8 panelState;
    /* 0x4C6 */ s8 panelSliding;         /* mode 1 slides the panel sprites in (s8: read through a work + 0x400 base) */
    /* 0x4C7 */ u8 touchSuspended;       /* nonzero: the touch update leaves the slot flags alone */
    /* 0x4C8 */ u8 mode;
    /* 0x4C9 */ u8 preset;               /* data table 0x0E entry shown */
    /* 0x4CA */ u8 previousPreset;
    /* 0x4CB */ s8 textVisible;
    /* 0x4CC */ ButtonHelpText text;
    /* 0x560 */ ScriptProcess *scriptProcess;       /* runs camp.bf's help scripts */
} ButtonHelpWork;

typedef struct ButtonHelpWorkA {
    /* 0x000 */ u32 calcProcess;         /* "ButtonHelp CALC" */
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ u32 drawTask;            /* "ButtonHelp DRAW" */
    /* 0x00C */ s32 phase;               /* frames into the open/close transition */
    /* 0x010 */ s32 state;               /* 0 closed, 1 opening, 2 shown, 3 closing */
    /* 0x014 */ UiResourceParameters resources;
    /* 0x034 */ UiSpriteState slotSprites[6];
    /* 0x37C */ UiSpriteState panelSprites[4];
    /* 0x5AC */ ButtonHelpSlot slots[6];
    /* 0x5C4 */ s16 touchRegions[6];     /* each slot's touch region id (icon lookup) */
    /* 0x5D0 */ s32 touchCount;          /* touch regions registered for the shown slots */
    /* 0x5D4 */ u8 touchPressed[6];
    /* 0x5DA */ u8 touchSelected[6];
    /* 0x5E0 */ u8 drawEnabled;
    /* 0x5E1 */ s8 panelState;
    /* 0x5E2 */ s8 panelSliding;         /* s8: read through a work + 0x500 base */
    /* 0x5E3 */ u8 touchSuspended;
    /* 0x5E4 */ u8 mode;
    /* 0x5E5 */ u8 unk5E5;
    /* 0x5E6 */ u16 preset;              /* data table 0x0E entry shown */
    /* 0x5E8 */ u16 previousPreset;
    /* 0x5EA */ s8 textVisible;
    /* 0x5EB */ u8 unk5EB;
    /* 0x5EC */ ButtonHelpText text;
    /* 0x680 */ ScriptProcess *scriptProcess;
} ButtonHelpWorkA;

typedef struct ButtonHelpGlobals {
    /* 0x00 */ s8 references;
    /* 0x01 */ s8 loadCount;      /* references to the camp.mbm / camp.bf resources */
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ ButtonHelpWork *work;
    /* 0x08 */ void *mbm;         /* camp/camp.mbm: the help text directory */
    /* 0x0C */ void *bf;          /* camp/camp.bf: the help scripts */
    /* 0x10 */ s32 pending;       /* the preset waiting for the active animations to finish (-1: none) */
} ButtonHelpGlobals;
typedef struct ButtonHelpGlobalsA {
    /* 0x00 */ s8 references;
    /* 0x01 */ s8 loadCount;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ ButtonHelpWorkA *work;
    /* 0x08 */ void *mbm;
    /* 0x0C */ void *bf;
    /* 0x10 */ s32 pending;
} ButtonHelpGlobalsA;

/* Slot selections deferred while the slot animations run (-1: none). */
struct ButtonHelpQueuedSelections {
    s32 kinds[6];
    s32 values[6];
};

/* Retail 32-bit layout invariants. */
typedef char ButtonHelpTextSizeCheck[sizeof(ButtonHelpText) == 0x94 ? 1 : -1];
typedef char ButtonHelpWorkSizeCheck[sizeof(ButtonHelpWork) == 0x564 ? 1 : -1];
typedef char ButtonHelpWorkASizeCheck[sizeof(ButtonHelpWorkA) == 0x684 ? 1 : -1];
typedef char ButtonHelpGlobalsSizeCheck[sizeof(ButtonHelpGlobals) == 0x14 ? 1 : -1];
typedef char ButtonHelpGlobalsASizeCheck[sizeof(ButtonHelpGlobalsA) == 0x14 ? 1 : -1];
typedef char ButtonHelpWorkOffsetsCheck[
    __INTADDR__(&((ButtonHelpWork *)0)->slotSprites) == 0x34 &&
    __INTADDR__(&((ButtonHelpWork *)0)->panelSprites) == 0x37C &&
    __INTADDR__(&((ButtonHelpWork *)0)->slots) == 0x494 &&
    __INTADDR__(&((ButtonHelpWork *)0)->touchPressed) == 0x4B8 &&
    __INTADDR__(&((ButtonHelpWork *)0)->drawEnabled) == 0x4C4 &&
    __INTADDR__(&((ButtonHelpWork *)0)->preset) == 0x4C9 &&
    __INTADDR__(&((ButtonHelpWork *)0)->text) == 0x4CC &&
    __INTADDR__(&((ButtonHelpWork *)0)->text.directoryText) == 0x558 &&
    __INTADDR__(&((ButtonHelpWork *)0)->scriptProcess) == 0x560 ? 1 : -1];
typedef char ButtonHelpWorkAOffsetsCheck[
    __INTADDR__(&((ButtonHelpWorkA *)0)->panelSprites) == 0x37C &&
    __INTADDR__(&((ButtonHelpWorkA *)0)->slots) == 0x5AC &&
    __INTADDR__(&((ButtonHelpWorkA *)0)->touchCount) == 0x5D0 &&
    __INTADDR__(&((ButtonHelpWorkA *)0)->touchPressed) == 0x5D4 &&
    __INTADDR__(&((ButtonHelpWorkA *)0)->drawEnabled) == 0x5E0 &&
    __INTADDR__(&((ButtonHelpWorkA *)0)->preset) == 0x5E6 &&
    __INTADDR__(&((ButtonHelpWorkA *)0)->textVisible) == 0x5EA &&
    __INTADDR__(&((ButtonHelpWorkA *)0)->text) == 0x5EC &&
    __INTADDR__(&((ButtonHelpWorkA *)0)->text.directoryText) == 0x678 &&
    __INTADDR__(&((ButtonHelpWorkA *)0)->scriptProcess) == 0x680 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif

u8 buttonHelpStateIsNot3(void);
/* Shows `kind`/`value` in slot `slot`, or with `defer` queues it while a slot animation runs.
 * Callers narrow the arguments to u8, u8 and u16 (the slot record's widths). IV: buttonHelpSetSlot,
 * Apocalypse: buttonHelpSelectSlot. */
void buttonHelpSetSlot(u8 slot, u8 kind, u16 value, s32 defer);
void buttonHelpSelectSlot(u8 slot, u8 kind, u16 value, s32 defer);

#ifdef __cplusplus
}
#endif

#endif
