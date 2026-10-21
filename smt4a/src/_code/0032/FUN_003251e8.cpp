/* NON_MATCHING: compiler swaps the constant registers and emits separate state/progress stores instead of stm. */
#include "common.h"
extern "C" {
struct EntryState { u32 state; u32 progress; };
struct Entry {
    u8 active; u8 unk01[0x7C]; u8 blocked; u8 unk7E[6];
    EntryState state; u8 unk8C[0xF0]; s32 kind; u8 unk180[8];
};
extern struct { u8 unk00[0x34]; Entry entries[40]; } *g_mapEnemy;
/* Restarts eligible active entries that have no blocking request. */
void FUN_003251e8(void)
{
    for (s32 index = 0; index < 40; ++index) {
        Entry *entry = &g_mapEnemy->entries[index];
        if (entry->active != 0 && entry->kind != 0 && entry->kind < 11 &&
            entry->blocked == 0 &&
            (entry->state.state == 0 || entry->state.state == 4 || entry->state.state == 5)) {
            entry->state.state = 1;
            entry->state.progress = 0;
        }
    }
}
}
