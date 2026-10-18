/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001137fc` (_code @ 0x1137fc, 0x63c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_1_stack;

extern int DAT_0043e278; /* 0x43e278 */
extern int DAT_0043e27c; /* 0x43e27c */
extern int DAT_0043e280; /* 0x43e280 */
extern unsigned int DAT_0043e284; /* 0x43e284 */
extern int DAT_0043e288; /* 0x43e288 */
extern int DAT_0043e28c; /* 0x43e28c */
extern int DAT_0043e290; /* 0x43e290 */
extern int DAT_0044ea00; /* 0x44ea00 */
extern unsigned int DAT_00476638; /* 0x476638 */
extern unsigned int DAT_004efd9c; /* 0x4efd9c */
extern float DAT_004efda0; /* 0x4efda0 */
extern float DAT_004efda4; /* 0x4efda4 */
extern float DAT_004efda8; /* 0x4efda8 */
extern float DAT_004efdac; /* 0x4efdac */
extern unsigned int DAT_004efdb0; /* 0x4efdb0 */
extern float DAT_004efdb4; /* 0x4efdb4 */
extern float DAT_004efdb8; /* 0x4efdb8 */
extern float DAT_004efdbc; /* 0x4efdbc */
extern float DAT_004efdc0; /* 0x4efdc0 */
extern unsigned int DAT_004efdc4; /* 0x4efdc4 */
extern float DAT_004efdc8; /* 0x4efdc8 */
extern float DAT_004efdcc; /* 0x4efdcc */
extern float DAT_004efdd0; /* 0x4efdd0 */
extern float DAT_004efdd4; /* 0x4efdd4 */
extern unsigned int DAT_004efdd8; /* 0x4efdd8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001241a8. */
/* Supplied declaration required: FUN_002b90f8. */
/* Supplied declaration required: FUN_002b99b8. */
/* Supplied declaration required: FUN_002ba1e0. */
/* Supplied declaration required: FUN_002bfe28. */
extern int FUN_002bfefc(unsigned int *);
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c1b64. */
extern int FUN_002c1c0c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);


void FUN_001137fc(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8 [108];
  
  temp_v3 = DAT_0043e278;
  if (DAT_0043e278 == 0) {
    return;
  }
  temp_v6 = 0.0f;
  if (0 < *(int *)(DAT_0043e278 + 0x14)) {
    temp_v4 = *(int *)(DAT_0043e278 + 0x14) * -0x12 + 0xff;
    if ((int)temp_v4 < 0) {
      temp_v4 = 0;
    }
    if (param_1 != 0) {
      DAT_0043e27c = DAT_0043e27c - 0x10;
      if (DAT_0043e27c < 0) {
        DAT_0043e27c = 0;
      }
      DAT_0043e280 = DAT_0043e280 - 0x10;
      if (DAT_0043e280 < 0) {
        DAT_0043e280 = 0;
      }
      DAT_0043e284 = DAT_0043e284 - 10;
      if ((int)DAT_0043e284 < 0) {
        DAT_0043e284 = 0;
      }
      DAT_0043e288 = DAT_0043e288 - 10;
      if (DAT_0043e288 < 0) {
        DAT_0043e288 = 0;
      }
      DAT_0043e28c = DAT_0043e28c - 4;
      if ((int)DAT_0043e28c < 0) {
        DAT_0043e28c = 0;
      }
      DAT_0043e290 = DAT_0043e290 - 8;
      if (DAT_0043e290 < 0) {
        DAT_0043e290 = 0;
      }
    }
  }
  else {
    temp_v0 = *(int *)(DAT_0043e278 + 0x10);
    if (temp_v0 < 10) {
      DAT_0043e27c = 0;
    }
    else {
      DAT_0043e27c = (temp_v0 - 10) * 3;
      if (DAT_0043e27c >= 0x100) {
        DAT_0043e27c = 0xff;
      }
    }
    if (temp_v0 < 0x14) {
      DAT_0043e280 = 0;
    }
    else {
      DAT_0043e280 = temp_v0 * 8 - 0xa0;
      if (DAT_0043e280 >= 0x100) {
        DAT_0043e280 = 0xff;
      }
    }
    if (temp_v0 < 6) {
      DAT_0043e284 = 0;
    }
    else {
      DAT_0043e284 = (temp_v0 - 6) * 7;
      if ((int)DAT_0043e284 >= 0x100) {
        DAT_0043e284 = 0xff;
      }
    }
    DAT_0043e288 = temp_v0 * 5;
    if (DAT_0043e288 >= 0x100) {
      DAT_0043e288 = 0xff;
    }
    temp_v5 = temp_v6;
    if (temp_v0 < 8) {
      DAT_0043e28c = 0;
    }
    else {
      DAT_0043e28c = 0x40;
      if (temp_v0 - 8 < 0x28) {
        VectorSignedToFloat(temp_v0 - 8,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001241a8();
        DAT_0043e28c = (unsigned int)temp_v6;
      }
    }
    temp_v3 = *(int *)(temp_v3 + 0x10);
    temp_v6 = temp_v5;
    if (temp_v3 >= 0x19) {
      DAT_0043e290 = 0x30;
      if (temp_v3 < 0x3c) {
        VectorSignedToFloat(temp_v3 - 0x19,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001241a8(temp_v3 - 0x19);
        DAT_0043e290 = (int)temp_v5;
        if (DAT_0043e290 < 0) {
          DAT_0043e290 = 0;
        }
      }
    }
    else {
      DAT_0043e290 = 0;
    }
    temp_v4 = 0xff;
  }
  temp_v3 = DAT_0044ea00;
  temp_v0 = FUN_002c5d80(1,0);
  piVar5 = (int *)(temp_v3 + 0x124c);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 + 1;
  piVar5[temp_v1 + 3] = temp_v0;
  if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v2 != temp_v0) {
    (**(romwright_code **)(temp_v3 + 0x1268))();
    *(unsigned char *)(temp_v3 + 0x1264) = 0;
  }
  temp_v3 = DAT_0044ea00;
  temp_v0 = FUN_002c5da8(6,7,0);
  piVar5 = (int *)(temp_v3 + 0x12ac);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 + 1;
  piVar5[temp_v1 + 3] = temp_v0;
  if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v2 != temp_v0) {
    (**(romwright_code **)(temp_v3 + 0x12c8))();
    *(unsigned char *)(temp_v3 + 0x12c4) = 0;
  }
  FUN_002c39a4(DAT_0044ea00);
  temp_v3 = DAT_0043e278;
  temp_v7 = 0x3f800000;
  FUN_002b99b8();
  if ((param_1 == 0) && (*(char *)(temp_v3 + 0xf64) != '\0')) {
    temp_v3 = *(int *)(temp_v3 + 8);
  }
  else {
    temp_v3 = *(int *)(temp_v3 + 4);
  }
  *(unsigned int *)(temp_v3 + 0x3c) = 1;
  VectorSignedToFloat(*(unsigned int *)(temp_v3 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(unsigned int *)(temp_v3 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v3 + 0x40) = 1;
  FUN_002c1b64(DAT_0044ea00);
  FUN_002ba1e0(temp_v4 | 0xffffff00);
  temp_v3 = DAT_0044ea00;
  temp_v0 = FUN_002c5da8(6,1,0);
  piVar5 = (int *)(temp_v3 + 0x12ac);
  temp_v1 = piVar5[*piVar5 + 2];
  piVar5[*piVar5 + 2] = temp_v0;
  if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v1 != temp_v0) {
    (**(romwright_code **)(temp_v3 + 0x12c8))();
    *(unsigned char *)(temp_v3 + 0x12c4) = 0;
  }
  temp_v4 = DAT_0043e284 | 0xffffff00;
  temp_v3 = FUN_002c1c0c(5,2);
  *(unsigned int *)(temp_v3 + 0x38) = 2;
  FUN_002c1b64(DAT_0044ea00,temp_v3);
  FUN_002ba1e0(temp_v4);
  if (((DAT_00476638 & 1) == 0) && (temp_v3 = FUN_002bfefc(&DAT_00476638), temp_v3 != 0)) {
    DAT_004efd9c = temp_v7;
    DAT_004efda0 = temp_v6;
    DAT_004efda4 = temp_v6;
    DAT_004efda8 = temp_v6;
    DAT_004efdac = temp_v6;
    DAT_004efdb0 = temp_v7;
    DAT_004efdb4 = temp_v6;
    DAT_004efdb8 = temp_v6;
    DAT_004efdbc = temp_v6;
    DAT_004efdc0 = temp_v6;
    DAT_004efdc4 = temp_v7;
    DAT_004efdc8 = temp_v6;
    DAT_004efdcc = temp_v6;
    DAT_004efdd0 = temp_v6;
    DAT_004efdd4 = temp_v6;
    DAT_004efdd8 = temp_v7;
  }
  FUN_002bfe28(temp_v8,&DAT_004efd9c);
  FUN_002b90f8(DAT_0044ea00,temp_v8);
  temp_v3 = FUN_002c1c0c(5,3);
  *(unsigned int *)(temp_v3 + 0x38) = 2;
  FUN_002c1b64(DAT_0044ea00,temp_v3);
  temp_v4 = DAT_0043e28c | 0xffffff00;
  FUN_002ba1e0(temp_v4,temp_v4,temp_v4,temp_v4,temp_v6,0x40700000,0x40c80000,0x40700000);
  FUN_002c198c(DAT_0044ea00);
  temp_v3 = DAT_0044ea00;
  piVar5 = (int *)(DAT_0044ea00 + 0x12ac);
  temp_v0 = *piVar5;
  temp_v1 = piVar5[temp_v0 + 2];
  *piVar5 = temp_v0 - 1;
  if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v1 != piVar5[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v3 + 0x12c8))();
    *(unsigned char *)(temp_v3 + 0x12c4) = 0;
  }
  temp_v3 = DAT_0044ea00;
  piVar5 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v0 = *piVar5;
  temp_v1 = piVar5[temp_v0 + 2];
  *piVar5 = temp_v0 - 1;
  if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v1 != piVar5[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v3 + 0x1268))();
    *(unsigned char *)(temp_v3 + 0x1264) = 0;
  }
  return;
}
