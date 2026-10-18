/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ac17c` (_code @ 0x2ac17c, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_001500b4. */
extern unsigned int *FUN_0015019c(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002ac22c. */
/* Supplied declaration required: FUN_002ac900. */
/* Supplied declaration required: FUN_002bf59c. */


unsigned char FUN_002ac17c(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int unaff_r4;
  
  FUN_002ac22c();
  FUN_001500b4(*param_1,3);
  puVar1 = (unsigned int *)FUN_0015019c(*param_1,0x18,4);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = (unsigned int)(puVar1 + 3);
    puVar1[4] = (unsigned int)(puVar1 + 3);
    *(unsigned char *)(puVar1 + 5) = 1;
    FUN_002ac900(puVar1 + 2,puVar1[3],puVar1 + 3,puVar1 + 2,unaff_r4);
    FUN_002bf59c(param_1 + 1,param_1 + 2,puVar1);
  }
  return puVar1 != (unsigned int *)0x0;
}
