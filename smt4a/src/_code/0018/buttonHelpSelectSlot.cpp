#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"

extern "C" {
/* The selections queued while slot animations run (-1: none), kinds then values: this file's data
 * (declared in ui/ButtonHelpGlobal.h for buttonHelpCalc). */
s32 g_buttonHelpQueuedKinds[6] = { -1, -1, -1, -1, -1, -1 };
s32 g_buttonHelpQueuedValues[6] = { -1, -1, -1, -1, -1, -1 };

/* Sets a help slot immediately, or defers it until the active help animations finish. */
void buttonHelpSelectSlot(u8 slot, u8 kind, u16 value, s32 defer)
{
    if (slot >= 6)
        return;
    ButtonHelpWorkA *work = g_buttonHelp.work;
    if (!work)
        return;
    if (defer) {
        if (g_buttonHelpQueuedKinds[slot] < 0) {
            for (s32 index = 0; index < 6; ++index) {
                if (work->touchPressed[index]) {
                    g_buttonHelpQueuedKinds[slot] = kind;
                    g_buttonHelpQueuedValues[slot] = value;
                    return;
                }
            }
        }
        if (g_buttonHelpQueuedKinds[slot] == kind && g_buttonHelpQueuedValues[slot] == value) {
            g_buttonHelpQueuedKinds[slot] = -1;
            g_buttonHelpQueuedValues[slot] = -1;
        }
    }
    work->slots[slot].kind = kind;
    work->slots[slot].value = value;
    if (kind == 7 || kind == 9 || kind == 10 || kind == 11 || kind == 12 ||
        kind == 13 || kind == 14 || kind == 15 || kind == 16 || kind == 17 || kind == 19) {
        work->slotSprites[slot].secondaryImage = 1;
        work->slotSprites[slot].textureTable = 10;
        work->slotSprites[slot].image = -1;
    } else if (kind == 8) {
        work->slotSprites[slot].secondaryImage = 4;
        work->slotSprites[slot].textureTable = 10;
        work->slotSprites[slot].image = -1;
    } else {
        work->slotSprites[slot].textureTable = 10;
        work->slotSprites[slot].image = 3;
        work->slotSprites[slot].secondaryImage = -1;
    }
}
} /* extern "C" */
