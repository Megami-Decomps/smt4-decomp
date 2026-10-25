/* NON_MATCHING: coupled touch handles now share a pair base and the native touch count gets its own pointer; count stores, selected-halfword addressing and argument scheduling still differ. */
#include "ui/ButtonHelp.h"
#include "ui/UiSpriteState.h"

union HelpRegistrationViewA {
    ButtonHelpWorkA base;
    struct {
        u8 unk000[0x5c4];
        u16 handles[6];
        s32 count;
        s32 selection;
        u16 selected;
        u8 pair[6];
    } touch;
};
extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;
u16 FUN_0019d890(u32 group, s32 sprite);
void FUN_001a90e0(void *pair);
}

static __inline void registerHelpTouch(HelpRegistrationViewA *work, s32 index, s32 sprite)
{
    work->touch.handles[index] = FUN_0019d890(10, sprite);
    ++work->touch.count;
}

// Reset help animations and install touch regions appropriate to each of the six button kinds.
extern "C" void FUN_00183c0c(void)
{
    HelpRegistrationViewA *work = reinterpret_cast<HelpRegistrationViewA *>(g_buttonHelp.work);
    for (s32 index = 0; index < 6; ++index) {
        uiSpriteSelectAnim(&work->base.units[index], 0);
        u8 kind = work->base.kinds[index].kind;
        if (kind != 0) {
            if (kind == 7 || kind == 19) {
                registerHelpTouch(work, index, 0x73);
            } else if (kind == 8) {
                registerHelpTouch(work, index, 0x59);
            } else if (kind == 9) {
                registerHelpTouch(work, index, 0x85);
            } else if (kind == 21 || kind == 20) {
                u16 *handles = &work->touch.handles[index];
                handles[0] = FUN_0019d890(10, index + 0x1f);
                ++work->touch.count;
                handles[1] = FUN_0019d890(10, index + 0x20);
                ++work->touch.count;
            } else {
                registerHelpTouch(work, index, index + 0x1f);
            }
        }
    }
    work->touch.selection = 0;
    work->touch.selected = 0;
    FUN_001a90e0(work->touch.pair);
    work->base.unk5E2[0] = 0;
    ButtonHelpWorkA *current = g_buttonHelp.work;
    current->unk0C = 0;
    current->state = 1;
}
