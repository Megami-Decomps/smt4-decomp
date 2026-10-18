/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fce08` (_code @ 0x3fce08, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003fce08_arg0 fn_003fce08_arg0;
struct fn_003fce08_arg0 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    void *field_0x10; /* +0x10 */
    void *field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x25];
    byte field_0x3d; /* +0x3d */
};

extern int FUN_001861c4(void *, unsigned int);
extern int FUN_00341930(void);
/* Supplied declaration required: FUN_003fc294. */
extern int FUN_003fcbe0(fn_003fce08_arg0 *);
/* Supplied declaration required: FUN_003fcc94. */


unsigned int FUN_003fce08(fn_003fce08_arg0 *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  void *pvVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_001861c4(param_1->field_0x8,param_1->field_0xc);
  temp_v1 = FUN_00341930();
  temp_v2 = 0;
  if (temp_v1 != 0) {
    if (param_1->field_0x3d == 0) {
      temp_v1 = FUN_003fcbe0(param_1);
      if (temp_v1 != 0) {
        FUN_003fcc94(param_1);
      }
      temp_v3 = *(unsigned int *)(temp_v0 + 8);
      temp_v2 = param_1->field_0xc;
      param_1->field_0x3d = 1;
      if (*(short *)((int)param_1->field_0x10 + 4) != 0) {
        pvVar3 = param_1->field_0x14;
        *(unsigned int *)((int)pvVar3 + 0x18) = temp_v3;
        *(unsigned int *)((int)pvVar3 + 0x1c) = temp_v2;
      }
      FUN_003fc294(param_1,param_2);
    }
    temp_v2 = 1;
  }
  return temp_v2;
}
