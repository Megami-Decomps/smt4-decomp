/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e0de0` (_code @ 0x1e0de0, 0x318 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b8da0. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002bf810. */


void FUN_001e0de0(int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  int temp_v3;
  
  puVar3 = (unsigned int *)(param_1 + 0x217c);
  *puVar3 = 0;
  *(unsigned int *)(param_1 + 0x2180) = 3;
  *(short *)(param_1 + 0x2190) = (short)param_2;
  *(short *)(param_1 + 0x2192) = (short)param_3;
  temp_v0 = *(short *)(param_1 + 0x218c);
  temp_v2 = (int)temp_v0;
  if (temp_v2 + param_2 < 0) {
    *(short *)(param_1 + 0x2190) = -temp_v0;
  }
  if (*(short *)(param_1 + 0x2190) + temp_v2 >= 11) {
    *(short *)(param_1 + 0x2190) = 10 - temp_v0;
  }
  if (0 < param_3) {
    if (0 < *(short *)(param_1 + 0x2190)) {
      temp_v2 = temp_v2 + *(short *)(param_1 + 0x2190);
    }
    FUN_002bf810(0x1000173);
    puVar3 = (unsigned int *)0x0;
    if (0 < *(short *)(param_1 + 0x2192)) {
      do {
        if (*(int *)(param_1 + 0x2184) == 0) {
          temp_v1 = 7;
        }
        else {
          temp_v1 = 8;
        }
        FUN_002b8da0(param_1 + (((temp_v2 - *(short *)(param_1 + 0x218e)) - (int)puVar3) + 0x13) *
                               0x8c + 0x20,temp_v1);
        temp_v3 = param_1 + (((temp_v2 - *(short *)(param_1 + 0x218e)) - (int)puVar3) + 0x31) * 0x8c;
        FUN_002bee58(temp_v3 + 0x20,10);
        temp_v1 = 0xfa6;
        if (*(int *)(param_1 + 0x2184) != 0) {
          temp_v1 = 0xfa7;
        }
        FUN_002b8da0(temp_v3 + 0x20,temp_v1);
        puVar3 = (unsigned int *)((int)puVar3 + 1);
      } while ((int)puVar3 < (int)*(short *)(param_1 + 0x2192));
    }
  }
  temp_v0 = *(short *)(param_1 + 0x2190);
  if (0 < temp_v0) {
    temp_v2 = 0xfa1;
  }
  if (temp_v0 != 0) {
    puVar3 = (unsigned int *)0x0;
  }
  if (temp_v0 >= 1) {
    do {
      FUN_002bee58(param_1 + ((int)*(short *)(param_1 + 0x218c) + (int)puVar3) * 0x8c + 0x20,2);
      FUN_002bee58(param_1 + ((int)*(short *)(param_1 + 0x218c) + (int)puVar3) * 0x8c + 0x598,2);
      temp_v3 = param_1 + ((int)*(short *)(param_1 + 0x218c) + (int)puVar3) * 0x8c + 0x20;
      if (*(int *)(param_1 + 0x2184) != 0) {
        FUN_002b8da0(temp_v3,1);
        FUN_002b8da0(param_1 + ((int)*(short *)(param_1 + 0x218c) + (int)puVar3) * 0x8c + 0xb10,8);
        FUN_002b8da0(param_1 + ((int)*(short *)(param_1 + 0x218c) + (int)puVar3) * 0x8c + 0x1088,3);
        temp_v0 = *(short *)(param_1 + 0x218c);
        temp_v3 = temp_v2;
      }
      else {
        FUN_002b8da0(temp_v3,0);
        FUN_002b8da0(param_1 + ((int)*(short *)(param_1 + 0x218c) + (int)puVar3) * 0x8c + 0xb10,7);
        FUN_002b8da0(param_1 + ((int)*(short *)(param_1 + 0x218c) + (int)puVar3) * 0x8c + 0x1088,2);
        temp_v0 = *(short *)(param_1 + 0x218c);
        temp_v3 = 4000;
      }
      FUN_002b8da0(param_1 + ((int)temp_v0 + (int)puVar3) * 0x8c + 0x1600,temp_v3);
      puVar3 = (unsigned int *)((int)puVar3 + 1);
    } while ((int)puVar3 < (int)*(short *)(param_1 + 0x2190));
  }
  else if (temp_v0 < 0) {
    do {
      FUN_002bee58((param_1 + ((int)*(short *)(param_1 + 0x218c) + (int)puVar3) * 0x8c) - 0x6c,8);
      FUN_002bee58(param_1 + ((int)*(short *)(param_1 + 0x218c) + (int)puVar3) * 0x8c + 0x50c,8);
      FUN_002bee58(param_1 + ((int)*(short *)(param_1 + 0x218c) + (int)puVar3) * 0x8c + 0xa84,9);
      FUN_002bee58(param_1 + ((int)*(short *)(param_1 + 0x218c) + (int)puVar3) * 0x8c + 0xffc,8);
      puVar3 = (unsigned int *)((int)puVar3 - 1);
    } while ((int)*(short *)(param_1 + 0x2190) < (int)puVar3);
    return;
  }
  return;
}
