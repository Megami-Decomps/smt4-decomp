/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bfd84` (_code @ 0x3bfd84, 0x114 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00102c30(unsigned int, char *);


void FUN_003bfd84(int param_1,int param_2)

{
/* irregular: 3 goto(s) */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned short *puVar6;
  int temp_v5;
  
  *(unsigned int *)(param_1 + 0x100) = 0;
  *(unsigned int *)(param_1 + 0x204) = 0;
  temp_v4 = 0;
  temp_v5 = *(int *)(*(int *)(param_2 + 0x210) + 0x44);
  if (0 < temp_v5) {
    do {
      temp_v2 = 0;
      puVar6 = (unsigned short *)(*(int *)(*(int *)(param_2 + 0x210) + 0x40) + temp_v4 * 0x38);
      temp_v3 = *(int *)(*(int *)(param_2 + 0x210) + 0x34) + (unsigned int)*puVar6 * 0x2c;
      do {
        if (temp_v2 == 0) {
          temp_v0 = *(int *)(temp_v3 + 4);
LAB_003bfdfc:
          if ((temp_v0 != 0) &&
             (temp_v0 = FUN_00102c30(*(unsigned int *)(temp_v0 + 0x1c),"dami"), temp_v0 != 0)) {
            temp_v1 = *(int *)(param_1 + 0x204);
            temp_v0 = 0;
            if (temp_v0 < temp_v1) {
              do {
                if ((int)*(short *)(param_1 + temp_v0 * 4 + 0x104) == (unsigned int)*puVar6)
                goto LAB_003bfe7c;
                temp_v0 = temp_v0 + 1;
              } while (temp_v0 < temp_v1);
            }
            *(unsigned short *)(param_1 + temp_v1 * 4 + 0x104) = *puVar6;
            *(short *)(param_1 + *(int *)(param_1 + 0x204) * 4 + 0x106) = (short)temp_v2;
            *(int *)(param_1 + 0x204) = *(int *)(param_1 + 0x204) + 1;
          }
        }
        else {
          if (temp_v2 == 1) {
            temp_v0 = *(int *)(temp_v3 + 8);
            goto LAB_003bfdfc;
          }
          if (temp_v2 == 2) {
            temp_v0 = *(int *)(temp_v3 + 0xc);
            goto LAB_003bfdfc;
          }
        }
LAB_003bfe7c:
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 3);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v5);
  }
  return;
}
