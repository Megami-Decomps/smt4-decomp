/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00294fe0` (_code @ 0x294fe0, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00294fe0_arg0 fn_00294fe0_arg0;
struct fn_00294fe0_arg0 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    void *field_0x10; /* +0x10 */
    void *field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x25];
    byte field_0x3d; /* +0x3d */
};

extern int FUN_0023e378(void);
extern int FUN_002b93b0(void *, unsigned int);
/* Supplied declaration required: FUN_0033e8a8. */
extern int FUN_0033f178(fn_00294fe0_arg0 *);
/* Supplied declaration required: FUN_0033f22c. */


unsigned int FUN_00294fe0(fn_00294fe0_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  void *pvVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_002b93b0(param_1->field_0x8,param_1->field_0xc);
  temp_v1 = FUN_0023e378();
  temp_v2 = 0;
  if (temp_v1 != 0) {
    if (param_1->field_0x3d == 0) {
      temp_v1 = FUN_0033f178(param_1);
      if (temp_v1 != 0) {
        FUN_0033f22c(param_1);
      }
      temp_v3 = *(unsigned int *)(temp_v0 + 8);
      temp_v2 = param_1->field_0xc;
      param_1->field_0x3d = 1;
      if (*(short *)((int)param_1->field_0x10 + 4) != 0) {
        pvVar3 = param_1->field_0x14;
        *(unsigned int *)((int)pvVar3 + 0x18) = temp_v3;
        *(unsigned int *)((int)pvVar3 + 0x1c) = temp_v2;
      }
      FUN_0033e8a8(param_1);
    }
    temp_v2 = 1;
  }
  return temp_v2;
}
