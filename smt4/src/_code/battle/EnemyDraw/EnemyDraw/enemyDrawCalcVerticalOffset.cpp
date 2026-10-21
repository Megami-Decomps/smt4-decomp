#include "common.h"

struct EnemyImageMetrics {
    u8 unk00[0x14];
    s16 unk14;
    u16 unk16;
    s16 unk18;
};
struct EnemyDrawObject {
    u8 unk00[0x10];
    EnemyImageMetrics *image; // 0x10
};
struct EnemyDrawVector { f32 x, y, z; };

extern "C" {
extern f32 DAT_00433d98;

// Calculate the scaled vertical offset from the enemy's image metrics.
void enemyDrawCalcVerticalOffset(EnemyDrawObject *object, EnemyDrawVector *offset, f32 scale)
{
    offset->x = 0.0f;
    offset->y = 0.0f;
    offset->z = 0.0f;
    EnemyImageMetrics *image = object->image;
    offset->y += ((143.0f - (f32)image->unk14) - (f32)image->unk18) * scale;
    offset->y += DAT_00433d98;
}
}
