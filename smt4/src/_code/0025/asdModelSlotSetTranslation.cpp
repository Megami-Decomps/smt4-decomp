#include "shard/W5_W5Match2_ModelColor.h"
#include "AsdSDK/Source/Gfx/Effect/effParts.h"
extern "C" {
extern ModelColorBank g_asdModelSlotBanks[];
/* Set the model slot translation and mark its transform dirty. */
void asdModelSlotSetTranslation(s32 slot,u32 bank,f32 x,f32 y,f32 z) { if (slot>=0) { ModelColorSlot *model=g_asdModelSlotBanks[bank].slots[slot]; model->x=x; model->y=y; model->z=z; model->flags|=0x800; } }
}
