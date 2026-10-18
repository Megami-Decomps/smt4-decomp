/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00295798` (_code @ 0x295798, 0x100 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00433158; /* 0x433158 */
extern int DAT_00434210; /* 0x434210 */

/* Supplied declaration required: FUN_00199700. */
/* Supplied declaration required: FUN_002a6214. */
/* Supplied declaration required: FUN_002a6228. */
/* Supplied declaration required: FUN_002aeb78. */
extern int FUN_002aec20(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b087c. */
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_002c5ab8. */
/* Supplied declaration required: FUN_0032c630. */


void FUN_00295798(int param_1,int param_2)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = DAT_00434210;
  if (DAT_00434210 != 0) {
    temp_v1 = param_1;
    FUN_002b087c();
    *(unsigned int *)(temp_v0 + 0x2f0) = (unsigned int)*(unsigned char *)(temp_v1 + 0xa2);
    temp_v1 = param_1;
    FUN_002b9364();
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x90);
    *(unsigned int *)(temp_v0 + 0x2f8) = temp_v2;
    *(int *)(temp_v0 + 0x308) = param_1;
    if (param_2 == 0) {
      temp_v1 = FUN_002aec20(DAT_00433158,0x18,temp_v2,1);
      if (temp_v1 != 0) {
        FUN_002aeb78(DAT_00433158,0x18,*(unsigned int *)(temp_v0 + 0x2f8),0x10000);
      }
      else {
        FUN_002c5ab8(0x18,*(unsigned int *)(temp_v0 + 0x2f8));
      }
      FUN_0032c630(temp_v0);
      FUN_00199700(temp_v0);
      *(unsigned int *)(temp_v0 + 0x2e8) = 2;
      *(unsigned int *)(temp_v0 + 0x2ec) = 0;
      return;
    }
    temp_v1 = FUN_002aec20(DAT_00433158,0x18,temp_v2,1);
    if (temp_v1 != 0) {
      FUN_002a6228(DAT_00433158,0x18,*(unsigned int *)(temp_v0 + 0x2f8),0x10000);
    }
    else {
      FUN_002a6214(0x18,*(unsigned int *)(temp_v0 + 0x2f8));
    }
    *(unsigned int *)(temp_v0 + 0x2e8) = 1;
    *(unsigned int *)(temp_v0 + 0x2ec) = 0;
  }
  return;
}
