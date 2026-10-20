/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f4938` (_code @ 0x4f4938, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e314(...);
int FUN_0016c4b8(unsigned int, int);

extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_0014e314. */
extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */


unsigned int FUN_004f4938(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = padButtonIsPressed(9);
  if ((temp_v0 != 0) && (temp_v1 = *(int *)(param_1 + 8) + 1, *(unsigned int *)(param_1 + 8) = temp_v1, temp_v1 >= 3)
     ) {
    *(unsigned int *)(param_1 + 8) = 0;
  }
  FUN_0016c4b8(g_renderCtx,0);
  if (*(int *)(param_1 + 8) != 1) {
    if (*(int *)(param_1 + 8) != 2) {
      return 0;
    }
    FUN_0014e314(0xff7f);
    FUN_0014e314(0xff7f);
  }
  FUN_0014e314(0xff7f,0xff7f);
  return 0;
}

} /* extern "C" */
