/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00337a34` (_code @ 0x337a34, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00294f64(int);

/* Supplied declaration required: FUN_00294f64. */


void FUN_00337a34(int param_1)

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
  
  piVar10 = (int *)(param_1 + 0x4454);
  if (*piVar10 != -1) {
    piVar9 = (int *)(param_1 + 0x4458);
    if (*piVar9 != 0) {
      temp_v6 = 0;
      do {
        temp_v0 = param_1 + temp_v6 * 4;
        temp_v5 = *(int *)(temp_v0 + 0x2134);
        if ((temp_v5 != 0) && (*(int *)(temp_v5 + 4) == *(int *)(*piVar9 + 4))) {
          temp_v2 = (int)(short)*(int *)(temp_v5 + 4);
          temp_v1 = 0;
          do {
            temp_v3 = param_1 + temp_v1 * 2;
            temp_v4 = temp_v3 + 0x2100;
            temp_v7 = *(short *)(temp_v3 + 0x21dc) == temp_v2;
            if (!temp_v7) {
              temp_v4 = (int)*(short *)(temp_v3 + 0x21de);
            }
            if (temp_v7 || temp_v4 == temp_v2) goto LAB_00337ad0;
            temp_v1 = temp_v1 + 2;
          } while (temp_v1 < 0x2a);
          FUN_00294f64(temp_v5);
          *(unsigned int *)(temp_v0 + 0x2134) = 0;
        }
LAB_00337ad0:
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0x2a);
      *piVar9 = 0;
    }
    piVar9 = (int *)(param_1 + 0x1e98);
    *(unsigned int *)(*piVar9 + *piVar10 * 0x114 + 0x50) = 0;
    puVar8 = (unsigned int *)
             (*(int *)(param_1 + 0x1fc0) + *(short *)(*piVar9 + *piVar10 * 0x114 + 0x60) * 0x288);
    *puVar8 = 0;
    puVar8[1] = 0;
    *(unsigned short *)(*piVar9 + *piVar10 * 0x114 + 0x60) = 0xffff;
    *piVar10 = -1;
  }
  return;
}

} /* extern "C" */
