#ifndef SHARD_W5_W5MATCH7_UIQUEST_H
#define SHARD_W5_W5MATCH7_UIQUEST_H

#include "common.h"
#include <stddef.h>

struct UiQuestAlternateList {
    /* 0x00 (0x942) */ u8 unk00[6];
    /* 0x06 (0x948) */ u8 cursor[0x64];
    /* 0x6a (0x9ac) */ u8 unk6a[0x64];
    /* 0xce (0xa10) */ u16 list[1];
};

struct UiQuestApoc {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ s32 menuState;
    /* 0x008 */ s32 previousMenuState;
    /* 0x00c */ s32 nextMenuState;
    /* 0x010 */ s32 menuTimer;
    /* 0x014 */ u8 unk014[0x20];
    /* 0x034 */ u8 mainSprite[0x8c];
    union {
        /* 0x0C0 */ u8 unk0c0[0x84C];
        struct {
            /* 0x0C0 */ u8 unk0C0BeforeDetailSprite[0x3D4];
            /* 0x494 */ u8 sprite[0x8C];
        } detailAnimation;
        struct {
            /* 0x0C0 */ u8 unk0C0[0x1A4];
            /* 0x264 */ u8 sprite[0x8C];
            /* 0x2F0 */ u8 unk2F0[0x60C];
            /* 0x8FC */ u32 script;
        } acceptance;
    };
    /* 0x90c */ u8 unk90c;
    /* 0x90d */ s8 unk90D;
    /* 0x90e */ s8 unk90E;
    /* 0x90f */ s8 mode;
    union {
        /* 0x910 */ u8 unk910[0xc];
        struct {
            /* 0x910 */ s32 selection;
            /* 0x914 */ s32 previousSelection;
            /* 0x918 */ s32 count;
        } listState;
    };
    /* 0x91c */ u32 sprites[4];
    /* 0x92C */ union { u8 unk92c[4]; void *detailMessages; };
    /* 0x930 */ u32 messages;
    /* 0x934 */ u8 unk934[9];
    /* 0x93d */ u8 unk93D;
    /* 0x93e */ u8 unk93E;
    /* 0x93f */ s8 state;
    /* 0x940 */ s8 active;
    /* 0x941 */ s8 step;
    /* 0x942 */ union {
        u8 unk942[3];
        struct {
            u8 unk942;
            /* 0x943 */ u8 addonOwned;
        } messageOwnership;
    };
    /* 0x945 */ u8 unk945;
    /* 0x946 */ u8 unk946[0x66];
    /* 0x9ac */ u8 cursor[0x12a];
    /* 0xad6 */ u16 list[250];
    /* 0xcca */ s16 questId;
    /* 0xccc */ u16 unkCCC;
    /* 0xcce */ u16 selectedId;
    /* 0xcd0 */ s16 detailMode;

    UiQuestAlternateList *alternateView()
    {
        return reinterpret_cast<UiQuestAlternateList *>(unk942);
    }
};

extern "C" {
extern UiQuestApoc *g_uiQuest;
}

typedef char UiQuestApocSizeCheck[sizeof(UiQuestApoc) == 0xCD4 ? 1 : -1];
typedef char UiQuestApocDetailSpriteOffsetCheck[
    offsetof(UiQuestApoc, detailAnimation.sprite) == 0x494 &&
    sizeof(UiQuestApoc) == 0xCD4 ? 1 : -1];
typedef char UiQuestApocAcceptanceOffsets[
    offsetof(UiQuestApoc, acceptance.sprite) == 0x264 &&
    offsetof(UiQuestApoc, acceptance.script) == 0x8FC ? 1 : -1];
typedef char UiQuestApocMessageOwnershipOffsets[
    offsetof(UiQuestApoc, detailMessages) == 0x92C &&
    offsetof(UiQuestApoc, messageOwnership.addonOwned) == 0x943 &&
    sizeof(UiQuestApoc) == 0xCD4 ? 1 : -1];

#endif
