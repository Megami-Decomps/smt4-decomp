/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e4268` (_code @ 0x2e4268, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001c5464(int, int, int);
int FUN_001c57ac(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_001c5464. */
/* Supplied declaration required: FUN_001c57ac. */


void FUN_002e4268(int *param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  if ((param_1[1] & ~(*param_1 << 1)) < 0 && (param_2[1] & ~(*param_2 << 1)) < 0) {
    FUN_001c5464(*param_1,param_1[1],param_1[2]);
    FUN_001c57ac();
  }
  return;
}

} /* extern "C" */
