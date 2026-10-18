/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eacb4` (_code @ 0x3eacb4, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0040a244. */


void FUN_003eacb4(int param_1)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  int *piVar9;
  int *piVar10;
  unsigned char temp_v7;
  
  piVar10 = (int *)(param_1 + 0x4554);
  if (*piVar10 != -1) {
    piVar9 = (int *)(param_1 + 0x4558);
    if (*piVar9 != 0) {
      temp_v6 = 0;
      do {
        temp_v0 = param_1 + temp_v6 * 4;
        temp_v5 = *(int *)(temp_v0 + 0x216c);
        if ((temp_v5 != 0) && (*(int *)(temp_v5 + 4) == *(int *)(*piVar9 + 4))) {
          temp_v2 = (int)(short)*(int *)(temp_v5 + 4);
          temp_v1 = 0;
          do {
            temp_v3 = param_1 + temp_v1 * 2;
            temp_v4 = temp_v3 + 0x2200;
            temp_v7 = *(short *)(temp_v3 + 0x2214) == temp_v2;
            if (!temp_v7) {
              temp_v4 = (int)*(short *)(temp_v3 + 0x2216);
            }
            if (temp_v7 || temp_v4 == temp_v2) goto LAB_003ead50;
            temp_v1 = temp_v1 + 2;
          } while (temp_v1 < 0x2a);
          FUN_0040a244(temp_v5);
          *(unsigned int *)(temp_v0 + 0x216c) = 0;
        }
LAB_003ead50:
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0x2a);
      *piVar9 = 0;
    }
    piVar9 = (int *)(param_1 + 0x1ed4);
    *(unsigned int *)(*piVar9 + *piVar10 * 0x1d0 + 0x50) = 0;
    puVar8 = (unsigned int *)
             (*(int *)(param_1 + 0x1ffc) + *(short *)(*piVar9 + *piVar10 * 0x1d0 + 0x68) * 0x408);
    *puVar8 = 0;
    puVar8[1] = 0;
    *(unsigned short *)(*piVar9 + *piVar10 * 0x1d0 + 0x68) = 0xffff;
    *piVar10 = -1;
  }
  return;
}
