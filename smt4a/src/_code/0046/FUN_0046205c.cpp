/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046205c` (_code @ 0x46205c, 0x304 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00175c68(int);
int FUN_001cbd00(unsigned int, int);
int FUN_001d239c(unsigned int);
int FUN_0045f9fc(...);
int FUN_0045fab0(void);
int FUN_0045fb28(void);
int FUN_00465c8c(int, int, int *);
int FUN_004663e4(...);
int FUN_00466500(...);
int VectorSignedToFloat(unsigned int, int);
int nw_snd_internal_CurveAdshr_SetHold(int);
int nw_snd_internal_driver_Voice_SetPanCurve(unsigned int, int);
int nw_snd_internal_driver_Voice_SetPanMode(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_5: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_5_stack;

extern int FUN_00461f64(...); /* 0x461f64 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00175c68. */
/* Supplied declaration required: FUN_001cbd00. */
/* Supplied declaration required: FUN_001d239c. */
/* Supplied declaration required: FUN_0045f9fc. */
/* Supplied declaration required: FUN_0045fab0. */
/* Supplied declaration required: FUN_0045fb28. */
/* Supplied declaration required: FUN_00465c8c. */
/* Supplied declaration required: FUN_004663e4. */
/* Supplied declaration required: FUN_00466500. */
extern char aeabi_idivmod(int);
/* Supplied declaration required: nw_snd_internal_CurveAdshr_SetHold. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetPanCurve. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetPanMode. */


void FUN_0046205c(int param_1,int param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr, in_s0; 14 native warning(s); review required */
  unsigned int temp_v0;
  long long temp_v1;
  char temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  unsigned int in_s0;
  float temp_v10;
  float temp_v11;
  int temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  int temp_v16;
  int temp_v17;
  romwright_code *temp_v18;
  int temp_v19;
  
  temp_v7 = 0;
  temp_v5 = (unsigned int)*(unsigned char *)(param_1 + 0xf0) * param_3;
  temp_v4 = *(int *)(param_1 + 300);
  temp_v1 = (long long)(int)temp_v5 * -0x7efdfbf7 + ((unsigned long long)temp_v5 << 0x20);
  temp_v6 = (int)((unsigned long long)temp_v1 >> 0x20);
  if (param_5 != 0) {
    temp_v7 = *(int *)(param_1 + 0x130);
  }
  temp_v5 = (temp_v6 >> 6) - (temp_v6 >> 0x1f);
  temp_v8 = (unsigned char)param_2;
  if (param_5 != 0 && temp_v7 != 0) {
    *(unsigned char *)(temp_v7 + 0x194) = temp_v8;
    FUN_004663e4(temp_v5 & 0xff,temp_v6,(int)temp_v1);
    *(unsigned int *)(temp_v7 + 0x19c) = in_s0;
  }
  if (*(char *)(param_1 + 0x27) != '\0') {
    temp_v7 = *(int *)(param_1 + 0x130);
    if (temp_v7 != 0) {
      if (*(char *)(temp_v7 + 0x98) != '\x04') {
        *(unsigned char *)(temp_v7 + 0x194) = temp_v8;
        FUN_004663e4(temp_v5 & 0xff);
        *(unsigned int *)(temp_v7 + 0x19c) = in_s0;
        *(unsigned int *)(temp_v7 + 400) = param_4;
        goto LAB_004621e4;
      }
      FUN_00175c68(temp_v7);
    }
  }
  else if (temp_v7 != 0) goto LAB_004621e4;
  temp_v18 = FUN_00461f64;
  temp_v12 = *(unsigned int *)(param_1 + 0x84);
  temp_v15 = param_4;
  if (param_5 != 0) {
    temp_v15 = 0xffffffff;
  }
  temp_v16 = (int)*(char *)(param_1 + 0xf2);
  temp_v17 = (unsigned int)*(unsigned char *)(temp_v4 + 0x74) + (unsigned int)*(unsigned char *)(param_1 + 0xf5);
  temp_v7 = *(int *)(param_1 + 300);
  temp_v13 = param_2;
  temp_v14 = temp_v5;
  temp_v19 = param_1;
  FUN_00465c8c(temp_v7,*(unsigned char *)(param_1 + 0x83),&temp_v12);
  if (temp_v7 == 0) {
    return;
  }
  temp_v9 = *(char *)(temp_v7 + 0x196) != '\0';
  if (temp_v9) {
    temp_v5 = *(unsigned int *)(param_1 + 0x130);
  }
  if (temp_v9 && temp_v5 != 0) {
    do {
      if (*(char *)(temp_v5 + 0x196) == *(char *)(temp_v7 + 0x196)) {
        FUN_0045f9fc(temp_v5 + 0x98,0x7e);
        FUN_001d239c(temp_v5);
      }
      temp_v5 = *(unsigned int *)(temp_v5 + 0x1ac);
    } while (temp_v5 != 0);
  }
  *(unsigned int *)(temp_v7 + 0x1ac) = *(unsigned int *)(param_1 + 0x130);
  *(int *)(param_1 + 0x130) = temp_v7;
LAB_004621e4:
  if (*(unsigned char *)(param_1 + 0xf8) < 0x80) {
    FUN_0045fb28();
  }
  if (*(unsigned char *)(param_1 + 0xf9) < 0x80) {
    FUN_0045fab0();
  }
  if (*(unsigned char *)(param_1 + 0xfa) < 0x80) {
    *(unsigned char *)(temp_v7 + 0xb0) = *(unsigned char *)(param_1 + 0xfa);
  }
  if (*(unsigned char *)(param_1 + 0xfb) < 0x80) {
    FUN_0045f9fc(temp_v7 + 0x98);
  }
  if (*(short *)(param_1 + 0xfc) < 0x80) {
    nw_snd_internal_CurveAdshr_SetHold(temp_v7 + 0x98);
  }
  temp_v10 = *(float *)(param_1 + 0x88);
  if (*(char *)(param_1 + 0x81) != '\0') {
    temp_v11 = (float)VectorSignedToFloat((unsigned int)*(unsigned char *)(param_1 + 0xf6) - param_2,
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = temp_v11 + temp_v10;
  }
  temp_v5 = (unsigned int)*(unsigned char *)(param_1 + 0xf7);
  if (temp_v5 != 0) {
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v10 == 0.0f) << 0x1e) |
            ((unsigned int)(temp_v10 <= 0.0f) << 0x1d);
    temp_v3 = (unsigned char)(temp_v0 >> 0x18);
    if ((unsigned char)((temp_v3 >> 5) & 1) && !(unsigned char)(temp_v3 >> 6)) {
      temp_v10 = -temp_v10;
    }
    temp_v11 = (float)VectorSignedToFloat(temp_v5 * temp_v5,(unsigned char)(temp_v0 >> 0x16) & 3);
    FUN_00466500(temp_v7,((int)(temp_v10 * temp_v11) >> 5) * 5,1);
  }
  else {
    FUN_00466500(temp_v7,param_4,0);
  }
  *(unsigned char *)(param_1 + 0xf6) = temp_v8;
  if (*(char *)(param_1 + 0x7b) == '\0') {
    temp_v8 = 0xff;
  }
  else {
    temp_v8 = 0;
  }
  if ((unsigned int)*(unsigned short *)(temp_v7 + 0x184) >= (unsigned int)*(unsigned short *)(temp_v7 + 0x182)) {
    temp_v3 = *(unsigned char *)(temp_v7 + 0x181);
  }
  else {
    temp_v3 = *(unsigned char *)(temp_v7 + 0x180);
    temp_v2 = aeabi_idivmod(((unsigned int)*(unsigned char *)(temp_v7 + 0x181) - (unsigned int)temp_v3) *
                          (unsigned int)*(unsigned short *)(temp_v7 + 0x184));
    temp_v3 = temp_v2 + temp_v3;
  }
  *(unsigned char *)(temp_v7 + 0x180) = temp_v3;
  *(unsigned char *)(temp_v7 + 0x181) = temp_v8;
  *(unsigned short *)(temp_v7 + 0x182) = 0;
  *(unsigned short *)(temp_v7 + 0x184) = 0;
  *(unsigned char *)(temp_v7 + 0x13c) = *(unsigned char *)(*(int *)(param_1 + 300) + 0x5c);
  nw_snd_internal_driver_Voice_SetPanMode
            (*(unsigned int *)(temp_v7 + 0x1a8),*(unsigned char *)(*(int *)(param_1 + 300) + 0x34));
  nw_snd_internal_driver_Voice_SetPanCurve
            (*(unsigned int *)(temp_v7 + 0x1a8),*(unsigned char *)(*(int *)(param_1 + 300) + 0x35));
  FUN_001cbd00(*(unsigned int *)(temp_v7 + 0x1a8),(int)*(char *)(param_1 + 0x79));
  return;
}

} /* extern "C" */
