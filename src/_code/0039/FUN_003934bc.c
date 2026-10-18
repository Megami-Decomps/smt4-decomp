/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003934bc` (_code @ 0x3934bc, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003934bc_arg0 fn_003934bc_arg0;
struct fn_003934bc_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0xc];
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x3];
    unsigned char field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x3];
    unsigned char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x3];
    unsigned char field_0x24; /* +0x24 */
    unsigned char pad_0x25[0x3];
    unsigned char field_0x28; /* +0x28 */
    unsigned char pad_0x29[0x1df];
    void *field_0x208; /* +0x208 */
};

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_00432fc8; /* 0x432fc8 */

/* Supplied declaration required: FUN_002baca8. */


void FUN_003934bc(fn_003934bc_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  if (param_1->field_0x8 != 0) {
    if ((param_1->field_0x8 == 1) &&
       ((*(unsigned int *)(DAT_00432fc8 + 0x754) & 4) == 0 && (*(unsigned int *)(DAT_00432fc8 + 0x754) & 8) == 0)) {
      param_1->field_0x4 = 3;
      param_1->field_0x8 = 0;
      if (param_1->field_0x208 != (int *)0x0) {
        (**(romwright_code **)(*(int *)param_1->field_0x208 + 4))();
        param_1->field_0x208 = (void *)0x0;
      }
    }
    return;
  }
  temp_v0 = *(unsigned int *)&param_1[1].field_0x18;
  uStack_1c = *(unsigned int *)&param_1[1].field_0x1c;
  uStack_18 = *(unsigned int *)&param_1[1].field_0x20;
  uStack_14 = *(unsigned int *)&param_1[1].field_0x24;
  uStack_10 = *(unsigned int *)&param_1[1].field_0x28;
  FUN_002baca8(DAT_00432fc8,&temp_v0,0x32,0);
  param_1->field_0x8 = 1;
  return;
}
