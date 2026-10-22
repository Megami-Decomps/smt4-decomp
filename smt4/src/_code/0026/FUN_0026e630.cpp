/* NON_MATCHING: typed save stores let the compiler retain the block pointer; retail reloads the global block pointer before its final clamp store, with different register allocation. */
#include "shard/GameDataBlocks.h"

struct CounterSaveData {
    u8 unk0000[0x986c]; // 0x0000
    s32 total;           // 0x986c
    u32 current;         // 0x9870
};

// Accumulates the total and caps the spendable counter at 9999.
extern "C" void FUN_0026e630(s32 amount)
{
    CounterSaveData* save = reinterpret_cast<CounterSaveData*>(g_gameDataBlocks.saveBlock);
    save->total += amount;
    u32 value = save->current + amount;
    save->current = value;
    if (value > 9999) {
        value = 9999;
    }
    reinterpret_cast<CounterSaveData*>(g_gameDataBlocks.saveBlock)->current = value;
}
