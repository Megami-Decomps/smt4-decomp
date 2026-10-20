/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00461fe0` (_code @ 0x461fe0, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00466458(...);
int FUN_00466810(...);

typedef struct fn_00461fe0_arg0 fn_00461fe0_arg0;
typedef struct fn_00461fe0_arg0_p130 fn_00461fe0_arg0_p130;
struct fn_00461fe0_arg0 {
    unsigned char pad_0x0[0x5];
    byte field_0x5; /* +0x5 */
    unsigned char pad_0x6[0x7c];
    byte field_0x82; /* +0x82 */
    unsigned char pad_0x83[0x15];
    unsigned char field_0x98; /* +0x98 */
    unsigned char pad_0x99[0x97];
    fn_00461fe0_arg0_p130 *field_0x130; /* +0x130 */
};
struct fn_00461fe0_arg0_p130 {
    unsigned char pad_0x0[0x5];
    unsigned char field_0x5; /* +0x5 */
    unsigned char pad_0x6[0x7c];
    unsigned char field_0x82; /* +0x82 */
    unsigned char pad_0x83[0x15];
    byte field_0x98; /* +0x98 */
    unsigned char pad_0x99[0x97];
    unsigned char field_0x130; /* +0x130 */
    unsigned char pad_0x131[0xa];
    byte field_0x13b; /* +0x13b */
    unsigned char pad_0x13c[0x54];
    undefined4 field_0x190; /* +0x190 */
    unsigned char pad_0x194[0x18];
    undefined4 field_0x1ac; /* +0x1ac */
};

/* Supplied declaration required: FUN_00466458. */
/* Supplied declaration required: FUN_00466810. */


void FUN_00461fe0(fn_00461fe0_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  fn_00461fe0_arg0_p130 *unaff_r4;
  unsigned char temp_v0;
  
  temp_v0 = param_1->field_0x5 != 0;
  if (temp_v0) {
    unaff_r4 = param_1->field_0x130;
  }
  if (temp_v0 && unaff_r4 != (fn_00461fe0_arg0_p130 *)0x0) {
    do {
      if (0 < (int)unaff_r4->field_0x190) {
        unaff_r4->field_0x190 = unaff_r4->field_0x190 - 1;
      }
      if (((unaff_r4->field_0x190 == 0) && (unaff_r4->field_0x98 != 4)) &&
         (param_1->field_0x82 == 0)) {
        FUN_00466810();
      }
      if (unaff_r4->field_0x13b == 0) {
        FUN_00466458(unaff_r4,1);
      }
      unaff_r4 = (fn_00461fe0_arg0_p130 *)unaff_r4->field_0x1ac;
    } while (unaff_r4 != (fn_00461fe0_arg0_p130 *)0x0);
  }
  return;
}

} /* extern "C" */
