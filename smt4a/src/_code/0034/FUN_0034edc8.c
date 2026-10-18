/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034edc8` (_code @ 0x34edc8, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0034edc8_arg0 fn_0034edc8_arg0;
struct fn_0034edc8_arg0 {
    unsigned char pad_0x0[0x387c];
    int field_0x387c; /* +0x387c */
    undefined4 field_0x3880; /* +0x3880 */
    unsigned char pad_0x3884[0x4];
    unsigned char field_0x3888; /* +0x3888 */
    unsigned char pad_0x3889[0x7];
    undefined4 field_0x3890; /* +0x3890 */
    unsigned char pad_0x3894[0x1f];
    unsigned char field_0x38b3; /* +0x38b3 */
    unsigned char pad_0x38b4[0x38c];
    undefined4 field_0x3c40; /* +0x3c40 */
    unsigned char pad_0x3c44[0xbc8];
    undefined2 field_0x480c; /* +0x480c */
    unsigned char pad_0x480e[0x10];
    undefined2 field_0x481e; /* +0x481e */
    undefined2 field_0x4820; /* +0x4820 */
    undefined2 field_0x4822; /* +0x4822 */
    unsigned char pad_0x4824[0xc];
    undefined2 field_0x4830; /* +0x4830 */
    unsigned char pad_0x4832[0x1e];
    undefined4 field_0x4850; /* +0x4850 */
    unsigned char pad_0x4854[0x3];
    byte field_0x4857; /* +0x4857 */
    unsigned char pad_0x4858[0x2c37];
    undefined1 field_0x748f; /* +0x748f */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0020ad6c. */
extern int FUN_002a21c8(void);
/* Supplied declaration required: FUN_003756c8. */


void FUN_0034edc8(fn_0034edc8_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  param_1->field_0x38b3 = 0;
  if (param_1->field_0x387c == 0) {
    temp_v0 = FUN_002a21c8();
    if (temp_v0 == 0) {
      FUN_003756c8(0);
    }
    FUN_0020ad6c(param_1,0xe,1);
    return;
  }
  if (param_1->field_0x387c == 0x17) {
    *(unsigned int *)&param_1->field_0x3888 = 0x1e;
    FUN_0020ad6c(param_1,0x18,1);
    return;
  }
  FUN_0020ad6c(param_1,0x1e,1);
  return;
}
