/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00117ca4` (_code @ 0x117ca4, 0x3ac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int DAT_0043e278; /* 0x43e278 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b9cf8. */
/* Supplied declaration required: FUN_002ba520. */
/* Supplied declaration required: FUN_002bfc88. */
/* Supplied declaration required: FUN_002c1d3c. */
extern int FUN_002c5f7c(unsigned int, unsigned int);
extern int FUN_002c5fa4(unsigned int, unsigned int, unsigned int);


void FUN_00117ca4(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int *piVar7;
  int temp_v6;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  
  temp_v1 = DAT_0043e278;
  piVar7 = (int *)(DAT_0043e278 + 0xfdc);
  if (param_1 != 0) {
    *(unsigned int *)(*(int *)(DAT_0043e278 + 0xf20) + 0x14) = 0x200;
    *(unsigned int *)(*(int *)(temp_v1 + 0xf20) + 0x18) = 0x200;
    *(unsigned int *)(*(int *)(temp_v1 + 0xfdc) + 0x14) =
         *(unsigned int *)(*(int *)(temp_v1 + 0xf20) + 0x14);
    *(unsigned int *)(*piVar7 + 0x18) = *(unsigned int *)(*(int *)(temp_v1 + 0xf20) + 0x18);
    FUN_002bfc88(*(unsigned int *)(temp_v1 + 0xf20),*piVar7);
    *(int *)(*piVar7 + 0x14) = *(int *)(*piVar7 + 0x14) >> 1;
    *(int *)(*piVar7 + 0x18) = *(int *)(*piVar7 + 0x18) >> 1;
  }
  else {
    *(unsigned int *)(*(int *)(DAT_0043e278 + 0xf24) + 0x14) = 0x200;
    *(unsigned int *)(*(int *)(temp_v1 + 0xf24) + 0x18) = 0x200;
    *(unsigned int *)(*(int *)(temp_v1 + 0xfdc) + 0x14) =
         *(unsigned int *)(*(int *)(temp_v1 + 0xf24) + 0x14);
    *(unsigned int *)(*piVar7 + 0x18) = *(unsigned int *)(*(int *)(temp_v1 + 0xf24) + 0x18);
    FUN_002bfc88(*(unsigned int *)(temp_v1 + 0xf24),*piVar7);
    *(int *)(*piVar7 + 0x14) = *(int *)(*piVar7 + 0x14) >> 1;
    *(int *)(*piVar7 + 0x18) = *(int *)(*piVar7 + 0x18) >> 1;
  }
  temp_v6 = *(int *)(temp_v1 + 0xfdc);
  temp_v10 = 400.0f;
  temp_v8 = 2.0f;
  FUN_002b9cf8();
  VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v7 = *(char *)(temp_v1 + 0xf1c) != '\0';
  if (temp_v7) {
    *(unsigned int *)(temp_v6 + 0x3c) = 1;
    *(unsigned int *)(temp_v6 + 0x40) = 1;
  }
  temp_v9 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
  if (!temp_v7) {
    *(unsigned int *)(temp_v6 + 0x3c) = 0;
    *(unsigned int *)(temp_v6 + 0x40) = 0;
  }
  temp_v4 = DAT_0044ea00;
  temp_v9 = (temp_v10 / temp_v8) / temp_v9;
  temp_v0 = FUN_002c5f7c(1,0);
  piVar7 = (int *)(temp_v4 + 0x124c);
  temp_v2 = *piVar7;
  temp_v3 = piVar7[temp_v2 + 2];
  *piVar7 = temp_v2 + 1;
  piVar7[temp_v2 + 3] = temp_v0;
  if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v3 != temp_v0) {
    (**(romwright_code **)(temp_v4 + 0x1268))();
    *(unsigned char *)(temp_v4 + 0x1264) = 0;
  }
  temp_v4 = DAT_0044ea00;
  temp_v0 = *(int *)(temp_v1 + 0xf18);
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 == 2) {
        temp_v0 = FUN_002c5fa4(6,1,2);
        piVar7 = (int *)(temp_v4 + 0x12ac);
        temp_v2 = piVar7[*piVar7 + 2];
        piVar7[*piVar7 + 2] = temp_v0;
        if (!(*(char *)(temp_v4 + 0x12c4) == '\0' && temp_v2 == temp_v0)) {
          (**(romwright_code **)(temp_v4 + 0x12c8))();
          *(unsigned char *)(temp_v4 + 0x12c4) = 0;
        }
      }
    }
    else {
      temp_v0 = FUN_002c5fa4(6,1,0);
      piVar7 = (int *)(temp_v4 + 0x12ac);
      temp_v2 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v0;
      if (!(*(char *)(temp_v4 + 0x12c4) == '\0' && temp_v2 == temp_v0)) {
        (**(romwright_code **)(temp_v4 + 0x12c8))();
        *(unsigned char *)(temp_v4 + 0x12c4) = 0;
      }
    }
  }
  else {
    temp_v0 = FUN_002c5fa4(6,7,0);
    piVar7 = (int *)(temp_v4 + 0x12ac);
    temp_v2 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v0;
    if (!(*(char *)(temp_v4 + 0x12c4) == '\0' && temp_v2 == temp_v0)) {
      (**(romwright_code **)(temp_v4 + 0x12c8))();
      *(unsigned char *)(temp_v4 + 0x12c4) = 0;
    }
  }
  FUN_002c1d3c(DAT_0044ea00,temp_v6);
  temp_v5 = *(unsigned int *)(temp_v1 + 0xf10);
  FUN_002ba520(temp_v5,temp_v5,temp_v5,temp_v5,0,0,0,temp_v9);
  temp_v6 = DAT_0044ea00;
  if (*(int *)(temp_v1 + 0xf18) != 0) {
    temp_v1 = FUN_002c5fa4(6,7,0);
    piVar7 = (int *)(temp_v6 + 0x12ac);
    temp_v4 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v1;
    if (*(char *)(temp_v6 + 0x12c4) != '\0' || temp_v4 != temp_v1) {
      (**(romwright_code **)(temp_v6 + 0x12c8))();
      *(unsigned char *)(temp_v6 + 0x12c4) = 0;
    }
  }
  temp_v1 = DAT_0044ea00;
  piVar7 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v6 = *piVar7;
  temp_v4 = piVar7[temp_v6 + 2];
  *piVar7 = temp_v6 - 1;
  if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v4 != piVar7[temp_v6 + 1]) {
    (**(romwright_code **)(temp_v1 + 0x1268))();
    *(unsigned char *)(temp_v1 + 0x1264) = 0;
  }
  return;
}
