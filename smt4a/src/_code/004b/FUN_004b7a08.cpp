/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b7a08` (_code @ 0x4b7a08, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005f1b70; /* 0x5f1b70 */
extern unsigned char DAT_005f15fc; /* 0x5f15fc */
extern unsigned int DAT_005f1b78; /* 0x5f1b78 */
extern int DAT_005f1b94; /* 0x5f1b94 */
extern unsigned int DAT_005f1b98; /* 0x5f1b98 */


void FUN_004b7a08(int param_1)

{
  DAT_005f1b70 = 1;
  (*(int *)((unsigned char *)&DAT_005f15fc + 0x578)) = *(short *)(param_1 + 0x3c) + 200;
  DAT_005f1b94 = (*(int *)((unsigned char *)&DAT_005f15fc + 0x578));
  if (*(int *)(param_1 + 0x111c) != 0) {
    DAT_005f1b78 = (unsigned int)*(unsigned char *)(*(int *)(param_1 + 0x111c) + 0x20);
    DAT_005f1b98 = (unsigned int)*(unsigned char *)(*(int *)(param_1 + 0x111c) + 0x20);
  }
  return;
}

} /* extern "C" */
