/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ed64c` (_code @ 0x1ed64c, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int DAT_0043e18c; /* 0x43e18c */

/* Supplied declaration required: FUN_0028dcf4. */
/* Supplied declaration required: FUN_0028e6d0. */


void FUN_001ed64c(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043e18c;
  *(unsigned char *)(DAT_0043e18c + 0x2c) = 0;
  FUN_0028dcf4(temp_v0,param_1);
  FUN_0028e6d0(temp_v0,param_2,param_3,param_1,0,2,0);
  return;
}
