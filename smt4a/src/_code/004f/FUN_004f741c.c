/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f741c` (_code @ 0x4f741c, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00100388. */
extern int FUN_00100d60(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e6354. */
extern int FUN_0035bcdc(int);


unsigned int FUN_004f741c(int param_1)

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
    *(unsigned char *)(temp_v1 + 0x2e20) = 0xff;
    FUN_002e6354(temp_v1 + 0x2e28,0x80);
    if (*(int *)(temp_v1 + 0x2e24) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(temp_v1 + 0x2e24) = 0;
    }
    *(unsigned char *)(temp_v1 + 0x2ea8) = 0;
    FUN_002e6354(temp_v3,0x80);
    FUN_002e6354(temp_v4,0x80);
    FUN_00100388(temp_v4,"battle/effect/%s.eft","Move_out_c" + temp_v2 * 0x20);
    FUN_002e342c(temp_v3,temp_v4);
    temp_v0 = FUN_00100d60(temp_v3,0x2f);
    FUN_002e342c(temp_v1 + 0x2e28,temp_v0 + 1);
    temp_v0 = FUN_0035bcdc(temp_v1 + 0x2e28);
    if (temp_v0 == 0xff) {
      FUN_002804b0(temp_v3,temp_v1 + 0x2e24,1);
      *(unsigned char *)(temp_v1 + 0x2ea8) = *(unsigned char *)(temp_v1 + 0x2ea8) | 1;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 4);
  return 1;
}
