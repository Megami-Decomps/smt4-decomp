/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c2278` (_code @ 0x1c2278, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_001af88c. */
/* Supplied declaration required: FUN_001af958. */
/* Supplied declaration required: FUN_001af968. */
/* Supplied declaration required: FUN_001afd84. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_erase_2AC900. */


void FUN_001c2278(int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  
  FUN_001af958();
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + param_2 * 0x10 + temp_v1 * 8;
    if (*(char *)(temp_v0 + 0x294) == '\x01') {
      if (temp_v1 == 0) {
        FUN_001af88c(*(unsigned int *)(temp_v0 + 0x290));
        temp_v1 = 1;
        *(unsigned char *)(temp_v0 + 0x294) = 2;
        continue;
      }
      if (temp_v1 == 1) {
        FUN_001af968(*(unsigned int *)(temp_v0 + 0x290));
        *(unsigned char *)(temp_v0 + 0x294) = 2;
      }
    }
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 2) {
      temp_v1 = param_1 + param_2 * 0xc;
      if (*(int *)(temp_v1 + 0x54) != 0) {
        FUN_001afd84((int)(char)param_2);
        param_1 = param_1 + param_2 * 8;
        *(unsigned int *)(param_1 + 0x280) = 0;
        *(unsigned int *)(param_1 + 0x284) = 0;
        piVar3 = *(int **)(temp_v1 + 0x58);
        if (piVar3 != (int *)(temp_v1 + 0x58)) {
          do {
            (**(romwright_code **)(piVar3[-1] + 0xc))(piVar3 + -1);
            piVar3 = (int *)*piVar3;
          } while (piVar3 != (int *)(temp_v1 + 0x58));
        }
        nw_ut_internal_LinkListImpl_erase_2AC900
                  ((int *)(temp_v1 + 0x54),*(unsigned int *)(temp_v1 + 0x58),temp_v1 + 0x58);
        return;
      }
      return;
    }
  } while( 1 );
}
