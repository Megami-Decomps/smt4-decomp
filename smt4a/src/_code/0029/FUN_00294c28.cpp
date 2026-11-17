#include "map/mapDepart.h"
#include "game/GameStateA.h"
#include "map/PopupStateA.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {

void FUN_00152f44(void);
void gameFlagsGetBlock(void);
s32 randRange(u32 id);
s32 gameFlagIsSet(u32 flag);
const char *popupSelectWeightedMessage(u32 kind, u16 id);

/* Starts the mode-2 popup when nothing is busy, flag 0x49A is set, a candidate exists and flag 0x1A2 is clear or the level is above 0x32; with level above 0x3C and flag 0x10 set it uses id 0xAD instead of the candidate's. */
void FUN_00294c28(void)
{
    PopupStateA *popup;
    const char *message;
    PartySlotA *candidate;
    s32 value;
    u16 id;

    gameFlagsGetBlock();
    FUN_00152f44();
    if (((((g_gameState.inputBlocked == 0) && (g_popupState->state == 0)) && (value = gameFlagIsSet(0x49A), value != 0)) &&
         ((candidate = saveSlotFindSelected(), candidate != NULL) &&
          ((value = gameFlagIsSet(0x1A2), value == 0 || (value = randRange(99), value + 1 > 0x32)))))) {
        value = randRange(99);
        if ((value + 1 > 0x3C) && (value = gameFlagIsSet(0x10), value != 0)) {
            id = 0xAD;
        } else {
            id = candidate->id;
        }
        message = popupSelectWeightedMessage(0, id);
        popup = g_popupState;
        g_popupState->message = message;
        popup->state = 2;
        popup->timer = 0;
    }
}

} /* extern "C" */
