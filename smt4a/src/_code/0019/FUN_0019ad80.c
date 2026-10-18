/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019ad80` (_code @ 0x19ad80, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0019ad80_arg0 fn_0019ad80_arg0;
struct fn_0019ad80_arg0 {
    uint field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x8];
    void *field_0xc; /* +0xc */
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3];
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x3];
    int field_0x18; /* +0x18 */
};

extern int *DAT_005b4084; /* 0x5b4084 */

/* Supplied declaration required: FUN_0019c920. */


int FUN_0019ad80(fn_0019ad80_arg0 *param_1,unsigned int param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_r12; 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  int in_r12;
  
  piVar1 = DAT_005b4084;
  piVar5 = param_1->field_0xc;
  while( 1 ) {
    if (piVar5 == (int *)0x0) {
      return 0;
    }
    if (param_2 <= (unsigned int)piVar5[1]) break;
    piVar5 = (int *)piVar5[4];
  }
  if ((param_2 & 0x7f) != 0) {
    param_2 = param_2 + (0x80 - (param_2 & 0x7f));
  }
  if (piVar5[1] == param_2) {
    param_1->field_0x18 = param_1->field_0x18 - piVar5[1];
    temp_v1 = piVar5[3];
    pvVar4 = (void *)piVar5[4];
    if (temp_v1 != 0) {
      *(void **)(temp_v1 + 0x10) = pvVar4;
    }
    else {
      param_1->field_0xc = pvVar4;
    }
    if (pvVar4 != (void *)0x0) {
      *(int *)((int)pvVar4 + 0xc) = temp_v1;
    }
    else {
      *(int *)&param_1->field_0x10 = temp_v1;
    }
    piVar5[3] = 0;
    piVar5[4] = 0;
    *(int *)&param_1->field_0x14 = *(int *)&param_1->field_0x14 - 1;
    FUN_0019c920(param_1,piVar5);
    return *piVar5;
  }
  if ((param_2 & 0x7f) != 0) {
    param_2 = param_2 + (0x80 - (param_2 & 0x7f));
  }
  if (DAT_005b4084 != (int *)0x0) {
    in_r12 = *DAT_005b4084;
  }
  if (DAT_005b4084 != (int *)0x0 && in_r12 != 0) {
    temp_v1 = 0;
    do {
      temp_v0 = temp_v1 + 1;
      piVar6 = (int *)(in_r12 + temp_v1 * 0x14);
      if (piVar6[2] == 0) {
        *piVar6 = 0;
        piVar6[1] = 0;
        piVar6[2] = temp_v0;
        piVar6[3] = 0;
        piVar6[4] = 0;
        piVar1[1] = piVar1[1] + 1;
        goto LAB_0019ae14;
      }
      temp_v1 = temp_v0;
    } while (temp_v0 < 0x200);
  }
  piVar6 = (int *)0x0;
LAB_0019ae14:
  temp_v1 = *piVar5;
  piVar6[1] = param_2;
  *piVar6 = temp_v1;
  *piVar5 = *piVar5 + param_2;
  piVar5[1] = piVar5[1] - param_2;
  param_1->field_0x18 = param_1->field_0x18 - piVar6[1];
  FUN_0019c920(param_1,piVar6);
  return *piVar6;
}
