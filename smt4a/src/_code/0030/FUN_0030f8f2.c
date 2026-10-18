/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f8f2` (_code @ 0x30f8f2, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_0030f7d8. */


unsigned int FUN_0030f8f2(int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *param_2;
  temp_v1 = param_2[1];
  FUN_0030f7d8(param_1,&temp_v0);
  if (param_1 != 0) {
    return 0;
  }
  return 1;
}
