/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004611ec` (_code @ 0x4611ec, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int UnsignedDoesSaturate(int, int);
int UnsignedSaturate(int, int);
int nw_ut_internal_LinkListImpl_insert(int *, int *, int);

typedef int romwright_code(...);
/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedDoesSaturate (CALLOTHER). */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


unsigned int FUN_004611ec(int *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  int *piVar6;
  
  temp_v1 = (unsigned int)*(unsigned char *)(param_2 + 0x9d) + *(int *)(param_2 + 0x50);
  temp_v0 = UnsignedSaturate(temp_v1,7);
  UnsignedDoesSaturate(temp_v1,7);
  if (param_1[3] != 0) {
    while( 1 ) {
      if (*param_1 < param_1[3]) {
        nw_ut_internal_LinkListImpl_insert(param_1,param_1 + 1,param_2 + 0x110);
        *(int **)(param_2 + 0x18) = param_1;
        return 1;
      }
      piVar3 = (int *)param_1[1];
      piVar6 = (int *)0x0;
      temp_v1 = 0x80;
      while (piVar3 != param_1 + 1) {
        temp_v2 = piVar3[-0x30] + (unsigned int)*(unsigned char *)((int)piVar3 - 0x73);
        temp_v3 = UnsignedSaturate(temp_v2,7);
        UnsignedDoesSaturate(temp_v2,7);
        if (temp_v3 < temp_v1) {
          piVar6 = piVar3 + -0x44;
        }
        piVar3 = (int *)*piVar3;
        if (temp_v3 < temp_v1) {
          temp_v1 = temp_v3;
        }
      }
      if (piVar6 == (int *)0x0) break;
      temp_v3 = (unsigned int)*(unsigned char *)((int)piVar6 + 0x9d) + piVar6[0x14];
      temp_v1 = UnsignedSaturate(temp_v3,7);
      UnsignedDoesSaturate(temp_v3,7);
      if (temp_v0 < temp_v1) {
        return 0;
      }
      (**(romwright_code **)(*piVar6 + 0x10))();
    }
  }
  return 0;
}

} /* extern "C" */
