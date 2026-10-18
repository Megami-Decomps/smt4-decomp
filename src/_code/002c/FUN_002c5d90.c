/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5d90` (_code @ 0x2c5d90, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_0046505c; /* 0x46505c */

extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


void FUN_002c5d90(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x310,1);
  *puVar1 = DAT_0046505c;
  return;
}
