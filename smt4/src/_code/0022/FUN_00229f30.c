/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00229f30` (_code @ 0x229f30, 0x148 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433158; /* 0x433158 */

extern unsigned int FUN_002c0c74(unsigned int);
extern int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


int FUN_00229f30(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned short *puVar6;
  
  temp_v2 = *(int *)(DAT_00433158 + 0x398);
  if (temp_v2 != 0) {
    param_4 = *(unsigned int *)(DAT_00433158 + 0x394);
  }
  if (temp_v2 != 0 && param_4 != 0) {
    temp_v0 = param_4 & 1;
    temp_v4 = 0;
    if (temp_v4 < temp_v0) {
      do {
        if (*(unsigned short *)(temp_v2 + temp_v4 * 0x10) == param_1) {
          return temp_v2 + temp_v4 * 0x10;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < temp_v0);
    }
    for (; temp_v0 < param_4; temp_v0 = temp_v0 + 2) {
      puVar6 = (unsigned short *)(temp_v2 + temp_v0 * 0x10);
      if (*puVar6 == param_1) {
        return temp_v2 + temp_v0 * 0x10;
      }
      if (puVar6[8] == param_1) {
        temp_v2 = temp_v2 + temp_v0 * 0x10;
        return temp_v2 + 0x10;
      }
    }
  }
  temp_v1 = FUN_002c0cec(0x1c,2);
  temp_v2 = FUN_002c0cc4();
  temp_v4 = FUN_002c0c74(temp_v1);
  temp_v0 = 0;
  if (temp_v4 != 0) {
    temp_v0 = temp_v4 & 1;
    temp_v3 = 0;
    if (temp_v0 != 0) {
      do {
        if (*(unsigned short *)(temp_v2 + temp_v3 * 0x10) == param_1) {
          return temp_v2 + temp_v3 * 0x10;
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < (int)temp_v0);
    }
  }
  while( 1 ) {
    if (temp_v4 <= temp_v0) {
      return 0;
    }
    puVar6 = (unsigned short *)(temp_v2 + temp_v0 * 0x10);
    if (*puVar6 == param_1) {
      return temp_v2 + temp_v0 * 0x10;
    }
    if (puVar6[8] == param_1) break;
    temp_v0 = temp_v0 + 2;
  }
  temp_v2 = temp_v2 + temp_v0 * 0x10;
  return temp_v2 + 0x10;
}
