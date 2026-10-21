#include "shard/W5_W5Match2_ModelColor.h"
extern "C" {
extern ModelColorBank DAT_004d9d88[];
/* Set the model slot translation and mark its transform dirty. */
void asdModelSlotSetTranslation(s32 slot,u32 bank,f32 x,f32 y,f32 z) { if (slot>=0) { ModelColorSlot *model=DAT_004d9d88[bank].slots[slot]; model->x=x; model->y=y; model->z=z; model->flags|=0x800; } }
}
