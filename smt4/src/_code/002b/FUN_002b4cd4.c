/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4cd4` (_code @ 0x2b4cd4, 0xf0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_0014f8e8. */
/* Supplied declaration required: FUN_0014f9b4. */
/* Supplied declaration required: FUN_0014f9c4. */
/* Supplied declaration required: FUN_0014fd38. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_erase_2AC900. */


void FUN_002b4cd4(int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  
  FUN_0014f9b4();
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + param_2 * 0x10 + temp_v1 * 8;
    if (*(char *)(temp_v0 + 0x2a4) == '\x01') {
      if (temp_v1 == 0) {
        FUN_0014f8e8(*(unsigned int *)(temp_v0 + 0x2a0));
        temp_v1 = 1;
        *(unsigned char *)(temp_v0 + 0x2a4) = 2;
        continue;
      }
      if (temp_v1 == 1) {
        FUN_0014f9c4(*(unsigned int *)(temp_v0 + 0x2a0));
        *(unsigned char *)(temp_v0 + 0x2a4) = 2;
      }
    }
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 2) {
      temp_v1 = param_1 + param_2 * 0xc;
      if (*(int *)(temp_v1 + 100) != 0) {
        FUN_0014fd38((int)(char)param_2);
        param_1 = param_1 + param_2 * 8;
        *(unsigned int *)(param_1 + 0x290) = 0;
        *(unsigned int *)(param_1 + 0x294) = 0;
        piVar3 = *(int **)(temp_v1 + 0x68);
        if (piVar3 != (int *)(temp_v1 + 0x68)) {
          do {
            (**(romwright_code **)(piVar3[-1] + 0xc))(piVar3 + -1);
            piVar3 = (int *)*piVar3;
          } while (piVar3 != (int *)(temp_v1 + 0x68));
        }
        nw_ut_internal_LinkListImpl_erase_2AC900
                  ((int *)(temp_v1 + 100),*(unsigned int *)(temp_v1 + 0x68),temp_v1 + 0x68);
        return;
      }
      return;
    }
  } while( 1 );
}
