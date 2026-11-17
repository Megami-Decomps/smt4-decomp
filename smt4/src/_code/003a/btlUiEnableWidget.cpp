#include "battle/BtlUiGlobal.h"
#include "shard/PlayScene.h"

extern "C" {

void FUN_002d0098(PlayScene *scene, u8 value);

/* Enables the battle UI's third widget. */
void btlUiEnableWidget()
{
    FUN_002d0098(reinterpret_cast<PlayScene *>(&g_btlUi.ui->objC), 1);
}

}
