#include "shard/W6_W6Match3_EnemyDrawOffset.h"

extern "C" f32 g_spriteDrawYOffset;

// Calculate the vertical draw offset for the supplied enemy scale.
extern "C" void btlEnemyDrawCalcVerticalOffset(const EnemyDrawOffsetOwner* owner, BattleVector3* output, f32 scale)
{
    output->x = 0.0f;
    output->y = 0.0f;
    output->z = 0.0f;
    output->y += ((143.0f - static_cast<f32>(owner->data->height))
                  - static_cast<f32>(owner->data->originY)) * scale;
    output->y += g_spriteDrawYOffset;
}
