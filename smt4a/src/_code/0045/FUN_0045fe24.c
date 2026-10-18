/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045fe24` (_code @ 0x45fe24, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001b6668. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void FUN_0045fe24(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = *(int *)(param_1 + 0x3044);
  temp_v3 = (unsigned int)*(unsigned char *)(param_1 + 0x9d) + *(int *)(param_1 + 0x50);
  if (temp_v3 >= 0x80) {
    temp_v3 = 0x7f;
  }
  else if (temp_v3 < 0) {
    temp_v3 = 0;
  }
  FUN_001b6668(temp_v2 + 8,param_1 + 0xf8);
  piVar2 = *(int **)(temp_v2 + 0xc);
  if (piVar2 != (int *)(temp_v2 + 0xc)) {
    do {
      temp_v1 = (unsigned int)*(unsigned char *)((int)piVar2 - 0x5b) + piVar2[-0x2a];
      if (temp_v1 >= 0x80) {
        temp_v0 = 0x7f;
      }
      else {
        temp_v0 = 0;
        if (-1 < temp_v1) {
          temp_v0 = temp_v1;
        }
      }
    } while ((temp_v0 <= temp_v3) && (piVar2 = (int *)*piVar2, piVar2 != (int *)(temp_v2 + 0xc)));
  }
  nw_ut_internal_LinkListImpl_insert(temp_v2 + 8,piVar2,param_1 + 0xf8);
  return;
}
