#include "common.h"

extern "C" {

int FUN_00199424(void);
int FUN_0028cf30(void *scene, u32 a, u32 b);
int btlGetMainState(void);
int playSceneSetState(void *scene, int a, int b);
int FUN_0029ee6c(int a, int color);
int uiSpriteSetImageKeyframe(void *block, int a, int b);
int buttonHelpSetPreset(int a);
int spriteStartAnimationByIndex(void *block, int a);
extern int FUN_00293230(void);
extern int buttonHelpGetStatus(void);

typedef struct BtlMain {
    /* 0x0000 */ u8 unk0000[0x44A0];
    /* 0x44A0 */ u32 flags;
} BtlMain;

typedef struct Scene {
    /* 0x0000 */ u8 unk0000[0x20];
    /* 0x0020 */ u8 blockA[0x118];
    /* 0x0138 */ u8 blocksB[8][0x8C];
    /* 0x0598 */ u8 unk0598[0x8C0];
    /* 0x0E58 */ u8 blocksC[6][0x8C];
    /* 0x11A0 */ u8 unk11A0[0x1EA8];
    /* 0x3048 */ int state;
    /* 0x304C */ u8 unk304C[8];
    /* 0x3054 */ u32 unk3054;
    /* 0x3058 */ u8 unk3058[4];
    /* 0x305C */ u32 unk305C;
    /* 0x3060 */ u8 unk3060[0x1D];
    /* 0x307D */ u8 unk307D;
    /* 0x307E */ s8 unk307E;
    /* 0x307F */ u8 unk307F;
    /* 0x3080 */ u8 unk3080;
} Scene;

void FUN_002cfed0(Scene *scene, u32 a, u8 b, u32 c)
{
    int i;
    int result;

    scene->unk307D = b;
    scene->unk307E = (s8)c;
    scene->unk305C = a;
    FUN_00199424();
    if (scene->unk3080 == 0) {
        i = 0;
        do {
            uiSpriteSetImageKeyframe(scene->blocksC[i], 0, 0);
            i = i + 1;
        } while (i < 6);
        if (scene->unk3080 == 0) {
            btlGetMainState();
            result = FUN_00293230();
            if ((result == 0) && (result = btlGetMainState(), (((BtlMain *)result)->flags & 0x200) == 0)) {
                if (scene->state == 0x17) {
                    FUN_0028cf30(scene, scene->unk305C, c);
                    return;
                }
                spriteStartAnimationByIndex(scene->blockA, 0);
                i = 0;
                do {
                    spriteStartAnimationByIndex(scene->blocksB[i], 0);
                    i = i + 1;
                } while (i < 8);
                scene->unk3054 = 0x11;
                playSceneSetState(scene, 0x10, 1);
                return;
            }
            FUN_0029ee6c(0, 0x323232ff);
            playSceneSetState(scene, 0x28, 1);
            result = buttonHelpGetStatus();
            if (result != 0x3d) {
                btlGetMainState();
                result = FUN_00293230();
                if (result != 0) {
                    buttonHelpSetPreset(0x3d);
                    return;
                }
            }
            return;
        }
    }
    playSceneSetState(scene, 0x2a, 1);
}

} /* extern "C" */
