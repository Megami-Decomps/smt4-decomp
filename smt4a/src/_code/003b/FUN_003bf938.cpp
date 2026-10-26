/* NON_MATCHING: closing-animation loop peels its initial bound check, and the inlined replacement search adds a join NOP. */
#include "ui/MessageMain.h"
#include "shard/W6_W6Match1_PartySlot.h"
#include "code/Code0018.h"

extern "C" {
extern MessageGlobalsA g_messageMain;
s32 scrGetCommandFrame(void);
void uiSpriteSelectAnim(void *sprite, s32 animation);
void FUN_004bd410(u16 id);
PartySlotA *saveSlotFindSelected(void);
PartySlotA *FUN_003e4d68(u16 index);
void FUN_003e4e4c(u16 id);
}

static inline u16 findRemainingSelectedUnit(u32 removed)
{
    for (s32 i = 0; i < 12; ++i) {
        PartySlotA *unit = FUN_003e4d68((u16)i);
        if (unit->id != removed && FUN_00187168(unit)) {
            return unit->id;
        }
    }
    return 0;
}

// Close the affected message rows, commit removals, and repair the selected party member.
extern "C" u32 FUN_003bf938(void)
{
    MessagePanelA *panel = g_messageMain.panel;
    if (scrGetCommandFrame() == 30) {
        MessagePanelA *current = g_messageMain.panel;
        u8 state = current->state;
        if (state == 0 || state == 2 || state == 1) {
            current->state = 4;
            uiSpriteSelectAnim(current->blockB00, 2);
            s32 i = 0;
            while (current->removal.lastIndex >= i) {
                uiSpriteSelectAnim(current->removalSprites.rows[i], 2);
                current->removal.states[i] = 4;
                if (++i >= 12) {
                    break;
                }
            }
        }
    }
    if (panel->unk90 != 0) {
        return 0;
    }
    for (s32 i = 0; i < 12; ++i) {
        if (panel->removal.lastIndex < i) {
            break;
        }
        u32 id = panel->removal.ids[i];
        if (id != 0) {
            if (panel->removal.special[i] != 0) {
                FUN_004bd410((u16)id);
                panel->removal.ids[i] = 0;
            } else {
                FUN_003e48dc((u16)id);
                panel->removal.ids[i] = 0;
                if (saveSlotFindSelected()->id == id) {
                    FUN_003e4e4c(findRemainingSelectedUnit(id));
                }
            }
        }
    }
    panel->removal.pending = 0;
    return 1;
}
