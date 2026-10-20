#include "common.h"

extern "C" {

int FUN_0023553c(int a);
int FUN_002a0cb0(void);
int FUN_002a0cc8(int a);
int buttonHelpSetPreset(void);
extern int FUN_0019e0c0(u32 value);

typedef struct Scene {
    /* 0x0000 */ u8 unk0000[0x14];
    /* 0x0014 */ u32 unk14;
    /* 0x0018 */ u32 unk18;
    /* 0x001C */ u8 unk1C[0x584];
    /* 0x05A0 */ u32 unk5A0;
    /* 0x05A4 */ u8 unk5A4[0xA00C];
    /* 0xA5B0 */ u8 unkA5B0;
} Scene;

void FUN_003a7f98(Scene *scene)
{
    if (FUN_0019e0c0(scene->unk5A0) == 2) {
        FUN_0023553c(0);
        FUN_002a0cc8(0);
        scene->unk18 = 0;
        scene->unk14 = 2;
        scene->unkA5B0 = 0;
        FUN_002a0cb0();
        buttonHelpSetPreset();
        return;
    }
}

} /* extern "C" */
