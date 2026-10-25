/* Alternate battle-view resources, attachment state, and script-controlled settings (Apocalypse).
 * The known prefix is 0xd4 bytes; unknown settings retain their offsets as names. */
#ifndef BATTLE_BTLVIEW_H
#define BATTLE_BTLVIEW_H

#include "common.h"
#include <stddef.h>

struct BattleViewObject {
    /* 0x00 */ void *vtable;
    /* 0x04 */ u32 flags;
};

/* A model list the battle view owns; it is deleted through its virtual destructor. */
class BattleViewOwner {
public:
    /* 0x00: vtable pointer */
    virtual ~BattleViewOwner();
    /* 0x04 */ BattleViewObject *object;
};

struct BattleViewVec3 {
    f32 x, y, z;
};

struct BattleViewState {
    union {
        /* 0x00 */ u8 unk00[0x24];
        struct {
            /* 0x00 */ u8 unk00[8];
            /* 0x08 */ s32 state;
            /* 0x0c */ BattleViewOwner *primary[3];
        } attachments;
        struct {
            /* 0x00 */ u8 unk00[0x18];
            /* 0x18 */ BattleViewVec3 position;
        } camera;
        struct {
            u8 unk00[4];
            u8 enabled; /* 0x04 */
        } reset;
    };
    /* 0x24 */ f32 value;   /* heading, in degrees */
    /* 0x28 */ u32 unk28;
    /* 0x2c */ u32 unk2c;
    union {
        /* 0x30 */ u8 unk30;
        struct {
            u32 unk30;
            u32 refresh; /* 0x34 */
            u32 unk38;
            u8 unk3c;
            u8 unk3d[3];
            f32 unk40;
        } resetSettings;
    };
    /* 0x44 */ s8 navigationSetting;
    /* 0x45 */ u8 unk45[0x23];
    /* 0x68 */ u32 pending;
    union {
        /* 0x6c */ u8 unk6c[4];
        /* 0x6c */ f32 transitionValue;
    };
    /* 0x70 */ f32 unk70;
    union {
        /* 0x74 */ u8 unk74[2];
        struct { u8 first, second; } transitionFlags;
    };
    /* 0x76 */ s8 unk76;
    /* 0x77 */ u8 unk77;
    /* 0x78 */ s32 unk78;
    /* 0x7c */ u8 disabled;
    /* 0x7d */ u8 positionsSet;
    /* 0x7e */ u8 unk7e[2];
    /* 0x80 */ BattleViewVec3 unk80;
    /* 0x8c */ BattleViewVec3 unk8c;
    union {
        /* 0x98 */ u8 unk98[8];
        struct { f32 first, second; } limits;
    };
    union {
        /* 0xa0 */ u8 unkA0;
        struct {
            u32 unkA0;
            u32 unkA4;
            u8 unkA8;
            u8 unkA9[3];
        } resetTail;
    };
    /* 0xac */ u32 unkAC;
    union {
        /* 0xb0 */ u8 unkB0[0x18];
        struct {
            u32 unkB0;
            f32 unkB4;
            u8 unkB8;
            u8 unkB9[3];
            u32 unkBC;
            u32 unkC0;
            f32 unkC4;
        } tailSettings;
    };
    /* 0xc8 */ BattleViewOwner *children[3];
};

typedef char BattleViewStateLayoutCheck[offsetof(BattleViewState, camera.position) == 0x18 &&
    offsetof(BattleViewState, unk28) == 0x28 && offsetof(BattleViewState, unk30) == 0x30 &&
    offsetof(BattleViewState, unk70) == 0x70 && offsetof(BattleViewState, unk76) == 0x76 &&
    offsetof(BattleViewState, children) == 0xc8 ? 1 : -1];
typedef char BattleViewResetFieldsLayoutCheck[
    sizeof(BattleViewState) == 0xd4 && offsetof(BattleViewState, reset.enabled) == 4 &&
    offsetof(BattleViewState, resetSettings.refresh) == 0x34 &&
    offsetof(BattleViewState, resetSettings.unk40) == 0x40 &&
    offsetof(BattleViewState, transitionValue) == 0x6c &&
    offsetof(BattleViewState, transitionFlags) == 0x74 &&
    offsetof(BattleViewState, limits) == 0x98 &&
    offsetof(BattleViewState, resetTail.unkA4) == 0xa4 &&
    offsetof(BattleViewState, tailSettings.unkBC) == 0xbc ? 1 : -1];


#endif
