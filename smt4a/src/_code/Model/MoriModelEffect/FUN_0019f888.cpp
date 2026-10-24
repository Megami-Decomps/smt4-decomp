/* NON_MATCHING: readable std::vector rewrite is 4 rows short of retail; retail spills the table pointer and entry count to the stack (sp 20 vs 12) and orders the loop differently. */
#include "common.h"
#include <vector>

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
    u32 data;       // 0x0c
};

struct MoriModelEffect {
    u8 unk00[4];
    AtbcCursor* table;                      // 0x04
    s32 keyCount;                           // 0x08
    std::vector<ModelEffectKey*> keys;      // 0x0c
};

extern "C" {

void* FUN_00178b04(u32 size, const char* file, u32 line);
s32 asdAtbcGetEntryCount(AtbcCursor* table);
void FUN_001ad70c(AtbcCursor* table, s32 index);
u32 FUN_001ad5d8(AtbcCursor* table);
void FUN_001abbc4(void);

// Rebuilds the list of effect keys from every entry of the model's ATBC table.
void FUN_0019f888(MoriModelEffect* effect)
{
    AtbcCursor* table = effect->table;
    effect->keys.clear();
    s32 entryCount = asdAtbcGetEntryCount(table);
    effect->keyCount = 0;
    for (s32 entry = 0; entry < entryCount; entry++) {
        FUN_001ad70c(table, entry);
        u32 index = table->first;
        u32 key = 0xffffffff;
        if ((table->flags & 1) == 0) key = table->key;
        for (; (s32)index <= (s32)table->last; index++) {
            ModelEffectKey* k = static_cast<ModelEffectKey*>(
                FUN_00178b04(0x10, "c:\\SMT4F\\SMT4F\\sdd4\\program\\Model\\MoriModelEffect.cpp", 0x6f));
            if (k != NULL) {
                k->flags = 0;
                k->key = 0xffffffff;
                k->index = 0;
                k->data = 0;
            }
            u32 data = FUN_001ad5d8(table);
            FUN_001abbc4();
            k->data = data;
            k->index = index;
            k->flags = table->flags;
            k->key = key;
            effect->keys.push_back(k);
            effect->keyCount++;
        }
    }
}

} /* extern "C" */
