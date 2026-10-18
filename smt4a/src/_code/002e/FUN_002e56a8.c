/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e56a8` (_code @ 0x2e56a8, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002e40f8. */
/* Supplied declaration required: FUN_002e5780. */
/* Supplied declaration required: FUN_002e57c8. */


int * FUN_002e56a8(int *param_1,int *param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_2;
  if (*(int *)(temp_v0 - 0xc) != -1) {
    FUN_002e40f8();
    FUN_002e5780(param_1);
    *param_1 = *param_2;
  }
  else if (param_1 != param_2) {
    FUN_002e57c8(param_1,0,*(unsigned int *)(*param_1 - 4),temp_v0,*(unsigned int *)(temp_v0 - 4));
  }
  return param_1;
}
