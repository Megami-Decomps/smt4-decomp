/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014f560` (_code @ 0x14f560, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_00471b58; /* 0x471b58 */

/* Unsupported intrinsic, declaration required: ClearExclusiveLocal (CALLOTHER). */
/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_002a8554. */


void FUN_0014f560(int *param_1)

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
      FUN_002a8554(DAT_00471b58,param_1,1,1,0,0);
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
