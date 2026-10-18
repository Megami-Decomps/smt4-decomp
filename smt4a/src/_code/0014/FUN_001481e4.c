/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001481e4` (_code @ 0x1481e4, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_0015f0f4(); /* 0x15f0f4 */
extern int FUN_001a6c40(); /* 0x1a6c40 */

/* Supplied declaration required: FUN_0014a930. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015f378. */
extern int FUN_0015f434(int);
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002f5020. */


int FUN_001481e4(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  romwright_code **ppcVar3;
  romwright_code *temp_v1;
  unsigned int uStack_1c;
  int temp_v2;
  
  ppcVar3 = &temp_v1;
  param_1 = param_1 + 0xc;
  FUN_002f5020(param_1,FUN_001a6c40,0xb8,0x60);
  *(unsigned char *)(param_1 + 0x4500) = 0;
  temp_v0 = FUN_0015f434(param_1 + 0x4504);
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  FUN_0015f378(temp_v0,0x4000);
  temp_v1 = FUN_0015f0f4;
  uStack_1c = 0;
  pcVar2 = "Aoc fileload Calc";
  temp_v2 = temp_v0 - 0x4510;
  FUN_0014e38c("Aoc fileload Calc",4,0);
  *(char **)(temp_v0 + 0x14) = pcVar2;
  temp_v1 = (romwright_code *)0x0;
  if (*(int *)(temp_v0 + 0x10) != 0) {
    ppcVar3 = (romwright_code **)0xe0a0183b;
  }
  else {
    FUN_0014a930(&temp_v1,1,1);
    if (-1 < (int)ppcVar3) {
      ppcVar3 = (romwright_code **)0x0;
      *(romwright_code **)(temp_v0 + 0x10) = temp_v1;
    }
  }
  if ((int)ppcVar3 < 0) {
    FUN_002e3140();
  }
  return temp_v0 - 0x4510;
}
