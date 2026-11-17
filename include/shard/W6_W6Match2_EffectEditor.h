#ifndef SHARD_W6_W6MATCH2_EFFECT_EDITOR_H
#define SHARD_W6_W6MATCH2_EFFECT_EDITOR_H

#include "AsdSDK/Source/Gfx/Effect/effMenu.h"
#include "shard/W6_W6Match8_EffectSelection.h"
#include "shard/W6_W6Match4_EffectEditorSnapshot.h"
#include "shard/PlayScene.h"

struct EffectNode;

struct EffectTextRequest {
    u32 type;   // 0x00
    u32 size;   // 0x04
    s32 state;  // 0x08: 1 once finished
};

/* The record the editor's selection points to: its template object at 0x34. */
struct EffectEditorSelection {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ EffectSelectionTemplate *object;
};

/* The effect editor's state (smt4 0x44ea80, smt4a 0x59dbe0; the same layout in both games): its mode
 * bytes, the selected record (list, index, block, item, object), the effect node it renders, the text
 * request and the name and label menu nodes. The block runs on to 0x15650 bytes (two editor blocks
 * at 0xAE8); only the head is described. */
struct EffectEditor {
    /* 0x00 */ u8 toggle;
    /* 0x01 */ u8 inhibited;
    /* 0x02 */ u8 settingsMode;   /* copied from g_effectEditorSettings */
    /* 0x03 */ u8 settingsFlagA;
    /* 0x04 */ u8 settingsFlagB;
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u8 unk06;
    /* 0x07 */ u8 dirty;
    /* 0x08 */ u8 unk08;
    /* 0x09 */ u8 mode;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ s32 index;         /* the selected record's index in the list */
    /* 0x10 */ EffectNode *node;  /* the effect the editor renders */
    /* 0x14 */ void *list;        /* the record list */
    /* 0x18 */ void *instance;
    /* 0x1C */ EffectSelectionBlock *block;
    /* 0x20 */ void *resource;
    /* 0x24 */ EffectSelectionItem *item;
    /* 0x28 */ s32 pending;
    /* 0x2C */ u32 cachedEvent;
    /* 0x30 */ void *texture;
    /* 0x34 */ EffectEditorSelection *selection;
    /* 0x38 */ EffectSelectionTemplate *object;
    /* 0x3C */ void *nodeList;    /* owner of the text request */
    /* 0x40 */ EffectTextRequest *request; /* the pending text request */
    /* 0x44 */ EffMenuNode *name;
    /* 0x48 */ EffMenuNode *label;
    /* 0x4C */ u32 unk4c;
    /* 0x50 */ u32 unk50;
    /* 0x54 */ u32 active;
    /* 0x58 */ u32 unk58;
    /* 0x5C */ u32 unk5c;
    /* 0x60 */ u32 unk60;
    /* 0x64 */ u32 unk64;
    /* 0x68 */ u32 unk68;
    /* 0x6C */ u8 unk6C[0xC];
    /* 0x78 */ u32 overlayEnabled; /* renderEditorSceneDrawOverlay draws the overlay */
};
typedef char EffectEditorLayoutCheck[
    __INTADDR__(&((EffectEditor *)0)->index) == 0x0C &&
    __INTADDR__(&((EffectEditor *)0)->node) == 0x10 &&
    __INTADDR__(&((EffectEditor *)0)->cachedEvent) == 0x2C &&
    __INTADDR__(&((EffectEditor *)0)->object) == 0x38 &&
    __INTADDR__(&((EffectEditor *)0)->name) == 0x44 &&
    __INTADDR__(&((EffectEditor *)0)->active) == 0x54 &&
    __INTADDR__(&((EffectEditor *)0)->overlayEnabled) == 0x78 &&
    sizeof(EffectEditor) == 0x7c ? 1 : -1];

/* The independently addressed editor record and its three mode bytes. */
struct EffectEditorSettings {
    union {
        /* 0x000 */ u8 unk000[0x88];
        /* 0x000 */ EffectEditorSnapshot snapshot;
        struct {
            /* 0x000 */ u8 unk00[0x68];
            /* 0x068 */ u32 flags;
        } record;
    };
    /* 0x088 */ u8 mode;
    /* 0x089 */ u8 flagA;
    /* 0x08A */ u8 flagB;
    /* 0x08B */ u8 unk08B[5];
};
typedef char EffectEditorSettingsLayoutCheck[
    __INTADDR__(&((EffectEditorSettings *)0)->snapshot) == 0 &&
    __INTADDR__(&((EffectEditorSettings *)0)->record.flags) == 0x68 &&
    __INTADDR__(&((EffectEditorSettings *)0)->mode) == 0x88 &&
    __INTADDR__(&((EffectEditorSettings *)0)->flagA) == 0x89 &&
    __INTADDR__(&((EffectEditorSettings *)0)->flagB) == 0x8a &&
    sizeof(EffectEditorSettings) == 0x90 ? 1 : -1];

extern "C" {
extern EffectEditor g_effectEditor;
EffMenuNode* effMenuNodeCreate(const char* name);
}

#ifdef __cplusplus
extern "C" {
#endif

unsigned int sysGetTableWord(int param_1);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

void FUN_0025f300(PlayScene* work);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 messageDismissNumericBanner(s32 close);

#ifdef __cplusplus
}
#endif

#endif
