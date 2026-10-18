/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036199c` (_code @ 0x36199c, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


/* WARNING: Removing unreachable block (ram,0x003619cc) */

unsigned int FUN_0036199c(unsigned int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_2 != 0) {
    temp_v0 = *param_1;
    if (param_2 + param_1[1] <= temp_v0) {
      temp_v0 = param_2 + param_1[1];
    }
    param_1[1] = temp_v0;
  }
  return param_1[1];
}
