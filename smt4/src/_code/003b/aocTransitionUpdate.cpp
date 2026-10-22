/* NON_MATCHING: navigation aggregate zeroing, stack reuse and transition-tail predication differ; -O2 candidate. */
#include "addon/aocMain.h"
#include "map/mapDepart.h"
#include "shard/W6_W6Match6_ContentTransition.h"

struct JumpDestination { s32 map; u32 area, place; };
struct NavigationPosition {
    u8 kind, map, area, reserved;
    f32 x, y, z;
};
extern "C" {
extern AocMain *g_aocMain;
extern GameState g_gameState;
extern JumpDestination DAT_0049fd14;
void FUN_0022af9c(u32);
void FUN_0028d664(AocObjC *, u32);
s32 FUN_0027398c(AocObjC *);
void helpResourcesRelease(AocObjC *);
void saveSetNavigationPosition(const NavigationPosition *);
void gameCopyPersistentSave();
void gameSynchronizeMapState(ContentTransition *);
void gameJumpRequestClear();
void buttonHelpSelectByProgress(ContentTransition *);
void FUN_002bd808(ShortJumpDestination *, const ShortJumpDestination *);
}

static inline void saveSourcePosition(ContentTransition *scene)
{
    NavigationPosition position = {0};
    position.kind = 3;
    position.map = scene->sourceMap;
    position.area = scene->sourceArea;
    saveSetNavigationPosition(&position);
    gameCopyPersistentSave();
}

extern "C" void aocTransitionUpdate(ContentTransition *scene)
{
    if (scene->phase == 0) {
        FUN_0022af9c(0);
        FUN_0028d664(&g_aocMain->scriptHolder, 1);
        scene->phase = 1;
        return;
    }
    if (scene->phase != 1)
        return;
    s32 status = FUN_0027398c(&g_aocMain->scriptHolder);
    if (status) {
        helpResourcesRelease(&g_aocMain->scriptHolder);
        if (DAT_0049fd14.map >= 0) {
            saveSourcePosition(scene);
            ShortJumpDestination destination = {(u16)DAT_0049fd14.map, (u16)DAT_0049fd14.area,
                                                 (u16)DAT_0049fd14.place};
            FUN_002bd808(&scene->destination, &destination);
            scene->flags |= 0x10;
            if (DAT_0049fd14.map < 200)
                scene->flags |= 0x100100;
            scene->phase = 0;
            scene->state = 5;
        } else if (g_gameState.unk54) {
            saveSourcePosition(scene);
            gameSynchronizeMapState(scene);
            scene->flags |= 0x40100;
            scene->phase = 0;
            scene->state = 5;
        } else {
            gameJumpRequestClear();
            FUN_0022af9c(1);
            buttonHelpSelectByProgress(scene);
            scene->phase = 0;
            scene->state = 5;
        }
        if (status == 2) {
            scene->state = 15;
            scene->phase = 0;
            return;
        }
    }
    u32 flags = g_aocMain->flags;
    g_aocMain->flags = flags & ~0x70u;
    if (flags & 0x10) {
        scene->state = 15;
        scene->phase = 0;
    }
}
