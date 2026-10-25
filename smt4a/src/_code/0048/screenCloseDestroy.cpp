#include "shard/Shard0048.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

typedef struct ScreenClose {
    /* 0x000 */ u8 unk000[0x264];
    /* 0x264 */ u32 buf264;
    /* 0x268 */ u32 buf268;
    /* 0x26C */ u32 proc26C;
    /* 0x270 */ u8 unk270[0x1C8];
    /* 0x438 */ u8 block438[0x124];
    /* 0x55C */ s16 count;
} ScreenClose;

extern u16 DAT_00588108;
extern void sysPlaySe(u32 id);
extern void campButtonHelpRelease(void);
extern void ifTouchRegionRemove(void);
extern void __aeabi_memset4(u8 *block, u32 size, u32 value);
extern void asdTMTexTableReleaseNode(s32 a, s32 b);
extern void scrScriptProcessDestroy(u32 process);
extern void asdMemFree(u32 ptr);
extern void FUN_001695a0(void);

/* Closes the screen: plays the closing sound, releases the entries, textures, script process and buffers. */
void screenCloseDestroy(ScreenClose *obj)
{
    s32 i;

    sysPlaySe(DAT_00588108);
    campButtonHelpRelease();
    if (0 < obj->count) {
        for (i = 0; i < obj->count; i++) {
            ifTouchRegionRemove();
        }
        __aeabi_memset4(obj->block438, 0x124, 0xFFFFFFFF);
        obj->count = 0;
    }
    asdTMTexTableReleaseNode(0x23, 0);
    asdTMTexTableFreeEntry(0x23);
    scrScriptProcessDestroy(obj->proc26C);
    asdMemFree(obj->buf268);
    asdMemFree(obj->buf264);
    FUN_001695a0();
}

} /* extern "C" */
