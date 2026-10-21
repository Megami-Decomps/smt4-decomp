/* NON_MATCHING: O3 unrolls the four-character reset and partially unrolls the 24-slot reset; matched widget writes reuse sl instead of retail's fresh r1 constant. O2 may retain retail's loops. */
#include "shard/W6_W6Match6_PartyPanel.h"
#include "shard/W5_W5Match5_GameSaveViews.h"

struct PartyFilterWidget {
    PartyPanelWidget transition;
    /* 0x28 */ u8 marked;
};

struct PartyFilterSlot {
    s32 index;
    u16 marked;
    u8 unk06[2];
};

struct PartyFilterState {
    /* 0x000 */ u8 unk000[0x9c0];
    /* 0x9c0 */ u8 characterFlags[4];
    /* 0x9c4 */ u8 unk9c4[0x4c];
    /* 0xa10 */ PartyFilterWidget *characters[4];
    /* 0xa20 */ PartyFilterWidget *demons[24];
    /* 0xa80 */ PartyFilterSlot slots[24];
    /* 0xb40 */ u8 unkb40[0x33c];
    /* 0xe7c */ s32 filterIds[2];
    /* 0xe84 */ s32 filterCount;
};

struct PartyFilterOrder {
    u8 unk0000[0x1ca0];
    s8 indices[3];
};

extern "C" {
extern PartyFilterState *g_partyPanel;
PartyFilterOrder *gameGetSlotTable(void);
SlotRecord *slotRecordFindById(u16 id);
void __aeabi_memset4(void *, u32 bytes, s32 value);

// Reset party-panel marks and match active party/storage slots against filter IDs.
void partyPanelRefreshFilterMarks(void)
{
    PartyFilterState *panel = g_partyPanel;
    PartyFilterOrder *order = gameGetSlotTable();
    for (s32 index = 0; index < 4; ++index) {
        panel->characterFlags[index] = 0;
        panel->characters[index]->marked = 0;
    }
    for (s32 index = 0; index < 24; ++index) {
        panel->slots[index].marked = 0;
        panel->demons[index]->marked = 0;
    }
    __aeabi_memset4(panel->characterFlags, sizeof(panel->characterFlags), 1);
    panel->characterFlags[0] = 0;
    for (s32 index = 0; index < 24; ++index) {
        if (panel->slots[index].index < 0) {
            panel->slots[index].marked = 1;
        }
    }
    for (s32 filter = 0; filter < panel->filterCount; ++filter) {
        s32 id = panel->filterIds[filter];
        if (id < 0) {
            continue;
        }
        SlotRecord *record = slotRecordFindById(static_cast<u16>(id));
        if (record == NULL) {
            continue;
        }
        for (s32 index = 0; index < 3; ++index) {
            s32 slot = order->indices[index];
            if (slot >= 0 && gameGetSlotRecord(slot)->entryId == record->entryId) {
                panel->characterFlags[index + 1] = 1;
                panel->characters[index + 1]->marked = 1;
            }
        }
        for (s32 index = 0; index < 24; ++index) {
            s32 slot = panel->slots[index].index;
            if (slot >= 0 && gameGetSlotRecord(slot)->entryId == record->entryId) {
                panel->slots[index].marked = 1;
                panel->demons[index]->marked = 1;
            }
        }
    }
}
}
