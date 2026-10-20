/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005094e4` (_code @ 0x5094e4, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0045f9fc(int, int);
int FUN_0045fab0(int, int);
int word8HolderSetFromTable(int, int);
int FUN_00460a7c(unsigned char [20], unsigned int, int);
int FUN_00466478(int, unsigned int, unsigned int, unsigned int);
int FUN_00466780(int, unsigned char [4], unsigned int, int);
int VectorSignedToFloat(unsigned int, int);
int VectorUnsignedToFloat(unsigned int, int);
int nw_snd_internal_CurveAdshr_SetHold(int, int);

/* stack frame of param_4: 15 slot(s), 27 byte(s) */
typedef struct {
    unsigned char sp2A; /* 0x2a: local_2a */
    unsigned char sp2B; /* 0x2b: local_2b */
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned char sp2D; /* 0x2d: local_2d */
    unsigned char sp2E; /* 0x2e: local_2e */
    unsigned char sp2F; /* 0x2f: local_2f */
    unsigned char sp30; /* 0x30: local_30 */
    unsigned char sp31; /* 0x31: local_31 */
    unsigned char sp32; /* 0x32: local_32 */
    unsigned char sp33; /* 0x33: local_33 */
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spC0; /* 0xc0: local_c0 */
} param_4_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned int FUN_001a8d40(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0045f9fc. */
/* Supplied declaration required: FUN_0045fab0. */
/* Supplied declaration required: word8HolderSetFromTable. */
/* Supplied declaration required: FUN_00460a7c. */
/* Supplied declaration required: FUN_00466478. */
/* Supplied declaration required: FUN_00466780. */
extern int FUN_0050802c(unsigned int, unsigned char *, unsigned int, unsigned int, unsigned int);
extern int FUN_005081b8(unsigned char *, unsigned char *, unsigned int);
/* Supplied declaration required: nw_snd_internal_CurveAdshr_SetHold. */


void FUN_005094e4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  float temp_v2;
  unsigned char temp_v3 [4];
  int temp_v4;
  unsigned char temp_v5 [4];
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned char temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned char temp_v17;
  unsigned char temp_v18;
  unsigned char temp_v19 [20];
  
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v0 = FUN_0050802c(param_2,temp_v5,*param_4,param_4[1],param_4[2]);
  if (temp_v0 != 0) {
    temp_v1 = FUN_001a8d40(param_3,temp_v6);
    FUN_00460a7c(temp_v19,temp_v1,0);
    temp_v0 = FUN_005081b8(temp_v19,temp_v3,0);
    if (temp_v0 != 0) {
      temp_v0 = temp_v4;
      if (temp_v4 >= 3) {
        temp_v0 = 2;
      }
      FUN_00466478(temp_v0,param_4[5],param_4[6],param_4[7]);
      if (temp_v0 != 0) {
        *(char *)(temp_v0 + 0x194) = (char)param_4[1];
        *(unsigned char *)(temp_v0 + 0x195) = temp_v13;
        temp_v2 = (float)VectorUnsignedToFloat(param_4[2] & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(temp_v0 + 0x19c) = temp_v2 * 0.007874016f;
        temp_v2 = (float)VectorUnsignedToFloat((unsigned int)temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(temp_v0 + 0x198) = temp_v2 * 0.007874016f;
        *(unsigned int *)(temp_v0 + 0x17c) = temp_v7;
        word8HolderSetFromTable(temp_v0 + 0x98,temp_v8);
        nw_snd_internal_CurveAdshr_SetHold(temp_v0 + 0x98,temp_v11);
        FUN_0045fab0(temp_v0 + 0x98,temp_v9);
        *(unsigned char *)(temp_v0 + 0xb0) = temp_v10;
        FUN_0045f9fc(temp_v0 + 0x98,temp_v12);
        temp_v2 = (float)VectorSignedToFloat(((unsigned int)temp_v15 + param_4[4]) - 0x40,
                                           (unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(temp_v0 + 0x174) = temp_v2 * 0.015873017f;
        *(unsigned char *)(temp_v0 + 0x196) = temp_v17;
        *(unsigned char *)(temp_v0 + 0x13d) = temp_v16;
        *(unsigned char *)(temp_v0 + 0x197) = temp_v18;
        FUN_00466780(temp_v0,temp_v3,param_4[3],0);
      }
    }
  }
  return;
}

} /* extern "C" */
