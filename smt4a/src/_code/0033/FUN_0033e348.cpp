/* NON_MATCHING: code and control flow match retail; only the callee-saved register allocation differs (retail keeps the handle-registry address in r8 and the 0/-1 reset constants in r5/r7; the build uses r5 for the registry and r7/r8 for the constants). */
#include "common.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"

extern "C" {

/* An object the transition registers: its flags word is at 4. */
typedef struct TransitionPart {
    u32 unk00;
    u32 flags;
} TransitionPart;

typedef struct TransitionObject {
    u32 unk00;
    TransitionPart *part;
} TransitionObject;

/* The map scene's transition fields (only those used here). */
typedef struct TransitionScene {
    /* 0x000 */ u8 unk000[0x164];
    /* 0x164 */ s32 rangeStart;
    /* 0x168 */ s32 rangeEnd;
    /* 0x16C */ s32 step;
    /* 0x170 */ TransitionObject *current;
    /* 0x174 */ u8 unk174[0x10];
    /* 0x184 */ TransitionObject *previous;
} TransitionScene;

/* The slice of the game state the transition reads and writes. */
typedef struct TransitionState {
    /* 0x000 */ u8 unk000[0x24C];
    /* 0x24C */ s32 modeA;
    /* 0x250 */ s32 modeB;
    /* 0x254 */ u8 unk254[0x2C4];
    /* 0x518 */ TransitionObject *objects[4];
    /* 0x528 */ u8 unk528[0x144];
    /* 0x66C */ s32 overrideA;
    /* 0x670 */ s32 overrideB;
} TransitionState;

/* A table entry: the id it matches and the mode it selects. */
typedef struct TransitionEntry {
    s16 id;
    s16 mode;
} TransitionEntry;

typedef struct TransitionPlayer {
    u16 idA;
    u8 unk02[6];
    u16 idB;
} TransitionPlayer;

extern TransitionScene *g_lmapScene;
extern TransitionState g_gameState;
extern void *g_handleRegistry;

TransitionPlayer *gameGetPlayerData(void);
void *gameFlagsGetBlock(void);
s32 dataTable2EType1Count(void);
s32 dataTable2EType0Count(void);
TransitionEntry *dataTable2EType1GetEntry(s32 index);
TransitionEntry *dataTable2EType0GetEntry(s32 index);
void handleRegistryRegisterObject(void *registry, TransitionPart *part);

/* Steps the map transition: picks the target modes (step 0), releases the old objects (1), and
 * (steps 2-3) registers the object for the chosen mode. Returns 1 once the transition is finished. */
u32 FUN_0033e348(void)
{
    TransitionPlayer *player = gameGetPlayerData();

    gameFlagsGetBlock();
    TransitionScene *scene = g_lmapScene;

    switch (scene->step) {
    case 0: {
        for (s32 i = 0; i < dataTable2EType1Count(); i++) {
            TransitionEntry *entry = dataTable2EType1GetEntry(i);

            if (entry->id == player->idB) {
                s32 override = g_gameState.overrideB;

                if (override == -1) {
                    g_gameState.modeB = entry->mode;
                } else {
                    g_gameState.modeB = override;
                }
                break;
            }
        }
        for (s32 i = 0; i < dataTable2EType0Count(); i++) {
            TransitionEntry *entry = dataTable2EType0GetEntry(i);

            if (entry->id == player->idA) {
                s32 mode = g_gameState.overrideA;

                if (mode == -1) {
                    mode = entry->mode;
                }

                if (g_gameState.modeA == mode) {
                    return 1;
                }
                g_gameState.modeA = mode;
                g_lmapScene->step++;
                return 0;
            }
        }
        return 1;
    }
    case 1:
        if (scene->current != NULL && scene->current->part != NULL) {
            ptrListRemoveClearOwner(g_handleRegistry, scene->current->part);
        }
        if (g_lmapScene->previous != NULL && g_lmapScene->previous->part != NULL) {
            ptrListRemoveClearOwner(g_handleRegistry, g_lmapScene->previous->part);
        }
        g_lmapScene->step++;
        break;
    case 2:
        g_lmapScene->step = 3;
        break;
    case 3: {
        switch (g_gameState.modeA) {
        case 0:
            scene->current = g_gameState.objects[0];
            break;
        case 1:
            scene->current = g_gameState.objects[1];
            break;
        case 2:
            scene->current = g_gameState.objects[2];
            break;
        case 3:
            scene->current = g_gameState.objects[3];
            break;
        }
        TransitionPart *part = scene->current->part;

        handleRegistryRegisterObject(g_handleRegistry, part);
        part->flags |= 3;
        scene = g_lmapScene;
        scene->rangeStart = 0;
        scene->rangeEnd = -1;
        scene->step = 0;
        scene->previous = g_gameState.objects[0];
        part = scene->previous->part;
        handleRegistryRegisterObject(g_handleRegistry, part);
        part->flags |= 3;
        scene = g_lmapScene;
        scene->rangeStart = 0;
        scene->rangeEnd = -1;
        scene->step = 0;
        return 1;
    }
    }
    return 0;
}

}
