/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00485d1c` (_code @ 0x485d1c, 0x150 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0031879c(...);
int FUN_00488ce8(...);
int FUN_00489480(...);
int FUN_0048981c(...);
int FUN_00492c18(...);
int FUN_004d03ec(...);
int VectorSignedToFloat(...);

typedef struct fn_00485d1c_arg0 fn_00485d1c_arg0;
struct fn_00485d1c_arg0 {
    unsigned char pad_0x0[0xc];
    byte field_0xc; /* +0xc */
    unsigned char pad_0xd[0x3];
    uint field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    int field_0x18; /* +0x18 */
    float field_0x1c; /* +0x1c */
    float field_0x20; /* +0x20 */
    float field_0x24; /* +0x24 */
    float field_0x28; /* +0x28 */
};

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern signed char DAT_005f1614; /* 0x5f1614 */
extern signed char DAT_005f1a5c; /* 0x5f1a5c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0031879c. */
/* Supplied declaration required: FUN_00488ce8. */
/* Supplied declaration required: FUN_00489480. */
/* Supplied declaration required: FUN_0048981c. */
extern int FUN_0048e40c(fn_00485d1c_arg0 *);
/* Supplied declaration required: FUN_00492c18. */
/* Supplied declaration required: FUN_004d03ec. */


int FUN_00485d1c(fn_00485d1c_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  int temp_v0;
  fn_00485d1c_arg0 *pfVar2;
  unsigned int in_fpscr;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  
  pfVar2 = (fn_00485d1c_arg0 *)0x0;
  if (DAT_005f1a5c != '\0') {
    DAT_005f1614 = '\0';
  }
  FUN_0031879c();
  if (param_1->field_0xc != 0) {
    if ((param_1->field_0x10 & 0x1000) == 0) {
      if ((param_1->field_0x10 & 0x10) != 0) {
        temp_v0 = param_1->field_0x18 + 1;
        param_1->field_0x18 = temp_v0;
        FUN_004d03ec();
        if (((temp_v0 != 0) && (DAT_005f1614 == '\0')) || (temp_v0 = param_1->field_0x18, temp_v0 >= 0x10)
           ) {
          param_1->field_0x10 = param_1->field_0x10 & 0xffffffef;
        }
        else {
          temp_v2 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v1 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v3 = (param_1->field_0x24 - param_1->field_0x1c) * temp_v1 * 0.06666667f +
                     param_1->field_0x1c;
          temp_v4 = (param_1->field_0x28 - param_1->field_0x20) * temp_v2 * 0.06666667f +
                     param_1->field_0x20;
          FUN_00492c18(&param_1[0x1b].field_0x28,&temp_v3);
        }
      }
      FUN_00489480(param_1);
      FUN_0048981c(param_1);
    }
  }
  else {
    temp_v0 = FUN_0048e40c(param_1);
    if (temp_v0 != 0) {
      FUN_00488ce8();
      pfVar2 = param_1;
    }
  }
  if (DAT_005f1a5c != '\0') {
    DAT_005f1614 = '\x01';
  }
  return (int)pfVar2;
}

} /* extern "C" */
