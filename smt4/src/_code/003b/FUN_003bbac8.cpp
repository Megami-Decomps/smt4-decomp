/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bbac8` (_code @ 0x3bbac8, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c0c74(void);
int FUN_002c0cec(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_002c0c74. */
/* Supplied declaration required: FUN_002c0cec. */


void FUN_003bbac8(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  FUN_002c0cec(0x33,param_2 + 1);
  FUN_002c0c74();
  return;
}

} /* extern "C" */
