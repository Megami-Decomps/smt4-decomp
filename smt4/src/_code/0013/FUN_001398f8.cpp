/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001398f8` (_code @ 0x1398f8, 0x16c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00128174(void);
int FUN_002a84e8(void);
int FUN_002ad888(void);
int threadSleepDuration(int, int);
int FUN_002bb5a4(unsigned int, unsigned int, int);
int FUN_002bb648(void);
int SBORROW4(...);

extern unsigned char DAT_00471b5c; /* 0x471b5c */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00128174. */
/* Supplied declaration required: FUN_002a84e8. */
/* Supplied declaration required: FUN_002ad888. */
/* Supplied declaration required: threadSleepDuration. */
/* Supplied declaration required: FUN_002bb5a4. */
/* Supplied declaration required: FUN_002bb648. */


unsigned int FUN_001398f8(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  temp_v4 = 0;
  do {
    while( 1 ) {
      while( 1 ) {
        temp_v3 = (*(unsigned int *)((unsigned char *)&DAT_00471b5c + 0x4));
        temp_v2 = param_1 + 8;
        *(unsigned int *)(param_1 + 0x14) = 0;
        *(unsigned int *)(param_1 + 0x18) = 0;
        *(unsigned int *)(param_1 + 0xc) = 0;
        *(unsigned int *)(param_1 + 0x10) = 0;
        FUN_002bb5a4(temp_v2,temp_v3,3);
        temp_v3 = (*(unsigned int *)((unsigned char *)&DAT_00471b5c + 0x4));
        if (-1 < (int)temp_v2) {
          return temp_v4;
        }
        temp_v0 = (temp_v2 & 0x3fc00) >> 10;
        if (((temp_v0 != 0x11) || ((temp_v2 & 0x3ff) < 0xe6)) || ((temp_v2 & 0x3ff) >= 0x154)) break;
        threadSleepDuration(10000000,0);
      }
      if (((temp_v0 != 0x11) || ((temp_v2 & 0x3ff) < 100)) || ((temp_v2 & 0x3ff) >= 0xb4)) break;
      FUN_00128174();
      temp_v4 = 1;
    }
    if (((temp_v0 == 0x11) && ((temp_v2 & 0x3ff) >= 0x168)) && ((temp_v2 & 0x3ff) < 0x186)) {
      FUN_002ad888();
      FUN_002a84e8();
      if (((((temp_v3 & 0x3fc00) != 0x4400) || ((temp_v3 & 0x3ff) < 100)) || ((temp_v3 & 0x3ff) >= 0xb4))
         && ((int)temp_v3 < 0)) {
        FUN_002bb648();
      }
      FUN_00128174();
      temp_v4 = 1;
      continue;
    }
    if (temp_v0 == 0x11) {
      temp_v0 = temp_v2 & 0x3ff;
      temp_v5 = SBORROW4(0x186,temp_v0);
      temp_v1 = 0x186 - temp_v0;
      if (temp_v0 >= 0x186) {
        temp_v5 = SBORROW4(temp_v0,400);
        temp_v1 = temp_v0 - 400;
      }
      if (temp_v1 < 0 != temp_v5) {
        FUN_002ad888();
        FUN_002a84e8();
        if (((((temp_v3 & 0x3fc00) != 0x4400) || ((temp_v3 & 0x3ff) < 100)) || ((temp_v3 & 0x3ff) >= 0xb4))
           && ((int)temp_v3 < 0)) {
          FUN_002bb648();
        }
        FUN_00128174();
        temp_v4 = 1;
        continue;
      }
    }
    if ((int)temp_v2 < 0) {
      FUN_002bb648();
    }
  } while( 1 );
}

} /* extern "C" */
