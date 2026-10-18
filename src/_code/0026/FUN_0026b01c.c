/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026b01c` (_code @ 0x26b01c, 0xac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} void_stack;

extern int DAT_0044e190; /* 0x44e190 */


void FUN_0026b01c(void)

{
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v1 = DAT_0044e190;
  temp_v3 = 8;
  temp_v2 = 0;
  do {
    temp_v5 = temp_v1 + temp_v2 * 2;
    temp_v0 = *(short *)(temp_v5 + 0x4b2);
    if ((temp_v0 != 0) && (temp_v0 == *(short *)(temp_v1 + 0x4a2))) {
      *(unsigned short *)(temp_v5 + 0x4b2) = 0;
    }
    temp_v3 = temp_v3 - 1;
    temp_v2 = temp_v2 + 1;
  } while (temp_v3 != 0);
  temp_v2 = 0;
  *(unsigned short *)(temp_v1 + 0x4a2) = 0;
  do {
    if (0 < 7 - temp_v2) {
      temp_v3 = 0;
      temp_v5 = 7 - temp_v2;
      do {
        temp_v4 = temp_v1 + (temp_v2 + temp_v3) * 2;
        if ((*(short *)(temp_v4 + 0x4a2) == 0) && (*(short *)(temp_v4 + 0x4a4) != 0)) {
          *(short *)(temp_v4 + 0x4a2) = *(short *)(temp_v4 + 0x4a4);
          *(unsigned short *)(temp_v4 + 0x4a4) = 0;
        }
        temp_v5 = temp_v5 - 1;
        temp_v3 = temp_v3 + 1;
      } while (temp_v5 != 0);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 7);
  return;
}
