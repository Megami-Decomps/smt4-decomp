/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00317c98` (_code @ 0x317c98, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013ebd8(void);
int vcallSlot12IfValid(unsigned int);
int FUN_00195fc8(void);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_0013ebd8. */
/* Supplied declaration required: vcallSlot12IfValid. */
/* Supplied declaration required: FUN_00195fc8. */


int FUN_00317c98(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [4];
  
  (**(romwright_code **)(*param_1 + 0x18))(param_1,*(romwright_code **)(*param_1 + 0x18),param_2,0);
  FUN_0013ebd8();
  temp_v0 = (**(romwright_code **)(*param_1 + 0x34))(param_1,temp_v1,param_3,param_4,1);
  FUN_0013ebd8();
  if (temp_v0 < 0) {
    if ((param_1[2] & 0xfffffffeU) != 0) {
      if ((param_1[2] & 1U) != 0) {
        FUN_00195fc8();
      }
      vcallSlot12IfValid(param_1[2] & 0xfffffffe);
      param_1[2] = 0;
    }
    return temp_v0;
  }
  FUN_0013ebd8();
  return 0;
}

} /* extern "C" */
