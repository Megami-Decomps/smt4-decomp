/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9de4` (_code @ 0x2e9de4, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002e9de4_arg0 fn_002e9de4_arg0;
struct fn_002e9de4_arg0 {
    unsigned char pad_0x0[0x4];
    ushort field_0x4; /* +0x4 */
    unsigned char pad_0x6[0x2];
    uint field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    int field_0x10; /* +0x10 */
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x3];
    uint field_0x18; /* +0x18 */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_002eb588. */
/* Supplied declaration required: FUN_002f8b88. */


unsigned int FUN_002e9de4(fn_002e9de4_arg0 *param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int uStack_c;
  
  temp_v1 = param_3;
  uStack_c = param_4;
  FUN_002f8b88(*(unsigned int *)(param_1 + 1));
  FUN_002eb588(&temp_v1);
  temp_v0 = temp_v1 - param_1->field_0x10;
  param_1->field_0x18 = temp_v0;
  if ((param_1->field_0x8 < temp_v0) && (param_1->field_0x8 != 0xffffffff)) {
    param_1[1].field_0x14 = 1;
    if ((param_1->field_0x4 != 1) && (param_1->field_0x4 == 2)) {
      return 0;
    }
  }
  return 1;
}
