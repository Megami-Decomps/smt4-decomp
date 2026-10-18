/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d1fb0` (_code @ 0x1d1fb0, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_002bcf58. */
extern unsigned int *FUN_002c34a4(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4b30. */


unsigned int * FUN_001d1fb0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002c34a4(0x10000,0x100,0,0x110,0x10,1);
  FUN_002c4b30(puVar1,0x110);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[3] = 0x3f800000;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[7] = 0x3f800000;
  puVar1[9] = 0xffffffff;
  puVar1[8] = 0x3f800000;
  FUN_002bcf58(puVar1 + 0xc,param_1 + 0x30,0xb4);
  return puVar1;
}
