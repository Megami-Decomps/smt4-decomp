/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023092c` (_code @ 0x23092c, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} void_stack;

extern int DAT_00588fe8; /* 0x588fe8 */


void FUN_0023092c(void)

{
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v1 = DAT_00588fe8;
  temp_v3 = 8;
  temp_v2 = 0;
  do {
    temp_v5 = temp_v1 + temp_v2 * 2;
    temp_v0 = *(short *)(temp_v5 + 0x5cc);
    if ((temp_v0 != 0) && (temp_v0 == *(short *)(temp_v1 + 0x5bc))) {
      *(unsigned short *)(temp_v5 + 0x5cc) = 0;
    }
    temp_v3 = temp_v3 - 1;
    temp_v2 = temp_v2 + 1;
  } while (temp_v3 != 0);
  temp_v2 = 0;
  *(unsigned short *)(temp_v1 + 0x5bc) = 0;
  do {
    if (0 < 7 - temp_v2) {
      temp_v3 = 0;
      temp_v5 = 7 - temp_v2;
      do {
        temp_v4 = temp_v1 + (temp_v2 + temp_v3) * 2;
        if ((*(short *)(temp_v4 + 0x5bc) == 0) && (*(short *)(temp_v4 + 0x5be) != 0)) {
          *(short *)(temp_v4 + 0x5bc) = *(short *)(temp_v4 + 0x5be);
          *(unsigned short *)(temp_v4 + 0x5be) = 0;
        }
        temp_v5 = temp_v5 - 1;
        temp_v3 = temp_v3 + 1;
      } while (temp_v5 != 0);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 7);
  return;
}

} /* extern "C" */
