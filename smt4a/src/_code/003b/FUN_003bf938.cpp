/* NON_MATCHING: closing-animation loop peels its initial bound check, and the inlined replacement search adds a join NOP. */
#include "ui/MessageMainA.h"
#include "gamedata/GameSaveDataA.h"
#include "code/Code0018.h"

extern "C" {
s32 scrGetCommandFrame(void);
void uiSpriteSelectAnim(void *sprite, s32 animation);
void FUN_004bd410(u16 id);
PartySlotA *saveSlotFindSelected(void);
PartySlotA *partyGetSlot(u16 index);
void FUN_003e4e4c(u16 id);
}

static inline u16 findRemainingSelectedUnit(u32 removed)
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
            s32 i = 0;
            while (current->queueIndex >= i) {
                uiSpriteSelectAnim(&current->sprites[22 + i], 2);
                current->queueStates[i] = 4;
                if (++i >= 12) {
                    break;
                }
            }
        }
    }
    if (panel->shown != 0) {
        return 0;
    }
    for (s32 i = 0; i < 12; ++i) {
        if (panel->queueIndex < i) {
            break;
        }
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
