#include "common.h"
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {

typedef struct PartsData {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u16 count;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ void *parts;
    /* 0x10 */ u32 param;
} PartsData;

int effPartSetData(EffectSelectionBlock *block, void *parts, u32 param, s32 count);
u32 effBlockCreateFromBlock(EffectSelectionBlock *block);
int effectEditorApplyHandlerState(void);

/* Applies the parts data to the editor's block, then creates the effect block from it and returns that call's result. */
u32 effEditorCreateBlock(PartsData *data)
{
    u32 result;

    if (data->parts != NULL) {
        effPartSetData(g_effectEditor.block, data->parts, data->param, data->count);
    }
    result = effBlockCreateFromBlock(g_effectEditor.block);
    effectEditorApplyHandlerState();
    return result;
}

} /* extern "C" */
