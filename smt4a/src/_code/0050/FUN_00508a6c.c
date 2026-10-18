/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00508a6c` (_code @ 0x508a6c, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_00178400. */
/* Supplied declaration required: FUN_001946d4. */
/* Supplied declaration required: FUN_001a8930. */
/* Supplied declaration required: FUN_00507acc. */


unsigned int FUN_00508a6c(int *param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3 [2];
  unsigned char temp_v4;
  
  temp_v1 = param_1[1];
  if (temp_v1 == 0) {
    return 0;
  }
  temp_v0 = param_2 >> 0x18;
  temp_v2 = 0;
  if (temp_v0 != 1) {
    if (temp_v0 != 3) {
      if (temp_v0 != 5) {
        if (temp_v0 != 6) {
          return 0;
        }
        temp_v3[0] = -1;
        temp_v3[1] = 0;
        FUN_00507acc(param_1[1],param_2,temp_v3);
      }
      else {
        temp_v4 = 0;
        temp_v3[0] = -1;
        FUN_001a8930(param_1[1],param_2,temp_v3);
      }
    }
    else {
      temp_v3[0] = -1;
      FUN_001946d4(temp_v1,param_2,temp_v3);
    }
  }
  else {
    FUN_00178400(temp_v1,param_2,temp_v3);
  }
  if (temp_v3[0] != -1) {
    temp_v2 = (**(romwright_code **)(*param_1 + 0x10))(param_1);
  }
  return temp_v2;
}
