/* NON_MATCHING: compiler schedules the model-bank literal and tint-address registers differently. */
#include "common.h"
extern "C" {
struct Color { f32 red,green,blue,alpha; };
struct ModelTintWork { u8 unk00[0xCC]; Color color; u8 unkDC[0x24]; u32 packed; };
struct ModelTintSlot { u8 unk00[8]; ModelTintWork *work; };
struct ModelTintBank { u8 unk00[0x264]; ModelTintSlot *slots[8]; };
extern ModelTintBank DAT_004d9d88[];
u32 nw_ut_FloatColor_ToPicaU32(const Color *color);
/* Set the optional model slot tint and cache the packed GPU color. */
void asdModelSlotSetTint(s32 slot,u32 bank,Color color) { if (slot<0) return; ModelTintWork *work=DAT_004d9d88[bank].slots[slot]->work; work->color=color; work->packed=nw_ut_FloatColor_ToPicaU32(&work->color); }
}
