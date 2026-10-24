/* NON_MATCHING: retail tail-calls ptrListRemoveClearOwner conditionally from inside the release step and picks the transition object through a compare chain with shared stores; the step logic is the same. */
#include "common.h"

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
    /* 0x164 */ s16 first;
    /* 0x166 */ s16 second;
    /* 0x168 */ s16 firstEnd;
    /* 0x16A */ s16 secondEnd;
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
extern u32 g_handleRegistry;

TransitionPlayer *gameGetPlayerData(void);
void *gameFlagsGetBlock(void);
s32 dataTable2EType1Count(void);
s32 dataTable2EType0Count(void);
TransitionEntry *dataTable2EType1GetEntry(s32 index);
TransitionEntry *dataTable2EType0GetEntry(s32 index);
void ptrListRemoveClearOwner(u32 registry);
void handleRegistryRegisterObject(u32 registry, TransitionPart *part);

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
                g_gameState.modeB = g_gameState.overrideB == -1 ? entry->mode : g_gameState.overrideB;
                break;
            }
        }
        for (s32 i = 0; i < dataTable2EType0Count(); i++) {
            TransitionEntry *entry = dataTable2EType0GetEntry(i);

            if (entry->id == player->idA) {
                s32 mode = g_gameState.overrideA == -1 ? entry->mode : g_gameState.overrideA;

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
            ptrListRemoveClearOwner(g_handleRegistry);
        }
        if (g_lmapScene->previous != NULL && g_lmapScene->previous->part != NULL) {
            ptrListRemoveClearOwner(g_handleRegistry);
        }
        g_lmapScene->step++;
        return 0;
    case 2:
        g_lmapScene->step = 3;
        return 0;
    case 3: {
        s32 mode = g_gameState.modeA;

        if (mode >= 0 && mode <= 3) {
            scene->current = g_gameState.objects[mode];
        }
        TransitionPart *part = scene->current->part;

        handleRegistryRegisterObject(g_handleRegistry, part);
        part->flags |= 3;
        scene = g_lmapScene;
        scene->first = 0;
        scene->second = 0;
        scene->firstEnd = -1;
        scene->secondEnd = -1;
        scene->step = 0;
        scene->previous = g_gameState.objects[0];
        part = scene->previous->part;
        handleRegistryRegisterObject(g_handleRegistry, part);
        part->flags |= 3;
        scene = g_lmapScene;
        scene->first = 0;
        scene->second = 0;
        scene->firstEnd = -1;
        scene->secondEnd = -1;
        scene->step = 0;
        return 1;
    }
    default:
        return 0;
    }
}

}
