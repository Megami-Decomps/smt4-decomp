#include "ui/MessageMainA.h"
#include "shard/Shard0039.h"

extern "C" {

extern s32 vec2GetXInt(void *block);

void panelInitBlockB00(void)
{
    vec2GetXInt(&g_messageMain.banner->sprites[17]);
}

} /* extern "C" */
