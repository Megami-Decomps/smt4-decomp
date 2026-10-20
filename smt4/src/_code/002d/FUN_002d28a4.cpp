/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d28a4` (_code @ 0x2d28a4, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002df5f8(void);

extern int DAT_004474f4; /* 0x4474f4 */
extern int DAT_0049f91c; /* 0x49f91c */
extern int DAT_0049f920; /* 0x49f920 */

/* Supplied declaration required: FUN_002df5f8. */


void FUN_002d28a4(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  *(unsigned char *)(DAT_004474f4 + 0x2b8) = 0;
  FUN_002df5f8();
  temp_v0 = DAT_004474f4;
  if (param_1 == 10 && param_2 == 8) {
    *(unsigned int *)(DAT_004474f4 + 0xd4) = 0x42c80000;
    *(unsigned int *)(temp_v0 + 0x114) = 0x43480000;
    *(unsigned int *)(temp_v0 + 0x154) = 0;
    *(unsigned int *)(temp_v0 + 0x194) = 0x43be0000;
    *(unsigned int *)(temp_v0 + 0x1d4) = 0x42280000;
  }
  temp_v0 = DAT_004474f4;
  temp_v1 = 0x437a0000;
  temp_v2 = 0x442f0000;
  temp_v3 = 0x42480000;
  if (DAT_0049f91c != 0x19) {
    if (DAT_0049f91c != 0x1a) {
      if (DAT_0049f91c != 0x1b) {
        if (DAT_0049f91c != 0x1c) {
          return;
        }
        if (DAT_0049f920 != 1) {
          return;
        }
        temp_v1 = 0x43af0000;
        temp_v2 = 0x44098000;
        temp_v3 = 0x425c0000;
      }
      else if (DAT_0049f920 != 1) {
        return;
      }
    }
    else if (DAT_0049f920 != 1) {
      return;
    }
  }
  else if (DAT_0049f920 != 3) {
    return;
  }
  *(unsigned char *)(DAT_004474f4 + 0x2b8) = 1;
  *(unsigned int *)(temp_v0 + 0xd0) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x110) = 0x432a0000;
  *(unsigned int *)(temp_v0 + 0x150) = 0;
  *(unsigned int *)(temp_v0 + 400) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x1d0) = temp_v3;
  *(unsigned int *)(temp_v0 + 0xd4) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x114) = 0x432a0000;
  *(unsigned int *)(temp_v0 + 0x154) = 0;
  *(unsigned int *)(temp_v0 + 0x194) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x1d4) = temp_v3;
  *(unsigned int *)(temp_v0 + 0xd8) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x118) = 0x432a0000;
  *(unsigned int *)(temp_v0 + 0x158) = 0;
  *(unsigned int *)(temp_v0 + 0x198) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x1d8) = temp_v3;
  return;
}

} /* extern "C" */
