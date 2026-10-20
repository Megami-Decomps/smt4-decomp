/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_LightEvent_TryWait` (_code @ 0x2ad1e4, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ClearExclusiveLocal(void);
int hasExclusiveAccess(int *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: ClearExclusiveLocal (CALLOTHER). */
/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */


unsigned char nn_os_LightEvent_TryWait(int *param_1)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  
  if (*param_1 != 1) {
    do {
      temp_v1 = *param_1;
      if (temp_v1 != 0) {
        ClearExclusiveLocal();
        goto LAB_002ad21c;
      }
      temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
    } while (!temp_v0);
    *param_1 = -1;
LAB_002ad21c:
    if (temp_v1 != 0) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
