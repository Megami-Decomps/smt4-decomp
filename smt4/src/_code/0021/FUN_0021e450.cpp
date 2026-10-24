/* NON_MATCHING: retail reloads g_deferredMapModels every iteration (the loop is not hoisted); armcc here keeps it in a register. */
#include "common.h"

struct DeferredModel {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ u8 active;
    /* 0x0d */ u8 unk0d;
    /* 0x0e */ u8 selected;
    /* 0x0f */ u8 unk0f[3];
    /* 0x12 */ u16 kind;
    /* 0x14 */ u8 unk14[0x24];
};

struct DeferredMapModels {
    /* 0x000 */ DeferredModel models[64];
    /* 0xe00 */ u8 unke00[0xc];
    /* 0xe0c */ u8 pending;
    /* 0xe0d */ u8 unke0d[3];
    /* 0xe10 */ s32 selectedIndex;
    /* 0xe14 */ u8 unke14[0x28];
    /* 0xe3c */ u8 dirty;
};

extern "C" {

extern DeferredMapModels *g_deferredMapModels;

/* Marks the active type-16 model as selected (and the rest as not), remembering its index. */
void FUN_0021e450(void)
{
    for (s32 i = 0; i < 64; i++) {
        DeferredModel *model = &g_deferredMapModels->models[i];
        if (model->active != 0) {
            if (model->kind != 16) {
                model->selected = 0;
            } else {
                model->selected = 1;
                g_deferredMapModels->selectedIndex = i;
                g_deferredMapModels->dirty = 1;
                g_deferredMapModels->pending = 1;
            }
        }
    }
}

} /* extern "C" */
