#ifndef SHARD_W6_W6MATCH2_EFFECT_EDITOR_H
#define SHARD_W6_W6MATCH2_EFFECT_EDITOR_H

#include "AsdSDK/Source/Gfx/Effect/effMenu.h"
#include "shard/W6_W6Match8_EffectSelection.h"

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
            u32 blocked; // 0x10
            u8 unk14[0x18];
            u32 cachedEvent; // 0x2c
        } dispatch;
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

extern "C" {
extern EffectEditorMenuState g_effectEditor;
EffMenuNode* effMenuNodeCreate(const char* name);
}

#endif
