/* NON_MATCHING: block layout: retail shares one reset-and-return block placed after the first flag test (beyond the threshold arms), and spills the table handle to the stack instead of fp; the entry bounds check also compares in the other direction */
/* Starts the party-gift popup when the player's money has reached its level threshold: a table entry of kind 0x12 for the selected slot whose two flags allow it. */
#include "common.h"
#include "game/GameStateA.h"
#include "gamedata/PartnerInfoTable.h"
#include "gamedata/PlayerDataBlock.h"
#include "gamedata/SaveSlotTable.h"
#include "map/PopupStateA.h"


extern "C" {
s32 gameFlagIsSet(u32 flag);
s32 randRange(s32 maximum);
s32 FUN_00480c28(void);
const char *popupSelectWeightedMessage(u32 kind);

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
    s32 level = static_cast<PlayerLevelView *>(reinterpret_cast<void *>(gameGetPlayerData()))->level;
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
    SlotView *slot = (SlotView *)reinterpret_cast<void *>(saveSlotFindSelected());
    if (slot != NULL && (gameFlagIsSet(0x8D) == 0 || gameFlagIsSet(0xC2) != 0 || slot->id != 0xB1) &&
        (gameFlagIsSet(0x1A2) == 0 || randRange(99) + 1 > 50)) {
        s32 count = partnerInfoCount();
        for (s32 i = 0; i < count; i++) {
            PartnerInfoRecord *entry = partnerInfoRecordAt(i);
            if (entry->kind == 0x12 && entry->partnerId == slot->id &&
                (entry->requiredFlag == 0 || gameFlagIsSet(entry->requiredFlag) != 0) &&
                (entry->excludedFlag == 0 || gameFlagIsSet(entry->excludedFlag) == 0) &&
                g_gameState.giftCounter == 0) {
                g_gameState.giftCounter = 1;
                g_popupState->speakerId = slot->id;
                g_popupState->message = popupSelectWeightedMessage(0x12);
                g_popupState->state = 0x11;
                g_popupState->timer = 0;
                return;
            }
        }
    }
}
}
