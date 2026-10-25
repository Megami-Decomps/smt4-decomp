/* NON_MATCHING: retained flag owner and navigation globals recovered; active-list clear loop, constant-one lifetime and register allocation differ. */
#include "common.h"
#include "gamedata/GameFlags.h"
#include "map/mapDepart.h"

// Navigation table (data table 0x49) entry: only the fields read here.
struct NaviEntry {
    s16 id;             // 0x00
    s16 requiredFlag;   // 0x02
    s16 forbiddenFlag;  // 0x04
    u8 unk06[2];
    u32 unlockFlag;     // 0x08
    u32 unlockedFlag;   // 0x0c
    u8 unk10[0x1e];
    s16 x;              // 0x2e
    s16 y;              // 0x30
    s16 z;              // 0x32
    s16 pitch;          // 0x34
    s16 yaw;            // 0x36
    u8 unk38[0x0c];
    u8 flags[6];        // 0x44
    u8 extra[2];        // 0x4a
};

struct NaviSlot {
    u8 entry;
    u8 pad[3];
};

struct GameFlagsBlock {
    u8 unk0000[0x158c];
    s32 currentNavi;        // 0x158c
    NaviSlot active[8];     // 0x1590
    s32 activeCount;        // 0x15b0
    u8 unk15b4[4];
    s32 changed0;           // 0x15b8
    s32 changed1;           // 0x15bc
};

extern "C" {

extern GameStateA g_gameState;

s32 FUN_003bf87c(void);
GameFlagsBlock* gameFlagsGetBlock(void);
s32 dataTable49Type1Count(void);
NaviEntry* dataTable49GetEntry(s32 index);
NaviEntry* dataTableGetEntry49(s32 index);
s32 gameFlagIsSet(s32 flag);

void naviMainSetFlagsAndActivate(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void navigationSetOrQueueRequest(s32 x, s32 y, s32 z, f32 pitch, f32 yaw);
s32 naviMainIsInactive(void);
void FUN_00314bf8(s32 id);

// Rebuilds the list of active navigation entries from the story flags and
// starts the first of them.
void FUN_00384e0c(void)
{
    s32 entryCount = FUN_003bf87c();
    s32 first = 0;
    GameFlagsBlock* block = gameFlagsGetBlock();
    s32 count = dataTable49Type1Count();
    for (s32 i = 0; i < count; i++) {
        NaviEntry* entry = dataTable49GetEntry(i);
        if (gameFlagIsSet(entry->unlockFlag) && !gameFlagIsSet(entry->unlockedFlag)) {
            gameFlagSetValue(entry->unlockedFlag, 1, 1);
        }
    }
    GameFlagsBlock *cleared = gameFlagsGetBlock();
    for (s32 i = 0; i < 8; i++) cleared->active[i].entry = 0;
    cleared->activeCount = 0;
    for (s32 i = 0; i < entryCount; i++) {
        NaviEntry* entry = dataTableGetEntry49(i);
        if (entry->id != 0 && (entry->requiredFlag == 0 || gameFlagIsSet(entry->requiredFlag)) &&
            (entry->forbiddenFlag == 0 || !gameFlagIsSet(entry->forbiddenFlag))) {
            if (first == 0) first = entry->id;
            GameFlagsBlock* flags = gameFlagsGetBlock();
            if (flags != NULL && flags->activeCount < 8) {
                flags->active[flags->activeCount].entry = i;
                flags->activeCount++;
            }
            entry = dataTableGetEntry49(i);
            naviMainSetFlagsAndActivate(entry->flags[0], entry->flags[1], entry->flags[2], entry->flags[3],
                                        entry->flags[4], entry->flags[5]);
            naviMainSetFlagsAndActivate(entry->extra[0], entry->extra[1], 0, 0, 0, 0);
            navigationSetOrQueueRequest(entry->x, entry->y, entry->z, (f32)entry->pitch, (f32)entry->yaw);
        }
    }
    GameFlagsBlock* current = gameFlagsGetBlock();
    s32 currentId = current != NULL ? current->currentNavi : 0;
    if (currentId != first) {
        block->changed0 = 1;
        g_gameState.navigation.naviRefresh = 1;
        block->changed1 = 1;
    }
    if (first != 0) {
        GameFlagsBlock *selected = gameFlagsGetBlock();
        if (selected != NULL)
            selected->currentNavi = first;
    }
    g_gameState.navigation.alternateNaviMap = 0;
    if (naviMainIsInactive() != 0) return;
    GameFlagsBlock* active = gameFlagsGetBlock();
    u8* firstSlot = NULL;
    if (active != NULL) firstSlot = &active->active[0].entry;
    FUN_00314bf8(dataTableGetEntry49(*firstSlot)->x);
}

} /* extern "C" */
