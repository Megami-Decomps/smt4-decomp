#include "shard/Shard0039.h"

extern "C" {

extern PanelRef g_messageMain;
extern s32 vec2GetXInt(u8 *block);

void panelInitBlockB00(void)
{
    vec2GetXInt(g_messageMain.panel->blockB00);
}

} /* extern "C" */
