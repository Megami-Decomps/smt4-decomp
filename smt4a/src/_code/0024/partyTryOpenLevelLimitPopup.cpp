/* Prepares an idle party popup from the selected slot when its unit meets the level limit. */
#include "map/mapDepart.h"
#include "game/GameStateA.h"
#include "gamedata/NkmEnemyLookup.h"
#include "map/PopupStateA.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
void FUN_00152f44(void);
s32 gameFlagIsSet(u32 flag);
s32 randRange(s32 maximum);
const char *popupSelectWeightedMessage(u32 kind, u16 slot);
void rt_memcpy(void *destination, const void *source, u32 bytes);
u32 dataTable01GetRecordWithAocOverride(u32 value);
void textFormatBuffer(char *destination, const char *format, u32 value);

void partyTryOpenLevelLimitPopup(void)
{
    struct SlotView {
        u8 record[0x12C];
        u16 id;
    };
    FUN_00152f44();
    if (g_popupState->state != 0) {
        return;
    }
    SlotView *slot = (SlotView *)saveSlotFindSelected();
    if (slot == NULL || (gameFlagIsSet(418) && randRange(99) + 1 <= 50)) {
        return;
    }
    u32 unitId = g_gameState.unk308;
    s32 tableLevel = nkmEnemyFindById((u16)unitId)->level & 0x7FFF;
    s32 playerLevel = gameGetPlayerData()->level;
    if (g_gameState.unk308 == 0 || (playerLevel > tableLevel && playerLevel > tableLevel + 5)) {
        return;
    }
    g_popupState->state = 12;
    g_popupState->timer = 0;
    const char *message = popupSelectWeightedMessage(14, slot->id);
    g_popupState->message = message;
    g_popupState->speakerId = slot->id;
    char format[72];
    rt_memcpy(format, message, sizeof(format));
    u32 value = dataTable01GetRecordWithAocOverride((u16)unitId);
    textFormatBuffer(g_popupState->text, format, value);
    g_popupState->message = g_popupState->text;
}
}
