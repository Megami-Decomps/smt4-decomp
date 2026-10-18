/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d35d0` (_code @ 0x1d35d0, 0x140 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004474f4; /* 0x4474f4 */
extern int DAT_00448c20; /* 0x448c20 */

/* Supplied declaration required: FUN_00266e10. */
/* Supplied declaration required: FUN_00287a3c. */
/* Supplied declaration required: FUN_00287d54. */
extern unsigned int FUN_002920e4(unsigned int);


void FUN_001d35d0(void)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  
  if ((*(char *)(DAT_00448c20 + 8) == '\0') && (temp_v3 = 0, 0 < *(int *)(DAT_00448c20 + 4))) {
    temp_v7 = 50.0f;
    do {
      temp_v4 = DAT_00448c20 + temp_v3 * 0x20;
      if ((*(char *)(temp_v4 + 0xc) != '\0') && (*(short *)(temp_v4 + 0x1c) == 1)) {
        temp_v6 = *(float *)(*(int *)(temp_v4 + 0x10) * 4 - 0x3bb7d48);
        temp_v5 = *(float *)(DAT_004474f4 + 0x4c);
        FUN_00287d54();
        if (*(int *)(temp_v4 + 0x18) != 0) {
          temp_v1 = *(int *)(temp_v4 + 0x14);
          if (temp_v5 > temp_v6 + temp_v7) {
            FUN_00287a3c();
            *(unsigned int *)(temp_v4 + 0x18) = 0;
            *(unsigned short *)(temp_v4 + 0x1e) = 0;
            *(unsigned int *)(temp_v4 + 0x14) = 0;
          }
          else {
            FUN_00266e10();
            if ((temp_v1 == 0) &&
               (temp_v0 = *(short *)(temp_v4 + 0x1e) + 1, *(short *)(temp_v4 + 0x1e) = temp_v0, temp_v0 >= 9))
            {
              FUN_00287a3c(*(unsigned int *)(temp_v4 + 0x14));
              *(unsigned int *)(temp_v4 + 0x18) = 0;
              *(unsigned short *)(temp_v4 + 0x1e) = 0;
            }
          }
        }
        else if (temp_v5 < temp_v6) {
          temp_v2 = FUN_002920e4(*(unsigned int *)(temp_v4 + 0x10));
          *(unsigned int *)(temp_v4 + 0x14) = temp_v2;
          *(unsigned int *)(temp_v4 + 0x18) = 1;
          *(unsigned short *)(temp_v4 + 0x1e) = 0;
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < *(int *)(DAT_00448c20 + 4));
  }
  return;
}
