/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001270f8` (_code @ 0x1270f8, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern unsigned int DAT_004d42b4; /* 0x4d42b4 */
extern int DAT_004d42c4; /* 0x4d42c4 */

/* Supplied declaration required: FUN_001270a8. */
extern int FUN_00129584(unsigned int *, unsigned int);
extern int FUN_0013af84(unsigned int);
/* Supplied declaration required: FUN_002bbb2c. */
/* Supplied declaration required: nn_os_LightEvent_ClearSignal. */
/* Supplied declaration required: nn_os_LightEvent_Initialize. */


void FUN_001270f8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_lr; 4 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r4;
  unsigned int in_lr;
  
  nn_os_LightEvent_Initialize(param_1,0);
  nn_os_LightEvent_Initialize(param_1 + 8,0);
  nn_os_LightEvent_ClearSignal(param_1);
  nn_os_LightEvent_ClearSignal(param_1 + 8);
  FUN_001270a8(param_1);
  DAT_004d42c4 = param_1 + 8;
  temp_v0 = FUN_00129584(&DAT_004d42b4,0x207);
  if (-(temp_v0 >> 0x1f) != 0) {
    FUN_002bbb2c(temp_v0,0x12715c,-(temp_v0 >> 0x1f),param_4,unaff_r4,in_lr);
  }
  temp_v0 = FUN_0013af84(0x207);
  if (temp_v0 < 0) {
    FUN_002bbb2c(temp_v0,0x127170);
    return;
  }
  return;
}
