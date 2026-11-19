/* NON_MATCHING: same structure as Apocalypse's FUN_00217f14 (152 raw / 98 shape rows). Retail spills both hoisted
 * layout bases (sp+28/sp+32), which leaves fp for the command id inside the icon helper and in the highlight pass;
 * the build keeps the even base in fp and spills the id. The row position is in sl/r9 where the build has r9/sl,
 * and the highlight sums are made in place (r6/r7) where the build takes new registers. */
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "camp/CampMenuEntry.h"
#include "camp/CampState.h"
#include "camp/Unite/UniteWork.h"
#include "camp/RenderCtxTitle.h"
#include "shard/TextureDrawCall.h"
#include "ui/UiSpriteApi.h"
#include "util/BitsAndBytes.h"
#include <stdlib.h>

extern "C" {
u8 uniteFlagIsClear(void);
u8 ifTouchGetSelectionModeForRegion(s32 region);
}

// These menu states draw their current row in the normal list rather than in the highlight pass.
static __inline bool campCommandUsesOrdinaryLayer(s32 state)
{
    return state == 3 || state == 30 || state == 31;
}

// Draw a command's icon and label, dimmed when one of its hide flags is set.
static void campDrawCommandIcon(u32 command, s32 x, s32 y, s32 priority)
{
    const CampComRecord *record = FUN_00292844(command);
    u32 icon = 0;
    u32 label = 0;
    campCommandGetImages(command, &icon, &label, 0);
    if (idListAnyValid(record))
        efctSetSpeed(0.5f);
    texDrawTableEntryAtStoredOrigin(2, 29, icon, x, y, priority);
    texDrawTableEntryAtStoredOrigin(2, 29, label, x, y, priority);
    efctSetSpeed(1.0f);
}

// Draw the camp command list and the overlay for a command whose selection animation has settled.
extern "C" void campDrawCommandMenu(void)
{
    CampState *camp = g_camp;
    bool suppressSelection = false;
    u32 selectedIcon = 0;
    u32 selectedLabel = 0;
    if ((!FUN_0028f670() && !gameFlagIsSet(0x418)) ||
        (!FUN_0028f670() && gameFlagIsSet(0x453) && !gameFlagIsSet(0x425)) ||
        (!FUN_0028f670() && !uniteFlagIsClear())) {
        suppressSelection = true;
    }

    const s32 originX = vec2GetXInt(&camp->commands.menuOrigin);
    const s32 originY = vec2GetYInt(&camp->commands.menuOrigin);
    if (abs(originX) >= 320)
        return;

    texDrawTableEntryAtStoredOrigin(2, 29, 0, originX, originY, 201);
    texDrawTableEntryAtStoredOrigin(2, 29, 1, originX, originY, 201);
    const s32 count = FUN_0029e958(&camp->menuGrid);
    for (s32 row = 0; row < count; row++) {
        UiSpriteState *icon = &camp->commands.commandIcons[row];
        s32 x = vec2GetXInt(icon);
        s32 y = vec2GetYInt(icon);
        if (objectPartRunUnlessLocked(&camp->menuGrid) == row && camp->unitSelectIndex == 3 && !suppressSelection &&
            vec2GetXInt(icon) == 0 && !campCommandUsesOrdinaryLayer(camp->state)) {
            continue;
        }

        const u32 command = dataTable15GetUnlockedEntryId(camp->menuGroup, row);
        const s32 evenLayout = 4 + (8 - count) / 2;
        const s32 oddLayout = 20 + (7 - count) / 2;
        const s32 layout = (count & 1) != 0 ? oddLayout : evenLayout;
        const TextureTableEntryIV *entry = asdTMTexTableEntryAt(29, layout + row);
        texDrawTableEntryAtStoredOrigin(2, 29, 34, entry->x + x, entry->y + y, 206);
        campDrawCommandIcon(command, entry->x + x, entry->y + y, 211);
    }

    const s32 row = objectPartRunUnlessLocked(&camp->menuGrid);
    if (camp->unitSelectIndex != 3 || suppressSelection)
        return;
    if (vec2GetXInt(&camp->commands.commandIcons[row]) != 0 || campCommandUsesOrdinaryLayer(camp->state))
        return;

    const s32 rowX = vec2GetXInt(&camp->commands.commandIcons[row]);
    const s32 rowY = vec2GetYInt(&camp->commands.commandIcons[row]);
    s32 highlightX;
    s32 highlightY;
    if (ifTouchGetSelectionModeForRegion(camp->touch.commandRegions[row]) == 2) {
        highlightX = 0;
        highlightY = 0;
    } else {
        highlightX = vec2GetXInt(&camp->commands.selectedIcon);
        highlightY = vec2GetYInt(&camp->commands.selectedIcon);
    }
    const u32 command = dataTable15GetUnlockedEntryId(camp->menuGroup, objectPartRunUnlessLocked(&camp->menuGrid));
    s32 layout;
    if ((count & 1) == 0)
        layout = 12 + (8 - count) / 2;
    else
        layout = 27 + (7 - count) / 2;
    const TextureTableEntryIV *entry = asdTMTexTableEntryAt(29, objectPartRunUnlessLocked(&camp->menuGrid) + layout);
    highlightX += rowX;
    highlightY += rowY;
    texDrawTableEntryAtStoredOrigin(2, 29, 35, entry->x + highlightX, entry->y + highlightY, 216);
    if (camp->state == 6) {
        efctSetSpeed(vec2GetSpeed(&camp->commands.selectedIcon));
        RenderCtx *context = g_titleScene;
        renderCtxSetB(context, packNibblesAndByte(6, 1, 0));
        texDrawTableEntryAtStoredOrigin(2, 29, 35, entry->x + highlightX, entry->y + highlightY, 219);
        context = g_titleScene;
        renderCtxSetB(context, packNibblesAndByte(6, 7, 0));
        efctSetSpeed(1.0f);
    }
    campCommandGetImages(command, &selectedIcon, &selectedLabel, 1);
    texDrawTableEntryAtStoredOrigin(2, 29, selectedIcon, entry->x + highlightX, entry->y + highlightY, 221);
    texDrawTableEntryAtStoredOrigin(2, 29, selectedLabel, entry->x + rowX, entry->y + rowY, 221);
}
