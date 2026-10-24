#include "common.h"

/* The two player names at +0x8C of the save data: the first at +4, the second at +0x50. */
struct SaveNameSources {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 nameA[0x4C];
    /* 0x50 */ u8 nameB[0x12];
};

/* The name block at +0x27E8C of the save data: a copy of both names and layout values. */
struct SaveNameBlock {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u16 unk08;
    /* 0x0A */ u8 unk0A;
    /* 0x0B */ u8 unk0B;
    /* 0x0C */ u8 nameA[6];
    /* 0x12 */ u16 unk12;
    /* 0x14 */ u16 unk14;
    /* 0x16 */ u16 unk16;
    /* 0x18 */ u8 unk18[2];
    /* 0x1A */ u8 unk1A;
    /* 0x1B */ u8 unk1B;
    /* 0x1C */ u8 nameB[0x12];
    /* 0x2E */ u8 unk2E;
    /* 0x2F */ u8 unk2F;
};

struct SaveNamesView {
    /* 0x00000 */ u8 unk00000[0x8C];
    /* 0x0008C */ SaveNameSources sources;
    /* 0x000EE */ u8 unk000EE[0x27D9E];
    /* 0x27E8C */ SaveNameBlock names;
};

extern "C" {

struct GameDataBlocks {
    u32 unk00;
    SaveNamesView *save;
};

extern GameDataBlocks g_gameDataBlocks; /* 0x57f698 */
void FUN_002e59f8(const void *source, void *destination, u32 size);

/* Resets the save data's name block and copies the two player names into it. */
void saveNameBlockReset(void)
{
    SaveNamesView *save = g_gameDataBlocks.save;
    SaveNameBlock *names = &save->names;
    SaveNameSources *sources = &save->sources;

    names->unk00 = 0;
    names->unk04 = 0;
    names->unk08 = 0;
    names->unk0A = 0;
    names->unk0B = 0;
    FUN_002e59f8(sources->nameA, names->nameA, 0xE);
    names->unk12 = 0x1a4;
    names->unk14 = 0x21c;
    names->unk16 = 0x294;
    names->unk1A = 0;
    names->unk1B = 0;
    FUN_002e59f8(sources->nameB, names->nameB, 0x12);
    names->unk2E = 0;
    names->unk2F = 0;
}

} /* extern "C" */
