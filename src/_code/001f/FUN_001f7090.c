/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f7090` (_code @ 0x1f7090, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int *FUN_002c34a4(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c3b48. */


unsigned int * FUN_001f7090(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002c34a4(0x10000,0x100,0,0x5c,0x10,1);
  FUN_002c3b48(puVar1,0x5c);
  puVar1[1] = 0xffffffff;
  *puVar1 = param_1;
  puVar1[2] = 0x3f800000;
  return puVar1;
}
