/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003434d0` (_code @ 0x3434d0, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b7aa8. */
/* Supplied declaration required: FUN_002bbd58. */
/* Supplied declaration required: FUN_002bbdac. */
/* Supplied declaration required: FUN_002c0000. */
extern int FUN_002c1a48(unsigned int, int, unsigned int);


void FUN_003434d0(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  if ((*(char *)(param_1 + 0x5b0) != '\0') ||
     (temp_v0 = FUN_002c1a48(param_2,param_1 + 0x570,0x40), temp_v0 != 0)) {
    FUN_002c0000(param_1 + 0x570,param_2);
    FUN_002b7aa8(param_1 + 0x530,param_1 + 0x570);
    FUN_002bbdac(param_1,param_1 + 0x114c,param_1 + 0x110c,param_1 + 0x530);
    FUN_002bbd58(*(unsigned int *)(param_1 + 0x52c),param_1 + 0x118c);
    *(unsigned char *)(param_1 + 0x5b0) = 0;
  }
  return;
}
