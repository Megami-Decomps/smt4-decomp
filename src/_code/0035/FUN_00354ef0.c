/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00354ef0` (_code @ 0x354ef0, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern int FUN_002bb804(int, unsigned int *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bbd10. */


unsigned int FUN_00354ef0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1 [2];
  
  temp_v1[0] = param_4;
  temp_v0 = FUN_002bb804(param_1 + 4,temp_v1,param_2,param_3);
  if (temp_v0 < 0) {
    FUN_002bbd10(temp_v0,0x354f10);
  }
  return temp_v1[0];
}
