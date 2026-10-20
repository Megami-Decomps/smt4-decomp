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

int effPartsSetData(u32 block, void *parts, u32 param, s32 count);
u32 effBlockCreateFromBlock(u32 block);
int FUN_00250200(void);

/* Applies the parts data to the editor's block, then creates the effect block from it and returns that call's result. */
u32 FUN_002de22c(PartsData *data)
{
    u32 result;

    if (data->parts != NULL) {
        effPartsSetData(g_effectEditor.block, data->parts, data->param, data->count);
    }
    result = effBlockCreateFromBlock(g_effectEditor.block);
    FUN_00250200();
    return result;
}

} /* extern "C" */
