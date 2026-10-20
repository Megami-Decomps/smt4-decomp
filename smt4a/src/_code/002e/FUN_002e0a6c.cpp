/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e0a6c` (_code @ 0x2e0a6c, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013ebd8(...);
int FUN_001884b0(unsigned int);
int FUN_00195fc8(void);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_0013ebd8. */
/* Supplied declaration required: FUN_001884b0. */
/* Supplied declaration required: FUN_00195fc8. */


int FUN_002e0a6c(int *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = param_4;
  temp_v0 = (**(romwright_code **)(*param_1 + 0x18))(param_1,*(romwright_code **)(*param_1 + 0x18),param_2,0);
  FUN_0013ebd8();
  if (temp_v0 < 0) {
    temp_v1 = param_1[2];
  }
  else {
    temp_v0 = (**(romwright_code **)(*param_1 + 0x28))(param_1,&temp_v2,param_3,param_4);
    if (temp_v2 == 0) {
      temp_v0 = -0x26ffba7a;
    }
    FUN_0013ebd8(temp_v0);
    if (-1 < temp_v0) {
      FUN_0013ebd8();
      return 0;
    }
    temp_v1 = param_1[2];
  }
  if ((temp_v1 & 0xfffffffe) != 0) {
    if ((temp_v1 & 1) != 0) {
      FUN_00195fc8();
    }
    FUN_001884b0(param_1[2] & 0xfffffffe);
    param_1[2] = 0;
  }
  return temp_v0;
}

} /* extern "C" */
