/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003db004` (_code @ 0x3db004, 0xfc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0024a964(int);
extern int FUN_00252520(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00297704. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c4b30. */


unsigned int FUN_003db004(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [128];
  unsigned char temp_v4 [132];
  
  temp_v2 = 0;
  do {
    temp_v1 = param_1 + temp_v2 * 0x8c;
    *(unsigned char *)(temp_v1 + 0x2cdc) = 0xff;
    FUN_002c4b30(temp_v1 + 0x2ce4,0x80);
    if (*(int *)(temp_v1 + 0x2ce0) != 0) {
      FUN_002c4360();
      *(unsigned int *)(temp_v1 + 0x2ce0) = 0;
    }
    *(unsigned char *)(temp_v1 + 0x2d64) = 0;
    FUN_002c4b30(temp_v3,0x80);
    FUN_002c4b30(temp_v4,0x80);
    FUN_002be7fc(temp_v4,"battle/effect/%s.eft","Move_out_c" + temp_v2 * 0x20);
    FUN_002bf86c(temp_v3,temp_v4);
    temp_v0 = FUN_00252520(temp_v3,0x2f);
    FUN_002bf86c(temp_v1 + 0x2ce4,temp_v0 + 1);
    temp_v0 = FUN_0024a964(temp_v1 + 0x2ce4);
    if (temp_v0 == 0xff) {
      FUN_00297704(temp_v3,temp_v1 + 0x2ce0,0);
      *(unsigned char *)(temp_v1 + 0x2d64) = *(unsigned char *)(temp_v1 + 0x2d64) | 1;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 5);
  return 1;
}
