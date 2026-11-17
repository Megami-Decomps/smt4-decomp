#include "ui/UiSpriteApi.h"
#include "ui/MessageMainA.h"
#include "shard/Shard0039.h"

extern "C" {

void panelInitBlockB00(void)
{
    vec2GetXInt(&g_messageMain.banner->sprites[17]);
}

} /* extern "C" */
