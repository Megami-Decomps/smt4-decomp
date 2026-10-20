/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0cac` (_code @ 0x2c0cac, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int *dataTableGet(unsigned int, unsigned int);


int * FUN_002c0cac(void)

{
  int *piVar1;
  
  piVar1 = (int *)dataTableGet(0x18,0);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0x314c4254)) {
    piVar1 = piVar1 + 4;
  }
  else {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

} /* extern "C" */
