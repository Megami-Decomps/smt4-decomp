/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001aa2f4` (_code @ 0x1aa2f8, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00197e38(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00197e38. */
extern int FUN_001aa324(unsigned int);


void FUN_001aa2f4(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_00197e38();
  temp_v0 = FUN_001aa324(param_1);
  FUN_00197e38();
  *(unsigned int *)(temp_v0 - 0x98) = 0xffffffff;
  return;
}

} /* extern "C" */
