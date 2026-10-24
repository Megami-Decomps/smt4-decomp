/* Sets the two halfword parameters of the entry with id `id` in the entry table. */
#include "common.h"

extern "C" {
struct TableEntry {
    /* 0x000 */ u8 unk000[0x12C];
    /* 0x12C */ s32 id;
    /* 0x130 */ u8 unk130[0x36];
    /* 0x166 */ u16 first;
    /* 0x168 */ u16 second;
    /* 0x16A */ u8 unk16a[0xE];
};

struct EntryTableInfo {
    /* 0x0 */ s32 unk0;
    /* 0x4 */ s32 count;
};

extern EntryTableInfo DAT_00447a28;
extern TableEntry DAT_004a1264[];

void entrySetParams(s32 id, u16 first, u16 second)
{
    for (s32 i = 0; i < DAT_00447a28.count; i++) {
        if (DAT_004a1264[i].id == id) {
            DAT_004a1264[i].first = first;
            DAT_004a1264[i].second = second;
            return;
        }
    }
}
}
