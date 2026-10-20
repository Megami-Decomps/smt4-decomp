/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045b844` (_code @ 0x45b844, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a5894(int *, int);
int UnsignedDoesSaturate(int, int);
int UnsignedSaturate(int, int);
int nw_ut_internal_LinkListImpl_insert(int *, int *, int);

typedef int romwright_code(...);
/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedDoesSaturate (CALLOTHER). */
/* Supplied declaration required: FUN_001a5894. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


unsigned int FUN_0045b844(int *param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = (unsigned int)*(unsigned char *)(param_2 + 0x9d) + *(int *)(param_2 + 0x50);
  temp_v0 = UnsignedSaturate(temp_v2,7);
  UnsignedDoesSaturate(temp_v2,7);
  if (param_1[0xc] != 0) {
    while( 1 ) {
      if (*param_1 < param_1[0xc]) {
        nw_ut_internal_LinkListImpl_insert(param_1,param_1 + 1,param_2 + 0x100);
        FUN_001a5894(param_1,param_2);
        *(int **)(param_2 + 0x10) = param_1;
        return 1;
      }
      temp_v2 = param_1[4];
      if ((int *)(temp_v2 - 0x108) == (int *)0x0) break;
      temp_v3 = (unsigned int)*(unsigned char *)(temp_v2 - 0x6b) + *(int *)(temp_v2 - 0xb8);
      if ((char)param_1[0x16] != '\0') {
        temp_v1 = UnsignedSaturate(temp_v3,7);
        UnsignedDoesSaturate(temp_v3,7);
        if (temp_v0 <= temp_v1) {
          return 0;
        }
      }
      else {
        temp_v1 = UnsignedSaturate(temp_v3,7);
        UnsignedDoesSaturate(temp_v3,7);
        if (temp_v0 < temp_v1) {
          return 0;
        }
      }
      (**(romwright_code **)(*(int *)(temp_v2 - 0x108) + 0x10))();
    }
  }
  return 0;
}

} /* extern "C" */
