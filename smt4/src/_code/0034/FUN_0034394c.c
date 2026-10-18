/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034394c` (_code @ 0x34394c, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_004207c8; /* 0x4207c8 */

/* Supplied declaration required: FUN_0023ded4. */


unsigned int * FUN_0034394c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v4 = 0;
  *param_1 = (unsigned int)&DAT_004207c8;
  do {
    temp_v1 = param_1[temp_v4 + 1];
    if (temp_v1 != 0) {
      if (*(int *)(temp_v1 + 0x40) == 1) {
        temp_v2 = 0;
        do {
          temp_v0 = temp_v2 * 4;
          temp_v3 = *(int *)(temp_v0 + 0x47e50c);
          if ((temp_v3 != 0) && (*(int *)(temp_v3 + 4) == *(int *)(temp_v1 + 4))) {
            FUN_0023ded4(temp_v3);
            if (*(int **)(temp_v0 + 0x47e50c) != (int *)0x0) {
              (**(romwright_code **)(**(int **)(temp_v0 + 0x47e50c) + 4))();
            }
            *(unsigned int *)(temp_v0 + 0x47e50c) = 0;
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
