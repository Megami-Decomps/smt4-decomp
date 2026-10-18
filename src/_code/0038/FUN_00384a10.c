/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00384a10` (_code @ 0x384a10, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00384aac; /* 0x384aac */
extern unsigned char LAB_00384abc; /* 0x384abc */

/* Supplied declaration required: FUN_002356ec. */
/* Supplied declaration required: FUN_00235744. */
/* Supplied declaration required: FUN_00259490. */
/* Supplied declaration required: FUN_00263978. */
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002c0ba8(unsigned int);
extern int FUN_003491c8(void);
extern int FUN_003492a4(void);
/* Supplied declaration required: FUN_00385d34. */


void FUN_00384a10(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_003492a4();
  if ((temp_v0 != 0) && (temp_v0 = FUN_003491c8(), temp_v0 != 0)) {
    FUN_002b8b78(0x3c);
    FUN_002356ec(param_1,&LAB_00384aac);
    *(unsigned int *)(param_1 + 4) = 0xd;
    *(unsigned int *)(param_1 + 8) = 0;
    return;
  }
  temp_v0 = FUN_002c0ba8(0x24);
  if (temp_v0 != 0) {
    FUN_00235744(1);
  }
  FUN_00259490();
  FUN_002356ec(param_1,&LAB_00384abc);
  FUN_00385d34(param_1 + 0x20,(int)*(char *)(param_1 + 0x10));
  FUN_00263978();
  *(unsigned int *)(param_1 + 4) = 6;
  *(unsigned int *)(param_1 + 8) = 0;
  return;
}
