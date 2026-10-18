/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002273ac` (_code @ 0x2273ac, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int *FUN_002582e8(void);


void FUN_002273ac(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002582e8();
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
  }
  return;
}
