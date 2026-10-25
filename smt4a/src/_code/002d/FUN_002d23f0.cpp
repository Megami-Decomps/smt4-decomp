/* NON_MATCHING: canonical game-flag calls match, but final seen-bit update folds its shift into ORR and uses different quotient/remainder registers. */
#include "common.h"
#include "gamedata/GameFlags.h"

extern "C" {

typedef struct FlagBlock {
    /* 0x000 */ u8 unk000[0x808];
    /* 0x808 */ u32 words[1]; /* one bit per flag */
} FlagBlock;

typedef struct Table23Entry {
    /* 0x00 */ u8 unk00[0x1F];
    /* 0x1F */ s8 category; /* 100 and up: entries that also raise a game flag */
} Table23Entry;

FlagBlock *gameFlagsGetBlock(void);
Table23Entry *dataTable23Sub0GetEntry(s32 index);


/* Marks data table 0x23 entry `index` as seen and raises the game flag its category stands for. */
void FUN_002d23f0(s32 index)
{
    FlagBlock *block = gameFlagsGetBlock();
    Table23Entry *entry = dataTable23Sub0GetEntry(index);

    if (entry != NULL && entry->category >= 100) {
        switch (entry->category) {
        case 0x65:
            gameFlagSetValue(0x493, 1, 1);
            break;
        case 0x66:
            gameFlagSetValue(0x494, 1, 1);
            break;
        case 0x67:
            gameFlagSetValue(0x495, 1, 1);
            break;
        case 0x68:
            gameFlagSetValue(0x496, 1, 1);
            break;
        case 0x69:
            gameFlagSetValue(0x497, 1, 1);
            break;
        case 0x6a:
            gameFlagSetValue(0x498, 1, 1);
            break;
        case 0x6b:
            gameFlagSetValue(0x499, 1, 1);
            break;
        case 0x6c:
            gameFlagSetValue(0x4cd, 1, 1);
            break;
        case 0x6d:
            gameFlagSetValue(0x4ce, 1, 1);
            break;
        case 0x6e:
            gameFlagSetValue(0x4cf, 1, 1);
            break;
        case 0x6f:
            gameFlagSetValue(0x4dc, 1, 1);
            break;
        case 0x70:
            gameFlagSetValue(0x4dd, 1, 1);
            break;
        case 0x71:
            gameFlagSetValue(0x4de, 1, 1);
            break;
        case 0x72:
            gameFlagSetValue(0x4df, 1, 1);
            break;
        case 0x73:
            gameFlagSetValue(0x4e0, 1, 1);
            break;
        case 0x74:
            gameFlagSetValue(0x4e1, 1, 1);
            break;
        case 0x75:
            gameFlagSetValue(0x4e2, 1, 1);
            break;
        case 0x76:
            gameFlagSetValue(0x4e3, 1, 1);
            break;
        case 0x77:
            gameFlagSetValue(0x4e4, 1, 1);
            break;
        case 0x78:
            gameFlagSetValue(0x4e5, 1, 1);
            break;
        case 0x79:
            gameFlagSetValue(0x4e6, 1, 1);
            break;
        case 0x7a:
            gameFlagSetValue(0x4e7, 1, 1);
            break;
        case 0x7b:
            gameFlagSetValue(0x4e8, 1, 1);
            break;
        }
    }
    if (index >= 0) {
        block->words[index / 32] |= 1 << (index % 32);
    }
}

}
