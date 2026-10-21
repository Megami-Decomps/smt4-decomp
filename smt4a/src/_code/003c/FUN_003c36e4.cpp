/* NON_MATCHING: retail anchors the second editor block at its own data symbol; the typed aggregate uses g_effectEditor-relative accesses and relocations. */
#include "common.h"

struct EditorBlock {
    u8 unk00[0x0c]; // 0x00
    s32 index;      // 0x0c
    u8 unk10[0x2d0]; // 0x10
};
struct EffectEditor {
    u32 unk00[3]; // 0x00
    s32 index;    // 0x0c
    u32 unk10;    // 0x10
    void* list;   // 0x14
    u8 unk18[0x20]; // 0x18
    EditorBlock* current; // 0x38
    u8 unk3c[0xae8 - 0x3c]; // 0x3c
    EditorBlock blocks[2]; // 0xae8
};

extern "C" {
extern EffectEditor g_effectEditor;
void* linkedFindItemByIndex(void* list, s32 index);
void FUN_00363590(void* list, void* item);

// Selects the current editor item and resets the two editing blocks.
void FUN_003c36e4(void)
{
    void* item = linkedFindItemByIndex(g_effectEditor.list,
        g_effectEditor.index + g_effectEditor.blocks[1].index);
    FUN_00363590(g_effectEditor.list, item);
    g_effectEditor.blocks[0].index = 0;
    g_effectEditor.index = 0;
    g_effectEditor.blocks[1].index = 0;
    g_effectEditor.current = &g_effectEditor.blocks[1];
}
}
