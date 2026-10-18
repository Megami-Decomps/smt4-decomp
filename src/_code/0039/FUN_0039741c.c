/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039741c` (_code @ 0x39741c, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_00421fd0; /* 0x421fd0 */


void FUN_0039741c(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar2 = param_1 + 2;
  *param_1 = (unsigned int)&DAT_00421fd0;
  param_1[1] = (unsigned int)puVar2;
  puVar1 = param_1 + 2;
  param_1[2] = (unsigned int)puVar1;
  param_1[3] = (unsigned int)puVar1;
  param_1[4] = (unsigned int)puVar1;
  *(unsigned char *)(param_1 + 5) = 0;
  param_1[6] = (unsigned int)puVar2;
  param_1[7] = (unsigned int)puVar2;
  param_1[8] = 0;
  return;
}
