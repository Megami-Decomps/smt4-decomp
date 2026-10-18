/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00302fec` (_code @ 0x302fec, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00302fec_arg1 fn_00302fec_arg1;
struct fn_00302fec_arg1 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    int field_0x18; /* +0x18 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_0030fb34. */
/* Supplied declaration required: FUN_00311248. */


unsigned int FUN_00302fec(unsigned int param_1,fn_00302fec_arg1 *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_2->field_0x10;
  FUN_00311248(param_1,&temp_v0,4,1);
  if (param_2->field_0x10 != 0) {
    FUN_0030fb34(param_1,param_2->field_0xc + param_2->field_0x18,param_2->field_0x10 << 3);
  }
  return param_1;
}
