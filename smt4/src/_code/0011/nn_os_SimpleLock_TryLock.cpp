/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_SimpleLock_TryLock` (_code @ 0x11bd2c, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ClearExclusiveLocal(void);
int hasExclusiveAccess(int *);

/* Unsupported intrinsic, declaration required: ClearExclusiveLocal (CALLOTHER). */
/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */


unsigned char nn_os_SimpleLock_TryLock(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  
  do {
    if (*param_1 < 1) {
      ClearExclusiveLocal();
      return 0;
    }
    temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
  } while (!temp_v0);
  *param_1 = -*param_1;
  return 1;
}

} /* extern "C" */
