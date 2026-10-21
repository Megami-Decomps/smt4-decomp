/* NON_MATCHING: compiler schedules the model-bank literal and color-address registers differently. */
#include "shard/W5_W5Match2_ModelColor.h"
extern "C" {
extern ModelColorBank g_asdModelBanks[];
u32 FUN_001931d8(const ModelColor *color);
/* Set the model slot RGB color with full alpha and cache its packed form. */
void FUN_003cd764(u32 slot,u32 bank,f32 red,f32 green,f32 blue) { ModelColorWork *work=g_asdModelBanks[bank].slots[slot]->work; work->color.r=red; work->color.g=green; work->color.b=blue; work->color.a=1.0f; work->packed=FUN_001931d8(&work->color); }
}
