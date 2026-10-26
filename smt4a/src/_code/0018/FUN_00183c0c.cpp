/* NON_MATCHING: the touch count stores through a hoisted pointer (as in buttonHelpBeginExit) and the halfword handle stores now match retail; the build keeps g_buttonHelp in r7 (retail r8) and addresses the selected halfword (work+0x5D8) through a literal-pool offset where retail uses `add r1, r5, #1280; strh [r1, #216]`. */
#include "ui/ButtonHelp.h"
#include "ui/UiSpriteState.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;
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
        uiSpriteSelectAnim(&work->units[index], 0);
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
    work->cleared.low = 0;
    work->cleared.high = 0;
    FUN_001a90e0(work->clear.unk5DA);
    work->unk5E2[0] = 0;
    ButtonHelpWorkA *current = g_buttonHelp.work;
    current->unk0C = 0;
    current->state = 1;
}
