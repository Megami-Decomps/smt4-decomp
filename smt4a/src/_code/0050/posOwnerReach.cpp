#include "shard/Shard0050.h"

extern "C" {

typedef struct PosOwner {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u8 active;
    /* 0x0D */ u8 unk0D;
    /* 0x0E */ u8 unk0E;
    /* 0x0F */ u8 reached;
    /* 0x10 */ u8 unk10[0x40];
    /* 0x50 */ u8 block50[0x14];
    /* 0x64 */ u32 position;
    /* 0x68 */ u8 unk68[0x3A];
    /* 0xA2 */ u8 unkA2;
} PosOwner;

extern u32 _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(void);
extern void FUN_001d0b28(u32 a, u8 *block);

/* Marks the owner (at p - 0x44) as reached when its position lies in [low, high]. */
void posOwnerReach(u8 *member, u32 low, u32 high)
{
    PosOwner *owner = (PosOwner *)(member - 0x44);

    if (owner->active != 0 && low <= owner->position && owner->position <= high) {
        owner->reached = 1;
        if (owner->unkA2 != 0) {
            FUN_001d0b28(_ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(), owner->block50);
            owner->unkA2 = 0;
        }
        if (owner->unk0D != 0) {
            owner->unk0D = 0;
        }
    }
}

} /* extern "C" */
