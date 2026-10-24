/* NON_MATCHING: retail keeps the slot index in r5 and the work pointer in r4 (built swaps them), and derives the two-icon pair address after the first icon lookup; the if-chain, hoisted count pointer and call sequence are identical */
#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;

void uiSpriteSelectAnim(ButtonHelpUnit *unit, s32 animation);
void uiSpriteSetKeyframe(ButtonHelpUnit *unit, s32 keyframe, s32 flag);
void uiSpriteSetImageKeyframe(ButtonHelpUnit *unit, s32 keyframe, s32 flag);
u16 FUN_0019d890(s32 table, s32 id);
void FUN_0019e330(ButtonHelpUnit *unit, s32 arg, s32 flag);
void FUN_001a90e0(void *state);
}

static __inline void buttonHelpAddIcon(ButtonHelpWorkA *work, s32 *count, s32 slot, s32 id)
{
    work->icons[slot] = FUN_0019d890(10, id);
    *count = work->count + 1;
}

/* Prepares every button-help slot: resets its animation, looks up the icon of the kind it shows,
 * then restarts the four selected-slot sprites and the cleared state. */
extern "C" void FUN_00182084(void)
{
    ButtonHelpWorkA *work = g_buttonHelp.work;
    s32 *count = &work->count;
    for (s32 i = 0; i < 6; i++) {
        uiSpriteSelectAnim(&work->units[i], 0);
        s32 kind = work->kinds[i].kind;
        if (kind != 0) {
            if (kind == 7 || kind == 0x13) {
                buttonHelpAddIcon(work, count, i, 0x73);
            } else if (kind == 8) {
                buttonHelpAddIcon(work, count, i, 0x59);
            } else if (kind == 9) {
                buttonHelpAddIcon(work, count, i, 0x85);
            } else if (kind == 0x15 || kind == 0x14) {
                u16 *icon = &work->icons[i];
                icon[0] = FUN_0019d890(10, i + 0x1F);
                *count = work->count + 1;
                icon[1] = FUN_0019d890(10, i + 0x20);
                *count = *count + 1;
            } else if ((kind == 10 || kind == 11) || (kind == 12 || kind == 13) || ((kind == 14 || kind == 15) || kind == 16)) {
                switch (i) {
                case 0:
                case 1:
                    buttonHelpAddIcon(work, count, i, 0x73);
                    break;
                case 2:
                case 3:
                    buttonHelpAddIcon(work, count, i, 0x85);
                    break;
                case 4:
                case 5:
                    buttonHelpAddIcon(work, count, i, 0x8C);
                    break;
                }
            } else {
                buttonHelpAddIcon(work, count, i, i + 0x1F);
            }
        }
    }
    for (s32 i = 0; i < 4; i++) {
        if (work->unk5E4 != 1) {
            uiSpriteSetImageKeyframe(&work->selected[i], 0, 0);
            FUN_0019e330(&work->selected[i], 0, 0);
        } else {
            uiSpriteSetImageKeyframe(&work->selected[i], 0, 0);
            uiSpriteSetKeyframe(&work->selected[i], 2, 0);
        }
    }
    work->cleared.low = 0;
    work->cleared.high = 0;
    FUN_001a90e0(work->clear.unk5DA);
    work->unk5E2[0] = 1;
    g_buttonHelp.work->unk0C = 0;
    g_buttonHelp.work->state = 1;
}
