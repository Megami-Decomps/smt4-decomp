/* NON_MATCHING: the entry-list address and the constant 1 swap callee-saved registers (retail: list in sl, 1 in fp), and the widget flag update addresses the halfword directly where retail uses a writeback load (ldrh [r0, #4]!); the tab flag after it loads into r1 (retail r0). */
#include "AsdSDK/AsdDebugHooks.h"
#include "code/Code0022_Smt4.h"
#include "classes/Obj42247c.h"
#include "classes/Obj4221a4.h"
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/NkmEnemyRecord.h"
#include "gamedata/NkmEnemyLookup.h"

struct CompendiumListEntryIV {
    u8 summary[24];
    u8 registered;
    u8 unk19[3];
    const char *name;
};
struct CompendiumEntryListIV {
    s16 count;
    u8 unk02[2];
    CompendiumListEntryIV entries[1280];
};
struct CompendiumPopulationViewIV {
    u8 unk0000[0x28];
    s32 visibleCount;
    u8 unk002c[0x68];
    u8 completion;
    u8 unk0095[0x50f];
    s8 mode;
    u8 unk05a5[3];
    CompendiumEntryListIV list;
    u16 unkA5ac;
    s16 total;
};
/* The part of the screen's state at 0x500: the tab flag and the listed entry count. */
struct CompendiumStateBlockIV {
    u8 unk00[0xA4];
    s8 mode;
    u8 unkA5[3];
    s16 count;
};
extern "C" {
void ifTouchRegionClearAll(void *window);
void FUN_00233818(Obj55ca08 *selection);
void entryTableClear(void *list);
s32 FUN_0029e9cc(u16 id);
void FUN_0022e17c(CompendiumListEntryIV *entry, u16 id, s32 useCurrent);
void recordAppendFloatEntry(CompendiumEntryListIV *list, const CompendiumListEntryIV *entry);
void motionPlayForMode(void *screen, s32 mode, s32 flags);
void listScrollerInitialize(SelectionFlags *selection, s32 rows, s32 count, s32 current, s32 first, s32 second);
void *jyoucyuGetTableEntry(s32 index);
void FUN_003a9bb4(void *screen);
void messageIdListInit(Obj55ca08 *selection, u32 table, u32 first, s32 count);

// Populate registered compendium entries and synchronize its list window and touch regions.
void FUN_003a8aa0(Obj42247c *screen)
{
    CompendiumPopulationViewIV *work = reinterpret_cast<CompendiumPopulationViewIV *>(screen);
    ifTouchRegionClearAll(reinterpret_cast<void *>(screen->touchSelection.unk34));
    FUN_00233818(&screen->touchSelection);
    entryTableClear(&work->list);
    const CompendiumStateBlockIV *block = reinterpret_cast<const CompendiumStateBlockIV *>(reinterpret_cast<u8 *>(screen) + 0x500);
    if (block->mode == 0) {
        s32 total = 0;
        for (s32 id = 1; id < 0x500; ++id) {
            const NkmBaseRecord *devil = nkmBaseGetRecord(static_cast<u16>(id));
            const NkmEnemyRecord *base = nkmEnemyFindById(static_cast<u16>(id));
            if (devil != NULL && base != NULL && (base->flags & 1)) {
                ++total;
                if (FUN_0029e9cc(devil->id)) {
                    CompendiumListEntryIV entry;
                    FUN_0022e17c(&entry, devil->id, 0);
                    entry.registered = 1;
                    recordAppendFloatEntry(&work->list, &entry);
                }
            }
        }
        work->total = total;
        motionPlayForMode(screen, 1, 1);
        listScrollerInitialize(&screen->flags, 10, block->count, 0, 1, 1);
        asdDebugHookPtrInt(&screen->flags, 1);
        screen->flags.active = 1;
        work->completion = gaugePercent(reinterpret_cast<GaugeOwner0022e0b0 *>(&work->list));
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
    } else {
        FUN_003a9bb4(screen);
    }
    Obj4221a4 *window = reinterpret_cast<Obj4221a4 *>(screen->touchSelection.unk34);
    window->initialize(&screen->flags);
    window = reinterpret_cast<Obj4221a4 *>(screen->touchSelection.unk34);
    window->state |= 0x1000;
    s32 count = work->visibleCount;
    if (block->mode == 0) {
        count = count < 10 ? count : 10;
        messageIdListInit(&screen->touchSelection, 0x1d, 0x40e, count);
    } else {
        count = count < 10 ? count : 10;
        messageIdListInit(&screen->touchSelection, 0x1c, 0x1030, count);
    }
    screen->touchSelection.soundEnabled = 1;
}
}
