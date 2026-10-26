/* NON_MATCHING: recovered selected EPL payload, cloned-data argument/return, allocation-failure lifetime, and source path; key/vector initialization and entry-loop register scheduling differ. */
#include "common.h"
#include <vector>
#include <new>
#include "shard/S3AsdModelAttr.h"

// Cursor over an animation table (ATBC): select an entry, then read its range.
struct AtbcCursor {
    u16 first;      // 0x00
    u16 last;       // 0x02
    u8 unk04[8];
    u32 flags;      // 0x0c, bit 0: no key
    u32 key;        // 0x10
};

// One effect key of the model effect list.
struct ModelEffectKey {
    u32 key;        // 0x00
    u32 flags;      // 0x04
    u32 index;      // 0x08
    u32 *data;      // 0x0c: cloned effect part list

    ModelEffectKey()
    {
        flags = 0;
        key = 0xffffffff;
        index = 0;
        data = NULL;
    }
};

struct MoriModelEffect {
    u8 unk00[4];
    AsdAtbcHeader* table;                    // 0x04
    s32 keyCount;                           // 0x08
    std::vector<ModelEffectKey*> keys;      // 0x0c
};

extern "C" {

void* FUN_00178b04(u32 size, const char* file, u32 line);
s32 asdAtbcGetEntryCount(AsdAtbcHeader* table);
void* FUN_001ad70c(const AsdAtbcHeader* table, s32 index);
u8* FUN_001ad5d8(u8* entry);
u32* FUN_001abbc4(u32* source);

// Rebuilds the list of effect keys from every entry of the model's ATBC table.
void FUN_0019f888(MoriModelEffect* effect)
{
    AsdAtbcHeader* table = effect->table;
    effect->keys.clear();
    s32 entryCount = asdAtbcGetEntryCount(table);
    effect->keyCount = 0;
    for (s32 entry = 0; entryCount > entry; entry++) {
        AtbcCursor* cursor = static_cast<AtbcCursor*>(FUN_001ad70c(table, entry));
        u32 index = cursor->first;
        u32 key = 0xffffffff;
        if ((cursor->flags & 1) == 0) key = cursor->key;
        for (; (s32)index <= (s32)cursor->last; index++) {
            void *memory = FUN_00178b04(sizeof(ModelEffectKey),
                "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelEffect.cpp", 0x6f);
            // The retail path leaves the key pointer uninitialized if allocation fails.
            ModelEffectKey *k;
            if (memory != NULL)
                k = new (memory) ModelEffectKey();
            k->data = FUN_001abbc4(reinterpret_cast<u32*>(FUN_001ad5d8(reinterpret_cast<u8*>(cursor))));
            k->index = index;
            k->flags = cursor->flags;
            k->key = key;
            effect->keys.push_back(k);
            effect->keyCount++;
        }
    }
}

} /* extern "C" */
