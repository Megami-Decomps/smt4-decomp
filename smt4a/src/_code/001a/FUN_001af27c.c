/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001af27c` (_code @ 0x1af27c, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_005c0ad8; /* 0x5c0ad8 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Unsupported intrinsic, declaration required: ClearExclusiveLocal (CALLOTHER). */
/* Supplied declaration required: FUN_001b4a58. */


void FUN_001af27c(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  
  do {
    while (*param_1 < 1) {
      ClearExclusiveLocal();
      piVar2 = param_1 + 1;
      do {
        temp_v0 = (unsigned char)hasExclusiveAccess(piVar2);
      } while (!temp_v0);
      *(short *)piVar2 = (short)*piVar2 + 1;
      FUN_001b4a58(DAT_005c0ad8,param_1,1,1,0,0);
      piVar2 = param_1 + 1;
      do {
        temp_v0 = (unsigned char)hasExclusiveAccess(piVar2);
      } while (!temp_v0);
      *(short *)piVar2 = (short)*piVar2 - 1;
    }
    temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
  } while (!temp_v0);
  *param_1 = *param_1 - 1;
  return;
}
