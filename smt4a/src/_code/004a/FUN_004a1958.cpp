/* NON_MATCHING: retail hoists the header and list address computations above releaseEntriesA; built differs in frame size (28 vs 52 bytes); the party branch is now written first like retail's layout. */
#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "event/2dEvent/2dEventTex.h"

extern "C" {

/* The list panel object the screen drives through its virtual table. */
class ListPanel {
public:
    virtual void v0();
    virtual void v1();
    virtual void rebuild(void *layout);
    /* 0x04 */ u16 flags;
};

/* A compendium entry record (only the fields read here). */
typedef struct EntryRecord {
    u16 id;
    u8 unk02[8];
    u16 flags;                       /* 0x0A: bit 0 set when the entry is listed */
} EntryRecord;

/* A party slot record (0x12C bytes; only the fields read here). */
typedef struct PartySlot {
    u8 unk00[0x68];
    u8 unk68[0x62];
    u16 entryId;                     /* 0xCA */
    u8 unkCC[0x60];
} PartySlot;

typedef struct SlotTable {
    u8 unk0000[0x1C88];
    s8 party[0x1B];                  /* 0x1C88 */
    u8 partyCount;                   /* 0x1CA3 */
    u8 unk1CA4[0x24];
} SlotTable;

typedef struct EntryList {
    s16 count;
    u8 unk02[0x62];
} EntryList;

/* The screen block (only the fields used here, by their offsets). */
typedef struct EntryScreen {
    /* 0x0000 */ u8 unk0000[0x20];
    /* 0x0020 */ u8 layout[8];
    /* 0x0028 */ s32 selected;
    /* 0x002C */ u8 unk002C;
    /* 0x002D */ u8 dirty;
    /* 0x002E */ u8 unk002E[0x66];
    /* 0x0094 */ s8 percent;
    /* 0x0095 */ u8 unk0095[0x783];
    /* 0x0818 */ u8 header[0x10];
    /* 0x0828 */ u8 headerShown;
    /* 0x0829 */ u8 unk0829[0x23];
    /* 0x084C */ ListPanel *panel;
    /* 0x0850 */ u8 unk0850[0x10];
    /* 0x0860 */ u8 mode;
    /* 0x0861 */ u8 category;
    /* 0x0862 */ u8 unk0862[2];
    /* 0x0864 */ EntryList list;
    /* 0x08C8 */ u8 unk08C8[0x9FA2];
    /* 0xA86A */ s16 listedCount;
    /* 0xA86C */ u8 unkA86C[0xA];
    /* 0xA876 */ u8 showUnowned;
} EntryScreen;

void releaseEntriesB(void *panel);
void releaseEntriesA(void);
void slotPoolResetTrackedState(void);
SlotTable *gameGetSlotTable(void);
EntryRecord *FUN_00184310(u16 index);
EntryRecord *dataTable0ProbeEntryById(u16 index);
s32 FUN_0032fbd0(void *slot);
s32 FUN_002a4b28(u16 id);
void campFillUnitComparison(u8 *out, u16 id, s32 flag);
u32 FUN_004a8750(u16 id, u8 category, s32 flag, s32 full, s32 extra);
void inventoryListAppend(EntryList *list, u8 *entry);
void FUN_004a84e8(EntryList *list, s32 mode);
void FUN_004cfeb0(void *layout, s32 columns, s32 count, s32 a, s32 b, s32 c);
u8 gaugePercent(EntryList *list, s32 arg);
u8 calcPercentClamped(s32 numerator, s32 denominator);
void FUN_004d05c4(void *header, s32 a, s32 b, s32 count);
s32 gameFlagIsSet(u32 flag);
void jyoucyuGetTableEntry(s32 arg);

/* Rebuilds the entry list for the screen: scans every record (or the party for mode 1), appends
 * the listed ones with their display data, then updates the column layout, the completion
 * percentage and the header count. */
void FUN_004a1958(EntryScreen *screen)
{
    releaseEntriesB(screen->panel);
    releaseEntriesA();
    if (screen->mode == 1) {
        slotPoolResetTrackedState();
        SlotTable *table = gameGetSlotTable();

        for (u32 i = 0; i < table->partyCount; i = (u16)(i + 1)) {
            s32 member = table->party[i];

            if (member >= 0) {
                PartySlot *slot = (PartySlot *)((u8 *)table + member * 300);

                if (FUN_0032fbd0((u8 *)slot + 0x68) == 0) {
                    EntryRecord *record = FUN_00184310(slot->entryId);
                    u8 entry[8];

                    campFillUnitComparison(entry, record->id, 1);
                    FUN_004a8750(record->id, screen->category, 0, screen->percent >= 100, 0);
                    inventoryListAppend(&screen->list, entry);
                }
            }
        }
        screen->listedCount = 24;
        FUN_004cfeb0(screen->layout, 10, screen->list.count, 0, 1, 1);
        asdDebugHookPtrInt(screen->layout, 1);
        screen->dirty = 1;
        s32 total = 0;
        s32 owned = 0;

        for (s32 index = 0; index < 0x4FF; index++) {
            EntryRecord *record = dataTable0ProbeEntryById((u16)(index + 1));

            if (record != NULL && (record->flags & 1) != 0) {
                total++;
                if (FUN_002a4b28(record->id) != 0) {
                    owned++;
                }
            }
        }
        screen->percent = calcPercentClamped(owned, total);
        jyoucyuGetTableEntry(0);
    } else {
        slotPoolResetTrackedState();
        s16 listed = 0;
        s32 index = 0;

        do {
            EntryRecord *record = FUN_00184310((u16)(index + 1));

            if (record != NULL && (record->flags & 1) != 0) {
                if (index == 9 && gameFlagIsSet(0x441) == 0) {
                    index = 10;
                    continue;
                }
                listed++;
                if (FUN_002a4b28(record->id) != 0 || screen->showUnowned != 0) {
                    u8 entry[8];

                    campFillUnitComparison(entry, record->id, 0);
                    FUN_004a8750(record->id, screen->category, 0, screen->percent >= 100, 0);
                    inventoryListAppend(&screen->list, entry);
                }
            }
            index++;
        } while (index < 0x4FF);
        screen->listedCount = listed;
        if (screen->list.count != 0) {
            u8 *flagsByte = FUN_0026140c() + 0xF;
            s32 mode;

            switch (*flagsByte & 0x7F) {
            case 1:
                mode = 6;
                break;
            case 2:
                mode = 4;
                break;
            case 3:
                mode = 22;
                break;
            case 7:
                mode = 24;
                break;
            default:
                mode = 6;
                *flagsByte = (*flagsByte & 0x80) | 1;
            }
            if ((*flagsByte & 0x80) != 0) {
                mode++;
            }
            FUN_004a84e8(&screen->list, mode);
        }
        FUN_004cfeb0(screen->layout, 10, screen->list.count, 0, 1, 1);
        asdDebugHookPtrInt(screen->layout, 1);
        screen->dirty = 1;
        screen->percent = gaugePercent(&screen->list, 1);
        jyoucyuGetTableEntry(0);
    }
    screen->panel->rebuild(screen->layout);
    screen->panel->flags |= 0x1000;
    FUN_004d05c4(screen->header, 20, 0x40E, screen->selected > 10 ? 10 : screen->selected);
    screen->headerShown = 1;
    jyoucyuGetTableEntry(0);
}

}
