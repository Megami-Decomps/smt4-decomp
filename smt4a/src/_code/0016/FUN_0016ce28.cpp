/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016ce28` (_code @ 0x16ce28, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016cdd8(int);
int FUN_0016e800(...);
int nn_os_LightEvent_Initialize(int, int);
int nn_os_LightEvent_ClearSignal(int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern unsigned int DAT_0062d2d8; /* 0x62d2d8 */
extern int DAT_0062d2e8; /* 0x62d2e8 */

/* Supplied declaration required: FUN_0016cdd8. */
/* Supplied declaration required: FUN_0016e800. */
extern int FUN_0016f9bc(unsigned int *, unsigned int);
extern int FUN_0018a8ec(unsigned int);
/* Supplied declaration required: nn_os_LightEvent_Initialize. */
/* Supplied declaration required: nn_os_LightEvent_ClearSignal. */


void FUN_0016ce28(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_lr; 4 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r4;
  unsigned int in_lr;
  
  nn_os_LightEvent_Initialize(param_1,0);
  nn_os_LightEvent_Initialize(param_1 + 8,0);
  nn_os_LightEvent_ClearSignal(param_1);
  nn_os_LightEvent_ClearSignal(param_1 + 8);
  FUN_0016cdd8(param_1);
  DAT_0062d2e8 = param_1 + 8;
  temp_v0 = FUN_0016f9bc(&DAT_0062d2d8,0x207);
  if (-(temp_v0 >> 0x1f) != 0) {
    FUN_0016e800(temp_v0,0x16ce8c,-(temp_v0 >> 0x1f),param_4,unaff_r4,in_lr);
  }
  temp_v0 = FUN_0018a8ec(0x207);
  if (temp_v0 < 0) {
    FUN_0016e800(temp_v0,0x16cea0);
    return;
  }
  return;
}

} /* extern "C" */
