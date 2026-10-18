/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_hidlow_ClampStickCircle` (_code @ 0x13c08c, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
} param_6_stack;

/* Supplied declaration required: aeabi_idivmod. */


int nn_hidlow_ClampStickCircle
              (unsigned short *param_1,unsigned short *param_2,int param_3,int param_4,int param_5,
              int param_6)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v4 = param_4 * param_4 + param_3 * param_3;
  if (temp_v4 <= param_5 * param_5) {
    *param_2 = 0;
    *param_1 = 0;
    return 0;
  }
  temp_v0 = temp_v4 * 0x4000;
  if (temp_v0 < 1) {
    temp_v2 = 0;
  }
  else {
    temp_v3 = 1;
    temp_v2 = temp_v0;
    if (temp_v0 >= 2) {
      do {
        temp_v3 = temp_v3 * 2;
        temp_v2 = temp_v2 >> 1;
      } while (temp_v3 < temp_v2);
    }
    do {
      temp_v2 = temp_v3;
      temp_v3 = aeabi_idivmod(temp_v0,temp_v2);
      temp_v3 = (temp_v3 + temp_v2) >> 1;
    } while (temp_v3 < temp_v2);
  }
  if (param_6 * param_6 - temp_v4 == 0 || param_6 * param_6 < temp_v4) {
    param_6 = param_6 - param_5;
    temp_v4 = param_6 * 0x80;
  }
  else {
    temp_v4 = temp_v2 + param_5 * -0x80;
    param_6 = (temp_v2 >> 7) - param_5;
  }
  temp_v1 = aeabi_idivmod(param_3 * temp_v4,temp_v2);
  *param_1 = temp_v1;
  temp_v1 = aeabi_idivmod(param_4 * temp_v4,temp_v2);
  *param_2 = temp_v1;
  return (int)(short)param_6;
}
