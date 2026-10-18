/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efc44` (_code @ 0x2efc44, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */


int FUN_002efc44(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  if ((param_1 != 0) && ((*(unsigned int *)(param_1 + 0x3c) & 0x20000000) == 0)) {
    temp_v1 = param_2 - 1;
    temp_v5 = temp_v1 == 9;
    temp_v2 = temp_v1;
    if (temp_v1 >= 10) {
      temp_v2 = 9;
    }
    temp_v4 = param_2 - 10;
    if (9 >= temp_v1) {
      temp_v5 = temp_v2 == 0;
      temp_v4 = temp_v2;
    }
    temp_v3 = 0;
    temp_v0 = 0;
    if (!temp_v5 && temp_v4 < 0 == (temp_v1 >= 10 && SBORROW4(temp_v1,9))) {
      do {
        temp_v1 = param_1 + temp_v0 * 2;
        temp_v4 = (int)*(char *)(temp_v1 + 0x62);
        if (temp_v4 == 0) {
          return temp_v3;
        }
        if (temp_v4 == param_3) {
          temp_v3 = temp_v3 + *(char *)(temp_v1 + 99);
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < temp_v2);
    }
    return temp_v3;
  }
  return 0;
}
