#ifndef EVENT_NPCTEXTUREWORK_H
#define EVENT_NPCTEXTUREWORK_H
#include "common.h"
#include <stddef.h>
struct NpcTextureScale { f32 x, y, z; };
struct NpcTextureSource;
struct NpcTextureWork {
    /* 0x00 */ union {
        s32 phase;
        s32 npcId;
    };
    /* 0x04 */ s32 state;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ s32 deferred;
    /* 0x10 */ s32 x;
    /* 0x14 */ s32 y;
    /* 0x18 */ f32 speed;
    /* 0x1C */ union { u32 unk1C; f32 rotation; };
    /* 0x20 */ NpcTextureScale scale;
    union {
        /* 0x2C */ u8 unk2C[0x10];
        struct {
            u8 unk2C[4];
            /* 0x30 */ u8 stopWhenHidden;
            u8 unk31[7];
            /* 0x38 */ s32 screenRegion;
        } display;
    };
    /* 0x3C */ s32 textureTable;
    /* 0x40 */ s32 textureNode;
    union {
        /* 0x44 */ u8 unk44[0x54];
        struct {
            u8 unk44[4];
            /* 0x48 */ u32 portraitHandle;
            /* 0x4C */ s32 portraitId;
            u8 unk50[0xC];
            /* 0x5C */ u8 animate;
        } portrait;
        struct {
            /* 0x44 */ s32 lastImage;
            u8 unk48[0xC];
            /* 0x54 */ NpcTextureSource *source;
            u8 unk58[0xC];
            /* 0x64 */ u8 active;
            u8 unk65[3];
            /* 0x68 */ u32 unk68;
            /* 0x6C */ u32 unk6C;
            /* 0x70 */ u8 unk70;
            /* 0x71 */ u8 unk71;
            u8 unk72[2];
            /* 0x74 */ f32 sizes[3][2];
            /* 0x8C */ f32 origin[2];
            u8 unk94[4];
        } npc;
        struct {
            u8 unk44[0xC];
            /* 0x50 */ u32 index;
        } npcVariant;
    };
};
typedef char NpcTextureWorkLayoutCheck[(sizeof(NpcTextureWork) == 0x98 && offsetof(NpcTextureWork, textureTable) == 0x3C) ? 1 : -1];
typedef char NpcTextureDisplayOffsets[
    offsetof(NpcTextureWork, display.stopWhenHidden) == 0x30 &&
    offsetof(NpcTextureWork, display.screenRegion) == 0x38 &&
    offsetof(NpcTextureWork, portrait.portraitHandle) == 0x48 &&
    offsetof(NpcTextureWork, portrait.portraitId) == 0x4C &&
    offsetof(NpcTextureWork, portrait.animate) == 0x5C ? 1 : -1];
typedef char NpcTextureWorkNpcIdOffset[offsetof(NpcTextureWork, npcId) == 0 ? 1 : -1];
typedef char NpcTextureSourceOffsets[
    offsetof(NpcTextureWork, rotation) == 0x1C &&
    offsetof(NpcTextureWork, npc.lastImage) == 0x44 &&
    offsetof(NpcTextureWork, npc.source) == 0x54 &&
    offsetof(NpcTextureWork, npc.active) == 0x64 &&
    offsetof(NpcTextureWork, npc.unk68) == 0x68 &&
    offsetof(NpcTextureWork, npc.unk6C) == 0x6C &&
    offsetof(NpcTextureWork, npc.unk70) == 0x70 &&
    offsetof(NpcTextureWork, npc.unk71) == 0x71 &&
    offsetof(NpcTextureWork, npc.sizes) == 0x74 &&
    offsetof(NpcTextureWork, npc.origin) == 0x8C ? 1 : -1];
typedef char NpcTextureVariantOffsetCheck[
    offsetof(NpcTextureWork, npcVariant.index) == 0x50 &&
    sizeof(NpcTextureWork) == 0x98 ? 1 : -1];
#endif
