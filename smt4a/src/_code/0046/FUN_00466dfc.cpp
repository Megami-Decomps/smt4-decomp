/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00466dfc` (_code @ 0x466dfc, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b6668(int, int);
int UnsignedDoesSaturate(int, int);
int UnsignedSaturate(int, int);
int nw_ut_internal_LinkListImpl_insert(int, int *, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedDoesSaturate (CALLOTHER). */
/* Supplied declaration required: FUN_001b6668. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void FUN_00466dfc(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  
  temp_v2 = *(int *)(param_1 + 0x11c);
  temp_v1 = (unsigned int)*(unsigned char *)(param_1 + 0x9d) + *(int *)(param_1 + 0x50);
  temp_v0 = UnsignedSaturate(temp_v1,7);
  UnsignedDoesSaturate(temp_v1,7);
  FUN_001b6668(temp_v2 + 8,param_1 + 0xf8);
  piVar3 = *(int **)(temp_v2 + 0xc);
  if (piVar3 != (int *)(temp_v2 + 0xc)) {
    do {
      temp_v1 = piVar3[-0x2a] + (unsigned int)*(unsigned char *)((int)piVar3 - 0x5b);
      if (temp_v1 >= 0x80) {
        temp_v1 = 0x7f;
      }
      else if (temp_v1 < 0) {
        temp_v1 = 0;
      }
    } while ((temp_v1 <= temp_v0) && (piVar3 = (int *)*piVar3, piVar3 != (int *)(temp_v2 + 0xc)));
  }
  nw_ut_internal_LinkListImpl_insert(temp_v2 + 8,piVar3,param_1 + 0xf8);
  return;
}

} /* extern "C" */
