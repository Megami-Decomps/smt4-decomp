/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00249ddc` (_code @ 0x249ddc, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int *FUN_002c5300(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


void FUN_00249ddc(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002c5300(0x100,0x100,0,0x14,0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}
