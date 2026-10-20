#include "shard/Shard0041.h"

extern "C" {

typedef struct SceneObj {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 buf18;
    /* 0x1C */ u32 proc1C;
    /* 0x20 */ u32 buf20;
    /* 0x24 */ u32 buf24;
    /* 0x28 */ u32 proc28;
    /* 0x2C */ u32 buf2C;
    /* 0x30 */ u8 unk30[0x12];
    /* 0x42 */ u16 unk42;
} SceneObj;

extern void FUN_00371f18(void);
extern void FUN_003a7b2c(void);
extern void FUN_002c85b0(s32 value);
extern void FUN_002c7ce8(u32 value);
extern void FUN_0023b45c(s32 flag);
extern void FUN_002c8538(u8 value);
extern void FUN_0033449c(s32 value);
extern void FUN_00333f6c(void);
extern void FUN_002bf4f4(u8 value);
extern void sysPlaySe(u32 id);
extern void FUN_0037b450(void);
extern void scrScriptProcessDestroy(u32 process);
extern void asdMemFree(u32 ptr);
extern u32 FUN_001add24(u32 id);

/* Tears down the scene: resets global state, plays the closing sound and frees the owned buffers and script processes. */
void sceneObjDestroy(SceneObj *scene)
{
    FUN_00371f18();
    FUN_003a7b2c();
    FUN_002c85b0(0);
    FUN_002c7ce8(0);
    FUN_0023b45c(0);
    FUN_002c8538(0);
    FUN_0033449c(0);
    FUN_00333f6c();
    FUN_002bf4f4(0);
    sysPlaySe(scene->unk42);
    FUN_0037b450();
    if (scene->proc1C != 0) {
        scrScriptProcessDestroy(scene->proc1C);
        scene->proc1C = 0;
    }
    if (scene->buf18 != 0) {
        asdMemFree(scene->buf18);
        scene->buf18 = 0;
    }
    if (scene->buf20 != 0) {
        asdMemFree(scene->buf20);
        scene->buf20 = 0;
    }
    if (scene->proc28 != 0) {
        scrScriptProcessDestroy(scene->proc28);
        scene->proc28 = 0;
    }
    if (scene->buf24 != 0) {
        asdMemFree(scene->buf24);
        scene->buf24 = 0;
    }
    if (scene->buf2C != 0) {
        asdMemFree(scene->buf2C);
        scene->buf2C = 0;
    }
    FUN_001add24(0x25);
}

} /* extern "C" */
