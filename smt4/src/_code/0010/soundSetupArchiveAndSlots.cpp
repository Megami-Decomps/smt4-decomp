#include "common.h"

/* One of the two persistent sound stream records. */
struct SoundStreamRecord {
    /* 0x00 */ u32 state;
    /* 0x04 */ u8 unk04[0x1c];
};

/* The block that starts with the title configuration mode flag. */
struct TitleConfigState {
    /* 0x00 */ u8 modeFlag;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 unk04;
};

extern "C" {
void *jyoucyuGetTableEntry(u32 index);
void asdSoundInitialize(s32 auxiliaryMode);
void FUN_001096ec(const char *path, s32 arg1, s32 arg2);
void *asdSoundGetStringBlock(void);
u32 FUN_0010d3f8(u32 id);
s32 asdSoundSlotBCreate(u32 index, u32 heapSize);
s32 asdSoundSlotAActivate(u32 index, s32 heapSize);
u32 FUN_00119da8(u32 value);
void rt_aeabi_memclr(void *buffer, u32 size);

extern TitleConfigState g_titleConfigModeFlag;
extern SoundStreamRecord DAT_004c53c4[2];

/* Opens the sound archive (the development path when table entry 0 exists), creates the sound slots and resets both stream records. */
void soundSetupArchiveAndSlots(void)
{
    if (jyoucyuGetTableEntry(1) == NULL) {
        asdSoundInitialize(0);
        if (jyoucyuGetTableEntry(0) != NULL) {
            FUN_001096ec("C:/SMT4/XRD686/sdds4data/snd/sdds4.bcsar", 1, 0);
        } else {
            FUN_001096ec("rom:/snd/sdds4.bcsar", 1, 0);
        }
        asdSoundGetStringBlock();
        FUN_0010d3f8(0);
        FUN_0010d3f8(1);
        asdSoundSlotBCreate(0, 0xd0000);
        asdSoundSlotBCreate(1, 0x220000);
        asdSoundSlotBCreate(2, 0x80000);
        asdSoundSlotBCreate(3, 0x280000);
        asdSoundSlotAActivate(0, 0);
        FUN_00119da8(0);
        rt_aeabi_memclr(DAT_004c53c4, sizeof(DAT_004c53c4));
        g_titleConfigModeFlag.unk04 = 0;
        DAT_004c53c4[0].state = 0;
        DAT_004c53c4[1].state = 1;
    }
}

} /* extern "C" */
