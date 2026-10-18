/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00150c4c` (_code @ 0x150c4c, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_6: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
} param_6_stack;

extern int FUN_00152320(int, unsigned int, int *, unsigned int);
/* Supplied declaration required: FUN_001556d8. */


void FUN_00150c4c(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned long long param_5,unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = -1;
  temp_v2 = -1;
  temp_v3 = 0;
  temp_v0 = FUN_00152320(param_1[1],param_2,&temp_v1,0);
  if (temp_v0 != 0) {
    if (temp_v3 != 0) {
      FUN_001556d8(param_1,param_3,param_4,temp_v3,(int)param_5,(int)((unsigned long long)param_5 >> 0x20),
                   param_6);
    }
    else {
      temp_v0 = temp_v1;
      if (temp_v1 != -1) {
        temp_v0 = temp_v2;
      }
      if (temp_v1 != -1 && temp_v0 != -1) {
        (**(romwright_code **)(*param_1 + 0x10))(param_1,param_3,param_4,temp_v2 + param_1[0x42],temp_v1);
        return;
      }
    }
  }
  return;
}
