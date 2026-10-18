/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f718c` (_code @ 0x3f718c, 0x128 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00238170. */
/* Supplied declaration required: FUN_00238aac. */


void FUN_003f718c(unsigned int *param_1,int param_2,unsigned int *param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
  int *piVar4;
  unsigned int temp_v3;
  int *piVar6;
  int *piVar7;
  int temp_v4;
  
  temp_v0 = *(char *)(param_2 + 4);
  if (temp_v0 == '\x01') {
    temp_v3 = *param_3;
    *(unsigned char *)(param_1 + 1) = 1;
    *param_1 = temp_v3;
    return;
  }
  if (temp_v0 != '\x02') {
    if (temp_v0 == '\x03') {
      temp_v3 = *param_3;
      *(unsigned char *)(param_1 + 1) = 3;
      *param_1 = temp_v3;
      piVar6 = (int *)(param_1 + 2);
      param_1[4] = param_4;
      if (param_4 != 0) {
        piVar4 = (int *)param_1[3];
        while (piVar4 != piVar6) {
          piVar7 = (int *)piVar4[1];
          FUN_00238170(param_1[4],piVar4,1);
          piVar4 = piVar7;
        }
        param_1[4] = 0;
        *piVar6 = (int)piVar6;
        param_1[3] = (unsigned int)piVar6;
      }
      param_1[4] = *(unsigned int *)(param_2 + 0x10);
      temp_v4 = *(int *)(param_2 + 0xc);
      while( 1 ) {
        if (temp_v4 == param_2 + 8) {
          return;
        }
        piVar4 = (int *)param_1[4];
        FUN_00238aac(piVar4,1);
        if (piVar4 == (int *)0x0) break;
        *piVar4 = *piVar6;
        piVar4[1] = (int)piVar6;
        *piVar6 = (int)piVar4;
        *(int **)(*piVar4 + 4) = piVar4;
        piVar4[2] = *(int *)(temp_v4 + 8);
        temp_v4 = *(int *)(temp_v4 + 4);
      }
      return;
    }
    if (temp_v0 != '\x04') {
      return;
    }
    temp_v1 = *(unsigned char *)(param_2 + 6);
    temp_v3 = *param_3;
    *(unsigned char *)(param_1 + 1) = 4;
    *(unsigned char *)((int)param_1 + 6) = temp_v1;
  }
  else {
    temp_v2 = *(unsigned short *)(param_2 + 6);
    temp_v3 = *param_3;
    *(unsigned char *)(param_1 + 1) = 2;
    *(unsigned short *)((int)param_1 + 6) = temp_v2;
  }
  *param_1 = temp_v3;
  return;
}
