/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ff43c` (_code @ 0x2ff43c, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00212500(void);
int FUN_002ce938(int *, int, int, int);

/* Supplied declaration required: FUN_00212500. */
/* Supplied declaration required: FUN_002ce938. */


int * FUN_002ff43c(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  piVar2 = (int *)(int)(short)param_1[2];
  FUN_002ce938(piVar2,(int)*(short *)((int)param_1 + 10),(int)(short)param_1[3],
               *(unsigned short *)((int)param_1 + 0x12));
  if (param_1[5] != 0) {
    piVar2[5] = param_1[5];
    FUN_00212500();
  }
  temp_v1 = *(unsigned int *)(*param_1 + 0x18);
  temp_v2 = 0;
  if ((temp_v1 != 0) && (temp_v2 = temp_v1 & 1, temp_v2 == 1)) {
    **(unsigned short **)(*piVar2 + 0x48) = **(unsigned short **)(*param_1 + 0x48);
  }
  if (temp_v2 < *(unsigned int *)(*param_1 + 0x18)) {
    do {
      temp_v3 = temp_v2 * 2 + 2;
      temp_v4 = temp_v2 * 2;
      temp_v0 = temp_v2 * 2;
      temp_v2 = temp_v2 + 2;
      *(unsigned short *)(*(int *)(*piVar2 + 0x48) + temp_v0) =
           *(unsigned short *)(*(int *)(*param_1 + 0x48) + temp_v4);
      *(unsigned short *)(*(int *)(*piVar2 + 0x48) + temp_v3) =
           *(unsigned short *)(*(int *)(*param_1 + 0x48) + temp_v3);
    } while (temp_v2 < *(unsigned int *)(*param_1 + 0x18));
  }
  if ((short)param_1[2] < 1) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = (int)(short)param_1[2] & 1;
    if (temp_v2 == 1) {
      puVar6 = (unsigned int *)param_1[1];
      puVar7 = (unsigned int *)piVar2[1];
      temp_v5 = puVar6[1];
      temp_v6 = puVar6[2];
      temp_v7 = puVar6[3];
      *puVar7 = *puVar6;
      puVar7[1] = temp_v5;
      puVar7[2] = temp_v6;
      puVar7[3] = temp_v7;
    }
  }
  if ((int)temp_v2 < (int)(short)param_1[2]) {
    do {
      puVar6 = (unsigned int *)(param_1[1] + temp_v2 * 0x10);
      temp_v5 = puVar6[1];
      temp_v6 = puVar6[2];
      temp_v7 = puVar6[3];
      puVar7 = (unsigned int *)(piVar2[1] + temp_v2 * 0x10);
      temp_v4 = temp_v2 * 0x10 + 0x10;
      temp_v2 = temp_v2 + 2;
      *puVar7 = *puVar6;
      puVar7[1] = temp_v5;
      puVar7[2] = temp_v6;
      puVar7[3] = temp_v7;
      puVar6 = (unsigned int *)(param_1[1] + temp_v4);
      temp_v5 = puVar6[1];
      temp_v6 = puVar6[2];
      temp_v7 = puVar6[3];
      puVar7 = (unsigned int *)(piVar2[1] + temp_v4);
      *puVar7 = *puVar6;
      puVar7[1] = temp_v5;
      puVar7[2] = temp_v6;
      puVar7[3] = temp_v7;
    } while ((int)temp_v2 < (int)(short)param_1[2]);
  }
  return piVar2;
}

} /* extern "C" */
