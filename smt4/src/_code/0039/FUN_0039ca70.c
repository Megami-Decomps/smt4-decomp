/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039ca70` (_code @ 0x39ca70, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0039ca70_arg0 fn_0039ca70_arg0;
struct fn_0039ca70_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    uint field_0x10; /* +0x10 */
};

extern signed char DAT_0049fb6d; /* 0x49fb6d */

extern int FUN_00231184(void);
/* Supplied declaration required: FUN_0025a0e0. */
/* Supplied declaration required: FUN_00275f00. */
/* Supplied declaration required: FUN_00289880. */
extern int FUN_002c09d0(unsigned int);


void FUN_0039ca70(fn_0039ca70_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_1->field_0x8;
  temp_v0 = 0;
  if (temp_v1 != 0) {
    if (temp_v1 == 1) {
      temp_v0 = FUN_00231184();
      if (temp_v0 != 0) {
        param_1->field_0x8 = 2;
      }
      return;
    }
    if (temp_v1 != 2) {
      return;
    }
    param_1->field_0x10 = param_1->field_0x10 & 0xfeffffff;
    param_1->field_0x4 = 2;
  }
  else {
    if (DAT_0049fb6d != '\0') {
      DAT_0049fb6d = '\0';
      temp_v0 = FUN_002c09d0(0x16);
      if (temp_v0 != 0) {
        FUN_0025a0e0();
      }
      else {
        FUN_00289880();
      }
    }
    FUN_00275f00();
    temp_v0 = 1;
  }
  param_1->field_0x8 = temp_v0;
  return;
}
