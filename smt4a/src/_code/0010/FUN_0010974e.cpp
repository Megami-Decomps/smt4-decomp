/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010974e` (_code @ 0x10974e, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sharedRefAddRef(...);
int FUN_002f2978(...);

typedef struct fn_0010974e_arg0 fn_0010974e_arg0;
typedef struct fn_0010974e_arg1 fn_0010974e_arg1;
struct fn_0010974e_arg0 {
    unsigned char pad_0x0[0x4];
    undefined1 field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x7];
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x3];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x7];
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x28];
    byte field_0x41; /* +0x41 */
    unsigned char pad_0x42[0x6];
    void *field_0x48; /* +0x48 */
    unsigned char pad_0x4c[0x4];
    undefined1 field_0x50; /* +0x50 */
};
struct fn_0010974e_arg1 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x7];
    int field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    int field_0x18; /* +0x18 */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: sharedRefAddRef. */
/* Supplied declaration required: FUN_002f2978. */


unsigned char FUN_0010974e(fn_0010974e_arg0 *param_1,fn_0010974e_arg1 *param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  fn_0010974e_arg0 *pfVar1;
  unsigned char temp_v0;
  
  temp_v0 = 0;
  if ((param_2 != (fn_0010974e_arg1 *)0x0) && (param_2->field_0x10 != 0)) {
    *(fn_0010974e_arg1 **)((int)param_1->field_0x48 + 0x38) = param_2;
    sharedRefAddRef(param_2);
    pfVar1 = param_1;
    FUN_002f2978(param_1,param_2->field_0xc + param_2->field_0x18,param_2->field_0x10,param_3,
                 param_1->field_0x48);
    if (param_1->field_0x41 == 0) {
      param_1->field_0x4 = 3;
    }
    temp_v0 = pfVar1 != (fn_0010974e_arg0 *)0x0;
    param_1->field_0x50 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
