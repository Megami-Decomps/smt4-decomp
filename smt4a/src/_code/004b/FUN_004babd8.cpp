#include "shard/Shard004B.h"
#include "shard/Shard004A.h"
#include "code/Code004d.h"

extern "C" {
void menuSynchronizeFlaggedSelection(void *selection, Menu4C *menu);
void sub10OwnerStart(Menu4C *menu);
void *asdTMTexLoadMainHeap(u32 table, u32 index);
s8 selectOwnerGetActive(void *selection);
u32 selectOwnerGetSelected(void *selection);
s32 inputConfirmPressed(void);

/* Preloads the selected entry's image after the selection has remained stable. */
u32 FUN_004babd8(Menu4C *menu)
{
    u32 changed = 0;
    s32 oldSelection = flaggedValueHolderGetTotal((const FlaggedValueHolder *)menu);
    if (!menu->unk9EE) {
        menuSynchronizeFlaggedSelection(menu->block74, menu);
        sub10OwnerStart(menu);
    }
    if (flaggedValueHolderGetTotal((const FlaggedValueHolder *)menu) != oldSelection) {
        menu->unk1074 = 0;
    } else {
        /* Matches the original clamp macro, which evaluates ++menu->unk1074 in each arm. */
        s32 timer = ((s32)++menu->unk1074 < 0)
            ? 0
            : (((s32)++menu->unk1074 > 256) ? 256 : (s32)++menu->unk1074);
        menu->unk1074 = timer;
        if (timer > 15) {
            s32 selection = flaggedValueHolderGetTotal((const FlaggedValueHolder *)menu);
            u16 rawId = menu->list[selection]->unk5A;
            u32 keyframe = rawId + 1;
            s32 node = rawId + 2;
            if (!menu->flags1034[keyframe]) {
                menu->preload.node = node;
                menu->preload.keyframe = keyframe;
                if (!menu->flags1034[keyframe]) {
                    asdTMTexLoadMainHeap(0x1F, keyframe);
                    menu->flags1034[keyframe] = 1;
                }
            }
        }
    }
    if (!menu->unk9EE) {
        if (selectOwnerGetActive(menu->block74)) {
            u32 selected = selectOwnerGetSelected(menu->block74);
            if (stateCounterBelowLimit(menu, selected)) {
                changed = 1;
            }
        }
        if (inputConfirmPressed()) {
            changed = 1;
        }
    }
    return changed;
}

} /* extern "C" */
