/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d8d40` (_code @ 0x4d8d40, 0x1a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match1_BattleStageModelA.h"

struct FrameColorUpdateWork;

extern "C" {

int FUN_002c2358(void);
int FUN_002c23cc(int);
int FUN_00400d80(void);
int FUN_00401198(int);
void FUN_0040128c(FrameColorUpdateWork *);
int objectOwner3Release(int);
int FUN_004013f0(int);
int FUN_004d896c(int, unsigned int, unsigned int);
int FUN_004d8bf8(int);

extern int g_handleRegistry; /* 0x56fcc0 */
extern unsigned int g_btlStage; /* 0x57a4f4 */
extern int g_btlStageModel; /* 0x57a4f8 */

/* Supplied declaration required: FUN_002c2358. */
/* Supplied declaration required: FUN_002c23cc. */
/* Supplied declaration required: FUN_00400d80. */
/* Supplied declaration required: FUN_00401198. */
/* Supplied declaration required: FUN_0040128c. */
/* Supplied declaration required: objectOwner3Release. */
/* Supplied declaration required: FUN_004013f0. */
extern int FUN_00401440(int);
extern unsigned short FUN_00406798(unsigned int, char *);
/* Supplied declaration required: FUN_004d896c. */
/* Supplied declaration required: FUN_004d8bf8. */


unsigned int FUN_004d8d40(int param_1,int param_2)

{
/* irregular: 10 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (g_btlStageModel == 0) {
    return 0;
  }
  switch(*(unsigned int *)(param_1 + 0xa0)) {
  case 1:
    FUN_002c23cc(0);
    *(unsigned int *)(param_1 + 0xc0) = g_btlStage;
    FUN_00400d80();
    temp_v2 = 2;
    *(unsigned int *)(param_1 + 0xa0) = temp_v2;
    break;
  case 2:
    temp_v1 = FUN_00401440(param_1);
    if (temp_v1 == 0) break;
    btlStageUpdateNodePositions((BattleStageModelA*)param_1,((BattleStageModelA*)param_1)->position);
    FUN_004013f0(param_1);
    temp_v0 = FUN_00406798(*(unsigned int *)(g_handleRegistry + 4),"Light_EFT");
    *(unsigned short *)(param_1 + 0xac) = temp_v0;
    FUN_004d8bf8(param_1);
    FUN_004d896c(param_1,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc));
    temp_v2 = 4;
    *(unsigned int *)(param_1 + 0xa0) = temp_v2;
    break;
  case 3:
    if (*(int *)(param_1 + 0xc0) != 0) {
      *(unsigned int *)(param_1 + 0xc0) = 0;
    }
    FUN_002c2358();
    objectOwner3Release(param_1);
    *(unsigned int *)(param_1 + 0xa0) = 0;
    break;
  case 4:
    btlStageUpdateNodePositions((BattleStageModelA*)param_1,((BattleStageModelA*)param_1)->position);
    FUN_004013f0(param_1);
    FUN_00401198(param_1);
    FUN_0040128c((FrameColorUpdateWork *)param_1);
  }
  if (*(short *)(param_1 + 0xbc) != -1) {
    *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 1;
  }
  return 0;
}

} /* extern "C" */
