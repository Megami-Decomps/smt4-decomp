/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00283ebc` (_code @ 0x283ebc, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */


int FUN_00283ebc(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  
  if ((param_1 != 0) && ((*(unsigned int *)(param_1 + 0x38) & 0x80000000) == 0)) {
    temp_v2 = param_2 - 1;
    temp_v6 = temp_v2 == 8;
    temp_v3 = temp_v2;
    if (temp_v2 >= 9) {
      temp_v3 = 8;
    }
    temp_v0 = param_2 - 9;
    if (8 >= temp_v2) {
      temp_v6 = temp_v3 == 0;
      temp_v0 = temp_v3;
    }
    temp_v4 = 0;
    temp_v1 = 0;
    if (!temp_v6 && temp_v0 < 0 == (temp_v2 >= 9 && SBORROW4(temp_v2,8))) {
      do {
        temp_v2 = param_1 + temp_v1 * 2;
        temp_v5 = (unsigned int)*(unsigned char *)(temp_v2 + 0x58);
        if (temp_v5 == 0) {
          return temp_v4;
        }
        if (temp_v5 == param_3) {
          temp_v4 = temp_v4 + (unsigned int)*(unsigned char *)(temp_v2 + 0x59);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < temp_v3);
    }
    return temp_v4;
  }
  return 0;
}
