/* NON_MATCHING: Retail push {r4, r5, r6, r7} differs from recovered push {r4, r5, r6, lr}. */
#include "common.h"

namespace {

struct MemoryEntryView {
    u32 unk00; // 0x00
    u32 unk04; // 0x04
    u32 unk08; // 0x08: zero marks a free entry
    u32 unk0C; // 0x0C
    u32 unk10; // 0x10
};

struct MemoryPoolView {
    MemoryEntryView* unk00; // 0x00: entry array
    u32 unk04;             // 0x04: allocated entry count
};

struct MemoryGlobalView {
    u8 unk00[0x18];        // 0x00
    MemoryPoolView* unk18; // 0x18
};

struct ObjectView {
    u32 unk00; // 0x00
    u32 unk04; // 0x04
    u32 unk08; // 0x08
    u32 unk0C; // 0x0C
    u32 unk10; // 0x10
    u32 unk14; // 0x14
    u32 unk18; // 0x18
};

inline MemoryEntryView* claimEntry(MemoryPoolView* pool)
{
    if (pool != 0 && pool->unk00 != 0) {
        for (s32 index = 0; index < 512; ++index) {
            MemoryEntryView* entry = &pool->unk00[index];
            if (entry->unk08 == 0) {
                entry->unk00 = 0;
                entry->unk04 = 0;
                entry->unk08 = index + 1;
                entry->unk0C = 0;
                entry->unk10 = 0;
                ++pool->unk04;
                return entry;
            }
        }
    }
    return 0;
}

} // namespace

extern "C" {
extern u8 g_asdMemory;
s32 FUN_0019c920(u32* state);
}

// Initialize the object, claim a pool entry, and initialize the embedded state.
extern "C" void FUN_00140728(ObjectView* object, u32 entryValue, u32 value)
{
    object->unk18 = value;
    object->unk00 = 0;
    object->unk04 = 0;
    object->unk08 = 0;
    object->unk0C = 0;
    object->unk10 = 0;
    object->unk14 = 0;

    MemoryGlobalView* memory = reinterpret_cast<MemoryGlobalView*>(&g_asdMemory);
    MemoryEntryView* entry = claimEntry(memory->unk18);
    entry->unk04 = value;
    entry->unk00 = entryValue;
    FUN_0019c920(&object->unk0C);
}
