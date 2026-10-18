/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bbed4` (_code @ 0x3bbed4, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern unsigned int DAT_0043ddb8; /* 0x43ddb8 */
extern int DAT_00464fac; /* 0x464fac */

extern int FUN_0022af30(unsigned int, unsigned int);
extern unsigned int FUN_00357a28(unsigned int);
/* Supplied declaration required: FUN_00358728. */


unsigned int FUN_003bbed4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_lr; 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int unaff_r4;
  unsigned int in_lr;
  
  temp_v1 = FUN_00357a28(0xe5c);
  temp_v2 = FUN_0022af30(temp_v1,DAT_0043ddb8);
  if (temp_v2 != 0) {
    temp_v1 = FUN_00357a28(0xe5c);
    temp_v3 = 0;
    if (DAT_00464fac != 0) {
      temp_v0 = *(unsigned int *)(DAT_00464fac + 0x18);
      FUN_00358728(temp_v0,temp_v1,param_3,param_4,unaff_r4,in_lr);
      if ((temp_v0 & 0x80000000) == 0) {
        temp_v3 = 1;
      }
    }
    return temp_v3;
  }
  return 0;
}
