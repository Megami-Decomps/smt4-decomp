#include "common.h"

extern "C" {

extern int FUN_0019e0c0(u32 value);

typedef struct Scene {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ u32 unk14;
    /* 0x018 */ u32 unk18;
    /* 0x01C */ u8 unk1C[0x584];
    /* 0x5A0 */ u32 unk5A0;
} Scene;

void FUN_003ab7a0(Scene *scene)
{
    if (FUN_0019e0c0(scene->unk5A0) == 2) {
        scene->unk14 = 3;
        scene->unk18 = 0;
    }
}

} /* extern "C" */
