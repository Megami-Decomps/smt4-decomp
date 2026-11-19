/* NON_MATCHING: control flow, calls, constants and most callee-saved register roles follow retail (241 raw / 177
 * shape rows, from 510; one missing instruction shifts the offsets after it). What differs: the frame is 92 bytes for
 * retail's 84 and the spilled locals sit in other slots; retail keeps the row's sprite in r5 as well as in its slot
 * until the layout entry takes r5; the two hoisted layout bases are computed interleaved and stored odd-then-even;
 * in the highlight pass the row position is in sl/r9 (the build has r9/sl) and the y sum goes to a new register
 * (`add r7, r9, r5`), which frees r5 for the priority 211. IV's twin is campDrawCommandMenu. */
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"
#include "camp/CampMenuEntry.h"
#include "camp/CampStateA.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "code/Code002a.h"
#include "gamedata/GameDataAccess.h"
#include "shard/TextureDrawCall.h"
#include "ui/AnimatedMessage.h"
#include "ui/UiSpriteApi.h"
#include "util/BitsAndBytes.h"
#include <stdlib.h>

extern "C" {
u8 uniteStateIsDone(void);
u8 region9100IsClear(void);
u32 uniteIsPhase26Active(void);
u32 uniteRequestGet(void);
u8 uniteNotBusy(void);
s32 widgetSubCallIfVisible(GridNavigation *grid);
/* The icon and label images of a camp command (the selected pair when `selected`). */
/* The "new" marker of a camp command. */
void campDrawCommandNewMark(s32 menu, s32 x, s32 y, u32 flags, s32 plain);
}

enum {
    CAMP_SPRITE_MENU_ORIGIN = 0,
    CAMP_SPRITE_COMMAND_ICONS = 5,
    CAMP_SPRITE_SELECTED_ICON = 13,
    CAMP_SPRITE_SELECTED_GLOW = 14
};

// These menu states draw their current row in the normal list rather than in the highlight pass.
static __inline bool campCommandUsesOrdinaryLayer(s32 state)
{
    return state == 3 || state == 33 || state == 34;
}

// Draw a command's icon and label, dimmed when one of its hide flags is set.
static void campDrawCommandIcon(u32 command, s32 x, s32 y, s32 priority, f32 alpha)
{
    const CampComRecord *record = FUN_002e26c4(command);
    u32 icon = 0;
    u32 label = 0;
    campCommandGetImages(command, &icon, &label, 0);
    if (idListAnyValid(record))
        efctSetSpeed(0.5f);
    texDrawTableEntryAtStoredOrigin(2, 20, icon, x, y, priority);
    texDrawTableEntryAtStoredOrigin(2, 20, label, x, y, priority);
    efctSetSpeed(alpha);
}

// Draw the camp command list and the overlay for a command whose selection animation has settled.
extern "C" void campDrawCommandMenu(void)
{
    CampStateA *camp = g_camp;
    bool suppressSelection = false;
    f32 alpha = 1.0f;
    u32 selectedIcon = 0;
    u32 selectedLabel = 0;
    if ((!uniteStateIsDone() && !gameFlagIsSet(0x418)) ||
        (!uniteStateIsDone() && gameFlagIsSet(0x453) && !gameFlagIsSet(0x425)) ||
        (!uniteStateIsDone() && !region9100IsClear()) ||
        uniteIsPhase26Active() ||
        (!uniteStateIsDone() && !gameFlagIsSet(0x459) && uniteRequestGet() == 25 && !uniteNotBusy())) {
        suppressSelection = true;
    }

    const s32 originX = vec2GetXInt(&camp->sprites[CAMP_SPRITE_MENU_ORIGIN]);
    const s32 originY = vec2GetYInt(&camp->sprites[CAMP_SPRITE_MENU_ORIGIN]);
    efctSetSpeed(vec2GetSpeed(&camp->sprites[CAMP_SPRITE_MENU_ORIGIN]));
    if (abs(originX) >= 320)
        return;

    texDrawTableEntryAtStoredOrigin(2, 20, 0, originX, originY, 201);
    texDrawTableEntryAtStoredOrigin(2, 20, 1, originX, originY, 201);
    efctSetSpeed(alpha);
    const s32 count = widgetSubCallIfVisible(&camp->menuGrid);
    for (s32 row = 0; row < count; row++) {
        UiSpriteState *icon = &camp->sprites[CAMP_SPRITE_COMMAND_ICONS + row];
        s32 x = vec2GetXInt(icon);
        s32 y = vec2GetYInt(icon);
        efctSetSpeed(vec2GetSpeed(icon));
        if (listCursorGetRowOfChildIfUnblocked(&camp->menuGrid) == row && camp->unitSelectIndex == 3 &&
            !suppressSelection && vec2GetXInt(icon) == 0 && !campCommandUsesOrdinaryLayer(camp->state)) {
            continue;
        }

        const u32 command = dataTable15GetUnlockedEntryId(camp->menuGroup, row);
        const s32 evenLayout = 4 + (8 - count) / 2;
        const s32 oddLayout = 20 + (7 - count) / 2;
        const s32 layout = (count & 1) != 0 ? oddLayout : evenLayout;
        const TextureTableEntryIV *entry = asdTMTexTableEntryAt(20, layout + row);
        texDrawTableEntryAtStoredOrigin(2, 20, 34, entry->x + x, entry->y + y, 206);
        campDrawCommandIcon(command, entry->x + x, entry->y + y, 211, alpha);
        efctSetSpeed(vec2GetSpeed(icon));
        campDrawCommandNewMark(command, entry->x + x, entry->y + y, 216, 0);
        efctSetSpeed(alpha);
    }

    const s32 row = listCursorGetRowOfChildIfUnblocked(&camp->menuGrid);
    if (camp->unitSelectIndex != 3 || suppressSelection)
        return;
    if (vec2GetXInt(&camp->sprites[CAMP_SPRITE_COMMAND_ICONS + row]) != 0 || campCommandUsesOrdinaryLayer(camp->state))
        return;

    const s32 rowX = vec2GetXInt(&camp->sprites[CAMP_SPRITE_COMMAND_ICONS + row]);
    const s32 rowY = vec2GetYInt(&camp->sprites[CAMP_SPRITE_COMMAND_ICONS + row]);
    const f32 savedAlpha = alpha;
    alpha = vec2GetSpeed(&camp->sprites[CAMP_SPRITE_COMMAND_ICONS + row]);
    efctSetSpeed(alpha);
    s32 highlightX;
    s32 highlightY;
    if (recordGetModeForId(camp->touchRegions[row]) == 2) {
        highlightX = 0;
        highlightY = 0;
    } else {
        highlightX = vec2GetXInt(&camp->sprites[CAMP_SPRITE_SELECTED_ICON]);
        highlightY = vec2GetYInt(&camp->sprites[CAMP_SPRITE_SELECTED_ICON]);
    }
    const u32 command = dataTable15GetUnlockedEntryId(camp->menuGroup, listCursorGetRowOfChildIfUnblocked(&camp->menuGrid));
    s32 layout;
    if ((count & 1) == 0)
        layout = 12 + (8 - count) / 2;
    else
        layout = 27 + (7 - count) / 2;
    const TextureTableEntryIV *entry =
        asdTMTexTableEntryAt(20, listCursorGetRowOfChildIfUnblocked(&camp->menuGrid) + layout);
    efctSetSpeed(vec2GetSpeed(&camp->sprites[CAMP_SPRITE_SELECTED_GLOW]) * alpha);
    highlightX += rowX;
    highlightY += rowY;
    texDrawTableEntryAtStoredOrigin(2, 20, 60, entry->x + highlightX, entry->y + highlightY, 211);
    texDrawTableEntryAtStoredOrigin(2, 20, 61, entry->x + highlightX, entry->y + highlightY, 211);
    efctSetSpeed(alpha);
    texDrawTableEntryAtStoredOrigin(2, 20, 35, entry->x + highlightX, entry->y + highlightY, 216);
    if (camp->state == 6) {
        efctSetSpeed(vec2GetSpeed(&camp->sprites[CAMP_SPRITE_SELECTED_ICON]) * alpha);
        renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
        texDrawTableEntryAtStoredOrigin(2, 20, 35, entry->x + highlightX, entry->y + highlightY, 219);
        renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
        efctSetSpeed(alpha);
    }
    campCommandGetImages(command, &selectedIcon, &selectedLabel, 1);
    texDrawTableEntryAtStoredOrigin(2, 20, selectedIcon, entry->x + highlightX, entry->y + highlightY, 221);
    texDrawTableEntryAtStoredOrigin(2, 20, selectedLabel, entry->x + rowX, entry->y + rowY, 221);
    efctSetSpeed(vec2GetSpeed(&camp->sprites[CAMP_SPRITE_COMMAND_ICONS + row]));
    campDrawCommandNewMark(command, entry->x + highlightX, entry->y + highlightY, 226, 1);
    efctSetSpeed(savedAlpha);
}
