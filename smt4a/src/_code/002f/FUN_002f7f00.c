/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7f00` (_code @ 0x2f7f00, 0x4a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00594b20; /* 0x594b20 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00115560. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */


unsigned long long FUN_002f7f00(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_002e6e34(&uStack_18,param_1 + 4);
  temp_v1 = 0;
  while ((temp_v0 = *(int *)(temp_v1 * 4 + param_1 + 0x34), temp_v0 == 0 ||
         (*(char *)(temp_v0 + 0x34) != '\x02'))) {
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 8) {
      FUN_002e6e5c(&uStack_18);
      temp_v0 = 0;
      if (DAT_00594b20 != 0) {
        FUN_00115560(param_1,param_2);
        temp_v0 = param_1;
      }
      return romwright_piece_4_4(uStack_18,temp_v0);
    }
  }
  FUN_002e6e5c(&uStack_18);
  return romwright_piece_4_4(uStack_18,1);
}
