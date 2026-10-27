#include "camp/ScriptPanelResources.h"
#include "shard/Shard004B.h"
#include "shard/W5_W5Match7_SceneState.h"

extern "C" {
extern void *g_aocSystem;
s32 aocSelectedRecordIsUnavailable(void *system);
void slotSetRequest(s32 slot, s32 frames, s32 alpha);
void obj04Finish(void);
ListEntry20 *menu4CGetCurrentEntry(Menu4C *menu);
void FUN_004b7694(CampScriptPanelResources *panel);
void FUN_004b75d0(CampScriptPanelResources *panel);
void uiClampScrollOffset(CampScriptPanelResources *panel, void *animation);
void spatialAdvanceTransformTransition(u32 handle);

/* True when any of the panel move/step request flags is set. */
static __inline bool panelHasPendingMove(u32 flags)
{
    if (flags & 0x10)
        return true;
    if (flags & 0x200000)
        return true;
    if (flags & 0x40000)
        return true;
    if (flags & 0x800000)
        return true;
    if (flags & 0x4000000)
        return true;
    if (flags & 0x1000000)
        return true;
    if (flags & 0x2000000)
        return true;
    if (flags & 0x8000000)
        return true;
    if (flags & 0x20000000)
        return true;
    return false;
}

/* True when any of the selection-change request flags is set. */
static __inline bool panelHasSelectionChange(u32 flags)
{
    if (flags & 0x800000)
        return true;
    if (flags & 0x1000000)
        return true;
    if (flags & 0x2000000)
        return true;
    if (flags & 0x8000000)
        return true;
    if (flags & 0x100000)
        return true;
    if (flags & 0x80000)
        return true;
    if (flags & 0x200000)
        return true;
    if (flags & 0x40000)
        return true;
    if (flags & 0x4000000)
        return true;
    if (flags & 0x20000000)
        return true;
    return false;
}

void FUN_004b73e8(CampScriptPanelResources *panel)
{
    if (g_gameState.menuRequests.secondary != 0) {
        panel->transition.state = 13;
        panel->transition.timer = 0;
        g_gameState.menuRequests.secondary = 0;
    } else if (g_gameState.menuRequests.primary != 0) {
        panel->transition.state = 12;
        panel->transition.timer = 0;
        g_gameState.menuRequests.primary = 0;
    } else if (aocSelectedRecordIsUnavailable(g_aocSystem)) {
        panel->transition.state = 14;
        panel->transition.timer = 0;
    } else {
        u32 flags = panel->mikado.flags;
        if (flags & 0x400000) {
            slotSetRequest(0, 30, 255);
            panel->transition.timer = 0;
            panel->transition.state = 16;
        } else if (panelHasPendingMove(flags)) {
            if (!(flags & 0x100))
                slotSetRequest(0, 10, 255);
            flags = panel->mikado.flags;
            if (panelHasSelectionChange(flags) && !(flags & 0x100))
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
