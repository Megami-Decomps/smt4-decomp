/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b9ca4` (_code @ 0x3b9ca4, 0xc0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003b9ca4_arg0 fn_003b9ca4_arg0;
struct fn_003b9ca4_arg0 {
    unsigned char pad_0x0[0x20];
    unsigned char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x7];
    undefined4 field_0x28; /* +0x28 */
    int field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x69c];
    undefined1 field_0x6cc; /* +0x6cc */
    unsigned char pad_0x6cd[0x68f];
    void *field_0xd5c; /* +0xd5c */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_00432fc8; /* 0x432fc8 */

/* Supplied declaration required: FUN_0022b1f8. */
/* Supplied declaration required: FUN_0023077c. */
/* Supplied declaration required: FUN_00263978. */
/* Supplied declaration required: FUN_002738b4. */
/* Supplied declaration required: FUN_0027390c. */
extern int FUN_00273958(int);
/* Supplied declaration required: FUN_0027dd94. */
/* Supplied declaration required: FUN_0027e9e4. */
/* Supplied declaration required: FUN_0027ea24. */
/* Supplied declaration required: FUN_002b8b78. */


void FUN_003b9ca4(fn_003b9ca4_arg0 *param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  
  if (param_1->field_0x2c != 0) {
    if ((param_1->field_0x2c == 1) && (temp_v0 = FUN_00273958(DAT_00432fc8 + 0xa8), temp_v0 != 0)) {
      FUN_0027390c(DAT_00432fc8 + 0xa8);
      FUN_0022b1f8(param_1);
      FUN_0027dd94(0);
      FUN_0027e9e4(0);
      FUN_0027ea24(*(unsigned int *)&param_1[1].field_0x20,
                   *(unsigned char *)((int)param_1->field_0xd5c + 0x3f));
      param_1->field_0x2c = 0;
      param_1->field_0x28 = 5;
      param_1->field_0x6cc = 0;
      FUN_00263978((int)param_1->field_0xd5c + 2);
      FUN_0023077c(1);
      return;
    }
  }
  else {
    FUN_002738b4(DAT_00432fc8 + 0xa8);
    FUN_002b8b78(0x9e);
    param_1->field_0x2c = 1;
  }
  return;
}
