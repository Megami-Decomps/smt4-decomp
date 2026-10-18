/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9d6c` (_code @ 0x2e9d6c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002e9d6c_arg0 fn_002e9d6c_arg0;
struct fn_002e9d6c_arg0 {
    unsigned char pad_0x0[0x8];
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    uint field_0x18; /* +0x18 */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_002eb588. */


int FUN_002e9d6c(fn_002e9d6c_arg0 *param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int uStack_c;
  
  if (param_1->field_0x8 == -1) {
    return -1;
  }
  temp_v1 = param_3;
  uStack_c = param_4;
  FUN_002eb588(&temp_v1);
  temp_v0 = temp_v1 - param_1->field_0x10;
  param_1->field_0x18 = temp_v0;
  if (temp_v0 < (unsigned int)param_1->field_0x8) {
    return param_1->field_0x8 - temp_v0;
  }
  return 0;
}
