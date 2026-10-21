#include "shard/Shard004A.h"

extern "C" {

typedef struct Menu4B {
    /* 0x0000 */ u8 unk0000[0x14];
    /* 0x0014 */ s32 state;
    /* 0x0018 */ u32 unk18;
    /* 0x001C */ u8 unk001C[4];
    /* 0x0020 */ u8 block20[8];
    /* 0x0028 */ s32 count;
    /* 0x002C */ u8 unk002C[0x9C];
    /* 0x00C8 */ u8 blockC8[0x14];
    /* 0x00DC */ u8 block0DC[0xA796];
    /* 0xA872 */ s16 page;
} Menu4B;

extern void FUN_004cf8dc(u8 *block, s32 page);
extern u32 vec2GetXInt(u8 *entry);
extern u32 vec2GetYInt(u8 *entry);
extern void pointConvertToFloat(u8 *block, u32 a, u32 b);
extern s32 gameGetMode(void);
extern u8 statusDownGetFlag(void);
extern s32 FUN_0035db94(void);
extern void uiSpriteBankApplyPreset(u8 *block, s16 page);
extern u32 FUN_002a482c(u8 *block);
extern u32 FUN_0031d174(u8 *block);
extern s32 statusDownGetMode(void);
extern void FUN_004d01f8(u8 *block);
extern void FUN_004d0100(u8 *block);
extern void sendEvent100020D(void);

/* Per-frame update: tracks the selected page, switches to state 5 on confirm, otherwise scrolls the list. */
void menu4BUpdate(Menu4B *obj)
{
    s32 x;
    s32 y;
    u8 *entry;
    s32 page;

    FUN_004cf8dc(obj->block0DC, obj->page);
    entry = (u8 *)obj + obj->page * 0x8C + 0xFC;
    pointConvertToFloat(obj->blockC8, vec2GetXInt(entry), vec2GetYInt(entry));
    if (gameGetMode() != 0 && statusDownGetFlag() == 0) {
        obj->state = 5;
        obj->unk18 = 0;
        if (FUN_0035db94() == 1) {
            obj->page = 8;
        } else {
            obj->page = 10;
        }
        uiSpriteBankApplyPreset(obj->block0DC, obj->page);
        return;
    }
    if (gameGetMode() == 0 && 0 < obj->count) {
        x = FUN_002a482c(obj->block20);
        y = FUN_0031d174(obj->block20);
        if (statusDownGetMode() != 1) {
            if (statusDownGetMode() == -1) {
                FUN_004d01f8(obj->block20);
            }
        } else {
            FUN_004d0100(obj->block20);
        }
        if (FUN_002a482c(obj->block20) != x || FUN_0031d174(obj->block20) != y) {
            sendEvent100020D();
            return;
        }
    }
}

} /* extern "C" */
