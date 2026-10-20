/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046e458` (_code @ 0x46e458, 0x260 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b31ac(void);
int FUN_001b31e0(void);

typedef struct fn_0046e458_arg0 fn_0046e458_arg0;
struct fn_0046e458_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x3];
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x3];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3];
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x3];
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x3];
    unsigned char field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x3];
    unsigned char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x3];
    unsigned char field_0x24; /* +0x24 */
    unsigned char pad_0x25[0x3];
    unsigned char field_0x28; /* +0x28 */
    unsigned char pad_0x29[0x3];
    unsigned char field_0x2c; /* +0x2c */
    unsigned char pad_0x2d[0x3];
    unsigned char field_0x30; /* +0x30 */
    unsigned char pad_0x31[0x3];
    unsigned char field_0x34; /* +0x34 */
    unsigned char pad_0x35[0x3];
    unsigned char field_0x38; /* +0x38 */
    unsigned char pad_0x39[0x2df];
    int field_0x318; /* +0x318 */
    unsigned char pad_0x31c[0x80];
    int field_0x39c; /* +0x39c */
    int field_0x3a0; /* +0x3a0 */
    int field_0x3a4; /* +0x3a4 */
};

extern int FUN_001b315c(unsigned int);
/* Supplied declaration required: FUN_001b31ac. */
/* Supplied declaration required: FUN_001b31e0. */


unsigned int FUN_0046e458(fn_0046e458_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 5 goto(s); irregular input(s): in_r12; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int in_r12;
  int temp_v5;
  
  temp_v3 = param_1->field_0x39c;
  if (0 < temp_v3) {
    in_r12 = param_1->field_0x3a0;
  }
  if (temp_v3 != 0) {
    param_3 = 0;
  }
  if (0 < temp_v3) {
    do {
      if (*(unsigned short *)(in_r12 + param_3 * 0x28 + 0x20) == param_2) {
        in_r12 = param_1->field_0x3a4;
        param_3 = (unsigned int)*(unsigned short *)(in_r12 + param_3 * 2);
        if (param_3 != 0xffffffff) goto LAB_0046e49c;
        break;
      }
      param_3 = param_3 + 1;
    } while ((int)param_3 < temp_v3);
  }
  temp_v3 = *(int *)(param_1 + 1);
  if (0 < temp_v3) {
    in_r12 = *(int *)&param_1[1].field_0x4;
  }
  if (temp_v3 != 0) {
    param_3 = 0;
  }
  if (0 < temp_v3) {
    do {
      if (*(unsigned short *)(in_r12 + param_3 * 0x6c + 0x30) == param_2) {
        in_r12 = *(int *)&param_1[1].field_0x8;
        param_3 = (unsigned int)*(unsigned short *)(in_r12 + param_3 * 2);
        if (param_3 != 0xffffffff) goto LAB_0046e49c;
        break;
      }
      param_3 = param_3 + 1;
    } while ((int)param_3 < temp_v3);
  }
  param_3 = *(unsigned int *)&param_1[1].field_0xc;
  if (0 < (int)param_3) {
    temp_v3 = *(int *)&param_1[1].field_0x10;
  }
  if (param_3 != 0) {
    in_r12 = 0;
  }
  if (0 < (int)param_3) {
    do {
      if (*(unsigned short *)(temp_v3 + in_r12 * 0x80 + 0x20) == param_2) {
        param_3 = (unsigned int)*(unsigned short *)(*(int *)&param_1[1].field_0x14 + in_r12 * 2);
        if (param_3 != 0xffffffff) goto LAB_0046e49c;
        break;
      }
      in_r12 = in_r12 + 1;
    } while (in_r12 < (int)param_3);
  }
  temp_v5 = *(int *)&param_1[1].field_0x18;
  if (0 < temp_v5) {
    temp_v3 = *(int *)&param_1[1].field_0x1c;
  }
  if (temp_v5 != 0) {
    param_3 = 0;
  }
  if (0 < temp_v5) {
    do {
      if (*(unsigned short *)(temp_v3 + param_3 * 0x3c + 0x20) == param_2) {
        param_3 = (unsigned int)*(unsigned short *)(*(int *)&param_1[1].field_0x20 + param_3 * 2);
        if (param_3 != 0xffffffff) goto LAB_0046e49c;
        break;
      }
      param_3 = param_3 + 1;
    } while ((int)param_3 < temp_v5);
  }
  temp_v5 = *(int *)&param_1[1].field_0x24;
  if (0 < temp_v5) {
    temp_v3 = *(int *)&param_1[1].field_0x28;
  }
  if (temp_v5 != 0) {
    param_3 = 0;
  }
  if (0 < temp_v5) {
    do {
      if (*(unsigned short *)(temp_v3 + param_3 * 0x30 + 0x20) == param_2) {
        temp_v5 = *(int *)&param_1[1].field_0x2c;
        param_3 = (unsigned int)*(unsigned short *)(temp_v5 + param_3 * 2);
        if (param_3 != 0xffffffff) goto LAB_0046e49c;
        break;
      }
      param_3 = param_3 + 1;
    } while ((int)param_3 < temp_v5);
  }
  temp_v3 = *(int *)&param_1[1].field_0x30;
  if (0 < temp_v3) {
    temp_v5 = *(int *)&param_1[1].field_0x34;
  }
  if (temp_v3 != 0) {
    param_3 = 0;
  }
  if (temp_v3 < 1) {
    return 0;
  }
  while (*(unsigned short *)(temp_v5 + param_3 * 0x2c + 0x20) != param_2) {
    param_3 = param_3 + 1;
    if (temp_v3 <= (int)param_3) {
      return 0;
    }
  }
  param_3 = (unsigned int)*(unsigned short *)(*(int *)&param_1[1].field_0x38 + param_3 * 2);
  if (param_3 == 0xffffffff) {
    return 0;
  }
LAB_0046e49c:
  temp_v4 = param_1->field_0x318 + param_3 * 0x50;
  temp_v3 = FUN_001b315c(temp_v4);
  if (temp_v3 == 0) {
    return 0;
  }
  temp_v0 = temp_v4;
  FUN_001b31ac();
  temp_v1 = temp_v4;
  FUN_001b31e0();
  temp_v2 = 0;
  if (temp_v2 < temp_v1) {
    do {
      if ((*(char *)(temp_v0 + temp_v2 * 0x40) == '\x05') &&
         (*(char *)(*(int *)(temp_v4 + 0x4c) + temp_v2 * 0x10 + 0xc) != '\0')) {
        return *(unsigned int *)(*(int *)(temp_v4 + 0x4c) + temp_v2 * 0x10);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v1);
  }
  return 0;
}

} /* extern "C" */
