/* NON_MATCHING: all 93 instructions match except one compiler nop before the final FUN_003e4e4c(0) fallback call. */
#include "ui/UiSpriteApi.h"
#include "ui/MessageMainA.h"
#include "gamedata/GameSaveDataA.h"
#include "code/Code0018.h"
#include "gamedata/SaveSlotTable.h"
#include "code/Code003e.h"

extern "C" {
s32 scrGetCommandFrame(void);
void FUN_004bd410(u16 id);
}

static inline s32 findRemainingSelectedUnit(u32 removed)
{
    for (s32 i = 0; i < 12; ++i) {
        PartySlotA *unit = partyGetSlot((u16)i);
        if (unit->id != removed && partySlotIsOccupied(unit)) {
            return unit->id;
        }
    }
    return 0;
}

// Close the affected message rows, commit removals, and repair the selected party member.
extern "C" u32 FUN_003bf938(void)
{
    MessageWindowA *panel = g_messageMain.banner;
    if (scrGetCommandFrame() == 30) {
        MessageWindowA *current = g_messageMain.banner;
        u8 state = current->counterState;
        if (state == 0 || state == 2 || state == 1) {
            current->counterState = 4;
            uiSpriteSelectAnim(&current->sprites[17], 2);
            for (s32 i = 0; i < 12 && i <= current->queueIndex; ++i) {
                uiSpriteSelectAnim(&current->sprites[22 + i], 2);
                current->queueStates[i] = 4;
            }
        }
    }
    if (panel->shown != 0) {
        return 0;
    }
    for (s32 i = 0; i < 12 && i <= panel->queueIndex; ++i) {
        u32 id = panel->queueIds[i];
        if (id != 0) {
            if (panel->queueSpecial[i] != 0) {
                FUN_004bd410((u16)id);
                panel->queueIds[i] = 0;
            } else {
                FUN_003e48dc((u16)id);
                panel->queueIds[i] = 0;
                if (saveSlotFindSelected()->id == id) {
                    FUN_003e4e4c(findRemainingSelectedUnit(id));
                }
            }
        }
    }
    panel->queuePending = 0;
    return 1;
}
