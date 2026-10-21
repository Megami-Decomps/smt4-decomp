/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034c7a8` (_code @ 0x34c7a8, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match8_BattleSpritePlacement.h"

struct EnemySpriteAnchorObject {
    u8 unk00[4];
    const BattleSpritePlacement *placement;
    u8 unk08[0x28];
    f32 scale;
};

extern "C" {


/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;



void FUN_0034c7a8(int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  BattleVector3 translation;
  const EnemySpriteAnchorObject *owner = reinterpret_cast<const EnemySpriteAnchorObject *>(param_1);
  
  *(unsigned int *)(param_1 + 0x34) = *param_2;
  *(unsigned int *)(param_1 + 0x38) = param_2[1];
  *(unsigned int *)(param_1 + 0x3c) = param_2[2];
  if (owner->placement != NULL) {
    enemyDrawComputeSpriteAnchorOffset(owner->placement,&translation,owner->scale);
    temp_v2 = *(float *)(param_1 + 0x34);
    temp_v3 = *(float *)(param_1 + 0x38);
    temp_v4 = *(float *)(param_1 + 0x3c);
    if (*(int *)(param_1 + 8) != 0) {
      temp_v1 = 0;
      do {
        temp_v0 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x24) + temp_v1 * 4);
        temp_v1 = temp_v1 + 1;
        *(float *)(temp_v0 + 0x58) = translation.x + temp_v2;
        *(float *)(temp_v0 + 0x68) = translation.y + temp_v3;
        *(float *)(temp_v0 + 0x78) = translation.z + temp_v4;
        *(unsigned int *)(temp_v0 + 0x88) = *(unsigned int *)(temp_v0 + 0x88) | 0x800;
      } while (temp_v1 < 3);
    }
  }
  return;
}

} /* extern "C" */
