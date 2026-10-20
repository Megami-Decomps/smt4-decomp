/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010e7e0` (_code @ 0x10e7e0, 0x5a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f9048(...);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002f9048. */


unsigned int FUN_0010e7e0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = 0;
  temp_v3 = *(int *)(param_1 + 0x164);
  do {
    if (*(int *)(param_1 + 0x168) == temp_v3) {
      if (((*(char *)(param_1 + 0x148) != '\0' || temp_v0) ||
          (temp_v3 = FUN_002f9048(*(unsigned int *)(param_1 + 500)), temp_v3 == 0)) ||
         (temp_v3 = FUN_002f9048(param_1 + 0x1d4), temp_v3 == 0)) {
        temp_v2 = 1;
      }
      else {
        temp_v2 = 0;
      }
      return temp_v2 ^ 1;
    }
    temp_v1 = (**(romwright_code **)(**(int **)(temp_v3 + 4) + 0x10))();
    if (temp_v1 != 0) {
      temp_v0 = 1;
      if (((*(char *)(param_1 + 0x148) != '\0' || temp_v0) ||
          (temp_v3 = FUN_002f9048(*(unsigned int *)(param_1 + 500)), temp_v3 == 0)) ||
         (temp_v3 = FUN_002f9048(param_1 + 0x1d4), temp_v3 == 0)) {
        temp_v2 = 1;
      }
      else {
        temp_v2 = 0;
      }
      return temp_v2 ^ 1;
    }
    temp_v3 = temp_v3 + 8;
  } while( 1 );
}

} /* extern "C" */
