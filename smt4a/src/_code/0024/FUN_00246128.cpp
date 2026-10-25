/* NON_MATCHING: block layout: retail shares one reset-and-return block placed after the first flag test (beyond the threshold arms), and spills the table handle to the stack instead of fp; the entry bounds check also compares in the other direction */
/* Starts the party-gift popup when the player's money has reached its level threshold: a table entry of kind 0x12 for the selected slot whose two flags allow it. */
#include "common.h"
#include "gamedata/DataTable.h"

struct PopupState {
    u32 state;
    u32 timer;
    u8 unk08[0xC];
    u32 handle;
    u32 slotId;
};

struct GameStatePopupView {
    u8 unk000[0x394];
    s32 giftCounter;
};

struct GiftEntry {
    u32 slotId;
    u32 kind;
    s16 requiredFlag;
    s16 forbiddenFlag;
    u8 unk0C[0x14];
};

extern "C" {
extern PopupState *g_popupState;
extern GameStatePopupView g_gameState;
s32 gameFlagIsSet(u32 flag);
s32 randRange(s32 maximum);
void *saveSlotFindSelected(void);
void *gameGetPlayerData(void);
s32 FUN_00480c28(void);
u32 FUN_002d8b58(u32 kind);

/* Number of entries in the gift table. */
static __inline u32 giftTableCount(void)
{
    void *table = dataTableGet(0x43, 0);
    dataTableGetEntries(table);
    return dataTableGetCount(table);
}

/* The index-th gift table entry, or NULL when out of range. */
static __inline GiftEntry *giftTableEntry(u32 index)
{
    void *table = dataTableGet(0x43, 0);
    GiftEntry *entries = static_cast<GiftEntry *>(dataTableGetEntries(table));
    return index < dataTableGetCount(table) ? &entries[index] : NULL;
}

void FUN_00246128(void)
{
    struct SlotView {
        u8 record[0x12C];
        u16 id;
    };
    struct PlayerLevelView {
        u8 prefix[0x62];
        u16 level;
    };
    if (g_popupState->state != 0) {
        return;
    }
    s32 level = static_cast<PlayerLevelView *>(gameGetPlayerData())->level;
    s32 money = FUN_00480c28();
    if (level <= 20) {
        if (money < 5000) {
            g_gameState.giftCounter = 0;
            return;
        }
    } else if (level <= 50) {
        if (money < 10000) {
            g_gameState.giftCounter = 0;
            return;
        }
    } else if (15000 > money) {
        g_gameState.giftCounter = 0;
        return;
    }
    if (g_gameState.giftCounter != 0) {
        g_gameState.giftCounter++;
        if (g_gameState.giftCounter > 20) {
            g_gameState.giftCounter = 0;
        }
    }
    SlotView *slot = (SlotView *)saveSlotFindSelected();
    if (slot != NULL && (gameFlagIsSet(0x8D) == 0 || gameFlagIsSet(0xC2) != 0 || slot->id != 0xB1) &&
        (gameFlagIsSet(0x1A2) == 0 || randRange(99) + 1 > 50)) {
        s32 count = giftTableCount();
        for (s32 i = 0; i < count; i++) {
            GiftEntry *entry = giftTableEntry(i);
            if (entry->kind == 0x12 && entry->slotId == slot->id &&
                (entry->requiredFlag == 0 || gameFlagIsSet(entry->requiredFlag) != 0) &&
                (entry->forbiddenFlag == 0 || gameFlagIsSet(entry->forbiddenFlag) == 0) &&
                g_gameState.giftCounter == 0) {
                g_gameState.giftCounter = 1;
                g_popupState->slotId = slot->id;
                g_popupState->handle = FUN_002d8b58(0x12);
                g_popupState->state = 0x11;
                g_popupState->timer = 0;
                return;
            }
        }
    }
}
}
