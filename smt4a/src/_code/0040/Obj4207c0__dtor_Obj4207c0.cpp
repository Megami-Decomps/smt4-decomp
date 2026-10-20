/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZN9Obj4207c0D1Ev` (_code @ 0x40a2c0, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fcfe8(int);

typedef int romwright_code(...);
extern unsigned char DAT_00557c20; /* 0x557c20 */

/* Supplied declaration required: FUN_003fcfe8. */


unsigned int * _ZN9Obj4207c0D1Ev(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v4 = 0;
  *param_1 = (unsigned int)&DAT_00557c20;
  do {
    temp_v1 = param_1[temp_v4 + 1];
    if (temp_v1 != 0) {
      if (*(int *)(temp_v1 + 0x40) == 1) {
        temp_v2 = 0;
        do {
          temp_v0 = temp_v2 * 4;
          temp_v3 = *(int *)(temp_v0 + 0x5cc50c);
          if ((temp_v3 != 0) && (*(int *)(temp_v3 + 4) == *(int *)(temp_v1 + 4))) {
            FUN_003fcfe8(temp_v3);
            if (*(int **)(temp_v0 + 0x5cc50c) != (int *)0x0) {
              (**(romwright_code **)(**(int **)(temp_v0 + 0x5cc50c) + 4))();
            }
            *(unsigned int *)(temp_v0 + 0x5cc50c) = 0;
            break;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 0x10);
      }
      else {
        *(int *)(temp_v1 + 0x40) = *(int *)(temp_v1 + 0x40) - 1;
      }
    }
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 0x10) {
      return param_1;
    }
  } while( 1 );
}

} /* extern "C" */
