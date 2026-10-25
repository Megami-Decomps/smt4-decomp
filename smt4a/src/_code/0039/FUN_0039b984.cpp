#include "gamedata/DataTable.h"
#include "util/CalleeContracts.h"

struct SoundRecord {
    u16 id;          // 0x00
    u8 unk02[0x5C];  // 0x02
    u16 value;       // 0x5E
    u8 unk60[0x1C];  // 0x60
};

extern "C" {

extern void *g_aocSystem;

s32 FUN_00470bdc(void *system, s32 id);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const u16 *, const u16 *));
s32 arrayCompareUnsignedHalfword(const u16 *left, const u16 *right);

/* Unless the add-on content already provides it, finds record `id` of data table 0x45 and sets the value of id 0x46's record to 0x26C. */
void FUN_0039b984(s32 id)
{
    if (FUN_00470bdc(g_aocSystem, id) == 0) {
        void *section = dataTableGet(0x45, 0);
        const void *entries = dataTableGetEntries(section);
        u32 count = dataTableGetCount(section);
        SoundRecord key;

        key.id = id;
        SoundRecord *found = (SoundRecord *)libc_bsearch(&key, entries, count, sizeof(SoundRecord), arrayCompareUnsignedHalfword);
        if (id == 0x46) {
            found->value = 0x26C;
        }
    }
}

} /* extern "C" */
