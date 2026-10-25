/* NON_MATCHING: restored engine/nothrow allocation, owned-controller stores, and cursor initialization argument; saved screen/table registers, record-loop scheduling, and virtual-call branch layout differ. */
#include "classes/Obj42242c.h"
#include "AsdSDK/AsdDebug.h"

class Obj42238c : public ObjBase3c2ef0 {
public:
    static void *operator new(u32 bytes, void *owner) throw() { return asdOperatorNew(bytes, owner); }
    virtual ~Obj42238c();
    virtual void initialize(const void *source);
    virtual void vfunc10(u32 arg);
    virtual void vfunc14();
    virtual void vfunc18();
    virtual void vfunc1c();
    /* 0x64 */ void *rectangle;
};
typedef char BibleAnalyzeControllerLayoutCheck[
    sizeof(Obj42238c) == 0x68 && offsetof(Obj42238c, rectangle) == 0x64 ? 1 : -1];

struct BibleAnalyzeEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s16 devilId;
    /* 0x06 */ u8 unk06[0x1A];
};

/* The analysis screen; its virtual at +0x20 prepares it. */
class BibleAnalyzeScreen {
public:
    virtual ~BibleAnalyzeScreen();
    virtual void slot08();
    virtual void slot0c();
    virtual void slot10();
    virtual void slot14();
    virtual void slot18();
    virtual void slot1c();
    virtual void prepare();   /* +0x20 */

    /* 0x004 */ u32 job;
    /* 0x008 */ u32 drawTask;
    /* 0x00C */ u32 fadeTask;
    /* 0x010 */ u8 unk010[4];
    /* 0x014 */ s32 state;
    /* 0x018 */ s32 stateArg;
    /* 0x01C */ u8 unk01C[4];
    /* 0x020 */ s32 rangeBase[2];
    /* 0x028 */ s32 devilCount;
    /* 0x02C */ u8 unk02C[0x68];
    /* 0x094 */ u8 flag94;
    /* 0x095 */ u8 unk095;
    /* 0x096 */ u8 partyIds[0x32];
    /* 0x0C8 */ u8 rectangle[0x14];
    /* 0x0DC */ u8 timers[0x480];
    /* 0x55C */ u8 listView[0x10];
    /* 0x56C */ u8 listReady;
    /* 0x56D */ u8 unk56D[0x23];
    /* 0x590 */ ObjBase3c2ef0 *controller;
    /* 0x594 */ u8 unk594[0x10];
    /* 0x5A4 */ u8 customMode;
    /* 0x5A5 */ u8 unk5A5[3];
    /* 0x5A8 */ u8 unk5A8[4];
    /* 0x5AC */ BibleAnalyzeEntry entries[0x500];
    /* 0xA5AC */ u8 unkA5AC[4];
    /* 0xA5B0 */ u16 selectedSlot;
    /* 0xA5B2 */ u8 unkA5B2[2];
    /* 0xA5B4 */ s32 selectedDevil;
    /* 0xA5B8 */ u8 unkA5B8[2];
    /* 0xA5BA */ s16 shownDevils[0x50];
    /* 0xA65A */ u8 unkA65A[0x60];
    /* 0xA6BA */ s16 shownCount;
    /* 0xA6BC */ u16 cursorIndex;
    /* 0xA6BE */ u8 unkA6BE;
};
typedef char BibleAnalyzeScreenLayoutCheck[
    offsetof(BibleAnalyzeScreen, flag94) == 0x94 &&
    offsetof(BibleAnalyzeScreen, customMode) == 0x5A4 &&
    offsetof(BibleAnalyzeScreen, unk5A8) == 0x5A8 &&
    offsetof(BibleAnalyzeScreen, rectangle) == 0xC8 &&
    offsetof(BibleAnalyzeScreen, controller) == 0x590 &&
    offsetof(BibleAnalyzeScreen, selectedSlot) == 0xA5B0 &&
    offsetof(BibleAnalyzeScreen, shownCount) == 0xA6BA &&
    sizeof(BibleAnalyzeScreen) == 0xA6C0 ? 1 : -1];

#define BIBLE_CUSTOM_ANALYSIS 1
#define BIBLE_PROGRESS_FLAG_COUNT 0x3C
#define BIBLE_LIST_LIMIT 10

extern "C" {
extern u32 *DAT_0043d990;

void entryTableClear(void *table);
void menuSetModeAndResetTransitions(s32 mode);
void FUN_00240cec(s32 arg);
void *asdMemAlloc(u32 pool, u32 category, u32 flags, u32 size, u32 alignment);
u32 asdProcessCreateSimple(const char *name, s32 priority, u32 first, u32 second,
                           void *update, void *end, void *work);
u32 taskCreateDraw(const char *name, s32 priority, u32 first, u32 second,
                   void *update, void *end, void *work, u32 parent);
void FUN_00233670(void *list, s32 a, s32 b, s32 count);
s32 gameTestProgressFlag(s32 flag);
void FUN_003a8aa0(BibleAnalyzeScreen *screen);
void partyIdsReset(void *ids);
void devilListMarkOrInsertQualifiedEntry(void *ids, s32 devil);
s32 rangeLimitMin(s32 *range);
void uiInitializeEightTimerSet(void *timers);
void fileSlotLoad(s32 slot);
void rectangleInitializeSelection(void *rectangle, s32 width, s32 a, s32 b);
void FUN_003a9340(void);
void FUN_003ac6e8(void);
void FUN_003ac710(void);
void btlDevilListDrawCallback(void);
void FUN_003acdec(void);

void FUN_003a8fe0(BibleAnalyzeScreen *screen)
{
    screen->flag94 = 0;
    screen->selectedSlot = 0xFFFF;
    screen->unkA6BE = 0xFF;
    entryTableClear(screen->unk5A8);
    screen->prepare();
    menuSetModeAndResetTransitions(6);
    if (screen->customMode == BIBLE_CUSTOM_ANALYSIS)
        FUN_00240cec(0);

    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\bible\\bibleAnalyze.cpp", 163);
    u32 **work = static_cast<u32 **>(asdMemAlloc(0x100, 0x100, 0, 4, 1));
    DAT_0043d990 = reinterpret_cast<u32 *>(work);
    *work = reinterpret_cast<u32 *>(screen);
    screen->job = asdProcessCreateSimple("BIBLE ANALYZE CALC", 2, 0, 0, (void *)FUN_003ac6e8, (void *)FUN_003ac710, work);
    screen->drawTask = taskCreateDraw("BIBLE ANALYZE UP", 0x6F, 1, 0, (void *)btlDevilListDrawCallback, NULL, DAT_0043d990, screen->job);
    screen->fadeTask = taskCreateDraw("BIBLE ANALYZE DOWN", 0xE6, 1, 0, (void *)FUN_003acdec, NULL, DAT_0043d990, screen->job);

    s32 limit;
    // The allocation owner is not initialized in the retail code.
    void *allocationOwner;
    if (screen->customMode != 0) {
        Obj42238c *window = new (allocationOwner) Obj42238c;
        screen->controller = window;
        window->rectangle = screen->rectangle;
        limit = screen->devilCount > BIBLE_LIST_LIMIT ? BIBLE_LIST_LIMIT : screen->devilCount;
        FUN_00233670(screen->listView, 0x1C, 0x1030, limit);
        screen->listReady = 1;
        screen->shownCount = 0;
        for (s32 flag = 1; flag < BIBLE_PROGRESS_FLAG_COUNT; flag++) {
            if (gameTestProgressFlag(flag) != 0) {
                screen->shownDevils[screen->shownCount] = flag;
                if (screen->selectedDevil == flag)
                    screen->cursorIndex = screen->shownCount;
                screen->shownCount++;
            }
        }
    } else {
        Obj42242c *window = new (allocationOwner) Obj42242c;
        screen->controller = window;
        window->initialize(screen->rangeBase);
        window->state |= 0x1000;
        window->rectangle = screen->rectangle;
        limit = screen->devilCount > BIBLE_LIST_LIMIT ? BIBLE_LIST_LIMIT : screen->devilCount;
        FUN_00233670(screen->listView, 0x1D, 0x40E, limit);
        screen->listReady = 1;
    }

    FUN_003a8aa0(screen);
    partyIdsReset(screen->partyIds);
    devilListMarkOrInsertQualifiedEntry(screen->partyIds, 0);
    s32 count = rangeLimitMin(screen->rangeBase);
    for (s32 i = 0; i < count; i++) {
        if (screen->entries[i].devilId != 0)
            devilListMarkOrInsertQualifiedEntry(screen->partyIds, screen->entries[i].devilId);
    }
    uiInitializeEightTimerSet(screen->timers);
    fileSlotLoad(0x22);
    rectangleInitializeSelection(screen->rectangle, 0x140, 0, screen->customMode != 0 ? 0x1C : 0x1D);
    screen->state = 0;
    screen->stateArg = 0;
}

} /* extern "C" */
