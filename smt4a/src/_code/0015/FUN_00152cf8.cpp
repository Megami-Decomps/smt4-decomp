/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00152cf8` (_code @ 0x152cf8, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167c14(int *, int *, unsigned int);
int SBORROW4(int, int);

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00167c14. */


unsigned int FUN_00152cf8(int param_1,int param_2,int param_3,int param_4,unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  int temp_v5;
  
  piVar2 = &temp_v4;
  temp_v1 = 0;
  FUN_00167c14(&temp_v4,&temp_v5,param_5);
  if ((piVar2 != (int *)0x0) && (param_1 <= temp_v4)) {
    param_1 = param_1 + param_3;
    temp_v3 = SBORROW4(temp_v4,param_1);
    temp_v0 = temp_v4 - param_1;
    temp_v2 = temp_v4 == param_1;
    if (temp_v4 <= param_1) {
      temp_v3 = SBORROW4(param_2,temp_v5);
      temp_v0 = param_2 - temp_v5;
      temp_v2 = param_2 == temp_v5;
      temp_v4 = temp_v5;
    }
    if ((temp_v2 || temp_v0 < 0 != temp_v3) && (temp_v4 <= param_2 + param_4)) {
      temp_v1 = 1;
    }
  }
  return temp_v1;
}

} /* extern "C" */
