#include "battle/btlUI.h"
#include "shard/PlayScene.h"

extern "C" {

extern BtlUiGlobals g_btlUi;
s32 sceneIsOutsideClosingState(const PlayScene *scene);

/* Reports whether the battle UI's third widget is outside state thirty-one. */
s32 btlUiIsWidgetOutsideClosingState()
{
    return sceneIsOutsideClosingState(reinterpret_cast<const PlayScene *>(&g_btlUi.ui->objC));
}

}
