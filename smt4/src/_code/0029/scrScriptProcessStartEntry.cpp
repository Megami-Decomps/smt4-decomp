#include "common.h"

struct ScriptEntryLocal {
    s8 name[0x18];               // 0x00
    u32 unk18;                   // 0x18
    u32 unk1C;                   // 0x1c
};

struct ScriptHeaderLocal {
    u8 unk00[8];                 // 0x00
    s32 entryCount;              // 0x08
};

struct ScriptProcessLocal {
    s8 name[0x18];               // 0x00
    u32 unk18;                   // 0x18
    u32 unk1C;                   // 0x1c
    u32 unk20;                   // 0x20
    u32 unk24;                   // 0x24
    u32 unk28;                   // 0x28
    u32 unk2C;                   // 0x2c
    u32 unk30;                   // 0x30
    u32 unk34;                   // 0x34
    u32 unk38;                   // 0x38
    u8 unk3C[0x70];              // 0x3c
    u8 unkAC[4];                 // 0xac
    ScriptHeaderLocal* header;   // 0xb0
    ScriptEntryLocal* entries;   // 0xb4
    u8 unkB8[0x10];              // 0xb8
    s32 entryIndex;              // 0xc8
    u32 unkCC;                   // 0xcc
    u32 unkD0;                   // 0xd0
};

extern "C" void memClear(void* destination, u32 size);

// Select a valid script entry, copy its name, and reset the process state.
extern "C" u32 scrScriptProcessStartEntry(ScriptProcessLocal* process, s32 entryIndex)
{
    if (entryIndex < 0 || entryIndex >= process->header->entryCount)
        return 0;

    for (u32 nameOffset = 0; ; ++nameOffset) {
        s8 character = process->entries[entryIndex].name[nameOffset];
        process->name[nameOffset] = character;
        if (character == 0)
            break;
    }

    u32 entryValue = process->entries[entryIndex].unk18;
    process->unk1C = 0;
    process->unk20 = 0;
    process->unk24 = 0;
    process->unk28 = 0;
    process->unk2C = 0;
    process->unk30 = 0;
    process->unk34 = 0;
    process->unk18 = entryValue;
    process->unk38 = 0;
    memClear(process->unk3C, 0x70);
    process->entryIndex = entryIndex;
    process->unkCC = 0;
    process->unkD0 = 0;
    return 1;
}
