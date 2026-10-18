/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128610` (_code @ 0x128610, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00128610_arg1 fn_00128610_arg1;
struct fn_00128610_arg1 {
    short field_0x0; /* +0x0 */
    short field_0x2; /* +0x2 */
    unsigned char pad_0x4[0x2];
    short field_0x6; /* +0x6 */
    short field_0x8; /* +0x8 */
};

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_5_stack;

/* Supplied declaration required: FUN_0013b8f8. */
/* Supplied declaration required: FUN_0013b9fc. */
/* Supplied declaration required: FUN_0013bae0. */


void FUN_00128610(short *param_1,fn_00128610_arg1 *param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  
  temp_v0 = (char)param_1[6];
  if (temp_v0 == '\0') {
    FUN_0013b9fc(param_2,param_3,param_4,param_5,(int)*param_1,(int)param_1[3]);
    return;
  }
  if (temp_v0 != '\x01') {
    if (temp_v0 == '\x02') {
      FUN_0013bae0(param_2,param_3,param_4,param_5,(int)param_1[2],(int)param_1[5]);
    }
    return;
  }
  FUN_0013b8f8(param_2,param_3,param_4,param_5,(int)param_1[1],(int)param_1[4]);
  return;
}
