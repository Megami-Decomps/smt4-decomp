/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129bd0` (_code @ 0x129bd0, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_002ad254(void);
/* Supplied declaration required: FUN_002ad264. */
/* Supplied declaration required: nn_gxlow_CTR_Gpu_SaveVramSysArea. */


void FUN_00129bd0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002ad254();
  if (temp_v0 != 0) {
    FUN_002ad264(temp_v0);
    nn_gxlow_CTR_Gpu_SaveVramSysArea();
    return;
  }
  return;
}
