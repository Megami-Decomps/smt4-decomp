/* NON_MATCHING: register allocation only: retail keeps &g_aocMain in r8 and &g_mapSelection in r7 (swapped here) and
 * extracts the closing bit from the flags register directly. */
#include "addon/aocMain.h"
#include "map/mapDepart.h"
#include "shard/W6_W6Match6_ContentTransition.h"
#include "battle/btlHelp.h"
#include "game/GameState.h"
#include "gamedata/NavigationSavePosition.h"

extern "C" {
void FUN_0028d664(AocScriptHolder *, u32);
s32 itemEventStartupUpdate(AocScriptHolder *);
void helpResourcesRelease(AocScriptHolder *);
void gameCopyPersistentSave();
void gameSynchronizeMapState(ContentTransition *);
void gameJumpRequestClear();
void buttonHelpSelectByProgress(ContentTransition *);
void __ARM_common_memcpy4_6(ShortJumpDestination *, const ShortJumpDestination *);
}

static inline void saveSourcePosition(ContentTransition *scene)
{
    MapJumpRequest position;
    position.kind = 3;
    position.map = scene->sourceMap;
    position.entrance = scene->sourceArea;
    saveSetNavigationPosition(&position);
    gameCopyPersistentSave();
}

extern "C" void aocTransitionUpdate(ContentTransition *scene)
{
    if (scene->step.phase == 0) {
        infoWinSetShown(0);
        FUN_0028d664(&g_aocMain->scriptHolder, 1);
        scene->step.phase = 1;
        return;
    }
    if (scene->step.phase != 1)
        return;
    s32 status = itemEventStartupUpdate(&g_aocMain->scriptHolder);
    if (status) {
        helpResourcesRelease(&g_aocMain->scriptHolder);
        if (g_mapSelection.selection.group >= 0) {
            saveSourcePosition(scene);
            ShortJumpDestination destination = {(u16)g_mapSelection.selection.group, (u16)g_mapSelection.selection.map,
                                                 (u16)g_mapSelection.selection.target};
            __ARM_common_memcpy4_6(&scene->destination, &destination);
            scene->flags |= 0x10;
            if (g_mapSelection.selection.group < 200) {
                scene->flags |= 0x100000;
                scene->flags |= 0x100;
            }
            scene->step.phase = 0;
            scene->step.state = 5;
        } else if (g_gameState.entryValue) {
            saveSourcePosition(scene);
            gameSynchronizeMapState(scene);
            scene->flags |= 0x40100;
            scene->step.phase = 0;
            scene->step.state = 5;
        } else {
            gameJumpRequestClear();
            infoWinSetShown(1);
            buttonHelpSelectByProgress(scene);
            scene->step.phase = 0;
            scene->step.state = 5;
        }
    }
    if (status != 2) {
        u32 flags = g_aocMain->flags;
        u32 closing = (flags & 0x10) >> 4;
        g_aocMain->flags = flags & ~0x70u;
        if (!closing) {
            return;
        }
    }
    scene->step.state = 15;
    scene->step.phase = 0;
}
