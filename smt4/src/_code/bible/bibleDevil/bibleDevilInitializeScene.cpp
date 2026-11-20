/* NON_MATCHING: engine/nothrow allocation contract restored; callback stack arguments, saved screen/table registers, and final row-address scheduling differ. */
#include "shard/W4_Match6_BibleScreen.h"
#include "shard/Shard0031.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"
#include "classes/Obj42242c.h"
#include "AsdSDK/AsdMemAlloc.h"

struct BibleInitRow { u32 unk00; s16 id; u8 unk06[0x1a]; };
struct BibleInitFields {
    struct Vtable { void *unk00[8]; void (*initialize)(BibleScreen *); } *vtable;
    u32 calculate, drawUpper, drawLower;
    u8 unk010[0x10];
    union {
        FlaggedEntry cursor;
        struct { u8 unk00[8]; s32 count; u8 unk0c[0x58]; } list;
    } selection;
    u8 unk084[0x10];
    u8 changed, unk095;
    u16 pending[25]; // 0x96
    u32 rectangle[5]; // 0xc8
    u8 widget[0x480]; // 0xdc
    u8 scroll[0x10]; // 0x55c
    u8 scrollEnabled;
    u8 unk56d[0x23];
    Obj42242c *controller;
    u8 unk594[0x11];
    u8 initialized;
    u8 unk5a6[2];
    BibleInitRow rows[1280]; // 0x5a8
    u8 unka5a8[8];
    u8 marked, unka5b1;
    u16 selected;
};
struct BibleDevilTaskWork { BibleScreen *screen; };
struct BibleDevilTasks { BibleDevilTaskWork *work; s32 selected; };
extern "C" {
extern BibleDevilTasks g_bibleDevilCallbackContext;
void entryTableClear(void *table);
void menuSetModeAndResetTransitions(s32);
u32 taskCreateDraw(const char *, s32, u16, u16, AsdProcUpdateFunc, AsdProcFunc, BibleDevilTaskWork *, u32);
s32 uiCallbackUpdate(u32);
void uiCallbackFree(u32);
s32 FUN_003ac738(u32);
s32 btlDevilListFinishDrawCallback(u32);
void rectangleInitializeSelection(u32 *, s32, s32, s32);
void bibleDevilListRefresh(BibleScreen *);
void partyIdsReset(u16 *);
void devilListMarkOrInsertQualifiedEntry(u16 *, u16);
s32 rangeLimitMin(FlaggedEntry *);
void uiInitializeEightTimerSet(void *);
void messageIdListInit(void *, u32, u32, s32);
void buttonHelpSetText(u32, u32);
void uniteReleaseModel();
void FUN_0022d1a8(BibleScreen *);

void bibleDevilInitializeScene(BibleScreen *screen)
{
    BibleInitFields *fields = (BibleInitFields *)screen;
    fields->initialized = 1;
    fields->selected = 0xffff;
    fields->changed = 0;
    fields->marked = 0;
    entryTableClear(fields->rows);
    fields->vtable->initialize(screen);
    menuSetModeAndResetTransitions(2);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\bible\\bibleDevil.cpp", 200);
    BibleDevilTaskWork *work = (BibleDevilTaskWork *)asdMemAlloc(0x100, 0x100, 0, sizeof(BibleDevilTaskWork), 1);
    g_bibleDevilCallbackContext.work = work;
    work->screen = screen;
    fields->calculate = asdProcessCreateSimple(reinterpret_cast<const s8 *>("BIBLE DEVIL CALC"), 2, 0, 0, uiCallbackUpdate, uiCallbackFree, reinterpret_cast<u32>(work));
    fields->drawUpper = taskCreateDraw("BIBLE DEVIL UP", 111, 1, 0, FUN_003ac738, NULL, g_bibleDevilCallbackContext.work, fields->calculate);
    fields->drawLower = taskCreateDraw("BIBLE DEVIL DOWN", 230, 1, 0, btlDevilListFinishDrawCallback, NULL, g_bibleDevilCallbackContext.work, fields->calculate);
    rectangleInitializeSelection(fields->rectangle, 320, 0, 29);
    // Retail forwards an uninitialized allocation owner in r4.
    void *allocationOwner;
    Obj42242c *controller = new (allocationOwner) Obj42242c;
    controller->rectangle = fields->rectangle;
    fields->controller = controller;
    bibleDevilListRefresh(screen);
    partyIdsReset(fields->pending);
    devilListMarkOrInsertQualifiedEntry(fields->pending, 0);
    s32 count = rangeLimitMin(&fields->selection.cursor);
    for (s32 i = 0; i < count; ++i) {
        if (fields->rows[i].id)
            devilListMarkOrInsertQualifiedEntry(fields->pending, (u16)fields->rows[i].id);
    }
    uiInitializeEightTimerSet(fields->widget);
    s32 visible = fields->selection.list.count;
    if (visible >= 10)
        visible = 10;
    messageIdListInit(fields->scroll, 29, 1038, visible);
    fields->scrollEnabled = 1;
    buttonHelpSetText(0, 0x323232ff);
    screen->state = 0;
    screen->stateArg = 0;
    uniteReleaseModel();
    g_bibleDevilCallbackContext.selected = -1;
    FUN_0022d1a8(screen);
}
}
