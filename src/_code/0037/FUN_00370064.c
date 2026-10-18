/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00370064` (_code @ 0x370064, 0xfc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002bcd68. */
extern int FUN_0036ebc0(int *);
/* Supplied declaration required: FUN_00370244. */


int FUN_00370064(int param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2,0x4c,4);
  if (temp_v0 != 0) {
    FUN_002bcd68(temp_v0,param_1,0x4c);
    puVar4 = (unsigned int *)0x0;
    if (*(int *)(param_1 + 8) != 0) {
      temp_v1 = *(int *)(param_1 + 8) + param_1 + 8;
    }
    else {
      temp_v1 = 0;
    }
    if (temp_v1 != 0) {
      temp_v1 = FUN_0036ebc0(param_2);
      if (temp_v1 == 0) {
        FUN_00370244(temp_v0,param_2);
        return 0;
      }
      *(int *)(temp_v0 + 8) = temp_v1 - (temp_v0 + 8);
    }
    temp_v1 = *(int *)(param_1 + 0xc);
    if (temp_v1 != 0) {
      puVar4 = (unsigned int *)(temp_v1 + param_1 + 0xc);
    }
    if ((puVar4 != (unsigned int *)0x0) && ((*puVar4 & 0x80000000) == 0)) {
      puVar4 = (unsigned int *)0x0;
    }
    if (puVar4 != (unsigned int *)0x0) {
      puVar2 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x20,4);
      if (puVar2 == (unsigned int *)0x0) {
        FUN_00370244(temp_v0,param_2);
        return 0;
      }
      temp_v2 = puVar4[1];
      temp_v3 = puVar4[2];
      temp_v4 = puVar4[3];
      temp_v5 = puVar4[4];
      temp_v6 = puVar4[5];
      temp_v7 = puVar4[6];
      temp_v8 = puVar4[7];
      *puVar2 = *puVar4;
      puVar2[1] = temp_v2;
      puVar2[2] = temp_v3;
      puVar2[3] = temp_v4;
      puVar2[4] = temp_v5;
      puVar2[5] = temp_v6;
      puVar2[6] = temp_v7;
      puVar2[7] = temp_v8;
      *(int *)(temp_v0 + 0xc) = (int)puVar2 - (temp_v0 + 0xc);
      puVar2[1] = temp_v0 - (int)(puVar2 + 1);
    }
  }
  return temp_v0;
}
