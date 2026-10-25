#ifndef SHARD_W6_W6MATCH2_EFFECT_EDITOR_H
#define SHARD_W6_W6MATCH2_EFFECT_EDITOR_H

#include "AsdSDK/Source/Gfx/Effect/effMenu.h"
#include "shard/W6_W6Match8_EffectSelection.h"

struct EffectNode;

struct EffectTextRequest {
    u32 type;   // 0x00
    u32 size;   // 0x04
    s32 state;  // 0x08: 1 once finished
};

struct EffectEditorMenuState {
    struct Text {
        u8 unk00[0x44];
        EffMenuNode *name; // 0x44
    };
    union {
        u8 unk00[0x48]; // 0x00
        Text text;
        struct {
            u8 unk00[0xc];
            s32 index; // 0x0c
            u32 unk10;
            void *list; // 0x14
            void *instance; // 0x18
            EffectSelectionBlock *block; // 0x1c
            void *resource; // 0x20
            EffectSelectionItem *item; // 0x24
            u8 unk28[0x10];
            EffectSelectionTemplate *object; // 0x38
        } selection;
        struct {
            u8 unk00;
            u8 inhibited; // 0x01
            u8 unk02[7];
            u8 mode; // 0x09
            u8 unk0a[6];
            EffectNode *node; // 0x10: effect rendered by the editor
            u8 unk14[0x18];
            u32 cachedEvent; // 0x2c
        } dispatch;
        struct {
            u8 unk00[0x10];
            u32 flags; // 0x10: per-menu input status, not the editor's node pointer
        } inputStatus;
        struct {
            u8 unk00[0x3c];
            void *owner; // 0x3c: node list owner of the request
            EffectTextRequest *request; // 0x40: pending text request
        } textRequest;
    };
    EffMenuNode* label; // 0x48
    u32 unk4c;
    u32 unk50;
    u32 active; // 0x54
    u32 unk58;
    u32 unk5c;
    u32 unk60;
    u32 unk64;
    u32 unk68;
};
typedef char EffectEditorMenuStateLayoutCheck[
    __INTADDR__(&((EffectEditorMenuState *)0)->dispatch.node) == 0x10 &&
    __INTADDR__(&((EffectEditorMenuState *)0)->inputStatus.flags) == 0x10 &&
    sizeof(EffectEditorMenuState) == 0x6c ? 1 : -1];

/* The independently addressed editor record and its three mode bytes. */
struct EffectEditorSettings {
    /* 0x000 */ u8 unk000[0x88];
    /* 0x088 */ u8 mode;
    /* 0x089 */ u8 flagA;
    /* 0x08A */ u8 flagB;
    /* 0x08B */ u8 unk08B[5];
};
typedef char EffectEditorSettingsLayoutCheck[
    __INTADDR__(&((EffectEditorSettings *)0)->mode) == 0x88 &&
    __INTADDR__(&((EffectEditorSettings *)0)->flagA) == 0x89 &&
    __INTADDR__(&((EffectEditorSettings *)0)->flagB) == 0x8a &&
    sizeof(EffectEditorSettings) == 0x90 ? 1 : -1];

extern "C" {
extern EffectEditorMenuState g_effectEditor;
EffMenuNode* effMenuNodeCreate(const char* name);
}

#endif
