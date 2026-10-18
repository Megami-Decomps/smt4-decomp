/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00192268` (_code @ 0x192268, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int *FUN_002c32a0(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


void FUN_00192268(unsigned short param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002c32a0(0x10000,0x100,0,0x2c,0x10,1);
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *puVar1 = 0xdc;
  *(unsigned short *)(puVar1 + 1) = param_1;
  return;
}
