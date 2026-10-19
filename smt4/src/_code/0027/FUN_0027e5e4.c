/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027e5e4` (_code @ 0x27e5e4, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0027e5e4_arg0 fn_0027e5e4_arg0;
struct fn_0027e5e4_arg0 {
    unsigned char pad_0x0[0x48];
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    uint field_0x50; /* +0x50 */
    unsigned char pad_0x54[0xc];
    short field_0x60; /* +0x60 */
    short field_0x62; /* +0x62 */
    unsigned char pad_0x64[0x3c];
    undefined4 field_0xa0; /* +0xa0 */
};

/* Supplied declaration required: FUN_0027da30. */
/* Supplied declaration required: FUN_002939f4. */


void FUN_0027e5e4(fn_0027e5e4_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002939f4();
  FUN_0027da30(temp_v0,(int)param_1->field_0x62);
  if (temp_v0 != 0) {
    if ((*(unsigned short *)(temp_v0 + 0xfa) & 0x180) != 0) {
      FUN_002939f4();
      param_1->field_0x48 = 3;
      param_1->field_0x4c = 0;
      param_1->field_0xa0 = 0;
    }
    else if ((param_1->field_0x50 & 0x80) != 0) {
      param_1->field_0x48 = 0;
      param_1->field_0x4c = 0;
      param_1->field_0xa0 = 0;
      if (-1 < param_1->field_0x60) {
        temp_v1 = FUN_002939f4();
        puVar3 = (unsigned int *)(*(int *)(temp_v1 + 0x1fc0) + param_1->field_0x60 * 0x288);
        *puVar3 = *puVar3 & 0xfff7ffff;
      }
    }
    if (-1 < param_1->field_0x60) {
      temp_v1 = FUN_002939f4();
      puVar3 = (unsigned int *)(*(int *)(temp_v1 + 0x1fc0) + param_1->field_0x60 * 0x288);
      if (puVar3 != (unsigned int *)0x0) {
        if ((*(unsigned short *)(temp_v0 + 0xfa) & 1000) == 0) {
          temp_v2 = *puVar3 & 0xfff7ffff;
        }
        else {
          temp_v2 = *puVar3 | 0x80000;
        }
        *puVar3 = temp_v2;
      }
    }
  }
  return;
}
