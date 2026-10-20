/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00336e44` (_code @ 0x336e44, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027da30(int, int);

/* Supplied declaration required: FUN_0027da30. */


unsigned int FUN_00336e44(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  temp_v4 = 4;
  do {
    puVar1 = (unsigned int *)(*(int *)(param_1 + 0x1fc0) + temp_v4 * 0x288);
    temp_v1 = *puVar1;
    if ((((temp_v1 & 1) != 0) && ((temp_v1 & 0x40) == 0)) &&
       (temp_v0 = param_1, FUN_0027da30(param_1,(int)(short)puVar1[2]), temp_v0 != 0)) {
      temp_v3 = 0;
      do {
        temp_v2 = temp_v0 + temp_v3 * 4;
        temp_v5 = *(int *)(temp_v2 + 0xc) != param_2;
        if (temp_v5) {
          temp_v2 = *(int *)(temp_v2 + 0x10);
        }
        if (!temp_v5 || temp_v2 == param_2) {
          return 1;
        }
        temp_v3 = temp_v3 + 2;
      } while (temp_v3 < 0x32);
    }
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 0x36) {
      return 0;
    }
  } while( 1 );
}

} /* extern "C" */
