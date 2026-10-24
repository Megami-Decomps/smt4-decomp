/* NON_MATCHING: the repeated g_gameGlobals reloads, the unrolled id search and the mode tests are scheduled differently from retail (built has fewer rows: the search loop is not unrolled by two); the status refresh is the same. */
#include "common.h"

extern "C" {

/* The status screen state is reached by byte offsets (SS) from the pointer in g_gameGlobals. */
typedef struct StatusGlobals {
    u32 unk0;
    u8 *state;
} StatusGlobals;

typedef struct DemonView {
    u8 unk00[0x62];
    u16 id;
    u8 unk64[0xC8];
    u32 flags;
} DemonView;

extern StatusGlobals g_gameGlobals;

void FUN_0021af2c(void);
void FUN_00230d2c(void);
void asdTextDrawDirectoryEntry(u32 a, s32 b, s32 c, s32 d, s32 e, u32 f, s32 text);
void statusDownRebuildOwnedDemonList(s16 *demons);
void FUN_002f001c(s16 *pending);
void statusReplaceSkills(u8 *skills, s32 count);
void FUN_00333de0(void);
void FUN_0035da20(u32 *slots, s32 value);
void statusMarkNewSkills(u8 *skills, s32 count);
u8 countUnlockedSlots(void);
u8 getUnlockedSlotCount(u32 arg);
s32 slotRecordFindById(u16 id);
s8 FUN_004bcaa8(s16 id, s16 slot, s16 *skills, u32 *out, u32 flag);
DemonView *FUN_003e4d68(u16 index);
u32 dataTableFileGetTable(u32 file, u32 index);
u32 *dataTableGetEntries(void);
u32 dataTableGetCount(u32 table);
s32 statusDownGetFlag(void);

#define SS(offset, type) (*(type *)(state + (offset)))

/* Refreshes the status screen for the selected demon (`second` selects the second entry): the
 * skill lists, the slot counts, the owned demon list, and the help text shown for the demon the
 * entry belongs to. */
void FUN_002f0420(s32 second, u32 unused, s16 *unusedList)
{
    u8 *state = g_gameGlobals.state;
    s32 slots = 8;
    s16 *entry = (s16 *)(state + 0x1390);

    if (second != 0) {
        entry = (s16 *)(state + 0x19D0);
    }
    if (SS(0x1390, s16) < 0) {
        slots = countUnlockedSlots();
    } else if (SS(0x1390, s16) > 0) {
        s8 mode = SS(0x2017, s8);

        if (mode != 4) {
            if (mode != 7 && mode != 16 && mode != 17) {
                slots = getUnlockedSlotCount(0);
            }
        } else {
            slots = 8;
        }
    }
    statusReplaceSkills(state + 0x13E0, slots);
    if (second != 0) {
        statusMarkNewSkills(state + 0x1A20, slots);
    }
    u32 out[4] = {0, 0, 0, 0};
    u32 *outPtr;
    s32 result;

    if (entry[0] >= 1 && SS(0x2017, s8) != 7 && SS(0x2017, s8) != 16) {
        u32 flag = 0;
        s8 mode = SS(0x2017, s8);

        if (mode == 2 || mode == 3 || mode == 17 || mode == 4) {
            s32 record = slotRecordFindById(SS(0x1390, u16));
            s8 value = 0;

            if (record != 0) {
                value = *(s8 *)(record + 0x67);
            }
            flag = record != 0 && value != 0;
        }
        result = FUN_004bcaa8(entry[0], entry[1], entry + 0x28, out, flag);
        outPtr = out;
    } else {
        result = -1;
        outPtr = NULL;
    }
    FUN_0035da20(outPtr, result);
    u8 *globals = g_gameGlobals.state;
    s8 phaseMode = SS(0x2018, s8);

    if (phaseMode == 6 || phaseMode == 7 || phaseMode == 12) {
        *(u32 *)(g_gameGlobals.state + 0x1374) = 0;
        FUN_0021af2c();
        *(u8 *)(globals + 0x2014) = 0;
    }
    if (entry[0] < 0) {
        FUN_002f001c(entry + 0x21);
        if (SS(0x1374, s32) >= 2) {
            SS(0x1374, s32) = 1;
            FUN_0021af2c();
        }
    }
    globals = g_gameGlobals.state;
    if (entry[0] < 1) {
        FUN_00230d2c();
        return;
    }
    if (SS(0x2017, s8) != 4) {
        FUN_00333de0();
        statusDownRebuildOwnedDemonList(entry + 0x50);
    } else {
        if (*(u32 *)(g_gameGlobals.state + 0x20C0) == 0) {
            u32 table = dataTableFileGetTable(*(u32 *)(g_gameGlobals.state + 0x20BC), 0);

            *(u32 **)(globals + 0x20C0) = dataTableGetEntries();
            *(u32 *)(globals + 0x20C4) = dataTableGetCount(table);
        }
        u8 *view = g_gameGlobals.state;
        s32 wantedId = -1;

        for (s32 i = 0; i < 12; i++) {
            DemonView *demon = FUN_003e4d68((u16)i);

            if ((demon->flags & 1) != 0 && demon->id == (u32)SS(0x1390, s16)) {
                wantedId = *(u16 *)((u8 *)demon + 300);
                break;
            }
        }
        u16 *pairs = *(u16 **)(view + 0x20C0);
        s32 count = *(s32 *)(view + 0x20C4);

        for (s32 i = 0; i < count; i++) {
            if (pairs[i * 2] == (u32)wantedId) {
                asdTextDrawDirectoryEntry(*(u32 *)(globals + 0x20B4), 3, -1, 0, 3, *(u32 *)(globals + 0x20B8),
                                          *(u16 *)(*(u8 **)(globals + 0x20C0) + i * 4 + 2));
                break;
            }
        }
    }
    if (statusDownGetFlag() == 2) {
        SS(0x1374, s32) = 1;
        FUN_0021af2c();
    }
    FUN_00230d2c();
}

}
