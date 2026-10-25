/* NON_MATCHING: zero and scratch registers are exchanged; enemy state/timer stores do not combine into STM. */
#include "common.h"

struct DepartureGameState {
    /* 0x000 */ u8 unk000[0x17C];
    /* 0x17C */ u8 active;
    /* 0x17D */ u8 unk17D[3];
    /* 0x180 */ f32 position[4];
    /* 0x190 */ u32 unk190;
    /* 0x194 */ u16 id;
    /* 0x196 */ u8 unk196[2];
    /* 0x198 */ u8 flags[3];
    /* 0x19B */ u8 unk19B[5];
    /* 0x1A0 */ u8 pending;
    /* 0x1A1 */ u8 unk1A1[3];
    /* 0x1A4 */ u32 state;
    /* 0x1A8 */ f32 target[4];
};
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

extern DepartureGameState g_gameState;
extern DepartingEnemyTable *g_mapEnemy;

/* Clears departure interpolation and cancels eligible active enemy states. */
void FUN_001d2f48(void)
{
    DepartingEnemyTable *table = g_mapEnemy;
    g_gameState.active = 0;
    g_gameState.position[0] = 0.0f;
    g_gameState.position[1] = 0.0f;
    g_gameState.position[2] = 0.0f;
    g_gameState.position[3] = 0.0f;
    g_gameState.id = 0;
    g_gameState.flags[0] = 0;
    g_gameState.flags[1] = 0;
    g_gameState.flags[2] = 0;
    g_gameState.pending = 0;
    g_gameState.state = 0;
    g_gameState.target[0] = 0.0f;
    g_gameState.target[1] = 0.0f;
    g_gameState.target[2] = 0.0f;
    g_gameState.target[3] = 0.0f;
    for (s32 index = 0; index < 32; ++index) {
        DepartingEnemy *enemy = &table->enemies[index];
        if (enemy->active != 0 && enemy->kind != 0 && enemy->kind < 11 &&
            enemy->locked == 0 && enemy->state == 16) {
            --table->activeCount;
            enemy->state = 11;
            enemy->timer = 0;
        }
    }
}

} /* extern "C" */
