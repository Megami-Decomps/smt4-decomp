/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023ded4` (_code @ 0x23ded4, 0x14c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a60cc(unsigned int, int, unsigned int);
int FUN_002ae898(int);
int FUN_002c0894(void);
int FUN_002c415c(...);
int FUN_00389f54(void);
int FUN_0038a134(unsigned int, undefined4);

typedef struct fn_0023ded4_arg0 fn_0023ded4_arg0;
struct fn_0023ded4_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    void *field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    int field_0x28; /* +0x28 */
    int field_0x2c; /* +0x2c */
    int field_0x30; /* +0x30 */
    unsigned char pad_0x34[0x8];
    undefined1 field_0x3c; /* +0x3c */
    undefined1 field_0x3d; /* +0x3d */
    unsigned char pad_0x3e[0x6];
    void *field_0x44; /* +0x44 */
};

typedef int romwright_code(...);
extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002a60cc. */
/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: FUN_002c0894. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_00389f54. */
/* Supplied declaration required: FUN_0038a134. */


void FUN_0023ded4(fn_0023ded4_arg0 *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if ((param_1->field_0x14 != 0) && (temp_v0 = 0, *(short *)((int)param_1->field_0x10 + 4) != 0)) {
    do {
      temp_v1 = param_1->field_0x14 + temp_v0 * 0x20;
      if (*(int *)(temp_v1 + 0x18) != 0) {
        if (*(int *)(temp_v1 + 0x1c) >= 0) {
          FUN_002ae898(param_1->field_0x8);
          FUN_002a60cc(DAT_00433158,param_1->field_0x8,*(unsigned int *)(temp_v1 + 0x1c));
        }
        else {
          FUN_002c0894();
        }
        *(unsigned int *)(temp_v1 + 0x18) = 0;
        *(unsigned int *)(temp_v1 + 0x1c) = 0xffffffff;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (int)(unsigned int)*(unsigned short *)((int)param_1->field_0x10 + 4));
  }
  if (param_1->field_0x28 != 0) {
    if (param_1->field_0x8 != 0xc) {
      FUN_00389f54();
    }
    else {
      FUN_0038a134(DAT_00433158,param_1->field_0x4);
    }
    FUN_002c415c(param_1->field_0x28);
    param_1->field_0x10 = (void *)0x0;
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x20 = 0;
    param_1->field_0x24 = 0;
    param_1->field_0x28 = 0;
    param_1->field_0x3c = 0;
    param_1->field_0x3d = 0;
  }
  if (param_1->field_0x2c != 0) {
    FUN_002c415c();
    param_1->field_0x2c = 0;
  }
  if (param_1->field_0x30 != 0) {
    FUN_002c415c();
    param_1->field_0x30 = 0;
  }
  if (param_1->field_0x44 != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1->field_0x44 + 4))();
    param_1->field_0x44 = (void *)0x0;
  }
  param_1->field_0x4 = 0;
  return;
}

} /* extern "C" */
