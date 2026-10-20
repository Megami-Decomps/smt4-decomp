/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00321338` (_code @ 0x321338, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0020ad6c(...);

typedef struct fn_00321338_arg0 fn_00321338_arg0;
struct fn_00321338_arg0 {
    unsigned char pad_0x0[0x387c];
    undefined4 field_0x387c; /* +0x387c */
    undefined4 field_0x3880; /* +0x3880 */
    unsigned char field_0x3884; /* +0x3884 */
    unsigned char pad_0x3885[0xb];
    undefined4 field_0x3890; /* +0x3890 */
    unsigned char pad_0x3894[0x3ac];
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
};

/* Supplied declaration required: FUN_0020ad6c. */


void FUN_00321338(fn_00321338_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0020ad6c(param_1,*(unsigned int *)&param_1->field_0x3884,1);
  return;
}

} /* extern "C" */
