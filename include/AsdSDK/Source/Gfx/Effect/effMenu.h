/* AsdSDK/Source/Gfx/Effect/effMenu.c: menu effects. */
#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFMENU_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFMENU_H

#include "common.h"
#include <stddef.h>

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
    /* 0x08 */ union { u32 unk08; f32 layoutX; };
    /* 0x0C */ union { u32 unk0c; f32 layoutY; };
    /* 0x10 */ union { u32 unk10; f32 selectionX; };
    /* 0x14 */ union { u32 unk14; f32 selectionY; };
    /* 0x18 */ union {
        u32 unk18;
        f32 horizontal;
    };
    union {
        /* 0x1C */ char name[0x1C];
        struct {
            /* 0x1C */ u32 flags;
            /* 0x20 */ u8 unk20[0x18];
        } render;
        /* 0x1C */ f32 vertical;
    };
} EffMenuNode;

struct EffMenuRenderNode : EffMenuNode {
    /* 0x38 */ u8 unk38[0x30];
};

typedef char EffMenuNodeSizeCheck[sizeof(EffMenuNode) == 0x38 ? 1 : -1];
typedef char EffMenuRenderNodeSizeCheck[sizeof(EffMenuRenderNode) == 0x68 ? 1 : -1];
typedef char EffMenuEffectOffsetsCheck[offsetof(EffMenuNode, horizontal) == 0x18 && offsetof(EffMenuNode, vertical) == 0x1C ? 1 : -1];
typedef char EffMenuEditorFloatOffsetsCheck[
    offsetof(EffMenuNode, layoutX) == 8 && offsetof(EffMenuNode, layoutY) == 0xC &&
    offsetof(EffMenuNode, selectionX) == 0x10 && offsetof(EffMenuNode, selectionY) == 0x14 ? 1 : -1];

/* Per-kind lists of menu nodes: first and last node of each. */
typedef struct EffMenuLists {
    /* 0x00 */ EffMenuNode *head[EFFMENU_LIST_COUNT];
    /* 0x14 */ EffMenuNode *tail[EFFMENU_LIST_COUNT];
} EffMenuLists;

struct EffMenuTextNode {
    /* 0x00 */ u32 kind;
    /* 0x04 */ u32 resource;
    /* 0x08 */ u32 value;
    /* 0x0C */ char name[0x30];
    /* 0x3C */ EffMenuTextNode* previous;
    /* 0x40 */ EffMenuTextNode* next;
};
struct EffMenuTextList {
    /* 0x00 */ u32 count;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ EffMenuTextNode* head;
};
typedef char EffMenuTextNodeLayoutCheck[sizeof(EffMenuTextNode) == 0x44 &&
    offsetof(EffMenuTextNode, previous) == 0x3C &&
    offsetof(EffMenuTextNode, next) == 0x40 ? 1 : -1];
typedef char EffMenuTextListLayoutCheck[sizeof(EffMenuTextList) == 0xC &&
    offsetof(EffMenuTextList, head) == 8 ? 1 : -1];


#endif
