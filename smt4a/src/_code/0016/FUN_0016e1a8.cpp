/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016e1a8` (_code @ 0x16e1a8, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016e7c0(int, int);
int FUN_001884b0(unsigned int);
int FUN_00195fc8(void);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_0016e7c0. */
/* Supplied declaration required: FUN_001884b0. */
/* Supplied declaration required: FUN_00195fc8. */


void FUN_0016e1a8(int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [8];
  
  temp_v0 = (**(romwright_code **)(*param_1 + 8))(param_1,*(romwright_code **)(*param_1 + 8),0,0,0);
  if (temp_v0 < 0) {
    if ((param_1[2] & 0xfffffffeU) != 0) {
      if ((param_1[2] & 1U) != 0) {
        FUN_00195fc8();
      }
      FUN_001884b0(param_1[2] & 0xfffffffe);
      param_1[2] = 0;
    }
    if (temp_v0 < 0) {
      FUN_0016e7c0(temp_v0,0x16e214);
    }
  }
  temp_v0 = (**(romwright_code **)(*param_1 + 0x34))(param_1,temp_v1,param_2,0x14,1);
  if (temp_v0 < 0) {
    if ((param_1[2] & 0xfffffffeU) != 0) {
      if ((param_1[2] & 1U) != 0) {
        FUN_00195fc8();
      }
      FUN_001884b0(param_1[2] & 0xfffffffe);
      param_1[2] = 0;
    }
    if (temp_v0 < 0) {
      FUN_0016e7c0(temp_v0,0x16e278);
    }
  }
  if ((param_1[2] & 0xfffffffeU) != 0) {
    if ((param_1[2] & 1U) != 0) {
      FUN_00195fc8();
    }
    FUN_001884b0(param_1[2] & 0xfffffffe);
    param_1[2] = 0;
  }
  return;
}

} /* extern "C" */
