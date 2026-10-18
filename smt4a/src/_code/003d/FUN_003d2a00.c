/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d2a00` (_code @ 0x3d2a00, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f2c4; /* 0x57f2c4 */

extern int FUN_00102c30(unsigned int, unsigned int);


void FUN_003d2a00(unsigned int param_1)

{
/* irregular: 3 goto(s) */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned short *puVar6;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = DAT_0057f2c4;
  temp_v5 = 0;
  *(unsigned int *)(DAT_0057f2c4 + 0x22c) = 0;
  *(unsigned int *)(temp_v0 + 0x330) = 0;
  temp_v6 = *(int *)(*(int *)(*(int *)(*(int *)(temp_v0 + 0x90) + 4) + 0x210) + 0x44);
  if (0 < temp_v6) {
    do {
      temp_v4 = 0;
      temp_v2 = *(int *)(*(int *)(*(int *)(temp_v0 + 0x90) + 4) + 0x210);
      puVar6 = (unsigned short *)(*(int *)(temp_v2 + 0x40) + temp_v5 * 0x38);
      temp_v2 = *(int *)(temp_v2 + 0x34) + (unsigned int)*puVar6 * 0x2c;
      do {
        if (temp_v4 == 0) {
          temp_v1 = *(int *)(temp_v2 + 4);
LAB_003d2a8c:
          if ((temp_v1 != 0) &&
             (temp_v1 = FUN_00102c30(*(unsigned int *)(temp_v1 + 0x1c),param_1), temp_v1 != 0)) {
            temp_v3 = *(int *)(temp_v0 + 0x330);
            temp_v1 = 0;
            if (temp_v1 < temp_v3) {
              do {
                if ((int)*(short *)(temp_v0 + temp_v1 * 4 + 0x230) == (unsigned int)*puVar6) goto LAB_003d2b0c;
                temp_v1 = temp_v1 + 1;
              } while (temp_v1 < temp_v3);
            }
            *(unsigned short *)(temp_v0 + temp_v3 * 4 + 0x230) = *puVar6;
            *(short *)(temp_v0 + *(int *)(temp_v0 + 0x330) * 4 + 0x232) = (short)temp_v4;
            *(int *)(temp_v0 + 0x330) = *(int *)(temp_v0 + 0x330) + 1;
          }
        }
        else {
          if (temp_v4 == 1) {
            temp_v1 = *(int *)(temp_v2 + 8);
            goto LAB_003d2a8c;
          }
          if (temp_v4 == 2) {
            temp_v1 = *(int *)(temp_v2 + 0xc);
            goto LAB_003d2a8c;
          }
        }
LAB_003d2b0c:
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 3);
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v6);
  }
  return;
}
