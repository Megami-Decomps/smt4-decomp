/* NON_MATCHING: retail spills the highlight-suppression flag; the row-layout loop and
 * render-state changes also differ in register allocation and argument scheduling. */
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
    const s32 distanceFromCenter = abs(originX);
    if (distanceFromCenter >= 320)
        return;

    const u32 textureTable = 29;
    texDrawTableEntryAtStoredOrigin(2, textureTable, 0, originX, originY, 201);
    texDrawTableEntryAtStoredOrigin(2, textureTable, 1, originX, originY, 201);
    const s32 count = FUN_0029e958(&camp->menuGrid);
    if (count > 0) {
        const s32 layoutByParity[2] = { (8 - count) / 2 + 4, (7 - count) / 2 + 20 };
        s32 row = 0;
        do {
            UiSpriteState *icon = &camp->commands.commandIcons[row];
            s32 x = vec2GetXInt(icon);
            s32 y = vec2GetYInt(icon);
            if (objectPartRunUnlessLocked(&camp->menuGrid) == row && camp->unitSelectIndex == 3 && !suppressSelection &&
                vec2GetXInt(icon) == 0 && !campCommandUsesOrdinaryLayer(camp->state)) {
                ++row;
                continue;
            }

            const u32 command = dataTable15GetUnlockedEntryId(camp->menuGroup, row);
            const s32 layout = layoutByParity[count & 1] + row;
            const TextureTableEntryIV *entry = asdTMTexTableEntryAt(textureTable, layout);
            texDrawTableEntryAtStoredOrigin(2, textureTable, 34, entry->x + x, entry->y + y, 206);
            y += entry->y;
            x += entry->x;
            const CampComRecord *record = FUN_00292844(command);
            u32 iconId = 0;
            u32 labelId = 0;
            FUN_002ccc28(command, &iconId, &labelId, 0);
            if (idListAnyValid(record))
                efctSetSpeed(0.5f);
            texDrawTableEntryAtStoredOrigin(2, textureTable, iconId, x, y, 211);
            texDrawTableEntryAtStoredOrigin(2, textureTable, labelId, x, y, 211);
            efctSetSpeed(1.0f);
            ++row;
        } while (row < count);
    }

    const s32 row = objectPartRunUnlessLocked(&camp->menuGrid);
    if (camp->unitSelectIndex != 3 || suppressSelection)
        return;
    UiSpriteState *icon = &camp->commands.commandIcons[row];
    if (vec2GetXInt(icon) != 0 || campCommandUsesOrdinaryLayer(camp->state))
        return;

    const s32 rowX = vec2GetXInt(icon);
    const s32 rowY = vec2GetYInt(icon);
    s32 highlightX;
    s32 highlightY;
    if (ifTouchGetSelectionModeForRegion(camp->touch.commandRegions[row]) == 2) {
        highlightX = 0;
        highlightY = 0;
    } else {
        highlightX = vec2GetXInt(&camp->commands.selectedIcon);
        highlightY = vec2GetYInt(&camp->commands.selectedIcon);
    }
    const s32 selectedRow = objectPartRunUnlessLocked(&camp->menuGrid);
    const u32 command = dataTable15GetUnlockedEntryId(camp->menuGroup, selectedRow);
    const s32 layout = (count & 1) != 0 ? 27 + (7 - count) / 2 : 12 + (8 - count) / 2;
    const TextureTableEntryIV *entry = asdTMTexTableEntryAt(textureTable, objectPartRunUnlessLocked(&camp->menuGrid) + layout);
    highlightY += rowY;
    highlightX += rowX;
    texDrawTableEntryAtStoredOrigin(2, textureTable, 35, entry->x + highlightX, entry->y + highlightY, 216);
    if (camp->state == 6) {
        efctSetSpeed(vec2GetSpeed(&camp->commands.selectedIcon));
        RenderCtx *context = g_titleScene;
        renderCtxSetB(context, packNibblesAndByte(6, 1, 0));
        texDrawTableEntryAtStoredOrigin(2, textureTable, 35, entry->x + highlightX, entry->y + highlightY, 219);
        context = g_titleScene;
        renderCtxSetB(context, packNibblesAndByte(6, 7, 0));
        efctSetSpeed(1.0f);
    }
    FUN_002ccc28(command, &selectedIcon, &selectedLabel, 1);
    texDrawTableEntryAtStoredOrigin(2, textureTable, selectedIcon, entry->x + highlightX, entry->y + highlightY, 221);
    texDrawTableEntryAtStoredOrigin(2, textureTable, selectedLabel, entry->x + rowX, entry->y + rowY, 221);
}
