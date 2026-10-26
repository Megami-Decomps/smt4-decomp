/* NON_MATCHING: counter-bound branches and selected-flag loads differ; retail retains a separate +0x900 base and signed completion accessor. */
#include "shard/Shard004B.h"
#include "shard/Shard004A.h"
#include "code/Code004d.h"

extern "C" {
void menuSynchronizeFlaggedSelection(void *selection, Menu4C *menu);
void sub10OwnerStart(Menu4C *menu);
void *asdTMTexLoadMainHeap(u32 table, u32 index);
u32 selectOwnerGetSelected(void *selection);
s32 FUN_004d0584();

// Preload the selected entry's image after the selection has remained stable.
u32 FUN_004babd8(Menu4C *menu)
{
    u32 changed = 0;
    s32 oldSelection = flaggedValueHolderGetTotal(reinterpret_cast<const FlaggedValueHolder *>(menu));
    if (!menu->unk9EE) {
        menuSynchronizeFlaggedSelection(menu->block74, menu);
        sub10OwnerStart(menu);
    }
    if (flaggedValueHolderGetTotal(reinterpret_cast<const FlaggedValueHolder *>(menu)) != oldSelection) {
        menu->unk1074 = 0;
    } else {
        // The legacy bound checks each advance this counter before testing it.
        s32 timer = ++menu->unk1074;
        if (timer < 0) {
            timer = 0;
        } else {
            timer = ++menu->unk1074;
            if (timer <= 256)
                timer = ++menu->unk1074;
            else
                timer = 256;
        }
        menu->unk1074 = timer;
        if (timer >= 16) {
            s32 selection = flaggedValueHolderGetTotal(reinterpret_cast<const FlaggedValueHolder *>(menu));
            u32 keyframe = menu->list[selection]->unk5A + 1;
            if (!menu->flags1034[keyframe]) {
                menu->preload.node = keyframe + 1;
                menu->preload.keyframe = keyframe;
                if (!menu->flags1034[keyframe]) {
                    asdTMTexLoadMainHeap(0x1F, keyframe);
                    menu->flags1034[keyframe] = 1;
                }
            }
        }
    }
    if (!menu->unk9EE) {
        if (menu->selectionInput.enabled) {
            u32 selected = selectOwnerGetSelected(menu->block74);
            if (FUN_004d0058(menu, selected))
                changed = 1;
        }
        if (FUN_004d0584())
            changed = 1;
    }
    return changed;
}
}
