/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f01e0` (_code @ 0x2f01e0, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fe8; /* 0x588fe8 */

/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: rt_memcpy. */


void FUN_002f01e0(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = DAT_00588fe8;
  if (param_2 >= 0x11) {
    return;
  }
  *(unsigned int *)(DAT_00588fe8 + 0x5dc) = 0;
  *(unsigned int *)(temp_v0 + 0x5e0) = 0;
  *(unsigned int *)(temp_v0 + 0x5e4) = 0;
  *(unsigned int *)(temp_v0 + 0x5e8) = 0;
  *(unsigned int *)(temp_v0 + 0x59c) = 0;
  *(unsigned int *)(temp_v0 + 0x5a0) = 0;
  *(unsigned int *)(temp_v0 + 0x5a4) = 0;
  *(unsigned int *)(temp_v0 + 0x5a8) = 0;
  rt_memcpy(temp_v0 + 0x59c,param_1,param_2 << 1);
  if (param_2 != 0) {
    temp_v1 = param_2 & 1;
  }
  else {
    temp_v1 = 0;
  }
  temp_v3 = 0;
  if ((param_2 != 0 && temp_v1 != 0) && -1 < (int)temp_v1) {
    do {
      if (*(short *)(temp_v0 + temp_v3 * 2 + 0x59c) == 0) {
        FUN_00203b40(temp_v0 + 0x5ec,temp_v3,8,1,0,1);
        *(unsigned char *)(temp_v0 + 0x528) = 1;
        *(unsigned char *)(temp_v0 + 0x660) = 0;
        return;
      }
      temp_v3 = temp_v3 + 1;
    } while ((int)temp_v3 < (int)temp_v1);
  }
  while( 1 ) {
    temp_v3 = temp_v1;
    if (((int)param_2 <= (int)temp_v3) || (temp_v2 = temp_v0 + temp_v3 * 2, *(short *)(temp_v2 + 0x59c) == 0))
    {
      FUN_00203b40(temp_v0 + 0x5ec,temp_v3,8,1,0,1);
      *(unsigned char *)(temp_v0 + 0x528) = 1;
      *(unsigned char *)(temp_v0 + 0x660) = 0;
      return;
    }
    if (*(short *)(temp_v2 + 0x59e) == 0) break;
    temp_v1 = temp_v3 + 2;
  }
  temp_v3 = temp_v3 + 1;
  FUN_00203b40(temp_v0 + 0x5ec,temp_v3,8,1,0,1);
  *(unsigned char *)(temp_v0 + 0x528) = 1;
  *(unsigned char *)(temp_v0 + 0x660) = 0;
  return;
}
