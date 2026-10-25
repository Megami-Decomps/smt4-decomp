#include "shard/Shard004B.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

typedef struct Owner4D {
    /* 0x0000 */ u8 unk0000[0x9C];
    /* 0x009C */ u8 block9C[4];
    /* 0x00A0 */ u8 unk00A0[0x1074];
    /* 0x1114 */ u8 block1114[4];
    /* 0x1118 */ u8 unk1118[0x20];
    /* 0x1138 */ u32 buf1138;
    /* 0x113C */ u32 buf113C;
    /* 0x1140 */ u32 proc1140;
    /* 0x1144 */ u32 buf1144;
    /* 0x1148 */ u32 buf1148;
    /* 0x114C */ u32 proc114C;
} Owner4D;

extern void asdMemFree(u32 ptr);
extern void scrScriptProcessDestroy(u32 process);
extern void freeTexEntry1F(u8 *block);
extern void dataTable33Unload(u8 *block);
extern void texSetRelease(void);
extern u32 dialogIsActive(void);
extern void dialogClose(s32 a);
extern void FUN_00168980(u32 id);
extern void campButtonHelpRelease(void);
extern void helpTexturesRelease(void);
extern void campCommonBgRelease(void);

/* Tears the screen down: frees buffers and script processes, then the textures and helper state. */
void owner4DDestroy(Owner4D *obj)
{
    if (obj->proc114C != 0) {
        scrScriptProcessDestroy(obj->proc114C);
        obj->proc114C = 0;
    }
    if (obj->buf1144 != 0) {
        asdMemFree(obj->buf1144);
        obj->buf1144 = 0;
    }
    if (obj->buf1148 != 0) {
        asdMemFree(obj->buf1148);
        obj->buf1148 = 0;
    }
    if (obj->proc1140 != 0) {
        scrScriptProcessDestroy(obj->proc1140);
        obj->proc1140 = 0;
    }
    if (obj->buf1138 != 0) {
        asdMemFree(obj->buf1138);
        obj->buf1138 = 0;
    }
    if (obj->buf113C != 0) {
        asdMemFree(obj->buf113C);
        obj->buf113C = 0;
    }
    freeTexEntry1F(obj->block9C);
    dataTable33Unload(obj->block1114);
    texSetRelease();
    if (dialogIsActive() != 0) {
        dialogClose(0);
    }
    FUN_00168980(3);
    campButtonHelpRelease();
    helpTexturesRelease();
    campCommonBgRelease();
    asdTMTexTableFreeEntry(0x18);
}

} /* extern "C" */
