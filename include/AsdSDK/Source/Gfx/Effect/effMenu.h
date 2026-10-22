/* AsdSDK/Source/Gfx/Effect/effMenu.c: menu effects. */
#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFMENU_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFMENU_H

#include "common.h"

/* Shared state of the menu effects. */
typedef struct EffMenuState {
    /* 0x00 */ s8 unk00;
    /* 0x04 */ f32 unk04;  /* advanced by a per-frame delta */
    /* 0x08 */ f32 unk08;  /* advanced by a per-frame delta */
} EffMenuState;

#define EFFMENU_LIST_COUNT 5

/* A menu effect node (0x38 bytes); nodes of one kind are chained through `next`. */
typedef struct EffMenuNode {
    union {
        /* 0x00 */ struct EffMenuNode *next;   /* once linked into a list */
        /* 0x00 */ u32 initialKind;           /* 8 when freshly created */
    };
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    union {
        /* 0x1C */ char name[0x1C];
        struct {
            /* 0x1C */ u32 flags;
            /* 0x20 */ u8 unk20[0x18];
        } render;
    };
} EffMenuNode;

struct EffMenuRenderNode : EffMenuNode {
    /* 0x38 */ u8 unk38[0x30];
};

typedef char EffMenuNodeSizeCheck[sizeof(EffMenuNode) == 0x38 ? 1 : -1];
typedef char EffMenuRenderNodeSizeCheck[sizeof(EffMenuRenderNode) == 0x68 ? 1 : -1];

/* Per-kind lists of menu nodes: first and last node of each. */
typedef struct EffMenuLists {
    /* 0x00 */ EffMenuNode *head[EFFMENU_LIST_COUNT];
    /* 0x14 */ EffMenuNode *tail[EFFMENU_LIST_COUNT];
} EffMenuLists;

#endif
