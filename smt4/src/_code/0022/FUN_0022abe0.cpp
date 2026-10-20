/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022abe0` (_code @ 0x22abe0, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002485d4(...);
int FUN_00283f30(...);
int FUN_002e1f1c(...);

typedef struct fn_0022abe0_arg1 fn_0022abe0_arg1;
struct fn_0022abe0_arg1 {
    undefined2 field_0x0; /* +0x0 */
    undefined2 field_0x2; /* +0x2 */
    undefined2 field_0x4; /* +0x4 */
    undefined2 field_0x6; /* +0x6 */
    undefined2 field_0x8; /* +0x8 */
    undefined2 field_0xa; /* +0xa */
    undefined2 field_0xc; /* +0xc */
    undefined2 field_0xe; /* +0xe */
    unsigned char pad_0x10[0x26c];
    undefined4 field_0x27c; /* +0x27c */
    void *field_0x280; /* +0x280 */
};

/* Supplied declaration required: FUN_002485d4. */
/* Supplied declaration required: FUN_00283f30. */
/* Supplied declaration required: FUN_002e1f1c. */


void FUN_0022abe0(int param_1,fn_0022abe0_arg1 *param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  
  if (*(int *)(param_1 + 0x278) != 0) {
    FUN_00283f30(param_2,1);
    return;
  }
  temp_v0 = *(int *)(param_1 + 0x27c);
  temp_v1 = temp_v0 == 0;
  if (temp_v1) {
    temp_v0 = *(int *)(param_1 + 0x280);
  }
  if (temp_v1 && temp_v0 == 0) {
    if (*(int *)(param_1 + 0x284) == 0) {
      return;
    }
    FUN_002e1f1c(*(unsigned short *)(param_1 + 0xce),param_2,8);
    return;
  }
  FUN_002485d4(temp_v0,param_2);
  return;
}

} /* extern "C" */
