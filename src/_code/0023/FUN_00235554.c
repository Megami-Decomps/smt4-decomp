/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00235554` (_code @ 0x235554, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00235554_arg0 fn_00235554_arg0;
struct fn_00235554_arg0 {
    unsigned char pad_0x0[0x5a0];
    undefined4 field_0x5a0; /* +0x5a0 */
    unsigned char pad_0x5a4[0x4];
    unsigned char field_0x5a8; /* +0x5a8 */
    unsigned char pad_0x5a9[0x3];
    undefined4 field_0x5ac; /* +0x5ac */
    unsigned char pad_0x5b0[0x4];
    unsigned char field_0x5b4; /* +0x5b4 */
    unsigned char pad_0x5b5[0xf];
    void *field_0x5c4; /* +0x5c4 */
};

/* Supplied declaration required: FUN_00290d74. */
/* Supplied declaration required: FUN_00296f4c. */


int FUN_00235554(fn_00235554_arg0 *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_00290d74(param_1->field_0x5ac);
  if (temp_v0 != -1) {
    puVar2 = (unsigned int *)&param_1->field_0x5b4;
  }
  else {
    temp_v0 = FUN_00290d74(param_1->field_0x5a0,param_2);
    puVar2 = (unsigned int *)&param_1->field_0x5a8;
  }
  param_1->field_0x5c4 = puVar2;
  FUN_00296f4c(*puVar2,temp_v0);
  return temp_v0;
}
