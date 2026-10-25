/* NON_MATCHING: readable rewrite of the visibility refresh; the build allocates the registers of the entry scan and of the slot loop differently (retail keeps the list holder in r5, g_lmapMainState in r7 and the visibility table in r9/sl). */
#include "common.h"

// One record of the 2D data table's sub-table 5: which slot is shown, and the flags that hide or show it.
struct VisibilityEntry {
    /* 0x00 */ s8 kind;       // -1: unused
    /* 0x01 */ u8 unk01;
    /* 0x02 */ s8 slot;       // index into the visibility table
    /* 0x03 */ u8 secondary;  // selects the second half of the table
    /* 0x04 */ s16 hideFlag;  // when set, the entry is skipped unless this flag is set
    /* 0x06 */ s16 skipFlag;  // when set, the entry is skipped if this flag is set
};

// The list the map slots are registered from; its object sits at +8 and its length at +0x10.
struct SlotSourceList {
    u8 unk00[8];
    struct {
        u8 unk00[0x10];
        u32 count;
    } *source;
};

struct LmapSlotA {
    u8 unk00[0x84];
    u8 registered;  // 0x84
    u8 unk85[3];
};

// The Apocalypse map state block, reduced to the fields this function touches.
struct LmapStateAView {
    u8 unk0000[0x4ef8];
    SlotSourceList *sources;  // 0x4ef8
    u8 unk4efc[4];
    LmapSlotA slots[128];     // 0x4f00
};

extern "C" {
extern LmapStateAView *g_lmapMainState;
extern u32 g_handleRegistry;
extern u8 DAT_005f0c54[0x28];       // slot visibility as last applied
extern const u8 DAT_00531270[0xa0]; // default table (copied to a local that is not used afterwards)

s32 dataTable2dSub5GetCount(void);
VisibilityEntry *dataTable2DGetEntry(s32 index);
s32 gameFlagIsSet(s32 flag);
void rt_memcpy(void *destination, const void *source, u32 bytes);
void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);
void *FUN_0040619c(void *source, u32 index);
void ptrListRemoveClearOwner(u32 registry, void *object);
void handleRegistryRegisterObject(u32 registry, void *object);
void FUN_003b5c54(u32 index, s32 visible);

// Recomputes which map slots are visible from the data table and the game flags, and registers or removes the slots
// whose visibility changed.
void FUN_003ca5a4(void)
{
    u8 localTable[0xa0];
    u8 visible[0x28];
    for (s32 i = 0; i < 0x28; i++) {
        visible[i] = 0;
    }
    for (s32 i = 0; i < dataTable2dSub5GetCount(); i++) {
        VisibilityEntry *entry = dataTable2DGetEntry(i);
        if (entry->kind == -1) {
            continue;
        }
        if (entry->hideFlag != 0 && gameFlagIsSet(entry->hideFlag) == 0) {
            continue;
        }
        if (entry->skipFlag == 0 || gameFlagIsSet(entry->skipFlag) == 0) {
            if (entry->secondary == 0) {
                visible[entry->slot] = 1;
            } else {
                visible[0x14 + entry->slot] = 1;
            }
        }
    }
    __aeabi_memcpy4(localTable, DAT_00531270, sizeof(localTable));
    rt_memcpy(DAT_005f0c54, visible, sizeof(visible));

    LmapStateAView *state = g_lmapMainState;
    for (u32 i = 0; i < state->sources->source->count; i++) {
        void *source = state->sources->source;
        if (DAT_005f0c54[i] != 1) {
            if (g_lmapMainState != NULL && g_lmapMainState->slots[i].registered != 0) {
                ptrListRemoveClearOwner(g_handleRegistry, FUN_0040619c(source, i));
                if (g_lmapMainState != NULL && g_lmapMainState->slots[i].registered != 0) {
                    g_lmapMainState->slots[i].registered = 0;
                }
            }
            FUN_003b5c54(i, 0);
        } else {
            if (g_lmapMainState == NULL || g_lmapMainState->slots[i].registered == 0) {
                handleRegistryRegisterObject(g_handleRegistry, FUN_0040619c(source, i));
                if (g_lmapMainState != NULL && g_lmapMainState->slots[i].registered == 0) {
                    g_lmapMainState->slots[i].registered = 1;
                }
            }
            FUN_003b5c54(i, 1);
        }
    }
}
}
