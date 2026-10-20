#include "common.h"

extern "C" {

int FUN_002305e8(int a);
int FUN_0026374c(void *text);
int FUN_0027e774(int a, int b);
int FUN_0027e7b4(u32 a, int b);
int scrScriptProcessDestroy(u32 process);
int asdMemFree(u32 ptr);
extern int FUN_0019e0c0(u32 value);

typedef struct Inner {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 text[0x3D];
    /* 0x3F */ u8 unk3F;
} Inner;

typedef struct Scene {
    /* 0x0000 */ u8 unk0000[0x28];
    /* 0x0028 */ u32 unk28;
    /* 0x002C */ u32 unk2C;
    /* 0x0030 */ u8 unk30[0x69C];
    /* 0x06CC */ u8 unk6CC;
    /* 0x06CD */ u8 unk6CD[0x68F];
    /* 0x0D5C */ Inner *inner;
    /* 0x0D60 */ u8 unkD60[0x20];
    /* 0x0D80 */ u32 unkD80;
    /* 0x0D84 */ u8 unkD84[0x1C];
    /* 0x0DA0 */ u32 bufferA;
    /* 0x0DA4 */ u32 bufferB;
    /* 0x0DA8 */ u32 script;
} Scene;

void FUN_003b8a68(Scene *scene)
{
    if (FUN_0019e0c0(scene->script) == 2) {
        scrScriptProcessDestroy(scene->script);
        scene->script = 0;
        asdMemFree(scene->bufferA);
        scene->bufferA = 0;
        asdMemFree(scene->bufferB);
        scene->bufferB = 0;
        FUN_0027e774(0, 0);
        FUN_0027e7b4(scene->unkD80, scene->inner->unk3F);
        scene->unk28 = 5;
        scene->unk2C = 0;
        scene->unk6CC = 0;
        FUN_0026374c(scene->inner->text);
        FUN_002305e8(1);
        return;
    }
}

} /* extern "C" */
