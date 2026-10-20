/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002996d8` (_code @ 0x2996d8, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int statusCameraSetEye(void);
int FUN_00294d6c(void);
int statusCameraApply(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char g_gameGlobals; /* 0x44e140 */

/* Supplied declaration required: statusCameraSetEye. */
/* Supplied declaration required: FUN_00294d6c. */
/* Supplied declaration required: statusCameraApply. */


void FUN_002996d8(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*(char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1e67) != '\x03' && *(char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1e67) != '\t') {
    return;
  }
  if (param_1 != 0) {
    FUN_00294d6c();
  }
  else {
    statusCameraSetEye();
  }
  statusCameraApply();
  return;
}

} /* extern "C" */
