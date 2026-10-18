/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004aa854` (_code @ 0x4aa854, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004aa854_arg0 fn_004aa854_arg0;
struct fn_004aa854_arg0 {
    unsigned char pad_0x0[0x387c];
    undefined4 field_0x387c; /* +0x387c */
    undefined4 field_0x3880; /* +0x3880 */
    unsigned char pad_0x3884[0xc];
    undefined4 field_0x3890; /* +0x3890 */
    unsigned char pad_0x3894[0x348];
    undefined4 field_0x3bdc; /* +0x3bdc */
    unsigned char pad_0x3be0[0x60];
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
    unsigned char pad_0x4858[0x3f30];
    undefined4 field_0x8788; /* +0x8788 */
};

extern int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_0039eaa8. */


void FUN_004aa854(fn_004aa854_arg0 *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057a9c8;
  *(unsigned int *)(DAT_0057a9c8 + 0x12fcc) = param_2;
  FUN_0039eaa8(temp_v0 + 0x28c4);
  return;
}
