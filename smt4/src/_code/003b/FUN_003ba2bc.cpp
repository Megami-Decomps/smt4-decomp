/* NON_MATCHING: retail loads the second resource pair with two ldr and stores step/stepTimer (2, 0) with one strd; armcc here uses ldm (after two adds) and an add + stm. The linker-inlined scriptProcessSetMode now matches the mode stores. */
#include "common.h"
#include "shard/W6_W6Match8_BattleDebug.h"

#define UNK3BA2BC_FLAG_PENDING 0x10

/* An object FUN_00297060 builds from a resource pair. */
struct Unk3ba2bcPart {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ s32 mode;
};

struct Unk3ba2bcOwner {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ u32 flags;
    /* 0x024 */ u8 unk024[4];
    /* 0x028 */ s32 step;
    /* 0x02C */ s32 stepTimer;
    /* 0x030 */ u8 unk030[0xC];
    /* 0x03C */ u8 unk03C[6];
    /* 0x042 */ u8 unk042[0x5A];
    /* 0x09C */ u8 sprites[0xCBC];
    /* 0xD58 */ u8 loader[0x24];
    /* 0xD7C */ void *firstResourceA;
    /* 0xD80 */ void *firstResourceB;
    /* 0xD84 */ Unk3ba2bcPart *firstPart;
    /* 0xD88 */ void *secondResourceA;
    /* 0xD8C */ void *secondResourceB;
    /* 0xD90 */ Unk3ba2bcPart *secondPart;
};

extern "C" {

s32 stageAssetsLoaded(void);
s32 spriteTable2aIsLoaded(void *sprites);
Unk3ba2bcPart *FUN_00297060(void *resourceA, void *resourceB);
void FUN_002bd808(void *a, void *b);
void mikadoLoadSceneResources(Unk3ba2bcOwner *owner);
void scriptProcessSetMode(Unk3ba2bcPart *part, s32 mode);
void buttonHelpSelectByProgress(Unk3ba2bcOwner *owner);

/* Once everything is loaded, builds both parts and, if a start is pending, starts the owner. */
void FUN_003ba2bc(Unk3ba2bcOwner *owner)
{
    if (!FUN_003bbaa8(owner->loader) || !stageAssetsLoaded() ||
        !spriteTable2aIsLoaded(owner->sprites) || owner->firstResourceA == NULL ||
        owner->firstResourceB == NULL || owner->secondResourceA == NULL ||
        owner->secondResourceB == NULL) {
        return;
    }
    owner->firstPart = FUN_00297060(owner->firstResourceA, owner->firstResourceB);
    scriptProcessSetMode(owner->firstPart, 2);
    owner->secondPart = FUN_00297060(owner->secondResourceA, owner->secondResourceB);
    scriptProcessSetMode(owner->secondPart, 2);
    if (owner->flags & UNK3BA2BC_FLAG_PENDING) {
        FUN_002bd808(owner->unk03C, owner->unk042);
        mikadoLoadSceneResources(owner);
        owner->step = 2;
        owner->stepTimer = 0;
        owner->flags &= ~UNK3BA2BC_FLAG_PENDING;
        buttonHelpSelectByProgress(owner);
    }
}

} /* extern "C" */
