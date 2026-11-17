/* NON_MATCHING: the six-byte clear now forms retail's work+0x500 base; the build keeps g_buttonHelp in r7 (retail r8), recomputes the base for the FUN_001a90e0 argument instead of sharing retail's two adds, and swaps r7/r8 in the double-icon case. */
#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"
#include <string.h>
#include "ui/UiSpriteState.h"

extern "C" {
u16 FUN_0019d890(u32 group, s32 sprite);
void FUN_001a90e0(void *pair);
}

static __inline void registerHelpTouch(ButtonHelpWorkA *work, s32 *count, s32 index, s32 sprite)
{
    work->icons[index] = FUN_0019d890(10, sprite);
    *count = work->count + 1;
}

// Reset help animations and install touch regions appropriate to each of the six button kinds.
extern "C" void FUN_00183c0c(void)
{
    ButtonHelpWorkA *work = g_buttonHelp.work;
    s32 *count = &work->count;
    for (s32 index = 0; index < 6; ++index) {
        uiSpriteSelectAnim((UiSpriteState *)(&work->units[index]), 0);
        u8 kind = work->kinds[index].kind;
        if (kind != 0) {
            if (kind == 7 || kind == 19) {
                registerHelpTouch(work, count, index, 0x73);
            } else if (kind == 8) {
                registerHelpTouch(work, count, index, 0x59);
            } else if (kind == 9) {
                registerHelpTouch(work, count, index, 0x85);
            } else if (kind == 21 || kind == 20) {
                work->icons[index] = FUN_0019d890(10, index + 0x1f);
                *count = work->count + 1;
                work->icons[index + 1] = FUN_0019d890(10, index + 0x20);
                *count = *count + 1;
            } else {
                registerHelpTouch(work, count, index, index + 0x1f);
            }
        }
    }
    memset(work->clear.active, 0, sizeof(work->clear.active));
    FUN_001a90e0(work->clear.unk5DA);
    work->unk5E2[0] = 0;
    ButtonHelpWorkA *current = g_buttonHelp.work;
    current->unk0C = 0;
    current->state = 1;
}
