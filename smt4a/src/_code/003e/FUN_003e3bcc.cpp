/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e3bcc` (_code @ 0x3e3bcc, 0x4a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001681cc(...);
int FUN_00180118(unsigned int);
int FUN_0019de98(...);
int FUN_0022e774(void);
int FUN_0023b45c(...);
int FUN_00275f44(...);
int FUN_002a5e7c(int);
int FUN_002a7288(void);
int FUN_002c8538(...);
int FUN_003180c4(int, unsigned int);
int FUN_0031a218(int, int);
int FUN_00333dc8(...);
int FUN_003343f0(...);
int FUN_00359974(int, unsigned int, unsigned int, int);
int FUN_0037c8b4(int, int);
int FUN_0037c8e4(int, int);
int FUN_00388758(...);
int FUN_003c1060(void);
int FUN_003c3e14(void);
int FUN_003c5fc4(...);
int FUN_004a0ef8(int);
int FUN_004bcd90(int);
int FUN_004bd30c(unsigned int, int, int);
int FUN_004bd6b0(int, int, int);
int FUN_004cd4b8(int, int);

typedef struct fn_003e3bcc_arg0 fn_003e3bcc_arg0;
struct fn_003e3bcc_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    int field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x4];
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x3];
    undefined4 field_0x18; /* +0x18 */
};

/* stack frame of param_1: 7 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned short sp22; /* 0x22: local_22 */
    unsigned short sp24; /* 0x24: local_24 */
    unsigned short sp26; /* 0x26: local_26 */
    unsigned short sp28; /* 0x28: local_28 */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_003e3fd0; /* 0x3e3fd0 */
extern unsigned char LAB_003e3fe4; /* 0x3e3fe4 */
extern unsigned char LAB_003e3ff8; /* 0x3e3ff8 */
extern unsigned char LAB_003e400c; /* 0x3e400c */

/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: FUN_0019de98. */
extern int FUN_0019e4d4(unsigned short);
extern unsigned int *FUN_001ab888(void);
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_0022e774. */
/* Supplied declaration required: FUN_0023b45c. */
extern int FUN_0026c3a0(void);
/* Supplied declaration required: FUN_00275f44. */
extern int FUN_002a4b28(void);
extern int FUN_002a4b74(void);
/* Supplied declaration required: FUN_002a5e7c. */
/* Supplied declaration required: FUN_002a7288. */
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_0031a218. */
/* Supplied declaration required: FUN_00333dc8. */
/* Supplied declaration required: FUN_003343f0. */
extern int FUN_00357bc8(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_00359974. */
extern int FUN_0037c894(void);
/* Supplied declaration required: FUN_0037c8b4. */
/* Supplied declaration required: FUN_0037c8e4. */
/* Supplied declaration required: FUN_00388758. */
/* Supplied declaration required: FUN_003c1060. */
/* Supplied declaration required: FUN_003c3e14. */
/* Supplied declaration required: FUN_003c5fc4. */
/* Supplied declaration required: FUN_004a0ef8. */
/* Supplied declaration required: FUN_004bcd90. */
extern int FUN_004bd21c(unsigned int);
/* Supplied declaration required: FUN_004bd30c. */
/* Supplied declaration required: FUN_004bd6b0. */
extern int FUN_004cc8d8(unsigned short, unsigned short);
/* Supplied declaration required: FUN_004cd4b8. */
extern int FUN_004d0bf0(unsigned int);
extern unsigned int FUN_004d0cd4(void);
extern int FUN_004d0eec(void);


void FUN_003e3bcc(fn_003e3bcc_arg0 *param_1)

{
/* irregular: 25 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned short uStack_3e;
  int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  
  temp_v0 = param_1->field_0x8;
  if (temp_v0 == 4) {
    temp_v0 = FUN_0037c894();
    if (temp_v0 != 1) {
      return;
    }
    temp_v0 = *(int *)&param_1[5].field_0x14;
    temp_v3 = *(unsigned int *)((int)param_1 + temp_v0 * 0x24 + 0x20);
    uStack_38 = *(unsigned int *)((int)param_1 + temp_v0 * 0x24 + 0x28);
    uStack_34 = *(unsigned int *)((int)param_1 + temp_v0 * 0x24 + 0x2c);
    uStack_30 = *(unsigned int *)((int)param_1 + temp_v0 * 0x24 + 0x30);
    uStack_2c = *(unsigned int *)((int)param_1 + temp_v0 * 0x24 + 0x34);
    temp_v7 = *(unsigned int *)((int)param_1 + temp_v0 * 0x24 + 0x38);
    temp_v8 = *(unsigned int *)((int)param_1 + temp_v0 * 0x24 + 0x3c);
    temp_v9 = *(unsigned int *)((int)param_1 + temp_v0 * 0x24 + 0x40);
    FUN_004a0ef8(-*(int *)((int)param_1 + temp_v0 * 0x24 + 0x24));
    temp_v4 = FUN_004d0cd4();
    uStack_3e = (unsigned short)((unsigned int)temp_v3 >> 0x10);
    temp_v0 = FUN_002a4b28();
    FUN_004bd30c(temp_v4,uStack_3e,0);
    temp_v1 = FUN_0019e4d4(uStack_3e);
    FUN_004cd4b8(temp_v1,(int)(short)((short)temp_v7 - *(short *)(temp_v1 + 100)));
    *(unsigned short *)(temp_v1 + 4) = (*(unsigned short *)((unsigned char *)&temp_v7 + 2));
    *(unsigned short *)(temp_v1 + 6) = (unsigned short)temp_v8;
    *(unsigned short *)(temp_v1 + 8) = (*(unsigned short *)((unsigned char *)&temp_v8 + 2));
    *(unsigned short *)(temp_v1 + 10) = (unsigned short)temp_v9;
    *(unsigned short *)(temp_v1 + 0xc) = (*(unsigned short *)((unsigned char *)&temp_v9 + 2));
    FUN_004bcd90(temp_v1);
    temp_v2 = FUN_004cc8d8(*(unsigned short *)(temp_v1 + 0x62),*(unsigned short *)(temp_v1 + 100));
    temp_v6 = 0;
    *(int *)(temp_v1 + 0x30) = temp_v2 - 1;
    do {
      FUN_004bd6b0(temp_v1,0,temp_v6);
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 8);
    temp_v2 = FUN_004bd21c(0);
    temp_v6 = 0;
    do {
      if (temp_v2 <= temp_v6) break;
      FUN_004bd6b0(temp_v1,*(unsigned short *)((int)&uStack_38 + temp_v6 * 2),temp_v6);
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 8);
    if (temp_v0 == 0) {
      FUN_002a5e7c(*(unsigned short *)(temp_v1 + 0x62));
    }
    param_1->field_0x8 = 10;
    return;
  }
  if (temp_v0 < 4) {
    if (temp_v0 != 0) {
      if (temp_v0 == 1) {
        temp_v0 = FUN_00224880(param_1->field_0x18);
        if (temp_v0 != 2) {
          return;
        }
        temp_v0 = FUN_002a4b74();
        if ((temp_v0 != -1) && (temp_v0 != 1)) {
          param_1->field_0x8 = 2;
        }
        else {
          param_1->field_0x8 = 10;
        }
        FUN_003c3e14();
        FUN_003c5fc4(0);
        return;
      }
      if (temp_v0 == 2) {
        temp_v5 = *(unsigned int *)((int)param_1 + *(int *)&param_1[5].field_0x14 * 0x24 + 0x24);
        temp_v0 = FUN_004d0bf0(*(unsigned int *)((int)param_1 + *(int *)&param_1[5].field_0x14 * 0x24 + 0x20)
                             >> 0x10);
        if (temp_v0 != 0) {
          temp_v0 = FUN_00357bc8(*(unsigned int *)&param_1->field_0x14,&LAB_003e3fe4);
        }
        else {
          temp_v0 = FUN_004d0eec();
          if (temp_v0 != 0) {
            puVar2 = (unsigned int *)FUN_001ab888();
            if (temp_v5 <= *puVar2) {
              FUN_0031a218(-*(int *)((int)param_1 + *(int *)&param_1[5].field_0x14 * 0x24 + 0x24),0)
              ;
              temp_v0 = 4;
              param_1->field_0x8 = temp_v0;
              return;
            }
            temp_v0 = FUN_00357bc8(*(unsigned int *)&param_1->field_0x14,&LAB_003e3ff8);
          }
          else {
            temp_v0 = FUN_00357bc8(*(unsigned int *)&param_1->field_0x14,&LAB_003e400c);
          }
        }
        if (-1 < temp_v0) {
          FUN_00275f44(param_1->field_0x18,temp_v0);
        }
        param_1->field_0x8 = 3;
        return;
      }
      if (temp_v0 != 3) {
        return;
      }
      temp_v0 = FUN_00224880(param_1->field_0x18);
      if (temp_v0 != 2) {
        return;
      }
      param_1->field_0x8 = 10;
      return;
    }
    FUN_0037c8e4(1,0);
    FUN_0037c8b4(-*(int *)((int)param_1 + *(int *)&param_1[5].field_0x14 * 0x24 + 0x24),0);
    temp_v5 = (unsigned int)*(unsigned short *)((int)param_1 + *(int *)&param_1[5].field_0x14 * 0x24 + 0x22);
    FUN_00180118(temp_v5);
    FUN_003180c4(0,temp_v5);
    FUN_00359974(0x19,*(unsigned int *)((int)param_1 + *(int *)&param_1[5].field_0x14 * 0x24 + 0x24),
                 0xffffffff,0);
    FUN_003c1060();
    FUN_003c5fc4(1);
    FUN_001681cc(0xa4);
    temp_v0 = FUN_00357bc8(*(unsigned int *)&param_1->field_0x14,&LAB_003e3fd0);
    if (-1 < temp_v0) {
      FUN_00275f44(param_1->field_0x18,temp_v0);
    }
    temp_v0 = 1;
  }
  else if (temp_v0 != 10) {
    if (temp_v0 != 0xb) {
      if (temp_v0 != 99) {
        return;
      }
      temp_v4 = param_1->field_0x4;
      param_1->field_0x4 = 3;
      param_1->field_0x8 = 0;
      param_1->field_0xc = temp_v4;
      return;
    }
    temp_v0 = FUN_0026c3a0();
    if (temp_v0 == 0) {
      return;
    }
    FUN_003343f0(0);
    FUN_00333dc8(0);
    FUN_002c8538(0);
    FUN_0019de98(0,0xf4f4f4ff);
    temp_v0 = 99;
  }
  else {
    FUN_00388758(1);
    FUN_0022e774();
    FUN_0023b45c(0);
    FUN_002a7288();
    temp_v0 = 0xb;
  }
  param_1->field_0x8 = temp_v0;
  return;
}

} /* extern "C" */
