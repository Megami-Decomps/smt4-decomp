/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d9ab4` (_code @ 0x4d9ab4, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(void);
int FUN_002ecac4(unsigned int *);
int software_interrupt(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_002ecac4. */


void FUN_004d9ab4(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  *param_1 = param_2;
  if (param_1[0x1b] != 0) {
    software_interrupt(0x23);
    param_1[0x1b] = 0;
  }
  FUN_002ecac4(param_1);
  asdOperatorDeleteArray();
  return;
}

} /* extern "C" */
