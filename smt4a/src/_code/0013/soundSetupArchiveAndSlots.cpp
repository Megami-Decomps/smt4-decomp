#include "common.h"

/* One of the two persistent sound stream records. */
struct SoundStreamRecord {
    /* 0x00 */ u32 state;
    /* 0x04 */ u8 unk04[0x1c];
};

/* The block that starts with the shared resource flag byte. */
struct ResourceSharedState {
    /* 0x00 */ u8 flag;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 unk04;
};

extern "C" {
void *jyoucyuGetTableEntry(u32 index);
void FUN_00142b84(s32 value);
void FUN_0013df74(const char *path, s32 arg1, s32 arg2);
void *asdSoundGetStringBlock(void);
u32 asdSoundHandleListAdd(s32 id, u8 flag);
u32 asdSoundSlotBCreate(u32 index, u32 heapSize);
u32 asdSoundSlotAActivate(u32 index, s32 heapSize);
u32 FUN_00154890(u32 value);
void rt_aeabi_memclr(void *buffer, u32 size);

extern ResourceSharedState g_resourceSharedFlag;
extern SoundStreamRecord DAT_0061951c[2];

/* Opens the sound archive, creates the sound slots and resets both stream records. */
void soundSetupArchiveAndSlots(void)
{
    if (jyoucyuGetTableEntry(1) == NULL) {
        FUN_00142b84(0);
        FUN_0013df74("rom:/snd/sdds4.bcsar", 1, 0);
        asdSoundGetStringBlock();
        asdSoundHandleListAdd(0, 1);
        asdSoundHandleListAdd(1, 1);
        asdSoundSlotBCreate(0, 0xaa000);
        asdSoundSlotBCreate(1, 0x1db000);
        asdSoundSlotBCreate(3, 0x2eb000);
        asdSoundSlotAActivate(0, 0);
        FUN_00154890(0);
        rt_aeabi_memclr(DAT_0061951c, sizeof(DAT_0061951c));
        g_resourceSharedFlag.unk04 = 0;
        DAT_0061951c[0].state = 0;
        DAT_0061951c[1].state = 1;
    }
}

} /* extern "C" */
