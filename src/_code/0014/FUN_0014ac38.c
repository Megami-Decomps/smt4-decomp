/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014ac38` (_code @ 0x14ac38, 0xd0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002aa7f4. */


void FUN_0014ac38(int *param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar7;
  int unaff_r10;
  int *piVar8;
  unsigned char temp_v4;
  
  temp_v3 = 0;
  if (0 < *(int *)(*param_1 + 0x290)) {
    piVar8 = (int *)0x0;
    do {
      temp_v1 = *(int *)(*param_1 + 0x294);
      piVar2 = piVar8;
      if (temp_v1 != 0) {
        piVar2 = (int *)(*param_1 + 0x294 + temp_v1);
      }
      temp_v1 = piVar2[temp_v3];
      piVar7 = piVar8;
      if (temp_v1 != 0) {
        piVar7 = (int *)(temp_v1 + (int)(piVar2 + temp_v3));
      }
      if (piVar7 != (int *)0x0) {
        temp_v4 = *piVar7 == 0;
        if (!temp_v4) {
          unaff_r10 = *piVar7 + (int)piVar7;
          temp_v4 = unaff_r10 == 0;
        }
        if ((!temp_v4) && (temp_v1 = 0, (unsigned int)(param_3 - param_2) >> 2 != 0)) {
          do {
            piVar1 = (int *)(param_2 + temp_v1 * 4);
            temp_v2 = *piVar1;
            piVar2 = piVar8;
            if (temp_v2 != 0) {
              piVar2 = (int *)((int)piVar1 + temp_v2);
            }
            temp_v2 = *piVar2;
            if (temp_v2 != 0) {
              temp_v2 = temp_v2 + (int)piVar2;
            }
            temp_v0 = unaff_r10;
            FUN_002aa7f4(unaff_r10,temp_v2);
            if (temp_v0 == 0) {
              piVar7[1] = temp_v1;
              break;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < (int)((unsigned int)(param_3 - param_2) >> 2));
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < *(int *)(*param_1 + 0x290));
  }
  return;
}
