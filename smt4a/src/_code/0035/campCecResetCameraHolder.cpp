#include "common.h"

extern "C" {

/* A camp cec camera holder; only the fields the preset setup writes are named. */
typedef struct CecCameraHolder {
    /* 0x00 */ f32 scaleA;
    /* 0x04 */ f32 scaleB;
    /* 0x08 */ f32 scaleC;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ f32 distance;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ f32 speed;
    /* 0x1C */ u32 link;
    /* 0x20 */ u8 unk20[4];
    /* 0x24 */ u32 linkApplied;
    /* 0x28 */ u32 unk28;
} CecCameraHolder;

void statusCameraSelectPreset(s32 preset);
void FUN_0034a3b4(void);
s32 linkHolderCallFirst(u32 link);
void linkHolderApplyFirst(u32 link, s32 flag, f32 first, f32 second);

/* Resets the camp cec camera holder to its default preset; the scales depend on whether its link holder is kind 0x23. */
void campCecResetCameraHolder(CecCameraHolder *holder)
{
    statusCameraSelectPreset(0);
    holder->speed = 0.012f;
    holder->distance = 350.0f;
    if (linkHolderCallFirst(holder->link) == 0x23) {
        holder->scaleA = 1.0f;
        holder->scaleB = 5.4f;
        holder->scaleC = 1.5f;
    } else {
        holder->scaleA = 1.2f;
        holder->scaleB = 5.3f;
        holder->scaleC = 0.5f;
    }
    holder->unk28 = 0;
    if (holder->linkApplied != 0) {
        holder->linkApplied = 0;
        linkHolderApplyFirst(holder->link, 0, 0.0f, 0.0f);
    }
    FUN_0034a3b4();
}

} /* extern "C" */
