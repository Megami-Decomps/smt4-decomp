/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e0618` (_code @ 0x1e0618, 0x694 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001e0618_arg0 fn_001e0618_arg0;
struct fn_001e0618_arg0 {
    unsigned char pad_0x0[0xc];
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x24];
    unsigned char field_0x31; /* +0x31 */
    unsigned char pad_0x32[0x1310];
    char field_0x1342; /* +0x1342 */
    unsigned char pad_0x1343[0x1585];
    unsigned char field_0x28c8; /* +0x28c8 */
    unsigned char pad_0x28c9[0x77b];
    unsigned char field_0x3044; /* +0x3044 */
    unsigned char pad_0x3045[0x3];
    int field_0x3048; /* +0x3048 */
    int field_0x304c; /* +0x304c */
};

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_0025cee4. */
/* Supplied declaration required: FUN_0025d3fc. */
/* Supplied declaration required: FUN_0025f09c. */
/* Supplied declaration required: FUN_0025f538. */
/* Supplied declaration required: FUN_0025f6ec. */
/* Supplied declaration required: FUN_0025f8f0. */
/* Supplied declaration required: FUN_002bef14. */
/* Supplied declaration required: FUN_002c1abc. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_002c3ba8. */
extern int FUN_002c5fa4(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002dc0b8. */
/* Supplied declaration required: FUN_002f150c. */


void FUN_001e0618(fn_001e0618_arg0 *param_1)

{
/* irregular: 1 goto(s); 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  
  FUN_002c3ba8(DAT_0044ea00);
  FUN_002bef14();
  if (param_1->field_0x3048 == 6) {
    if (*(int *)&param_1[1].field_0x28c8 == 3) {
      if (param_1->field_0x1342 != '\0') {
        return;
      }
      goto LAB_001e0668;
    }
  }
  else {
LAB_001e0668:
    if ((param_1->field_0x3048 == 0x2b || param_1->field_0x3048 == 0x2c) &&
       (param_1->field_0x1342 != '\0')) {
      return;
    }
  }
  temp_v0 = param_1->field_0x3048;
  if (temp_v0 == 2) {
    temp_v0 = param_1->field_0x304c;
  }
  if ((temp_v0 == 6 || temp_v0 == 3) || (temp_v0 == 4 || temp_v0 == 5)) {
    temp_v0 = param_1->field_0x304c;
  }
  if (temp_v0 == 0x2b || temp_v0 == 0x2c) {
    temp_v0 = param_1->field_0x304c;
  }
  switch(temp_v0) {
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x14:
  case 0x15:
    FUN_0025f8f0(param_1,0,0,0);
    FUN_0025f6ec(param_1,0);
    FUN_0025f538(param_1);
    FUN_0025f09c(param_1);
    FUN_0025d3fc(param_1);
    break;
  case 0x10:
    FUN_0025f8f0(param_1,1,1,*(unsigned int *)&param_1->field_0x3044);
    FUN_0025f6ec(param_1,1);
    FUN_0025f09c(param_1);
    FUN_0025d3fc(param_1);
    break;
  case 0x11:
  case 0x29:
    FUN_0025f8f0(param_1,0,0,0);
    FUN_0025f6ec(param_1,0);
    FUN_0025f09c(param_1);
    FUN_0025d3fc(param_1);
    break;
  case 0x12:
  case 0x13:
    FUN_0025f8f0(param_1,0,0,0);
    FUN_0025f6ec(param_1,0);
    FUN_0025f538(param_1);
    FUN_0025f09c(param_1);
    FUN_0025d3fc(param_1);
    FUN_002f150c(param_1);
    break;
  case 0x16:
    FUN_0025f8f0(param_1,0,1,0);
    FUN_0025f6ec(param_1,0);
    FUN_0025f09c(param_1);
    FUN_0025cee4(param_1,1);
    break;
  case 0x18:
  case 0x19:
  case 0x1c:
    temp_v1 = 8 - *(int *)&param_1->field_0x3044;
    temp_v0 = param_1->field_0x304c;
    if (temp_v1 < 0) {
      temp_v1 = 0;
    }
    if (!((temp_v0 == 0x22 || temp_v0 == 0x23) || temp_v0 == 0x24)) {
      FUN_0025f8f0(param_1,1,0,temp_v1);
    }
    else {
      FUN_0025f8f0(param_1,1,1,temp_v1);
    }
    break;
  case 0x1d:
    temp_v0 = param_1->field_0x304c;
    if (!((temp_v0 == 0x22 || temp_v0 == 0x23) || temp_v0 == 0x24)) {
      FUN_0025f8f0(param_1,1,0,0);
      FUN_0025f6ec(param_1,0);
    }
    else {
      FUN_0025f8f0(param_1,1,1,0);
      FUN_0025f6ec(param_1,1);
    }
    if ((param_1->field_0x304c == 0x1a) && (*(int *)&param_1[1].field_0xc != 0)) break;
    FUN_002dc0b8(param_1,0);
    break;
  case 0x1f:
    FUN_0025f8f0(param_1,1,0,0);
    break;
  case 0x20:
    if (param_1[1].field_0x31 != '\0') {
      FUN_0025f8f0(param_1,1,0,0);
      break;
    }
  case 0xe:
  case 0xf:
  case 0x1e:
  case 0x21:
  case 0x2a:
    FUN_0025f8f0(param_1,1,1,0);
    break;
  case 0x22:
    FUN_0025f8f0(param_1,0,1);
    FUN_0025f6ec(param_1,1);
    FUN_0025f09c(param_1);
    FUN_0025cee4(param_1,0);
    break;
  case 0x23:
    FUN_0025f8f0(param_1,0,1);
    FUN_0025f6ec(param_1,1);
    FUN_0025f09c(param_1);
    FUN_0025cee4(param_1,1);
    break;
  case 0x24:
    FUN_0025f8f0(param_1,0,0,0);
    FUN_0025f6ec(param_1,0);
    FUN_0025f09c(param_1);
    FUN_0025cee4(param_1,0);
    break;
  case 0x25:
  case 0x26:
    temp_v0 = param_1->field_0x304c;
    if ((temp_v0 != 0x22 && temp_v0 != 0x23) && temp_v0 != 0x24) {
      FUN_0025f8f0(param_1,0,0,0);
      FUN_0025f6ec(param_1,0);
      FUN_0025f538(param_1);
      FUN_0025f09c(param_1);
      break;
    }
    FUN_0025f8f0(param_1,0,1);
    FUN_0025f6ec(param_1,1);
    FUN_0025f538(param_1);
    FUN_0025f09c(param_1);
    break;
  case 0x27:
    temp_v0 = param_1->field_0x304c;
    if ((temp_v0 == 0x1d || temp_v0 == 0x20) || (temp_v0 == 0x1e || temp_v0 == 0x19)) {
      FUN_0025f8f0(param_1,1,0,0);
      break;
    }
  case 1:
  case 0x17:
  case 0x1a:
  case 0x1b:
  case 0x2d:
    FUN_0025f8f0(param_1,0,0,0);
    FUN_0025f6ec(param_1,0);
    FUN_0025f538(param_1);
    FUN_0025f09c(param_1);
    break;
  case 0x28:
    FUN_0025f8f0(param_1,1,0,0);
    FUN_0025f6ec(param_1,0);
    FUN_002dc0b8(param_1,0);
  }
  if (param_1->field_0x3048 == 6) {
    FUN_002f150c(param_1);
  }
  temp_v0 = DAT_0044ea00;
  temp_v1 = FUN_002c5fa4(6,7,0);
  piVar4 = (int *)(temp_v0 + 0x12ac);
  temp_v2 = piVar4[*piVar4 + 2];
  piVar4[*piVar4 + 2] = temp_v1;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v2 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x12c8))();
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  FUN_002c1b64(DAT_0044ea00);
  FUN_002c1abc(DAT_0044ea00);
  return;
}
