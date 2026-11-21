/* NON_MATCHING: the queued kinds/values arrays are now defined here (same-file data), so the values base is `kinds + 24` in a register like retail; the shared index*35 unit offset, the if-converted selection stores and the kinds/values register numbering still differ. */
#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"

extern "C" {
s32 g_buttonHelpQueuedKinds[6] = { -1, -1, -1, -1, -1, -1 };
s32 g_buttonHelpQueuedValues[6] = { -1, -1, -1, -1, -1, -1 };

// Queue a help selection while another unit animates, or start its appropriate animation.
static __inline void helpSelect(ButtonHelpWorkA *work, u32 index, s32 kind, s32 value, s32 queue)
{
    if (queue) {
        s32 queuedKind = g_buttonHelpQueuedKinds[index];
        if (queuedKind < 0) {
            for (s32 unit = 0; unit < 6; ++unit) {
                if (work->touchPressed[unit]) {
                    g_buttonHelpQueuedKinds[index] = kind;
                    g_buttonHelpQueuedValues[index] = value;
                    return;
                }
            }
        }
        if (queuedKind == kind && g_buttonHelpQueuedValues[index] == value) {
            g_buttonHelpQueuedKinds[index] = -1;
            g_buttonHelpQueuedValues[index] = -1;
        }
    }
    work->slots[index].kind = static_cast<u8>(kind);
    work->slots[index].value = static_cast<u16>(value);
    if (kind != 7 && kind != 9 && kind != 10 && kind != 11 &&
        kind != 12 && kind != 13 && kind != 14 && kind != 15 &&
        kind != 16 && kind != 17 && kind != 19) {
        UiSpriteState *unit = reinterpret_cast<UiSpriteState *>(&work->slotSprites[index]);
        if (kind == 8) {
            unit->secondaryImage = 4;
            unit->textureTable = 10;
            unit->image = -1;
        } else {
            unit->textureTable = 10;
            unit->image = 3;
            unit->secondaryImage = -1;
        }
        return;
    }
    UiSpriteState *unit = reinterpret_cast<UiSpriteState *>(&work->slotSprites[index]);
    unit->secondaryImage = 1;
    unit->textureTable = 10;
    unit->image = -1;
}

void buttonHelpSelectSlot(u8 index, u8 kind, u16 value, s32 queue)
{
    if (index >= 6)
        return;
    ButtonHelpWorkA *work = g_buttonHelp.work;
    if (!work)
        return;
    helpSelect(work, index, kind, value, queue);
}
}
