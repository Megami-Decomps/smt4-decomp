#include "shard/Shard0046.h"

extern "C" {

typedef struct VoiceSlot {
    /* 0x000 */ s32 voice;
    /* 0x004 */ u8 unk004[0x3C4];
} VoiceSlot;

typedef struct VoiceBank {
    /* 0x000 */ u8 unk000[0xD];
    /* 0x00D */ u8 registered;
    /* 0x00E */ u8 unk00E[0x36];
    /* 0x044 */ u8 block44[0x1C];
    /* 0x060 */ u32 unk60;
    /* 0x064 */ u8 unk064[0x1BC];
    /* 0x220 */ u32 count;
    /* 0x224 */ u8 unk224[8];
    /* 0x22C */ VoiceSlot slots[1];
} VoiceBank;

extern void FUN_00463894(u32 value);
extern void nw_snd_internal_driver_Voice_Stop(s32 voice);
extern u32 _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(void);
extern void FUN_001d0b28(u32 owner, u8 *other);

/* Stops every started voice slot (0x3C8 bytes each) and releases the driver registration. */
void voiceBankStop(VoiceBank *bank)
{
    u32 i;

    FUN_00463894(bank->unk60);
    for (i = 0; i < bank->count; i++) {
        if (bank->slots[i].voice != 0) {
            nw_snd_internal_driver_Voice_Stop(bank->slots[i].voice);
        }
    }
    if (bank->registered != 0) {
        FUN_001d0b28(_ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(), bank->block44);
        bank->registered = 0;
    }
}

} /* extern "C" */
