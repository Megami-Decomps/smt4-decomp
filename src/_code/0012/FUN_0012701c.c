/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012701c` (_code @ 0x12701c, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern unsigned int DAT_004d42b4; /* 0x4d42b4 */
extern int DAT_004d42c4; /* 0x4d42c4 */

/* Supplied declaration required: FUN_00126fcc. */
extern int FUN_001294a8(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_00138f5c. */
extern int FUN_0013a8f4(unsigned int);
/* Supplied declaration required: FUN_002bbd10. */
/* Supplied declaration required: FUN_002c541c. */


void FUN_0012701c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_lr; 4 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r4;
  unsigned int in_lr;
  
  FUN_002c541c(param_1,0);
  FUN_002c541c(param_1 + 8,0);
  FUN_00138f5c(param_1);
  FUN_00138f5c(param_1 + 8);
  FUN_00126fcc(param_1);
  DAT_004d42c4 = param_1 + 8;
  temp_v0 = FUN_001294a8(&DAT_004d42b4,0x207);
  if (-(temp_v0 >> 0x1f) != 0) {
    FUN_002bbd10(temp_v0,0x127080,-(temp_v0 >> 0x1f),param_4,unaff_r4,in_lr);
  }
  temp_v0 = FUN_0013a8f4(0x207);
  if (temp_v0 < 0) {
    FUN_002bbd10(temp_v0,0x127094);
    return;
  }
  return;
}
