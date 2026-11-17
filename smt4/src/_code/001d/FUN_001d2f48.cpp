#include "common.h"
#include "game/GameState.h"

struct DepartingEnemy {
    /* 0x000 */ u8 active;
    /* 0x001 */ u8 unk001[0x7C];
    /* 0x07D */ u8 locked;
    /* 0x07E */ u8 unk07E[6];
    /* 0x084 */ s32 state;
    /* 0x088 */ u32 timer;
    /* 0x08C */ u8 unk08C[0xE8];
    /* 0x174 */ s32 kind;
    /* 0x178 */ u8 unk178[8];
};
struct DepartingEnemyTable {
    /* 0x0000 */ u8 unk0000[0x34];
    /* 0x0034 */ DepartingEnemy enemies[32];
    /* 0x3034 */ u8 unk3034[8];
    /* 0x303C */ s32 activeCount;
};

extern "C" {

extern DepartingEnemyTable *g_mapEnemy;

/* Clears departure interpolation and cancels eligible active enemy states. */
void FUN_001d2f48(void)
{
    s32 index;
    DepartingEnemyTable *table = g_mapEnemy;
    const f32 resetValue = 0.0f;
    g_gameState.event.encounterSourceActive = 0;
    g_gameState.event.encounterSourcePosition.x = resetValue;
    g_gameState.event.encounterSourcePosition.y = resetValue;
    g_gameState.event.encounterSourcePosition.z = resetValue;
    g_gameState.event.encounterSourceHeading = resetValue;
    g_gameState.event.encounterDelay = 0;
    g_gameState.event.encounterForced = 0;
    g_gameState.event.encounterApproach = 0;
    g_gameState.event.encounterBackAttack = 0;
    g_gameState.event.encounterPending = 0;
    g_gameState.event.encounterState = 0;
    g_gameState.event.encounterMarkerPosition.x = resetValue;
    g_gameState.event.encounterMarkerPosition.y = resetValue;
    g_gameState.event.encounterMarkerPosition.z = resetValue;
    g_gameState.event.encounterMarkerHeading = resetValue;

    for (index = 0; index < 32; ++index) {
        DepartingEnemy &enemy = table->enemies[index];
        if (enemy.active != 0 && enemy.kind != 0 && enemy.kind < 11 &&
            enemy.locked == 0 && enemy.state == 16) {
            --table->activeCount;
            enemy.state = 11;
            enemy.timer = 0;
        }
    }
}

} /* extern "C" */
