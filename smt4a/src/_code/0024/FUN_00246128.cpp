/* NON_MATCHING: block layout: retail places the shared money-threshold reset block after the 0xC2 flag test instead of after
 * the threshold arms, and keeps the constant 1 (giftCounter) in fp across the loop, spilling the table handle to the stack
 * and reusing the zero register for the out-of-range NULL. */
/* Starts the party-gift popup when the player's money has reached its level threshold: a table entry of kind 0x12 for the selected slot whose two flags allow it. */
#include "common.h"
#include "game/GameStateA.h"
#include "gamedata/GameSaveDataA.h"
#include "gamedata/PartnerInfoTable.h"
#include "gamedata/PlayerDataBlock.h"
#include "gamedata/SaveSlotTable.h"
#include "map/PopupStateA.h"
#include "util/Random.h"


extern "C" {
s32 gameFlagIsSet(u32 flag);
s32 gameFlagSumWeightedTiers(void);
const char *popupSelectWeightedMessage(u32 kind);

void FUN_00246128(void)
{
    if (g_popupState->state != 0) {
        return;
    }
    s32 level = ((PlayerDataA *)gameGetPlayerData())->level;
    s32 money = gameFlagSumWeightedTiers();
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
    } else if (money < 15000) {
        g_gameState.giftCounter = 0;
        return;
    }
    if (g_gameState.giftCounter != 0) {
        g_gameState.giftCounter++;
        if (g_gameState.giftCounter > 20) {
            g_gameState.giftCounter = 0;
        }
    }
    PartySlotA *slot = saveSlotFindSelected();
    if (slot == NULL) {
        return;
    }
    if (gameFlagIsSet(0x8D) != 0 && gameFlagIsSet(0xC2) == 0 && slot->id == 0xB1) {
        return;
    }
    if (gameFlagIsSet(0x1A2) != 0 && (s32)(randRange(99) + 1) <= 50) {
        return;
    }
    s32 count = partnerInfoCount();
    for (u32 i = 0; (s32)i < count; i++) {
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
