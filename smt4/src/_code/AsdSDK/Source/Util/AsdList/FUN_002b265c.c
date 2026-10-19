/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b265c` (_code @ 0x2b265c, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_0014e738. */
/* Supplied declaration required: FUN_002c5300. */


unsigned int * FUN_002b265c(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)0x100;
  FUN_002c5300(0x100,0x100,0,0x1c,1);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[2] = param_2;
  puVar1[4] = param_3;
  FUN_0014e738(param_1,puVar1,0xffffffff);
  return puVar1;
}
