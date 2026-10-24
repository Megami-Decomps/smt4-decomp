#include "common.h"

struct NameRecord {
    f32 values[8];  // 0x00
    u32 words[3];   // 0x20
    u32 last;       // 0x2C
};

struct NameRecordSet {
    u8 unk00[0x14];       // 0x00
    NameRecord *records;  // 0x14
};

struct NameLookupOwner {
    u8 unk000[0x108];         // 0x000
    NameRecordSet *set;       // 0x108
    u8 unk10c[0x104];         // 0x10C
    u8 *index;                // 0x210
};

extern "C" {

s32 wstrlen(const u16 *text);
u32 FUN_001a7a20(void *index, const u16 *text, s32 length);

/* Finds the record whose name matches `name` and copies it to `out`; returns whether it exists. */
bool FUN_003fda64(NameLookupOwner *owner, const u16 *name, NameRecord *out)
{
    u8 *index = owner->index + 0x70;
    u32 found = FUN_001a7a20(index + 4, name, wstrlen(name));

    if (found == 0xFFFF) {
        return false;
    }
    *out = owner->set->records[found];
    return true;
}

} /* extern "C" */
