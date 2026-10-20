/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00186a48` (_code @ 0x186a48, 0x6bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029acc4(...);
int FUN_002b0750(int, int, int, int, int, int, int, int);
int FUN_002b93c8(...);
int FUN_002ba12c(...);
int FUN_002be5a4(...);
int FUN_002be624(...);
int FUN_002bf288(...);
int FUN_002bf538(void);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} void_stack;

extern unsigned char LAB_0018710c; /* 0x18710c */
extern int DAT_0043dd50; /* 0x43dd50 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0029acc4. */
/* Supplied declaration required: FUN_002b0750. */
/* Supplied declaration required: FUN_002b93c8. */
/* Supplied declaration required: FUN_002ba12c. */
extern unsigned int FUN_002bcddc(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002be624. */
extern int FUN_002bed98(int);
extern int FUN_002beda4(int);
/* Supplied declaration required: FUN_002bf288. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf538. */
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);


void FUN_00186a48(void)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar8;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int in_fpscr;
  float temp_v12;
  float temp_v13;
  unsigned char temp_v14 [84];
  
  temp_v1 = DAT_0043dd50;
  temp_v9 = 0;
  temp_v8 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v0 = *(unsigned short *)(DAT_0043dd50 + 0x97e);
  if (*(int *)(DAT_0043dd50 + 4) == 0x11) {
    temp_v10 = FUN_002beda4(DAT_0043dd50 + 0x34);
    temp_v11 = FUN_002bed98(temp_v1 + 0x34);
  }
  if (*(int *)(temp_v1 + 4) == 0x13) {
    temp_v9 = FUN_002beda4(temp_v1 + 0x34);
    temp_v8 = FUN_002bed98(temp_v1 + 0x34);
  }
  temp_v12 = 0.3f;
  FUN_002ba12c(DAT_0044ea00);
  if (*(int *)(temp_v1 + 4) >= 0x12) {
    if (*(int *)(temp_v1 + 4) == 0x13) {
      VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0x10),(unsigned char)(in_fpscr >> 0x16) & 3);
      in_fpscr = in_fpscr & 0xfffffff;
      FUN_002bf538();
    }
    temp_v7 = DAT_0044ea00;
    temp_v2 = FUN_002c5da8(6,1,0);
    piVar8 = (int *)(temp_v7 + 0x12ac);
    temp_v5 = piVar8[*piVar8 + 2];
    piVar8[*piVar8 + 2] = temp_v2;
    if (*(char *)(temp_v7 + 0x12c4) != '\0' || temp_v5 != temp_v2) {
      (**(romwright_code **)(temp_v7 + 0x12c8))();
      *(unsigned char *)(temp_v7 + 0x12c4) = 0;
    }
    temp_v7 = 0;
    do {
      FUN_002bf288(2,0x29,0x4b,(int)temp_v12,*(unsigned int *)(temp_v1 + temp_v7 * 4 + 0x988),0x92);
      temp_v2 = DAT_0044ea00;
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 7);
    temp_v7 = FUN_002c5da8(6,7,0);
    piVar8 = (int *)(temp_v2 + 0x12ac);
    temp_v5 = piVar8[*piVar8 + 2];
    piVar8[*piVar8 + 2] = temp_v7;
    if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v5 != temp_v7) {
      (**(romwright_code **)(temp_v2 + 0x12c8))();
      *(unsigned char *)(temp_v2 + 0x12c4) = 0;
    }
    FUN_002bf538();
  }
  temp_v13 = 0.295f;
  temp_v12 = temp_v13;
  FUN_002ba12c(DAT_0044ea00);
  temp_v7 = FUN_002bf4f8(0x29,0x4e);
  if (*(int *)(temp_v1 + 4) != 0x13) {
    if ((*(int *)(temp_v1 + 4) == 0x11) && (temp_v2 = *(int *)(temp_v1 + 0x10), 5 >= temp_v2)) {
      temp_v3 = -8;
      temp_v5 = temp_v2 * 5;
      temp_v2 = temp_v2 * -5 + 0x1f;
      temp_v3 = temp_v3 + temp_v5 * 2;
    }
    else {
      temp_v2 = 0;
      temp_v3 = (int)*(short *)(*(int *)(temp_v7 + 0xc) + 2);
    }
  }
  else {
    temp_v3 = (int)*(short *)(*(int *)(temp_v7 + 0xc) + 2);
    temp_v2 = *(int *)(temp_v1 + 0x10) * 5;
    temp_v5 = *(int *)(temp_v1 + 0x10) * -5;
    temp_v3 = temp_v3 + temp_v5 * 2;
  }
  temp_v5 = temp_v9 + (int)temp_v13;
  FUN_002b0750(2,0x29,0x4e,temp_v5,temp_v8 + temp_v2,(int)**(short **)(temp_v7 + 0xc),temp_v3,0x97);
  FUN_002bf288(2,0x29,0x4c,temp_v5,temp_v8 + temp_v2,0x9c);
  if (*(int *)(temp_v1 + 4) != 0x13) {
    if ((*(int *)(temp_v1 + 4) == 0x11) && (*(int *)(temp_v1 + 0x10) < 6)) {
      temp_v7 = *(int *)(temp_v1 + 0x10) * 5 - 0x1f;
    }
    else {
      temp_v7 = 0;
    }
  }
  else {
    temp_v7 = *(int *)(temp_v1 + 0x10) * -5 + 0x1f;
  }
  FUN_002bf288(2,0x29,0x4d,temp_v5,temp_v8 + temp_v7,0x9c);
  if ((*(int *)(temp_v1 + 4) != 0x11) || (*(int *)(temp_v1 + 0x10) >= 7)) {
    FUN_002bf538();
    temp_v2 = DAT_0044ea00;
    temp_v3 = FUN_002c5da8(6,1,0);
    piVar8 = (int *)(temp_v2 + 0x12ac);
    temp_v6 = piVar8[*piVar8 + 2];
    piVar8[*piVar8 + 2] = temp_v3;
    if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v6 != temp_v3) {
      (**(romwright_code **)(temp_v2 + 0x12c8))();
      *(unsigned char *)(temp_v2 + 0x12c4) = 0;
    }
    if (*(int *)(temp_v1 + 4) == 0x13) {
      temp_v7 = *(int *)(temp_v1 + 0x10) * 5;
    }
    FUN_002bf288(2,0x29,0x4f,temp_v5,temp_v8 + temp_v7,0x9c);
    if (*(int *)(temp_v1 + 4) == 0x13) {
      temp_v7 = *(int *)(temp_v1 + 0x10) * -5;
    }
    FUN_002bf288(2,0x29,0x50,temp_v5,temp_v8 + temp_v7,0x9c);
    temp_v7 = DAT_0044ea00;
    temp_v2 = FUN_002c5da8(6,7,0);
    piVar8 = (int *)(temp_v7 + 0x12ac);
    temp_v5 = piVar8[*piVar8 + 2];
    piVar8[*piVar8 + 2] = temp_v2;
    if (*(char *)(temp_v7 + 0x12c4) != '\0' || temp_v5 != temp_v2) {
      (**(romwright_code **)(temp_v7 + 0x12c8))();
      *(unsigned char *)(temp_v7 + 0x12c4) = 0;
    }
    FUN_002bf538();
    temp_v13 = 0.29f;
    FUN_002ba12c(DAT_0044ea00);
    if (*(char *)(temp_v1 + 0x37a) != '\0') {
      FUN_002bf288(2,0x29,0x52,*(int *)(temp_v1 + 0x5e8) + temp_v9 + (int)temp_v13,
                   *(int *)(temp_v1 + 0x5e8) + temp_v8,0xa1);
      temp_v13 = 0.285f;
      FUN_002ba12c(DAT_0044ea00);
      FUN_002bf288(2,0x29,0x53,(temp_v9 - *(int *)(temp_v1 + 0x5e8)) + (int)temp_v13,
                   temp_v8 - *(int *)(temp_v1 + 0x5e8),0xa6);
    }
    else {
      VectorSignedToFloat((int)temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002b93c8(temp_v1 + 0x2f0);
    }
    FUN_002ba12c(DAT_0044ea00);
    temp_v8 = temp_v8 + temp_v11;
    FUN_002bf288(2,0x29,0x51,temp_v9 + temp_v10 + (int)temp_v12,temp_v8,0xa1);
    temp_v11 = FUN_002bf4f8(0x29,0x54);
    temp_v10 = temp_v10 + (int)temp_v12;
    FUN_0029acc4(temp_v0,*(short *)(temp_v11 + 8) + temp_v9 + temp_v10,*(short *)(temp_v11 + 10) + temp_v8,
                 0xa6);
    temp_v11 = FUN_002bf4f8(0x29,0x55);
    temp_v4 = FUN_002bcddc(temp_v0,0);
    FUN_002be624(temp_v14,&LAB_0018710c,temp_v4);
    VectorSignedToFloat(*(short *)(temp_v11 + 10) + temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v11 + 8) + temp_v9 + temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(3,0xff,temp_v14);
    if (*(int *)(temp_v1 + 4) != 0x11) {
      return;
    }
  }
  temp_v10 = DAT_0044ea00;
  if ((*(int *)(temp_v1 + 0x5e8) >= 2) && (*(char *)(temp_v1 + 0x406) == '\0')) {
    temp_v11 = FUN_002c5da8(6,1,0);
    piVar8 = (int *)(temp_v10 + 0x12ac);
    temp_v9 = piVar8[*piVar8 + 2];
    piVar8[*piVar8 + 2] = temp_v11;
    if (*(char *)(temp_v10 + 0x12c4) != '\0' || temp_v9 != temp_v11) {
      (**(romwright_code **)(temp_v10 + 0x12c8))();
      *(unsigned char *)(temp_v10 + 0x12c4) = 0;
    }
    FUN_002b93c8(temp_v1 + 0x37c);
    temp_v1 = DAT_0044ea00;
    temp_v10 = FUN_002c5da8(6,7,0);
    piVar8 = (int *)(temp_v1 + 0x12ac);
    temp_v11 = piVar8[*piVar8 + 2];
    piVar8[*piVar8 + 2] = temp_v10;
    if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v11 != temp_v10) {
      (**(romwright_code **)(temp_v1 + 0x12c8))();
      *(unsigned char *)(temp_v1 + 0x12c4) = 0;
    }
  }
  return;
}

} /* extern "C" */
