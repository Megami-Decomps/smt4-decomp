/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd75c` (_code @ 0x2bd75c, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c4938(void);
int FUN_002c5300(int, int, int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c5300. */


int * FUN_002bd75c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  
  if (param_1 != 0) {
    piVar1 = (int *)0x10000;
    FUN_002c5300(0x10000,0x100,0,0x48,0);
  }
  else {
    piVar1 = (int *)0x10000;
    FUN_002c5300(0x10000,0x100,0,0x48,1);
  }
  FUN_002c4938();
  piVar1[2] = 0x10000;
  piVar1[1] = 0xde1;
  piVar1[0xe] = 2;
  piVar1[0xf] = 0;
  piVar1[0x10] = 0;
  *piVar1 = *piVar1 + 1;
  return piVar1;
}

} /* extern "C" */
