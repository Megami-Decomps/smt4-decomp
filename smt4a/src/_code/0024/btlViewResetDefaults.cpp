#include "battle/btlView.h"

struct BattleViewResetState : BattleViewState {
    u32 tail[3]; // 0xd4
};
typedef char BattleViewResetStateOffsetCheck[
    offsetof(BattleViewResetState, tail) == 0xd4 && sizeof(BattleViewResetState) == 0xe0 ? 1 : -1];

extern "C" {
extern BattleViewState g_battleViewState;

// Reset alternate battle-view settings and restore the two default limits.
void btlViewResetDefaults()
{
    BattleViewResetState *view = static_cast<BattleViewResetState *>(&g_battleViewState);
    view->reset.enabled = 0;
    view->attachments.state = 0;
    view->camera.position.x = 0.0f;
    view->camera.position.y = 0.0f;
    view->camera.position.z = 0.0f;
    view->attachments.primary[0] = NULL;
    view->value = 0.0f;
    view->unk28 = 0;
    view->unk2c = 0;
    view->unk30 = 0;
    view->resetSettings.unk38 = 0;
    view->resetSettings.unk3c = 0;
    view->resetSettings.unk40 = 0.0f;
    view->navigationSetting = 0;
    view->pending = 0;
    view->transitionValue = 0.0f;
    view->transitionFlags.first = 0;
    view->transitionFlags.second = 0;
    view->unk70 = 0.0f;
    view->unk76 = 0;
    view->unk78 = 0;
    view->disabled = 0;
    view->positionsSet = 0;
    view->unk80.x = 0.0f;
    view->unk80.y = 0.0f;
    view->unk80.z = 0.0f;
    view->unk8c.x = 0.0f;
    view->unk8c.y = 0.0f;
    view->unk8c.z = 0.0f;
    view->resetSettings.refresh = 1;
    view->limits.first = 120.0f;
    view->limits.second = 80.0f;
    view->resetTail.unkA8 = 0;
    view->resetTail.unkA4 = 0;
    view->unkAC = 0;
    view->tailSettings.unkB0 = 0;
    view->tailSettings.unkB4 = 0.0f;
    view->tailSettings.unkB8 = 0;
    view->tailSettings.unkBC = 0;
    view->tailSettings.unkC0 = 0;
    view->tailSettings.unkC4 = 0.0f;
    view->children[0] = NULL;
    view->tail[0] = 0;
    view->children[1] = NULL;
    view->tail[1] = 0;
    view->children[2] = NULL;
    view->tail[2] = 0;
}
}
