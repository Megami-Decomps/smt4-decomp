/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1b64` (_code @ 0x2c1b64, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002c1b64_arg0 fn_002c1b64_arg0;
struct fn_002c1b64_arg0 {
    unsigned char pad_0x0[0x11e4];
    int field_0x11e4; /* +0x11e4 */
    char field_0x11e8; /* +0x11e8 */
    byte field_0x11e9; /* +0x11e9 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_00138810. */
/* Supplied declaration required: FUN_00145d6c. */


void FUN_002c1b64(fn_002c1b64_arg0 *param_1,int param_2)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  fn_002c1b64_arg0 *pfVar1;
  unsigned char temp_v0;
  unsigned char temp_v1;
  
  temp_v1 = param_1->field_0x11e8 == '\0';
  pfVar1 = param_1;
  if (temp_v1) {
    pfVar1 = (fn_002c1b64_arg0 *)param_1->field_0x11e4;
  }
  if (!(temp_v1 && pfVar1 == (fn_002c1b64_arg0 *)param_2)) {
    param_1->field_0x11e4 = param_2;
    if (param_2 != 0) {
      FUN_00138810(*(unsigned int *)(param_2 + 0x14),*(unsigned int *)(param_2 + 0x18),
                   *(unsigned int *)(param_2 + 0x34),*(unsigned int *)(param_2 + 0x30),
                   *(unsigned int *)(param_2 + 0x38),*(unsigned int *)(param_2 + 0x3c),
                   *(unsigned int *)(param_2 + 0x40));
      param_1->field_0x11e9 = 3;
      goto LAB_002c1bc4;
    }
    param_1->field_0x11e8 = '\0';
  }
  else {
LAB_002c1bc4:
    param_1->field_0x11e8 = '\0';
    if (param_2 != 0) {
      temp_v0 = 1;
      if (param_1->field_0x11e9 == 1) {
        return;
      }
      FUN_00145d6c(temp_v0);
      param_1->field_0x11e9 = temp_v0;
      return;
    }
  }
  temp_v0 = 0;
  if (param_1->field_0x11e9 == 0) {
    return;
  }
  FUN_00145d6c(temp_v0);
  param_1->field_0x11e9 = temp_v0;
  return;
}
