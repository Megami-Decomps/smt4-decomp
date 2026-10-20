/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c000c` (_code @ 0x3c000c, 0x170 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027da30(int, int);
int btlMainFindEntryByListedId(int, int);

/* Supplied declaration required: FUN_0027da30. */
/* Supplied declaration required: btlMainFindEntryByListedId. */
extern int btlGetMainState(void);
extern int gameGetUnitRecord(int);


void FUN_003c000c(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned short temp_v3;
  unsigned short *puVar5;
  
  temp_v1 = btlGetMainState();
  if (param_1 >= 0x6d) {
    temp_v1 = gameGetUnitRecord(param_1 - 0x6d);
    if (param_2 == 0) {
      param_3 = *(short *)(temp_v1 + 0x2a) + param_3;
      if (param_3 < 0) {
        param_3 = 0;
      }
      if (*(short *)(temp_v1 + 0xe) < param_3) {
        param_3 = (int)*(short *)(temp_v1 + 0xe);
      }
      *(short *)(temp_v1 + 0x2a) = (short)param_3;
      return;
    }
    if (param_2 != 1) {
      return;
    }
    param_3 = *(short *)(temp_v1 + 0x2c) + param_3;
    if (param_3 < 0) {
      param_3 = 0;
    }
    if (*(short *)(temp_v1 + 0x10) < param_3) {
      param_3 = (int)*(short *)(temp_v1 + 0x10);
    }
    *(short *)(temp_v1 + 0x2c) = (short)param_3;
    return;
  }
  temp_v2 = temp_v1;
  FUN_0027da30(temp_v1,param_1);
  if (temp_v2 == 0) {
    return;
  }
  if (param_2 != 0) {
    if (param_2 == 1) {
      puVar5 = (unsigned short *)(temp_v2 + 0xec);
      param_3 = *(short *)(temp_v2 + 0xec) + param_3;
      if (param_3 < 0) {
        param_3 = 0;
      }
      temp_v0 = (int)*(short *)(temp_v2 + 0xee);
      if (*(short *)(temp_v2 + 0xee) < param_3) {
        param_3 = temp_v0;
      }
      *puVar5 = (short)param_3;
    }
  }
  else {
    puVar5 = (unsigned short *)(temp_v2 + 0xe8);
    param_3 = *(short *)(temp_v2 + 0xe8) + param_3;
    if (param_3 < 0) {
      param_3 = 0;
    }
    temp_v0 = (int)*(short *)(temp_v2 + 0xea);
    if (*(short *)(temp_v2 + 0xea) < param_3) {
      param_3 = temp_v0;
    }
    *puVar5 = (short)param_3;
  }
  btlMainFindEntryByListedId(temp_v1,param_1);
  if (*(int *)(temp_v1 + 0x278) != 0) {
    *(unsigned short *)(*(int *)(temp_v1 + 0x278) + 0x2a) = *(unsigned short *)(temp_v2 + 0xe8);
    *(unsigned short *)(*(int *)(temp_v1 + 0x278) + 0x2c) = *(unsigned short *)(temp_v2 + 0xec);
    return;
  }
  if (*(int *)(temp_v1 + 0x27c) != 0) {
    *(unsigned short *)(*(int *)(temp_v1 + 0x27c) + 0x2a) = *(unsigned short *)(temp_v2 + 0xe8);
    temp_v3 = *(unsigned short *)(temp_v2 + 0xec);
    temp_v1 = *(int *)(temp_v1 + 0x27c);
  }
  else {
    if (*(int *)(temp_v1 + 0x280) == 0) {
      return;
    }
    *(unsigned short *)(*(int *)(temp_v1 + 0x280) + 0x2a) = *(unsigned short *)(temp_v2 + 0xe8);
    temp_v3 = *(unsigned short *)(temp_v2 + 0xec);
    temp_v1 = *(int *)(temp_v1 + 0x280);
  }
  *(unsigned short *)(temp_v1 + 0x2c) = temp_v3;
  return;
}

} /* extern "C" */
