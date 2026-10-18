/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026ddc4` (_code @ 0x26ddc4, 0x178 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_0028de84. */
extern short *FUN_0029af4c(void);
extern int FUN_002a89e4(unsigned int);
/* Supplied declaration required: FUN_0033c69c. */


unsigned int FUN_0026ddc4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  short *psVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = DAT_0043dcf0;
  temp_v2 = 0;
  temp_v4 = 0xffffffff;
  do {
    temp_v3 = temp_v0 + temp_v2 * 4;
    FUN_0033c69c(*(unsigned int *)(temp_v3 + 0x6c8));
    psVar2 = (short *)FUN_0029af4c();
    if (*(int *)(*(int *)(temp_v3 + 0x6c8) + 0x34) < 0) {
      if (*psVar2 < 0) {
        temp_v1 = FUN_0028de84(*(unsigned int *)(temp_v3 + 0x6c8));
        if (temp_v1 != -1) {
          temp_v4 = FUN_0028de84(*(unsigned int *)(temp_v3 + 0x6c8));
        }
      }
    }
    else {
      temp_v1 = FUN_002a89e4(*(unsigned int *)(*(int *)(temp_v3 + 0x6c8) + 0x34));
      if ((unsigned int)*(unsigned short *)(temp_v1 + 0x46) == (int)*psVar2) {
        temp_v1 = FUN_0028de84(*(unsigned int *)(temp_v3 + 0x6c8));
        if (temp_v1 != -1) {
          temp_v4 = FUN_0028de84(*(unsigned int *)(temp_v3 + 0x6c8));
        }
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 4);
  temp_v2 = 0;
  do {
    temp_v3 = temp_v0 + temp_v2 * 4;
    FUN_0033c69c(*(unsigned int *)(temp_v3 + 0x6d8));
    psVar2 = (short *)FUN_0029af4c();
    if (*(int *)(*(int *)(temp_v3 + 0x6d8) + 0x34) < 0) {
      if (*psVar2 < 0) {
        temp_v1 = FUN_0028de84(*(unsigned int *)(temp_v3 + 0x6d8));
        if (temp_v1 != -1) {
          temp_v4 = FUN_0028de84(*(unsigned int *)(temp_v3 + 0x6d8));
        }
      }
    }
    else {
      temp_v1 = FUN_002a89e4(*(unsigned int *)(*(int *)(temp_v3 + 0x6d8) + 0x34));
      if ((unsigned int)*(unsigned short *)(temp_v1 + 0x46) == (int)*psVar2) {
        temp_v1 = FUN_0028de84(*(unsigned int *)(temp_v3 + 0x6d8));
        if (temp_v1 != -1) {
          temp_v4 = FUN_0028de84(*(unsigned int *)(temp_v3 + 0x6d8));
        }
      }
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x18) {
      return temp_v4;
    }
  } while( 1 );
}
