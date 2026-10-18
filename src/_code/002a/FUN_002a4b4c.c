/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4b4c` (_code @ 0x2a4b4c, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_6_stack;

/* Supplied declaration required: FUN_002ad958. */


unsigned int
FUN_002a4b4c(unsigned int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,
            int param_5,unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_2 == (unsigned int *)0x0 || param_5 == 0) {
    temp_v0 = 0xe0e046bc;
  }
  else {
    FUN_002ad958(1);
    temp_v0 = (**(romwright_code **)*param_2)(param_2,param_1,param_3,param_4,param_5,param_6);
  }
  return temp_v0;
}
