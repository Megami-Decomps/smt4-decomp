#include "common.h"

extern "C" {

typedef struct PartsData {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u16 count;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ void *parts;
    /* 0x10 */ u32 param;
} PartsData;

typedef struct EffectEditor {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u32 block;
} EffectEditor;

extern EffectEditor g_effectEditor;

int FUN_002b41e4(u32 block, void *parts, u32 param, s32 count);
u32 FUN_00243c24(u32 block);
int FUN_00350a8c(void);

/* Applies the parts data to the editor's block, then creates the effect block from it and returns that call's result. */
u32 effEditorCreateBlock(PartsData *data)
{
    u32 result;

    if (data->parts != NULL) {
        FUN_002b41e4(g_effectEditor.block, data->parts, data->param, data->count);
    }
    result = FUN_00243c24(g_effectEditor.block);
    FUN_00350a8c();
    return result;
}

} /* extern "C" */
