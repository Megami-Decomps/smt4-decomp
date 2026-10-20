/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016c4b8` (_code @ 0x16c4b8, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00183da0(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_0019e1fc(int);

typedef struct fn_0016c4b8_arg0 fn_0016c4b8_arg0;
struct fn_0016c4b8_arg0 {
    unsigned char pad_0x0[0x11f0];
    int field_0x11f0; /* +0x11f0 */
    char field_0x11f4; /* +0x11f4 */
    byte field_0x11f5; /* +0x11f5 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_00183da0. */
/* Supplied declaration required: FUN_0019e1fc. */


void FUN_0016c4b8(fn_0016c4b8_arg0 *param_1,int param_2)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  fn_0016c4b8_arg0 *pfVar1;
  unsigned char temp_v0;
  unsigned char temp_v1;
  
  temp_v1 = param_1->field_0x11f4 == '\0';
  pfVar1 = param_1;
  if (temp_v1) {
    pfVar1 = (fn_0016c4b8_arg0 *)param_1->field_0x11f0;
  }
  if (!(temp_v1 && pfVar1 == (fn_0016c4b8_arg0 *)param_2)) {
    param_1->field_0x11f0 = param_2;
    if (param_2 != 0) {
      FUN_00183da0(*(unsigned int *)(param_2 + 0x14),*(unsigned int *)(param_2 + 0x18),
                   *(unsigned int *)(param_2 + 0x34),*(unsigned int *)(param_2 + 0x30),
                   *(unsigned int *)(param_2 + 0x38),*(unsigned int *)(param_2 + 0x3c),
                   *(unsigned int *)(param_2 + 0x40));
      param_1->field_0x11f5 = 3;
      goto LAB_0016c518;
    }
    param_1->field_0x11f4 = '\0';
  }
  else {
LAB_0016c518:
    param_1->field_0x11f4 = '\0';
    if (param_2 != 0) {
      temp_v0 = 1;
      if (param_1->field_0x11f5 == 1) {
        return;
      }
      FUN_0019e1fc(temp_v0);
      param_1->field_0x11f5 = temp_v0;
      return;
    }
  }
  temp_v0 = 0;
  if (param_1->field_0x11f5 == 0) {
    return;
  }
  FUN_0019e1fc(temp_v0);
  param_1->field_0x11f5 = temp_v0;
  return;
}

} /* extern "C" */
