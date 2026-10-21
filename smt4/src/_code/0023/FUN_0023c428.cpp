/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023c428` (_code @ 0x23c428, 0x13c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match8_BattleSpritePlacement.h"

struct EnemyDrawScaleRecord {
    u8 unk00[0x40];
    f32 scale;
};

extern "C" {

int FUN_0023aa3c(int, unsigned char [16]);
int modelSetPosition(unsigned int, int, unsigned char [16]);
int FUN_0027da30(int, int);
int nodeSetTranslation(unsigned int, int, const BattleVector3 *);
int btlGetMainState(void);
int FUN_002a0428(int, int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

/* Supplied declaration required: FUN_0023aa3c. */
/* Supplied declaration required: modelSetPosition. */
/* Supplied declaration required: FUN_0027da30. */
extern int FUN_0027dab0(unsigned int, int);
/* Supplied declaration required: nodeSetTranslation. */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_002a0428. */


void FUN_0023c428(int param_1,int param_2)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  BattleVector3 translation;
  unsigned char temp_v10 [16];
  
  temp_v6 = param_1 + param_2 * 0x10;
  temp_v0 = *(int *)(temp_v6 + 0x960);
  if (temp_v0 != 0) {
    if (*(int *)(*(int *)(temp_v0 + 8) + 0xc) < 0) {
      FUN_002a0428(temp_v0,1);
    }
    temp_v0 = btlGetMainState();
    temp_v4 = *(int *)(temp_v0 + 0x1e98) + param_2 * 0x114;
    temp_v1 = btlGetMainState();
    temp_v0 = FUN_0027dab0(temp_v1,temp_v4);
    if (temp_v0 < 0) {
      temp_v0 = 0;
    }
    temp_v5 = 0;
    temp_v2 = btlGetMainState();
    FUN_0027da30(temp_v2,(int)*(short *)(temp_v4 + 0x62));
    temp_v3 = 0;
    do {
      if (*(int *)(param_1 + temp_v3 * 0x30 + 0x1398) == *(int *)(temp_v2 + temp_v0 * 4 + 0xc)) {
        temp_v5 = param_1 + temp_v3 * 0x30 + 0x1398;
        break;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x32);
    FUN_0023aa3c(temp_v5 + 8,temp_v10);
    modelSetPosition(*(unsigned int *)(*(int *)(temp_v6 + 0x960) + 8),0,temp_v10);
    enemyDrawComputeSpriteAnchorOffset(reinterpret_cast<const BattleSpritePlacement *>(temp_v5 + 8),
                 &translation, reinterpret_cast<const EnemyDrawScaleRecord *>(temp_v4)->scale);
    translation.x = translation.x + *(float *)(temp_v4 + 0xc);
    translation.y = translation.y + *(float *)(temp_v4 + 0x10);
    translation.z = translation.z + *(float *)(temp_v4 + 0x14);
    nodeSetTranslation(*(unsigned int *)(*(int *)(temp_v6 + 0x960) + 8),0,&translation);
  }
  return;
}

} /* extern "C" */
