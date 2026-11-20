/* NON_MATCHING: retail keeps shared constants 0 (r8) and 1 (r6) in registers and has one exit for the no-slot and success returns; build rematerialises them (record null select, timer store and epilogue order differ). */
#include "common.h"
#include <stdio.h>
#include "game/GameStateA.h"
#include "gamedata/PartnerInfoTable.h"
#include "code/Code0015.h"
#include "mapnavi/naviMain.h"
#include "gamedata/SaveSlotTable.h"
#include "map/PopupStateA.h"

struct SaveSlotView {
    u8 unk00[0x12C];
    u16 statusId;
};

extern "C" {
s32 gameFlagIsSet(u32 flag);
s32 randRange(s32 max);
const char *popupSelectWeightedMessage(u32 kind, u32 id);
void *rt_memcpy(void *dest, const void *src, u32 size);

/* Tick the poison/sickness counter and start the status popup when a matching event record fires. */
u32 FUN_0020ecd4(void)
{
    char name[0x48];
    messageVoiceFlagsGet();
    if (playerHasFlagBit(5) != 0 || playerHasFlagBit(9) != 0) {
        if (g_gameState.statusTimer != 0) {
            g_gameState.statusTimer = g_gameState.statusTimer + 1;
            if (g_gameState.statusTimer > 10)
                g_gameState.statusTimer = 0;
        }
    }
    if (g_popupState->state == 0) {
        SaveSlotView *slot = (SaveSlotView *)(s32)saveSlotFindSelected();
        if (slot == 0)
            return 0;
        if ((gameFlagIsSet(0x1A2) == 0 || randRange(99) + 1 > 50) &&
            (playerHasFlagBit(5) != 0 || playerHasFlagBit(9) != 0) && g_gameState.statusTimer == 0) {
            g_gameState.statusTimer = 1;
            s32 count = partnerInfoCount();
            for (u32 i = 0; (s32)i < count; i++) {
                PartnerInfoRecord *record = partnerInfoRecordAt(i);
                if (record->kind != 4 || record->partnerId != slot->statusId)
                    continue;
                if (record->requiredFlag != 0 && gameFlagIsSet(record->requiredFlag) == 0)
                    continue;
                if (record->excludedFlag != 0 && gameFlagIsSet(record->excludedFlag) != 0)
                    continue;
                if (randRange(99) + 1 > record->argument)
                    continue;
                g_popupState->state = 6;
                g_popupState->timer = 0;
                g_popupState->speakerId = slot->statusId;
                g_popupState->message = popupSelectWeightedMessage(4, slot->statusId);
                rt_memcpy(name, g_popupState->message, 0x40);
                if (playerHasFlagBit(5) != 0)
                    sprintf(g_popupState->text, name, "\x82\x6f\x82\x8f\x82\x89\x82\x93\x82\x8f\x82\x8e");
                else if (playerHasFlagBit(9) != 0)
                    sprintf(g_popupState->text, name, "\x82\x72\x82\x89\x82\x83\x82\x8b");
                g_popupState->message = g_popupState->text;
                return 1;
            }
        }
    }
    return 0;
}
}
