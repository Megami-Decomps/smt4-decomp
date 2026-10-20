/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c7bb0` (_code @ 0x2c7bb0, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aba54(void);
int FUN_0028809c(unsigned int, unsigned int, int, int, unsigned int *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_0028809c. */


void FUN_002c7bb0(unsigned int param_1,unsigned int param_2,int param_3,unsigned int *param_4)

{
/* irregular: 2 native warning(s); review required */
  *param_4 = 0;
  FUN_001aba54();
  if (param_3 != 0) {
    FUN_0028809c(param_1,param_2,param_3,1,param_4);
  }
  return;
}

} /* extern "C" */
