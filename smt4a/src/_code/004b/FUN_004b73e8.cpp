/* NON_MATCHING: transition flag chains fold to combined mask tests; pending globals and cache flag use different base addressing. */
#include "camp/ScriptPanelResources.h"
#include "shard/Shard004B.h"

extern "C" {
extern void *g_aocSystem;
extern s16 DAT_005f17a8, DAT_005f17aa;
s32 aocSelectedRecordIsUnavailable(void *system);
void slotSetRequest(s32 slot, s32 frames, s32 alpha);
void obj04Finish(void);
ListEntry20 *menu4CGetCurrentEntry(Menu4C *menu);
void FUN_004b7694(CampScriptPanelResources *panel);
void FUN_004b75d0(CampScriptPanelResources *panel);
void uiClampScrollOffset(CampScriptPanelResources *panel, void *animation);
void spatialAdvanceTransformTransition(u32 handle);

void FUN_004b73e8(CampScriptPanelResources *panel)
{
    if (DAT_005f17aa != 0) {
        panel->transition.state = 13;
        panel->transition.timer = 0;
        DAT_005f17aa = 0;
    } else if (DAT_005f17a8 != 0) {
        panel->transition.state = 12;
        panel->transition.timer = 0;
        DAT_005f17a8 = 0;
    } else if (aocSelectedRecordIsUnavailable(g_aocSystem)) {
        panel->transition.state = 14;
        panel->transition.timer = 0;
    } else {
        u32 flags = panel->mikado.flags;
        if (flags & 0x400000) {
            slotSetRequest(0, 30, 255);
            panel->transition.timer = 0;
            panel->transition.state = 16;
        } else if ((flags & 0x10) || (flags & 0x200000) || (flags & 0x40000) ||
                   (flags & 0x800000) || (flags & 0x4000000) || (flags & 0x1000000) ||
                   (flags & 0x2000000) || (flags & 0x8000000) || (flags & 0x20000000)) {
            if (!(flags & 0x100))
                slotSetRequest(0, 10, 255);
            flags = panel->mikado.flags;
            if (((flags & 0x800000) || (flags & 0x1000000) || (flags & 0x2000000) ||
                 (flags & 0x8000000) || (flags & 0x100000) || (flags & 0x80000) ||
                 (flags & 0x200000) || (flags & 0x40000) || (flags & 0x4000000) ||
                 (flags & 0x20000000)) && !(flags & 0x100))
                slotSetRequest(1, 10, 255);
            panel->transition.timer = 0;
            panel->transition.state = 16;
        } else if (flags & 0x2000) {
            if (flags & 0x40) {
                panel->mikado.flags = flags & ~0x40;
                obj04Finish();
            }
            panel->transition.state = 6;
            panel->transition.timer = 0;
            panel->selected.entry = menu4CGetCurrentEntry(reinterpret_cast<Menu4C *>(panel->selectionMenu.menu));
            panel->mikado.flags &= ~0x2000;
        } else {
            FUN_004b7694(panel);
        }
    }
    FUN_004b75d0(panel);
    uiClampScrollOffset(panel, panel->transition.animation);
    if (panel->cacheLoaded)
        spatialAdvanceTransformTransition(panel->cacheHandle);
}
}
