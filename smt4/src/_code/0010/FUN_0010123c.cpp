/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010123c` (_code @ 0x10123c, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002aa924(...);

int CONCAT44(...);
int libc_printfStr(float *, float *, int);
int libc_printfWstr(float *, float *, int);
int FUN_002076b8(...);
int FUN_002aa67c(...);
int FUN_002aa6ac(...);
int FUN_002aa790(...);
int SBORROW4(...);
int VectorFloatToUnsigned(...);
int VectorUnsignedToFloat(...);
int coprocessor_loadlong(int, unsigned int, int *);
int halt_baddata(void);
int romwright_set_sp(unsigned int);

typedef int romwright_code(...);
#ifndef ROMWRIGHT_FLOAT_BITS_DEFINED
#define ROMWRIGHT_FLOAT_BITS_DEFINED
static unsigned int romwright_f2u(float value)
{
    union { float f; unsigned int u; } bits;
    bits.f = value;
    return bits.u;
}
static float romwright_u2f(unsigned int value)
{
    union { float f; unsigned int u; } bits;
    bits.u = value;
    return bits.f;
}
#endif
/* Unsupported intrinsic, declaration required: romwright_set_sp (a write of the stack pointer). */
extern romwright_code *DAT_0044e330; /* 0x44e330 */
extern float *g_commandBufferCursor; /* 0x4652a0 */
extern float *g_commandBufferEnd; /* 0x4652a4 */
extern float DAT_004652b4; /* 0x4652b4 */
extern int DAT_004652bc; /* 0x4652bc */
extern int DAT_0046531c; /* 0x46531c */
extern int DAT_00465334; /* 0x465334 */
extern int DAT_0046534c; /* 0x46534c */
extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: coprocessor_loadlong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: libc_printfStr. */
/* Supplied declaration required: libc_printfWstr. */
extern unsigned int FUN_0010072c(float *, int, int, unsigned int);
/* Supplied declaration required: FUN_002076b8. */
/* Supplied declaration required: FUN_002aa67c. */
/* Supplied declaration required: FUN_002aa6ac. */
/* Supplied declaration required: FUN_002aa790. */
/* Supplied declaration required: FUN_002aa924. */
extern unsigned long long FUN_002c67c6(int, float *);


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x001008b8) */
/* WARNING: Removing unreachable block (ram,0x001008b4) */
/* WARNING: Removing unreachable block (ram,0x001008a8) */
/* WARNING: Removing unreachable block (ram,0x00100890) */
/* WARNING: Removing unreachable block (ram,0x00100822) */
/* WARNING: Removing unreachable block (ram,0x001008a0) */
/* WARNING: Removing unreachable block (ram,0x001008b0) */
/* WARNING: Removing unreachable block (ram,0x001008c0) */

float * FUN_0010123c(float *param_1,float *param_2,int *param_3)

{
/* irregular: 11 unstructured edge(s); 7 goto(s); irregular input(s): in_cr11, in_fpscr, in_lr, in_s0, in_s1, in_s10, in_s11, in_s12, in_s16, in_s2, in_s3, in_s4, in_s5, in_s6, in_s7, in_s8, in_s9; 37 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  float *pfVar3;
  unsigned int *puVar4;
  int temp_v1;
  float *temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int *piVar9;
  unsigned int *puVar10;
  int temp_v6;
  float *pfVar12;
  unsigned int unaff_r4;
  unsigned int *unaff_r5;
  float unaff_r6;
  unsigned int temp_v7;
  float unaff_r7;
  unsigned int unaff_r8;
  unsigned int temp_v8;
  float *pfVar15;
  float temp_v9;
  int *unaff_r9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  float temp_v15;
  int temp_v16;
  float temp_v17;
  float temp_v18;
  int *in_lr;
  unsigned char temp_v19;
  unsigned char temp_v20;
  unsigned char temp_v21;
  unsigned char temp_v22;
  unsigned char temp_v23;
  unsigned int in_fpscr;
  unsigned int in_cr11;
  float in_s0;
  unsigned int temp_v24;
  float temp_v25;
  float in_s1;
  float temp_v26;
  float in_s2;
  float in_s3;
  float temp_v27;
  int in_s4;
  float temp_v28;
  int in_s5;
  float temp_v29;
  float temp_v30;
  int in_s6;
  float temp_v31;
  float temp_v32;
  int in_s7;
  int in_s8;
  float temp_v33;
  int in_s9;
  float temp_v34;
  int in_s10;
  float temp_v35;
  int in_s11;
  float in_s12;
  float in_s16;
  unsigned long long temp_v36;
  unsigned long long temp_v37;
  unsigned long long temp_v38;
  unsigned long long temp_v39;
  float temp_v40;
  float temp_v41;
  unsigned long long temp_v42;
  
  if (param_2 == (float *)0x6e) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2 == (float *)0x70) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (((param_2 == (float *)0x66) || (param_2 == (float *)0x65)) || (param_2 == (float *)0x67)) {
    pfVar3 = (float *)(*(romwright_code *)0x2c639d)();
    return pfVar3;
  }
  if ((unsigned char)((unsigned char)((unsigned int)*param_1 >> 7) & 1)) {
    param_2 = (float *)((unsigned int)param_2 | 0x80);
  }
  if (((param_2 == (float *)0x69) || (param_2 == (float *)0x64)) || (param_2 == (float *)0x75)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2 == (float *)0x6f) {
    temp_v42 = FUN_002c67c6(*param_3,param_1);
    pfVar3 = (float *)FUN_0010072c(param_1,(int)((unsigned long long)temp_v42 >> 0x20),(int)temp_v42,0);
    return pfVar3;
  }
  if (param_2 == (float *)0x78) {
    pfVar3 = (float *)(*(romwright_code *)0x1007fd)();
    return pfVar3;
  }
  temp_v22 = (float *)0xe8 < param_2;
  temp_v23 = SBORROW4((int)param_2,0xe9);
  temp_v19 = (int)param_2 - 0xe9 < 0;
  temp_v20 = param_2 == (float *)0xe9;
  if (!temp_v20) {
    temp_v22 = (float *)0xe3 < param_2;
    temp_v23 = SBORROW4((int)param_2,0xe4);
    temp_v19 = (int)(param_2 + -0x39) < 0;
    temp_v20 = param_2 == (float *)0xe4;
    if (!temp_v20) {
      temp_v22 = (float *)0xf4 < param_2;
      temp_v23 = SBORROW4((int)param_2,0xf5);
      temp_v19 = (int)param_2 - 0xf5 < 0;
      temp_v20 = param_2 == (float *)0xf5;
      if (!temp_v20) {
        if (param_2 == (float *)0xef) {
          pfVar3 = (float *)(*(romwright_code *)0x100789)();
          return pfVar3;
        }
        if (param_2 == (float *)0xf8) {
          pfVar3 = (float *)(*(romwright_code *)0x100819)();
          return pfVar3;
        }
        if ((unsigned char)((unsigned char)((unsigned int)*param_1 >> 6) & 1)) {
          param_2 = (float *)((unsigned int)param_2 | 0x80);
        }
        if (param_2 == (float *)0x63) {
          *(char *)(param_1 + 9) = (char)*param_3;
          *(unsigned char *)((int)param_1 + 0x25) = 0;
          if (param_1[5] == 0.0f) {
            libc_printfStr(param_1,param_1 + 9,1);
          }
          return (float *)0x1;
        }
        if (param_2 == (float *)0x73) {
          pfVar3 = (float *)(*(romwright_code *)0x10035f)();
          return pfVar3;
        }
        if (param_2 != (float *)0xe3) {
          if (param_2 != (float *)0xf3) {
            return (float *)0x0;
          }
          pfVar3 = (float *)(*(romwright_code *)0x10099b)();
          return pfVar3;
        }
        *(short *)(param_1 + 9) = (short)*param_3;
        *(unsigned short *)((int)param_1 + 0x26) = 0;
        if (param_1[5] == 0.0f) {
          libc_printfWstr(param_1,param_1 + 9,1);
        }
        return (float *)0x1;
      }
    }
  }
  temp_v14 = 0x1006b5;
  if (!temp_v20) {
    coprocessor_loadlong(5,in_cr11,param_3 + 0xf7);
    temp_v21 = temp_v22;
  }
  else {
    unaff_r9 = (int *)*param_3;
    romwright_set_sp((unsigned int)((unsigned int *)param_3[2]));
    piVar9 = (int *)((int)unaff_r5 << ((unsigned int)unaff_r5 & 0xff));
    temp_v21 = piVar9 < param_3 || (unsigned int)((int)param_3 - (int)piVar9) < (unsigned int)temp_v22;
    temp_v23 = SBORROW4((int)param_3,(int)piVar9) !=
             SBORROW4((int)param_3 - (int)piVar9,(unsigned int)!temp_v22);
    temp_v19 = (int)param_3 - (int)((int)piVar9 + (unsigned int)!temp_v22) < 0;
    temp_v20 = param_3 == (int *)((int)piVar9 + (unsigned int)!temp_v22);
  }
  piVar9 = (int *)((unsigned int)*param_1 >> 8);
  if (!temp_v20 && temp_v19 == temp_v23) {
    while( 1 ) {
      unaff_r4 = unaff_r4 + 1;
      *param_3 = in_s4;
      param_3[1] = in_s5;
      param_3[2] = in_s6;
      param_3[3] = in_s7;
      param_3[4] = in_s8;
      param_3[5] = in_s9;
      param_3[6] = in_s10;
      param_3[7] = in_s11;
      temp_v6 = VectorFloatToUnsigned(in_s3,3);
      temp_v1 = unaff_r9[1];
      *in_lr = *unaff_r9;
      in_lr[1] = temp_v1;
      param_3[5] = (piVar9[5] & 0xffffffU) | (temp_v6 << 0x18);
      if (unaff_r8 <= unaff_r4) break;
      in_s4 = piVar9[-10];
      in_s5 = piVar9[-9];
      in_s6 = piVar9[-8];
      in_s7 = piVar9[-7];
      in_s8 = piVar9[-6];
      in_s9 = piVar9[-5];
      in_s10 = piVar9[-4];
      in_s11 = piVar9[-3];
      in_s3 = in_s1 * in_s0;
      unaff_r9 = piVar9 + -2;
      in_lr = param_3 + -2;
      in_s0 = in_s0 + in_s2;
      param_3 = param_3 + -10;
      piVar9 = piVar9 + -10;
    }
    temp_v15 = param_2[1];
    temp_v27 = param_2[2];
    temp_v25 = param_2[3];
    temp_v28 = param_2[4];
    temp_v10 = param_2[5];
    temp_v29 = param_2[6];
    temp_v31 = param_2[7];
    *param_1 = *param_2;
    param_1[1] = temp_v15;
    param_1[2] = temp_v27;
    param_1[3] = temp_v25;
    param_1[4] = temp_v28;
    param_1[5] = temp_v10;
    param_1[6] = temp_v29;
    param_1[7] = temp_v31;
    temp_v15 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = temp_v15;
    param_1[4] = unaff_r7;
    if ((unsigned int *)0x1 < unaff_r5) {
      temp_v42 = 0x437f0000;
      if (((int)unaff_r6 >= 2) && (unaff_r5 >= (unsigned int *)0x3)) {
        if (-1 < (int)param_1[0x1408628]) {
          temp_v15 = param_1[0x1408625];
          temp_v10 = param_1[0x1408626];
          temp_v27 = param_1[0x1408627];
          *(float *)((unsigned int)__current_sp()) = param_1[0x1408624];
          *(float *)((int)((unsigned int)__current_sp()) + 4) = temp_v15;
          *(float *)((int)((unsigned int)__current_sp()) + 8) = temp_v10;
          *(float *)((int)((unsigned int)__current_sp()) + 0xc) = temp_v27;
          temp_v15 = param_1[0xa04313];
          temp_v10 = param_1[0xa04314];
          temp_v27 = param_1[0xa04315];
          *(float *)((int)((unsigned int)__current_sp()) + 0x10) = param_1[0xa04312];
          *(float *)((int)((unsigned int)__current_sp()) + 0x14) = temp_v15;
          *(float *)((int)((unsigned int)__current_sp()) + 0x18) = temp_v10;
          *(float *)((int)((unsigned int)__current_sp()) + 0x1c) = temp_v27;
          temp_v26 = (float)VectorUnsignedToFloat(0x1006b6,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v15 = param_1[1];
          temp_v10 = param_1[2];
          temp_v27 = param_1[3];
          *(float *)((int)((unsigned int)__current_sp()) + 0x20) = *param_1;
          *(float *)((int)((unsigned int)__current_sp()) + 0x24) = temp_v15;
          *(float *)((int)((unsigned int)__current_sp()) + 0x28) = temp_v10;
          *(float *)((int)((unsigned int)__current_sp()) + 0x2c) = temp_v27;
          temp_v15 = param_1[1];
          temp_v10 = param_1[2];
          temp_v27 = param_1[3];
          temp_v26 = in_s12 / temp_v26;
          *(float *)((int)((unsigned int)__current_sp()) + 0x30) = *param_1;
          *(float *)((int)((unsigned int)__current_sp()) + 0x34) = temp_v15;
          *(float *)((int)((unsigned int)__current_sp()) + 0x38) = temp_v10;
          *(float *)((int)((unsigned int)__current_sp()) + 0x3c) = temp_v27;
          temp_v15 = param_1[5];
          temp_v38 = *(unsigned long long *)(param_1 + 0xa04318);
          temp_v40 = param_1[6] - (float)temp_v38;
          temp_v41 = param_1[7] - (float)((unsigned long long)temp_v38 >> 0x20);
          temp_v32 = (float)VectorUnsignedToFloat((unsigned int)temp_v15 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v30 = (float)VectorUnsignedToFloat
                                    (((unsigned int)temp_v15 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3)
          ;
          temp_v27 = (float)VectorUnsignedToFloat((unsigned int)temp_v15 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v10 = (float)VectorUnsignedToFloat
                                    (((unsigned int)temp_v15 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v15 = param_1[0xa04317];
          temp_v31 = (float)VectorUnsignedToFloat((unsigned int)temp_v15 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v25 = (float)VectorUnsignedToFloat((unsigned int)temp_v15 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v29 = (float)VectorUnsignedToFloat
                                    (((unsigned int)temp_v15 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v28 = (float)VectorUnsignedToFloat
                                    (((unsigned int)temp_v15 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3)
          ;
          temp_v31 = temp_v31 * 0.003921569f;
          temp_v25 = temp_v25 * 0.003921569f;
          temp_v29 = temp_v29 * 0.003921569f;
          temp_v28 = temp_v28 * 0.003921569f;
          DAT_004ea92c = temp_v32 * 0.003921569f - temp_v25;
          DAT_004ea930 = temp_v30 * 0.003921569f - temp_v28;
          DAT_004ea934 = temp_v10 * 0.003921569f - temp_v29;
          DAT_004ea938 = temp_v27 * 0.003921569f - temp_v31;
          DAT_004ea924 = in_s12 * temp_v26;
          temp_v14 = 0;
          temp_v30 = DAT_004ea924 * DAT_004ea92c;
          DAT_004ea920 = DAT_004ea924 * DAT_004ea930;
          DAT_004ea924 = DAT_004ea924 * DAT_004ea934;
          temp_v27 = in_s16 * temp_v26 * DAT_004ea938;
          pfVar3 = param_1 + 0xa04312;
          DAT_004ea91c = temp_v30;
          DAT_004ea928 = temp_v27;
          temp_v15 = DAT_004ea920;
          temp_v10 = DAT_004ea924;
          do {
            in_s16 = in_s16 + temp_v26;
            FUN_002076b8(((unsigned int)__current_sp()));
            pfVar3[-7] = DAT_004ea928;
            pfVar3[-10] = DAT_004ea91c;
            pfVar3[-9] = DAT_004ea920;
            pfVar3[-8] = DAT_004ea924;
            pfVar3[-4] = (float)temp_v38 + temp_v40 * in_s16;
            pfVar3[-3] = (float)((unsigned long long)temp_v38 >> 0x20) + temp_v41 * in_s16;
            temp_v25 = temp_v25 + temp_v30;
            temp_v28 = temp_v28 + temp_v15;
            temp_v29 = temp_v29 + temp_v10;
            temp_v31 = temp_v31 + temp_v27;
            temp_v32 = (float)temp_v42;
            temp_v7 = VectorFloatToUnsigned(temp_v28 * temp_v32,3);
            temp_v1 = VectorFloatToUnsigned(temp_v25 * temp_v32,3);
            temp_v4 = VectorFloatToUnsigned(temp_v29 * temp_v32,3);
            temp_v8 = VectorFloatToUnsigned(temp_v31 * temp_v32,3);
            param_1 = (float *)((temp_v1 << 0x18) | ((temp_v7 & 0xff) << 0x10) | ((temp_v4 & 0xff) << 8)
                               | (temp_v8 & 0xff));
            DAT_004ea91c = temp_v25;
            DAT_004ea920 = temp_v28;
            DAT_004ea924 = temp_v29;
            DAT_004ea928 = temp_v31;
            DAT_004ea92c = temp_v30;
            DAT_004ea930 = temp_v15;
            DAT_004ea934 = temp_v10;
            DAT_004ea938 = temp_v27;
            pfVar3[-5] = romwright_u2f((unsigned int)(param_1));
            temp_v14 = temp_v14 + 1;
            pfVar3[-6] = unaff_r6;
            pfVar3 = pfVar3 + -10;
          } while (temp_v14 < 0x1006b4);
        }
      }
      else if ((0 < (int)unaff_r6) && (-1 < (int)param_1[0xa04316])) {
        temp_v27 = (float)VectorUnsignedToFloat(0x1006b6,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v33 = param_1[0xa04319];
        temp_v35 = param_1[0xa04318];
        temp_v32 = (float)VectorUnsignedToFloat((unsigned int)temp_v10 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v27 = in_s12 / temp_v27;
        temp_v41 = (float)VectorUnsignedToFloat
                                  (((unsigned int)temp_v10 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v40 = (float)VectorUnsignedToFloat
                                  (((unsigned int)temp_v10 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v10 = (float)VectorUnsignedToFloat((unsigned int)temp_v10 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v15 = param_1[0xa04317];
        temp_v26 = (float)VectorUnsignedToFloat
                                  (((unsigned int)temp_v15 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v30 = (float)VectorUnsignedToFloat((unsigned int)temp_v15 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v25 = (float)VectorUnsignedToFloat((unsigned int)temp_v15 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v28 = (float)VectorUnsignedToFloat
                                  (((unsigned int)temp_v15 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v26 = temp_v26 * 0.003921569f;
        temp_v30 = temp_v30 * 0.003921569f;
        temp_v25 = temp_v25 * 0.003921569f;
        temp_v28 = temp_v28 * 0.003921569f;
        temp_v15 = in_s12 * temp_v27;
        temp_v14 = 0;
        temp_v32 = temp_v15 * (temp_v32 * 0.003921569f - temp_v25);
        temp_v41 = temp_v15 * (temp_v41 * 0.003921569f - temp_v28);
        temp_v15 = temp_v15 * (temp_v40 * 0.003921569f - temp_v26);
        temp_v10 = in_s16 * temp_v27 * (temp_v10 * 0.003921569f - temp_v30);
        pfVar3 = param_1 + 0xa04312;
        do {
          in_s16 = in_s16 + temp_v27;
          temp_v40 = param_1[0xa04312];
          temp_v11 = param_1[0xa04313];
          temp_v17 = param_1[0xa04315];
          temp_v14 = temp_v14 + 1;
          temp_v9 = *param_1;
          temp_v12 = param_1[1];
          temp_v18 = param_1[3];
          temp_v34 = in_s12 - in_s16;
          pfVar3[-8] = param_1[0xa04314] * temp_v34 + param_1[2] * in_s16;
          pfVar3[-7] = temp_v17 * temp_v34 + temp_v18 * in_s16;
          pfVar3[-4] = temp_v35 + (temp_v29 - temp_v35) * in_s16;
          pfVar3[-3] = temp_v33 + (temp_v31 - temp_v33) * in_s16;
          pfVar3[-10] = temp_v40 * temp_v34 + temp_v9 * in_s16;
          pfVar3[-9] = temp_v11 * temp_v34 + temp_v12 * in_s16;
          temp_v25 = temp_v25 + temp_v32;
          temp_v28 = temp_v28 + temp_v41;
          temp_v26 = temp_v26 + temp_v15;
          temp_v30 = temp_v30 + temp_v10;
          temp_v1 = VectorFloatToUnsigned(temp_v25 * 255.0f,3);
          temp_v7 = VectorFloatToUnsigned(temp_v28 * 255.0f,3);
          temp_v4 = VectorFloatToUnsigned(temp_v26 * 255.0f,3);
          temp_v8 = VectorFloatToUnsigned(temp_v30 * 255.0f,3);
          DAT_004ea91c = temp_v25;
          DAT_004ea920 = temp_v28;
          DAT_004ea924 = temp_v26;
          DAT_004ea928 = temp_v30;
          DAT_004ea92c = temp_v32;
          DAT_004ea930 = temp_v41;
          DAT_004ea934 = temp_v15;
          DAT_004ea938 = temp_v10;
          pfVar3[-5] = (float)((temp_v1 << 0x18) | ((temp_v7 & 0xff) << 0x10) | ((temp_v4 & 0xff) << 8) |
                              (temp_v8 & 0xff));
          pfVar3[-6] = unaff_r6;
          pfVar3 = pfVar3 + -10;
        } while (temp_v14 < 0x1006b4);
        return param_1;
      }
    }
    return param_1;
  }
  if (!temp_v21) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while ((float)((((int)*(float *)((int)((unsigned int)__current_sp()) + 0x10) +
                  (int)*(float *)((int)((unsigned int)__current_sp()) + 0x1c)) - 1U) &
                ~((int)*(float *)((int)((unsigned int)__current_sp()) + 0x1c) - 1U)) ==
         *(float *)((int)((unsigned int)__current_sp()) + 0xf0)) {
    temp_v15 = param_2[2];
    *(float *)((int)((unsigned int)__current_sp()) + 0x1c) = 1.4013e-45f;
    *(float *)((int)((unsigned int)__current_sp()) + 0x10) = 0.0f;
    param_2[2] = (float)(((int)*(float *)((int)((unsigned int)__current_sp()) + 0xf0) << 0x10) |
                         ((int)param_3 << 0x1c) | (unsigned int)temp_v15);
    param_2 = param_2 + 3;
    **(int **)((int)((unsigned int)__current_sp()) + 0x100) = *(int *)(unaff_r4 + 0x93c) + 1;
    piVar9 = (int *)0x0;
    temp_v7 = temp_v14;
LAB_00134780:
    piVar1 = *(int **)((int)((unsigned int)__current_sp()) + 0x108);
    temp_v14 = temp_v7 + 1;
    if ((int)unaff_r6 <= (int)temp_v14) {
      if ((char)unaff_r5[0x207] == '\0') goto LAB_00134804;
      if (0 < (int)unaff_r7) {
        param_2 = (float *)(unaff_r4 + 0x800);
      }
      temp_v1 = 0;
      if (temp_v1 < (int)unaff_r7) {
        do {
          temp_v14 = temp_v1 + (int)unaff_r6;
          temp_v1 = temp_v1 + 1;
          param_2[0x52] = (float)(*(unsigned int *)(unaff_r4 + 0x948) | (0x10000 << (temp_v14 & 0xff)));
        } while (temp_v1 < (int)unaff_r7);
      }
      if (unaff_r6 != 0.0f) {
        *(unsigned int *)(unaff_r4 + 0x948) =
             *(unsigned int *)(unaff_r4 + 0x948) |
             (((int)unaff_r6 + (int)unaff_r7) * 0x10000000 + 0xf0000000U);
      }
      temp_v14 = (unsigned int)*(unsigned char *)((int)unaff_r5 + 0x19);
      temp_v19 = temp_v14 == 0;
      if (temp_v19) {
        temp_v14 = *(unsigned int *)(unaff_r4 + 0x93c);
      }
      if (temp_v19 && temp_v14 == 0xc) break;
      goto LAB_00134804;
    }
    temp_v1 = *piVar1;
    temp_v6 = *(int *)((int)*(float *)((int)((unsigned int)__current_sp()) + 0xac) + 0x44);
    *(int *)((int)((unsigned int)__current_sp()) + 0x108) = piVar1[1];
    temp_v27 = (float)unaff_r5[temp_v1 * 6 + 0x118];
    temp_v15 = (float)(unsigned int)(temp_v27 == 7.17465e-42f);
    *(int *)((int)((unsigned int)__current_sp()) + 0x24) =
         *(int *)((int)*(float *)((int)((unsigned int)__current_sp()) + 0xac) + temp_v1 * 4 + 4) - temp_v6;
    temp_v10 = 0.0f;
    if (temp_v27 != 7.17465e-42f) {
      temp_v10 = (float)(unsigned int)(temp_v27 == 7.17605e-42f);
      if (temp_v27 == 7.17605e-42f) {
        temp_v15 = 1.4013e-45f;
      }
      else if (temp_v27 == 7.17745e-42f) {
        temp_v15 = 2.8026e-45f;
        temp_v10 = temp_v15;
      }
      else if (temp_v27 == 7.18306e-42f) {
        temp_v10 = 4.2039e-45f;
        temp_v15 = 5.60519e-45f;
      }
    }
    temp_v8 = (unsigned int)temp_v10 | (unaff_r5[temp_v1 * 6 + 0x117] * 4 - 4);
    if ((int)temp_v14 < 8) {
      temp_v8 = *(unsigned int *)(unaff_r4 + 0x944) | (temp_v8 << ((temp_v14 * 4) & 0xff));
      puVar4 = *(unsigned int **)((int)((unsigned int)__current_sp()) + 0x110);
    }
    else {
      temp_v8 = *(unsigned int *)(unaff_r4 + 0x948) | (temp_v8 << ((temp_v14 * 4 - 0x20) & 0xff));
      puVar4 = *(unsigned int **)((int)((unsigned int)__current_sp()) + 0x10c);
    }
    *puVar4 = temp_v8;
    if (unaff_r5[temp_v1 * 6 + 0x119] == 0) {
      temp_v7 = unaff_r5[temp_v1 * 6 + 0x117];
      *param_2 = *(float *)((int)((unsigned int)__current_sp()) + 0x24);
      param_2[1] = (float)((unsigned int)param_2[1] | temp_v14);
      param_2[2] = (float)((temp_v7 * (int)temp_v15 * 0x10000) | 0x10000000 | (unsigned int)param_2[2]);
      param_2 = param_2 + 3;
      **(int **)((int)((unsigned int)__current_sp()) + 0x100) = *(int *)(unaff_r4 + 0x93c) + 1;
      temp_v7 = temp_v14;
      goto LAB_00134780;
    }
    temp_v10 = *(float *)((int)((unsigned int)__current_sp()) + 0x1c);
    temp_v8 = unaff_r5[temp_v1 * 6 + 0x117];
    if ((unsigned int)temp_v15 <= (unsigned int)temp_v10) {
      temp_v27 = temp_v10;
    }
    if ((unsigned int)temp_v10 < (unsigned int)temp_v15) {
      temp_v27 = temp_v15;
    }
    *(unsigned int *)((int)((unsigned int)__current_sp()) + 0x10) =
         ((((int)*(float *)((int)((unsigned int)__current_sp()) + 0x10) + (int)temp_v15) - 1U) &
         ~((int)temp_v15 - 1U)) + temp_v8 * (int)temp_v15;
    *(float *)((int)((unsigned int)__current_sp()) + 0x1c) = temp_v27;
    if (piVar9 == (int *)0x0) {
      *param_2 = *(float *)((int)((unsigned int)__current_sp()) + 0x24);
      temp_v6 = *piVar1;
      temp_v10 = (float)unaff_r5[temp_v1 * 6 + 0x119];
      *(float *)((int)((unsigned int)__current_sp()) + 0xf0) = temp_v10;
      *(int *)((int)((unsigned int)__current_sp()) + 0xfc) =
           (int)temp_v10 + *(int *)((int)*(float *)((int)((unsigned int)__current_sp()) + 0xac) + temp_v6 * 4 + 4);
    }
    if (piVar9 < (int *)0x8) {
      param_2[1] = (float)((unsigned int)param_2[1] | (temp_v14 << (((unsigned int)piVar9 & 0x3f) << 2)));
    }
    else {
      param_2[2] = (float)((unsigned int)param_2[2] | (temp_v14 << (((int)piVar9 * 4 - 0x20U) & 0xff)));
    }
    param_3 = (int *)((int)piVar9 + 1);
    if ((float)(temp_v7 + 2) != unaff_r6) {
      temp_v6 = *(int *)((int)*(float *)((int)((unsigned int)__current_sp()) + 0xac) +
                        **(int **)((int)((unsigned int)__current_sp()) + 0x108) * 4 + 4);
      temp_v10 = (float)(temp_v6 - *(int *)((int)*(float *)((int)((unsigned int)__current_sp()) + 0xac) + 0x44));
      if (((((unsigned int)temp_v10 > (unsigned int)*(float *)((int)((unsigned int)__current_sp()) + 0x24)) &&
           (unaff_r5[temp_v1 * 6 + 0x119] ==
            *(unsigned int *)((int)*(float *)((int)((unsigned int)__current_sp()) + 0x104) +
                      **(int **)((int)((unsigned int)__current_sp()) + 0x108) * 0x18 + 0xc))) &&
          ((int)*(float *)((int)((unsigned int)__current_sp()) + 0xfc) > temp_v6)) && (param_3 != (int *)0xc)) {
        *(float *)((int)((unsigned int)__current_sp()) + 0xf8) = 0.0f;
      }
      else {
        *(float *)((int)((unsigned int)__current_sp()) + 0xf8) = 1.4013e-45f;
        temp_v10 = (float)((int)*param_2 + (int)*(float *)((int)((unsigned int)__current_sp()) + 0xf0));
      }
    }
    else {
      *(float *)((int)((unsigned int)__current_sp()) + 0xf8) = 1.4013e-45f;
      temp_v10 = (float)((int)*param_2 + (int)*(float *)((int)((unsigned int)__current_sp()) + 0xf0));
    }
    temp_v8 = ((int)temp_v10 - (int)*(float *)((int)((unsigned int)__current_sp()) + 0x24)) - temp_v8 * (int)temp_v15;
    temp_v7 = temp_v8 >> 2;
    if ((unsigned int)((temp_v7 & 3) != 0) + (temp_v8 >> 4) > 0xcU - (int)param_3) break;
    if (temp_v7 != 0) {
      *(unsigned int *)((int)((unsigned int)__current_sp()) + 0x10) =
           (((int)*(float *)((int)((unsigned int)__current_sp()) + 0x10) + 3U) & 0xfffffffc) + temp_v7 * 4;
      if ((temp_v7 & 3) != 0) {
        if (param_3 < (int *)0x8) {
          param_2[1] = (float)((unsigned int)param_2[1] |
                              (((temp_v7 & 3) + 0xb) << (((int)param_3 * 4) & 0xffU)));
        }
        else {
          param_2[2] = (float)((unsigned int)param_2[2] |
                              (((temp_v7 & 3) + 0xb) << (((int)param_3 * 4 - 0x20U) & 0xff)));
        }
        param_3 = (int *)((int)piVar9 + 2);
        temp_v7 = temp_v7 & 0xfffffffc;
      }
      if (temp_v7 >= 0x80000000) {
        do {
          if (param_3 < (int *)0x8) {
            param_2[1] = (float)((unsigned int)param_2[1] | (0xf << (((unsigned int)param_3 & 0x3f) << 2)));
          }
          else {
            param_2[2] = (float)((unsigned int)param_2[2] | (0xf << (((int)param_3 * 4 - 0x20U) & 0xff)));
          }
          temp_v7 = temp_v7 - 4;
          param_3 = (int *)((int)param_3 + 1);
        } while (temp_v7 != 0);
      }
      else {
        temp_v15 = param_2[1];
        temp_v1 = (int)((-3 - temp_v7) + ((unsigned int)((int)(-3 - temp_v7) >> 0x1f) >> 0x1e)) >> 2;
        temp_v6 = -temp_v1;
        if (temp_v1 != 0 && -1 < temp_v6) {
          temp_v10 = param_2[2];
          temp_v13 = 0;
          do {
            temp_v8 = (int)param_3 + temp_v13;
            temp_v7 = temp_v8 * 4;
            if (temp_v8 >= 8) {
              temp_v7 = temp_v7 - 0x20;
            }
            temp_v13 = temp_v13 + 1;
            temp_v7 = 0xf << (temp_v7 & 0xff);
            if (7 >= temp_v8) {
              temp_v15 = (float)((unsigned int)temp_v15 | temp_v7);
            }
            else {
              temp_v10 = (float)((unsigned int)temp_v10 | temp_v7);
            }
            temp_v6 = temp_v6 - 1;
          } while (temp_v6 != 0);
          param_3 = (int *)((int)param_3 - temp_v1);
          param_2[1] = temp_v15;
          param_2[2] = temp_v10;
        }
      }
    }
    piVar9 = param_3;
    temp_v7 = temp_v14;
    if (*(float *)((int)((unsigned int)__current_sp()) + 0xf8) == 0.0f) goto LAB_00134780;
  }
  *(unsigned char *)(unaff_r5 + 0x207) = 0;
LAB_00134804:
  unaff_r5[0x208] = (unsigned int)unaff_r6;
  unaff_r5[0x209] = (int)unaff_r6 + (int)unaff_r7;
  puVar4 = *(unsigned int **)(unaff_r4 + 0x870);
  puVar10 = (unsigned int *)(unaff_r4 + 0x9e0);
  *(unsigned int *)(unaff_r4 + 0x9dc) = 0;
  *puVar10 = 0;
  *(unsigned int *)(unaff_r4 + 0x9e4) = 0x76543210;
  *(unsigned int *)(unaff_r4 + 0x9e8) = 0xfedcba98;
  temp_v14 = 0;
  if (0 < (int)unaff_r6) {
    do {
      *(unsigned int *)(unaff_r4 + 0x9dc) =
           *(unsigned int *)(unaff_r4 + 0x9dc) |
           ((*(unsigned int *)(unaff_r4 + *puVar4 * 0xc + 0x358) & 0xf) << ((temp_v14 & 0x3f) << 2));
      temp_v7 = temp_v14;
      while( 1 ) {
        temp_v14 = temp_v7 + 1;
        unaff_r5[temp_v7 + 0x20a] = *puVar4;
        puVar4 = (unsigned int *)puVar4[1];
        if ((int)unaff_r6 <= (int)temp_v14) goto LAB_001348b8;
        if ((int)temp_v14 < 8) break;
        *puVar10 = *(unsigned int *)(unaff_r4 + 0x9e0) |
                   ((*(unsigned int *)(unaff_r4 + *puVar4 * 0xc + 0x358) & 0xf) <<
                   ((temp_v14 * 4 - 0x20) & 0xff));
        temp_v7 = temp_v14;
      }
    } while( 1 );
  }
LAB_001348b8:
  temp_v1 = 0;
  if (0 < (int)unaff_r7) {
    do {
      if ((int)temp_v14 < 8) {
        *(unsigned int *)(unaff_r4 + 0x9dc) =
             *(unsigned int *)(unaff_r4 + 0x9dc) |
             ((*(unsigned int *)(unaff_r4 +
                         (int)*(float *)((int)((unsigned int)__current_sp()) + (temp_v1 + 0x2c) * 4) * 0xc + 0x358
                        ) & 0xf) << ((temp_v14 & 0x3f) << 2));
      }
      else {
        *puVar10 = *(unsigned int *)(unaff_r4 + 0x9e0) |
                   ((*(unsigned int *)(unaff_r4 +
                               (int)*(float *)((int)((unsigned int)__current_sp()) + (temp_v1 + 0x2c) * 4) * 0xc +
                              0x358) & 0xf) << ((temp_v14 * 4 - 0x20) & 0xff));
      }
      temp_v6 = temp_v1 + 0x2c;
      temp_v1 = temp_v1 + 1;
      unaff_r5[temp_v14 + 0x20a] = (unsigned int)*(float *)((int)((unsigned int)__current_sp()) + temp_v6 * 4);
      temp_v14 = temp_v14 + 1;
    } while (temp_v1 < (int)unaff_r7);
  }
  FUN_002aa6ac(0x200,0x27,unaff_r4 + 0x940);
  pfVar3 = (float *)&g_commandBufferEnd;
  if (g_commandBufferCursor < g_commandBufferEnd) {
    temp_v15 = *(float *)(unaff_r4 + 0x9dc);
    g_commandBufferCursor[1] = 1.378512e-39f;
    *g_commandBufferCursor = temp_v15;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if (g_commandBufferCursor < g_commandBufferEnd) {
    *g_commandBufferCursor = *(float *)(unaff_r4 + 0x9e0);
    g_commandBufferCursor[1] = 1.378513e-39f;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if (*(char *)(unaff_r4 + 0x424) != '\0') {
    if (g_commandBufferCursor < g_commandBufferEnd) {
      *g_commandBufferCursor = *(float *)(unaff_r4 + 0x9e4);
      g_commandBufferCursor[1] = 1.378445e-39f;
      g_commandBufferCursor = g_commandBufferCursor + 2;
    }
    pfVar3 = g_commandBufferEnd;
    if (g_commandBufferCursor < g_commandBufferEnd) {
      temp_v15 = *(float *)(unaff_r4 + 0x9e8);
      g_commandBufferCursor[1] = 1.378446e-39f;
      *g_commandBufferCursor = temp_v15;
      g_commandBufferCursor = g_commandBufferCursor + 2;
    }
  }
  if ((((char)unaff_r5[0x207] != '\0') &&
      (pfVar3 = (float *)0x80c2, (**(unsigned int **)((int)((unsigned int)__current_sp()) + 0x854) & 0x80c2) != 0)) &&
     (temp_v15 = (float)unaff_r5[0x208], (unsigned int)temp_v15 < unaff_r5[0x209])) {
    pfVar3 = (float *)&g_commandBufferEnd;
    do {
      temp_v14 = unaff_r5[(int)temp_v15 + 0x20a];
      if (g_commandBufferCursor < g_commandBufferEnd) {
        *g_commandBufferCursor = temp_v15;
        g_commandBufferCursor[1] = 1.37832e-39f;
        g_commandBufferCursor = g_commandBufferCursor + 2;
      }
      if (g_commandBufferCursor < g_commandBufferEnd) {
        temp_v10 = (float)unaff_r5[temp_v14 * 3 + 0xe6];
        g_commandBufferCursor[1] = 1.378321e-39f;
        *g_commandBufferCursor = temp_v10;
        g_commandBufferCursor = g_commandBufferCursor + 2;
      }
      if (g_commandBufferCursor < g_commandBufferEnd) {
        *g_commandBufferCursor = (float)unaff_r5[temp_v14 * 3 + 0xe7];
        g_commandBufferCursor[1] = 1.378323e-39f;
        g_commandBufferCursor = g_commandBufferCursor + 2;
      }
      if (g_commandBufferCursor < g_commandBufferEnd) {
        *g_commandBufferCursor = (float)unaff_r5[temp_v14 * 3 + 0xe8];
        g_commandBufferCursor[1] = 1.378324e-39f;
        g_commandBufferCursor = g_commandBufferCursor + 2;
      }
      temp_v15 = (float)((int)temp_v15 + 1);
    } while ((unsigned int)temp_v15 < unaff_r5[0x209]);
  }
  if (unaff_r5[1] != 0) {
    if ((unaff_r5[1] & (unsigned int)*(float *)((int)((unsigned int)__current_sp()) + 0x858) & 0x10) != 0) {
      *(unsigned int *)(unaff_r4 + 0x1bc) = 0xffffffff;
      *(unsigned int *)(unaff_r4 + 0x1b8) = 0xffffffff;
      *(unsigned int *)(unaff_r4 + 0x1b4) = 0xffffffff;
      temp_v15 = DAT_004652b4;
      temp_v1 = 0;
      if (DAT_0046531c != 0xbd) {
        do {
          temp_v6 = (&DAT_0046531c)[temp_v1];
          if (*(char *)(temp_v6 + unaff_r4 + 0x426) != '\0') {
            *(unsigned int *)((int)temp_v15 + temp_v6 * 4 + 0x100c) = ~*(unsigned int *)(unaff_r4 + temp_v6 * 4 + 0x4e4)
            ;
            temp_v6 = unaff_r4 + ((&DAT_0046531c)[temp_v1] >> 5) * 4;
            *(unsigned int *)(temp_v6 + 0x7d8) =
                 *(unsigned int *)(temp_v6 + 0x7d8) | (1 << ((&DAT_0046531c)[temp_v1] & 0x1fU));
          }
          temp_v1 = temp_v1 + 1;
        } while ((&DAT_0046531c)[temp_v1] != 0xbd);
      }
      if (*(char *)(unaff_r4 + 0x424) != '\0') {
        *(unsigned int *)(unaff_r4 + 0x350) = 0xffffffff;
        *(unsigned int *)(unaff_r4 + 0x34c) = 0xffffffff;
        *(unsigned int *)(unaff_r4 + 0x348) = 0xffffffff;
        temp_v15 = DAT_004652b4;
        temp_v1 = 0;
        if (DAT_00465334 != 0xbd) {
          do {
            temp_v6 = (&DAT_00465334)[temp_v1];
            if (*(char *)(temp_v6 + unaff_r4 + 0x426) != '\0') {
              *(unsigned int *)((int)temp_v15 + temp_v6 * 4 + 0x100c) =
                   ~*(unsigned int *)(unaff_r4 + temp_v6 * 4 + 0x4e4);
              temp_v6 = unaff_r4 + ((&DAT_00465334)[temp_v1] >> 5) * 4;
              *(unsigned int *)(temp_v6 + 0x7d8) =
                   *(unsigned int *)(temp_v6 + 0x7d8) | (1 << ((&DAT_00465334)[temp_v1] & 0x1fU));
            }
            temp_v1 = temp_v1 + 1;
          } while ((&DAT_00465334)[temp_v1] != 0xbd);
        }
      }
    }
    temp_v15 = DAT_004652b4;
    if ((((unsigned int)*(float *)((int)((unsigned int)__current_sp()) + 0x858) & 0x20 & unaff_r5[1]) != 0) &&
       (temp_v1 = 0, DAT_0046534c != 0xbd)) {
      do {
        temp_v6 = (&DAT_0046534c)[temp_v1];
        if (*(char *)(temp_v6 + unaff_r4 + 0x426) != '\0') {
          *(unsigned int *)((int)temp_v15 + temp_v6 * 4 + 0x100c) = ~*(unsigned int *)(unaff_r4 + temp_v6 * 4 + 0x4e4);
          temp_v6 = unaff_r4 + ((&DAT_0046534c)[temp_v1] >> 5) * 4;
          *(unsigned int *)(temp_v6 + 0x7d8) =
               *(unsigned int *)(temp_v6 + 0x7d8) | (1 << ((&DAT_0046534c)[temp_v1] & 0x1fU));
        }
        temp_v1 = temp_v1 + 1;
      } while ((&DAT_0046534c)[temp_v1] != 0xbd);
    }
    temp_v15 = DAT_004652b4;
    pfVar3 = (float *)unaff_r5[1];
    if (((unsigned int)*(float *)((int)((unsigned int)__current_sp()) + 0x858) & 2 & (unsigned int)pfVar3) != 0) {
      pfVar3 = (float *)&DAT_004652bc;
      temp_v1 = 0;
      if (DAT_004652bc != 0xbd) {
        do {
          temp_v6 = (&DAT_004652bc)[temp_v1];
          if (*(char *)(temp_v6 + unaff_r4 + 0x426) != '\0') {
            *(unsigned int *)((int)temp_v15 + temp_v6 * 4 + 0x100c) = ~*(unsigned int *)(unaff_r4 + temp_v6 * 4 + 0x4e4)
            ;
            temp_v6 = unaff_r4 + ((&DAT_004652bc)[temp_v1] >> 5) * 4;
            *(unsigned int *)(temp_v6 + 0x7d8) =
                 *(unsigned int *)(temp_v6 + 0x7d8) | (1 << ((&DAT_004652bc)[temp_v1] & 0x1fU));
          }
          temp_v1 = temp_v1 + 1;
        } while ((&DAT_004652bc)[temp_v1] != 0xbd);
      }
    }
  }
  if (((unsigned int)*(float *)((int)((unsigned int)__current_sp()) + 0x858) & 0x10) != 0) {
    temp_v1 = *(int *)(unaff_r4 + 0x1b4);
    temp_v19 = temp_v1 == 0;
    if (temp_v19) {
      temp_v1 = *(int *)(unaff_r4 + 0x1b8);
    }
    if (temp_v19 && temp_v1 == 0) {
      temp_v1 = *(int *)(unaff_r4 + 0x1bc);
      temp_v19 = temp_v1 == 0;
      if (temp_v19) {
        temp_v1 = *(int *)(unaff_r4 + 0x348);
      }
      if (temp_v19 && temp_v1 == 0) {
        temp_v1 = *(int *)(unaff_r4 + 0x34c);
        temp_v19 = temp_v1 == 0;
        if (temp_v19) {
          temp_v1 = *(int *)(unaff_r4 + 0x350);
        }
        if (temp_v19 && temp_v1 == 0) goto LAB_001350ac;
      }
    }
    temp_v1 = *(int *)(unaff_r4 + 0x1c0);
    if (temp_v1 != 0) {
      temp_v19 = *(unsigned int *)(unaff_r4 + 0x348) == 0;
      if (temp_v19) {
        pfVar3 = *(float **)(unaff_r4 + 0x34c);
      }
      temp_v20 = temp_v19 && pfVar3 == (float *)0x0;
      if (temp_v19 && pfVar3 == (float *)0x0) {
        pfVar3 = *(float **)(unaff_r4 + 0x350);
        temp_v20 = pfVar3 == (float *)0x0;
      }
      if (!temp_v20) {
        temp_v6 = 0;
        temp_v13 = 0;
        temp_v7 = 0;
        temp_v14 = *(unsigned int *)(unaff_r4 + 0x348) & 1;
        while (temp_v14 == 0) {
          if (*(unsigned int *)(unaff_r4 + (temp_v7 >> 5) * 4 + 0x348) >> (temp_v7 & 0x1f) == 0) {
            temp_v7 = (temp_v7 & 0xffffffe0) + 0x20;
          }
          else {
            temp_v7 = temp_v7 + 1;
          }
          pfVar3 = *(float **)(unaff_r4 + (temp_v7 >> 5) * 4 + 0x348);
          temp_v14 = (unsigned int)pfVar3 & (1 << (temp_v7 & 0x1f));
        }
        temp_v14 = 0;
        if (temp_v7 < *(unsigned int *)(unaff_r4 + 0x344)) {
          do {
            temp_v8 = *(unsigned int *)(unaff_r4 + temp_v7 * 4 + 0x1c4);
            if (temp_v6 != 0) {
              if (temp_v8 - temp_v14 == temp_v13) {
                temp_v13 = temp_v13 + 1;
                temp_v8 = temp_v14;
              }
              else {
                if (g_commandBufferCursor < g_commandBufferEnd) {
                  g_commandBufferCursor[1] = 1.378452e-39f;
                  *g_commandBufferCursor = (float)(temp_v14 | 0x80000000);
                  g_commandBufferCursor = g_commandBufferCursor + 2;
                }
                FUN_002aa790(0x291,temp_v13 << 2);
                temp_v13 = 1;
                temp_v6 = temp_v1 + temp_v7 * 0x10;
              }
            }
            else {
              temp_v13 = 1;
              temp_v6 = temp_v1 + temp_v7 * 0x10;
            }
            temp_v7 = temp_v7 + 1;
            while( 1 ) {
              pfVar3 = *(float **)(unaff_r4 + (temp_v7 >> 5) * 4 + 0x348);
              if ((((unsigned int)pfVar3 & (1 << (temp_v7 & 0x1f))) != 0) ||
                 (*(unsigned int *)(unaff_r4 + 0x344) <= temp_v7)) break;
              if ((unsigned int)pfVar3 >> (temp_v7 & 0x1f) == 0) {
                temp_v7 = (temp_v7 & 0xffffffe0) + 0x20;
              }
              else {
                temp_v7 = temp_v7 + 1;
              }
            }
            temp_v14 = temp_v8;
          } while (temp_v7 < *(unsigned int *)(unaff_r4 + 0x344));
          if (temp_v6 != 0) {
            if (g_commandBufferCursor < g_commandBufferEnd) {
              g_commandBufferCursor[1] = 1.378452e-39f;
              *g_commandBufferCursor = (float)(temp_v8 | 0x80000000);
              g_commandBufferCursor = g_commandBufferCursor + 2;
            }
            FUN_002aa790(0x291,temp_v13 << 2);
            pfVar3 = temp_v2;
          }
        }
      }
    }
    temp_v1 = *(int *)(unaff_r4 + 0x2c);
    if (temp_v1 != 0) {
      temp_v19 = *(unsigned int *)(unaff_r4 + 0x1b4) == 0;
      if (temp_v19) {
        pfVar3 = *(float **)(unaff_r4 + 0x1b8);
      }
      temp_v20 = temp_v19 && pfVar3 == (float *)0x0;
      if (temp_v19 && pfVar3 == (float *)0x0) {
        temp_v20 = *(int *)(unaff_r4 + 0x1bc) == 0;
      }
      if (!temp_v20) {
        temp_v6 = 0;
        temp_v13 = 0;
        temp_v7 = 0;
        temp_v14 = *(unsigned int *)(unaff_r4 + 0x1b4) & 1;
        while (temp_v14 == 0) {
          if (*(unsigned int *)(unaff_r4 + (temp_v7 >> 5) * 4 + 0x1b4) >> (temp_v7 & 0x1f) == 0) {
            temp_v7 = (temp_v7 & 0xffffffe0) + 0x20;
          }
          else {
            temp_v7 = temp_v7 + 1;
          }
          temp_v14 = *(unsigned int *)(unaff_r4 + (temp_v7 >> 5) * 4 + 0x1b4) & (1 << (temp_v7 & 0x1f));
        }
        temp_v14 = 0;
        if (temp_v7 < *(unsigned int *)(unaff_r4 + 0x1b0)) {
          do {
            temp_v8 = *(unsigned int *)(unaff_r4 + temp_v7 * 4 + 0x30);
            if (temp_v6 != 0) {
              if (temp_v8 - temp_v14 == temp_v13) {
                temp_v13 = temp_v13 + 1;
                temp_v8 = temp_v14;
              }
              else {
                if (g_commandBufferCursor < g_commandBufferEnd) {
                  g_commandBufferCursor[1] = 1.378519e-39f;
                  *g_commandBufferCursor = (float)(temp_v14 | 0x80000000);
                  g_commandBufferCursor = g_commandBufferCursor + 2;
                }
                FUN_002aa790(0x2c1,temp_v13 << 2);
                temp_v13 = 1;
                temp_v6 = temp_v1 + temp_v7 * 0x10;
              }
            }
            else {
              temp_v13 = 1;
              temp_v6 = temp_v1 + temp_v7 * 0x10;
            }
            temp_v7 = temp_v7 + 1;
            while( 1 ) {
              temp_v14 = *(unsigned int *)(unaff_r4 + (temp_v7 >> 5) * 4 + 0x1b4);
              if (((temp_v14 & (1 << (temp_v7 & 0x1f))) != 0) ||
                 (*(unsigned int *)(unaff_r4 + 0x1b0) <= temp_v7)) break;
              if (temp_v14 >> (temp_v7 & 0x1f) == 0) {
                temp_v7 = (temp_v7 & 0xffffffe0) + 0x20;
              }
              else {
                temp_v7 = temp_v7 + 1;
              }
            }
            temp_v14 = temp_v8;
          } while (temp_v7 < *(unsigned int *)(unaff_r4 + 0x1b0));
          if (temp_v6 != 0) {
            if (g_commandBufferCursor < g_commandBufferEnd) {
              g_commandBufferCursor[1] = 1.378519e-39f;
              *g_commandBufferCursor = (float)(temp_v8 | 0x80000000);
              g_commandBufferCursor = g_commandBufferCursor + 2;
            }
            FUN_002aa790(0x2c1,temp_v13 << 2);
          }
        }
      }
    }
    *(unsigned int *)(unaff_r4 + 0x1b4) = 0;
    *(unsigned int *)(unaff_r4 + 0x1b8) = 0;
    *(unsigned int *)(unaff_r4 + 0x1bc) = 0;
    *(unsigned int *)(unaff_r4 + 0x348) = 0;
    *(unsigned int *)(unaff_r4 + 0x34c) = 0;
    *(unsigned int *)(unaff_r4 + 0x350) = 0;
  }
LAB_001350ac:
  temp_v15 = 0.0f;
  temp_v42 = 0;
  if ((((unsigned int)*(float *)((int)((unsigned int)__current_sp()) + 0x858) & 0x400) != 0) &&
     ((**(unsigned int **)((int)((unsigned int)__current_sp()) + 0x854) & 4) != 0)) {
    temp_v10 = *(float *)(unaff_r4 + 0xe4c);
    temp_v19 = temp_v10 == 0.0f;
    if (temp_v19) {
      in_s0 = (float)unaff_r5[0x13];
      temp_v10 = (float)unaff_r5[0x14];
    }
    if (temp_v19) {
      temp_v10 = in_s0 - temp_v10;
      temp_v15 = in_s0;
    }
    else {
      temp_v10 = -temp_v10;
    }
    temp_v19 = (char)unaff_r5[0x15] == '\0';
    if (!temp_v19) {
      in_s2 = (float)unaff_r5[0x11];
      temp_v19 = in_s2 == 0.0f;
    }
    if (!temp_v19) {
      if (unaff_r5[0x1a3] == 0) {
        temp_v27 = 1.5259022e-05f;
      }
      else {
        temp_v27 = 5.960465e-08f;
      }
      temp_v15 = temp_v15 + in_s2 * temp_v27;
    }
    temp_v1 = 0;
    if (romwright_fabs_4(temp_v10) != 0.0f) {
      temp_v1 = ((unsigned int)romwright_fabs_4(temp_v10) >> 0x17) - 0x40;
    }
    if (temp_v1 >= 0) {
      temp_v14 = (((unsigned int)temp_v10 & 0x7fffff) >> 7) | (temp_v1 << 0x10) | (((unsigned int)temp_v10 >> 0x1f) << 0x17)
      ;
    }
    else {
      temp_v14 = ((unsigned int)temp_v10 >> 0x1f) << 0x17;
    }
    if (temp_v15 == 0.0f) {
      temp_v7 = 0;
    }
    else {
      temp_v1 = 0;
      if (romwright_fabs_4(temp_v15) != 0.0f) {
        temp_v1 = ((unsigned int)romwright_fabs_4(temp_v15) >> 0x17) - 0x40;
      }
      if (temp_v1 >= 0) {
        temp_v7 = (((unsigned int)temp_v15 & 0x7fffff) >> 7) | (temp_v1 << 0x10) |
                 (((unsigned int)temp_v15 >> 0x1f) << 0x17);
      }
      else {
        temp_v7 = ((unsigned int)temp_v15 >> 0x1f) << 0x17;
      }
    }
    *(unsigned char *)(unaff_r4 + 0x43d) = *(unsigned char *)(unaff_r4 + 0x43d) | 0xf;
    if ((char)unaff_r5[3] != '\0') {
      *(unsigned int *)(unaff_r4 + 0x540) = temp_v14;
      *(unsigned int *)(unaff_r4 + 0x7d8) = *(unsigned int *)(unaff_r4 + 0x7d8) | 0x800000;
      *unaff_r5 = *unaff_r5 | 0x80000;
      *(unsigned int *)((int)DAT_004652b4 + 0x1068) = ~*(unsigned int *)(unaff_r4 + 0x540);
    }
    else if (*(unsigned int *)(unaff_r4 + 0x540) != temp_v14) {
      *(unsigned int *)(unaff_r4 + 0x540) = temp_v14;
      *(unsigned int *)(unaff_r4 + 0x7d8) = *(unsigned int *)(unaff_r4 + 0x7d8) | 0x800000;
      *unaff_r5 = *unaff_r5 | 0x80000;
    }
    *(unsigned char *)(unaff_r4 + 0x43e) = *(unsigned char *)(unaff_r4 + 0x43e) | 0xf;
    if ((char)unaff_r5[3] != '\0') {
      *(unsigned int *)(unaff_r4 + 0x544) = temp_v7;
      *(unsigned int *)(unaff_r4 + 0x7d8) = *(unsigned int *)(unaff_r4 + 0x7d8) | 0x1000000;
      *unaff_r5 = *unaff_r5 | 0x80000;
      *(unsigned int *)((int)DAT_004652b4 + 0x106c) = ~*(unsigned int *)(unaff_r4 + 0x544);
    }
    else if (*(unsigned int *)(unaff_r4 + 0x544) != temp_v7) {
      *(unsigned int *)(unaff_r4 + 0x544) = temp_v7;
      *(unsigned int *)(unaff_r4 + 0x7d8) = *(unsigned int *)(unaff_r4 + 0x7d8) | 0x1000000;
      *unaff_r5 = *unaff_r5 | 0x80000;
    }
  }
  if (((unsigned int)*(float *)((int)((unsigned int)__current_sp()) + 0x858) & 0x20) != 0) {
    if ((~*(unsigned int *)(unaff_r4 + 0x624) & 7) == 0) {
      if (*(char *)(unaff_r4 + 0xe74) != '\0') {
        *(unsigned int *)((int)DAT_004652b4 + 0x1158) = *(unsigned int *)(unaff_r4 + 0x630);
        temp_v14 = *(unsigned int *)(unaff_r4 + 0x7e0) & 0xfff7ffff;
      }
      else {
        *(unsigned int *)((int)DAT_004652b4 + 0x1158) = ~*(unsigned int *)(unaff_r4 + 0x630);
        temp_v14 = *(unsigned int *)(unaff_r4 + 0x7e0) | 0x80000;
      }
      *(unsigned int *)(unaff_r4 + 0x7e0) = temp_v14;
    }
    if ((*(unsigned int *)(unaff_r4 + 0x590) & 1) != 0) {
      temp_v1 = 0;
      do {
        if (*(char *)(unaff_r4 + temp_v1 * 0x70 + 0xa20) != '\0') break;
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 8);
    }
  }
  if (((unsigned int)*(float *)((int)((unsigned int)__current_sp()) + 0x858) & 0x10) != 0) {
    temp_v1 = 0;
    if (DAT_00465334 != 0xbd) {
      *(float *)((int)((unsigned int)__current_sp()) + 0xc) = DAT_004652b4;
      do {
        temp_v14 = (&DAT_00465334)[temp_v1];
        if ((*(unsigned int *)(unaff_r4 + ((int)temp_v14 >> 5) * 4 + 0x7d8) & (1 << (temp_v14 & 0x1f))) != 0) {
          temp_v7 = (unsigned int)*(unsigned char *)(temp_v14 + unaff_r4 + 0x426);
          pfVar3 = (float *)(unaff_r4 + temp_v14 * 4 + 0x4e4);
          pfVar15 = (float *)((int)*(float *)((int)((unsigned int)__current_sp()) + 0xc) + temp_v14 * 4 + 0x100c);
          if ((temp_v7 != 0) && (temp_v15 = *pfVar3, temp_v15 != *pfVar15)) {
            if (g_commandBufferCursor < g_commandBufferEnd) {
              pfVar12 = g_commandBufferCursor + 1;
              *g_commandBufferCursor = temp_v15;
              g_commandBufferCursor = g_commandBufferCursor + 2;
              *pfVar12 = (float)(*(unsigned int *)((&DAT_00465334)[temp_v1] * 4 + 0x4e4f54) | (temp_v7 << 0x10)
                                );
            }
            *pfVar15 = *pfVar3;
          }
          temp_v6 = unaff_r4 + ((&DAT_00465334)[temp_v1] >> 5) * 4;
          *(unsigned int *)(temp_v6 + 0x7d8) =
               *(unsigned int *)(temp_v6 + 0x7d8) & ~(1 << ((&DAT_00465334)[temp_v1] & 0x1fU));
        }
        temp_v1 = temp_v1 + 1;
      } while ((&DAT_00465334)[temp_v1] != 0xbd);
    }
    temp_v1 = 0;
    if (DAT_0046531c != 0xbd) {
      *(float *)((int)((unsigned int)__current_sp()) + 0xc) = DAT_004652b4;
      do {
        temp_v14 = (&DAT_0046531c)[temp_v1];
        if ((*(unsigned int *)(unaff_r4 + ((int)temp_v14 >> 5) * 4 + 0x7d8) & (1 << (temp_v14 & 0x1f))) != 0) {
          temp_v7 = (unsigned int)*(unsigned char *)(temp_v14 + unaff_r4 + 0x426);
          pfVar3 = (float *)(unaff_r4 + temp_v14 * 4 + 0x4e4);
          pfVar15 = (float *)((int)*(float *)((int)((unsigned int)__current_sp()) + 0xc) + temp_v14 * 4 + 0x100c);
          if ((temp_v7 != 0) && (temp_v15 = *pfVar3, temp_v15 != *pfVar15)) {
            if (g_commandBufferCursor < g_commandBufferEnd) {
              pfVar12 = g_commandBufferCursor + 1;
              *g_commandBufferCursor = temp_v15;
              g_commandBufferCursor = g_commandBufferCursor + 2;
              *pfVar12 = (float)(*(unsigned int *)((&DAT_0046531c)[temp_v1] * 4 + 0x4e4f54) | (temp_v7 << 0x10)
                                );
            }
            *pfVar15 = *pfVar3;
          }
          temp_v6 = unaff_r4 + ((&DAT_0046531c)[temp_v1] >> 5) * 4;
          *(unsigned int *)(temp_v6 + 0x7d8) =
               *(unsigned int *)(temp_v6 + 0x7d8) & ~(1 << ((&DAT_0046531c)[temp_v1] & 0x1fU));
        }
        temp_v1 = temp_v1 + 1;
      } while ((&DAT_0046531c)[temp_v1] != 0xbd);
    }
  }
  if ((((unsigned int)*(float *)((int)((unsigned int)__current_sp()) + 0x858) & 2) != 0) &&
     (temp_v1 = 0, DAT_004652bc != 0xbd)) {
    *(float *)((int)((unsigned int)__current_sp()) + 0xc) = DAT_004652b4;
    do {
      temp_v14 = (&DAT_004652bc)[temp_v1];
      if ((*(unsigned int *)(unaff_r4 + ((int)temp_v14 >> 5) * 4 + 0x7d8) & (1 << (temp_v14 & 0x1f))) != 0) {
        temp_v7 = (unsigned int)*(unsigned char *)(temp_v14 + unaff_r4 + 0x426);
        pfVar3 = (float *)(unaff_r4 + temp_v14 * 4 + 0x4e4);
        pfVar15 = (float *)((int)*(float *)((int)((unsigned int)__current_sp()) + 0xc) + temp_v14 * 4 + 0x100c);
        if ((temp_v7 != 0) && (temp_v15 = *pfVar3, temp_v15 != *pfVar15)) {
          if (g_commandBufferCursor < g_commandBufferEnd) {
            pfVar12 = g_commandBufferCursor + 1;
            *g_commandBufferCursor = temp_v15;
            g_commandBufferCursor = g_commandBufferCursor + 2;
            *pfVar12 = (float)(*(unsigned int *)((&DAT_004652bc)[temp_v1] * 4 + 0x4e4f54) | (temp_v7 << 0x10));
          }
          *pfVar15 = *pfVar3;
        }
        temp_v6 = unaff_r4 + ((&DAT_004652bc)[temp_v1] >> 5) * 4;
        *(unsigned int *)(temp_v6 + 0x7d8) =
             *(unsigned int *)(temp_v6 + 0x7d8) & ~(1 << ((&DAT_004652bc)[temp_v1] & 0x1fU));
      }
      temp_v1 = temp_v1 + 1;
    } while ((&DAT_004652bc)[temp_v1] != 0xbd);
  }
  if ((((unsigned int)*(float *)((int)((unsigned int)__current_sp()) + 0x858) & 0x20) != 0) &&
     (temp_v1 = 0, DAT_0046534c != 0xbd)) {
    *(float *)((int)((unsigned int)__current_sp()) + 0xc) = DAT_004652b4;
    do {
      temp_v14 = (&DAT_0046534c)[temp_v1];
      if ((*(unsigned int *)(unaff_r4 + ((int)temp_v14 >> 5) * 4 + 0x7d8) & (1 << (temp_v14 & 0x1f))) != 0) {
        temp_v7 = (unsigned int)*(unsigned char *)(temp_v14 + unaff_r4 + 0x426);
        pfVar3 = (float *)(unaff_r4 + temp_v14 * 4 + 0x4e4);
        pfVar15 = (float *)((int)*(float *)((int)((unsigned int)__current_sp()) + 0xc) + temp_v14 * 4 + 0x100c);
        if ((temp_v7 != 0) && (temp_v15 = *pfVar3, temp_v15 != *pfVar15)) {
          if (g_commandBufferCursor < g_commandBufferEnd) {
            pfVar12 = g_commandBufferCursor + 1;
            *g_commandBufferCursor = temp_v15;
            g_commandBufferCursor = g_commandBufferCursor + 2;
            *pfVar12 = (float)(*(unsigned int *)((&DAT_0046534c)[temp_v1] * 4 + 0x4e4f54) | (temp_v7 << 0x10));
          }
          *pfVar15 = *pfVar3;
        }
        temp_v6 = unaff_r4 + ((&DAT_0046534c)[temp_v1] >> 5) * 4;
        *(unsigned int *)(temp_v6 + 0x7d8) =
             *(unsigned int *)(temp_v6 + 0x7d8) & ~(1 << ((&DAT_0046534c)[temp_v1] & 0x1fU));
      }
      temp_v1 = temp_v1 + 1;
    } while ((&DAT_0046534c)[temp_v1] != 0xbd);
  }
  if (((unsigned int)*(float *)((int)((unsigned int)__current_sp()) + 0x858) & 0x40) != 0) {
    temp_v38 = 0x4580000045000000;
    if (((*(unsigned int *)(unaff_r4 + 0x590) & 1) != 0) &&
       ((**(unsigned int **)((int)((unsigned int)__current_sp()) + 0x854) & 0x4008) != 0)) {
      temp_v37 = 0x44ffe000;
      temp_v14 = 0;
      do {
        if ((((*(unsigned int *)(unaff_r4 + 0xa0c) >> (temp_v14 & 0xff)) & 1) != 0) &&
           (((*(unsigned int *)(unaff_r4 + 0x7c0) >> (*(unsigned int *)(temp_v14 * 4 + 0x40b67c) & 0xff)) & 1) == 0))
        {
          temp_v1 = *(int *)(unaff_r4 + temp_v14 * 4 + 0x9f4);
          if (temp_v1 == -1) break;
          temp_v7 = unaff_r5[temp_v1 + 0x1d];
          if (temp_v7 == 0) break;
          temp_v1 = FUN_002aa67c();
          if (temp_v1 == 0) break;
          *(unsigned int **)((unsigned int)__current_sp()) = unaff_r5 + temp_v14;
          if ((unaff_r5 + temp_v14)[0x43] == temp_v7) {
            if (*(int *)((int)*(float *)((unsigned int)__current_sp()) + 400) != 0) {
              if (g_commandBufferCursor < g_commandBufferEnd) {
                *g_commandBufferCursor =
                     (float)(*(unsigned int *)((int)*(float *)((unsigned int)__current_sp()) + 0x214) |
                            (*(int *)(temp_v14 * 4 + 0x40b694) << 8));
                g_commandBufferCursor[1] = 1.378167e-39f;
                g_commandBufferCursor = g_commandBufferCursor + 2;
              }
              FUN_002aa790(0x1c8,*(unsigned int *)((int)*(float *)((unsigned int)__current_sp()) + 400),
                           *(int *)(temp_v1 + 0x804) +
                           *(int *)((int)*(float *)((unsigned int)__current_sp()) + 0x214) * 4);
              *(unsigned int *)((int)*(float *)((unsigned int)__current_sp()) + 400) = 0;
            }
          }
          else {
            if (*(int *)((int)*(float *)((unsigned int)__current_sp()) + 400) != 0) {
              *(unsigned int *)((int)*(float *)((unsigned int)__current_sp()) + 400) = 0;
            }
            *(unsigned int *)((int)*(float *)((unsigned int)__current_sp()) + 0x10c) = temp_v7;
            *(unsigned int *)((int)((unsigned int)__current_sp()) + 0x1c) = temp_v1 + 0x81c;
            if ((*(unsigned int *)(temp_v1 + 0x81c) & 1) != 0) {
              if (*(int *)(temp_v1 + 0x804) == 0) {
                if (DAT_0044e330 == (romwright_code *)0x0) {
                  temp_v24 = 0;
                }
                else {
                  temp_v24 = (*DAT_0044e330)(0x10000,0x100,0,0x400);
                }
                *(unsigned int *)(temp_v1 + 0x804) = temp_v24;
              }
              temp_v6 = 0;
              do {
                temp_v13 = temp_v1 + temp_v6 * 4;
                temp_v15 = *(float *)(temp_v13 + 4);
                temp_v10 = (float)((unsigned long long)temp_v42 >> 0x20);
                if ((temp_v15 <= temp_v10) || ((unsigned int)romwright_fabs_4(temp_v15) >> 0x17 == 0xff)) {
                  temp_v7 = 0;
                }
                else {
                  temp_v15 = temp_v15 * (float)((unsigned long long)temp_v38 >> 0x20);
                  temp_v7 = 0xfff;
                  if ((int)temp_v15 < 0x45800000) {
                    temp_v7 = VectorFloatToUnsigned(temp_v15,3);
                  }
                }
                *(unsigned int *)(*(int *)(temp_v1 + 0x804) + temp_v6 * 4) = temp_v7;
                temp_v15 = *(float *)(temp_v13 + 0x404);
                if (temp_v15 == temp_v10 || (unsigned int)romwright_fabs_4(temp_v15) >> 0x17 == 0xff) {
                  temp_v8 = 0;
                }
                else {
                  temp_v15 = temp_v15 * (float)temp_v38;
                  if (temp_v15 < temp_v10) {
                    temp_v15 = -temp_v15;
                    temp_v8 = 0x800;
                  }
                  else {
                    temp_v8 = 0;
                  }
                  if ((int)temp_v15 >= 0x45000000) {
                    temp_v15 = (float)temp_v37;
                  }
                  temp_v4 = VectorFloatToUnsigned(temp_v15,3);
                  temp_v8 = temp_v8 | temp_v4;
                }
                *(unsigned int *)(*(int *)(temp_v1 + 0x804) + temp_v6 * 4) = temp_v7 | (temp_v8 << 0xc);
                temp_v6 = temp_v6 + 1;
              } while (temp_v6 < 0x100);
              **(unsigned int **)((int)((unsigned int)__current_sp()) + 0x1c) = *(unsigned int *)(temp_v1 + 0x81c) & 0xfffffffe;
            }
            if (g_commandBufferCursor < g_commandBufferEnd) {
              temp_v6 = *(int *)(temp_v14 * 4 + 0x40b694);
              g_commandBufferCursor[1] = 1.378167e-39f;
              *g_commandBufferCursor = (float)(temp_v6 << 8);
              g_commandBufferCursor = g_commandBufferCursor + 2;
            }
            FUN_002aa790(0x1c8,0x100,*(unsigned int *)(temp_v1 + 0x804));
            *(float *)((int)((unsigned int)__current_sp()) + 0x818) = 1.4013e-45f;
          }
        }
        temp_v14 = temp_v14 + 1;
      } while ((int)temp_v14 < 6);
      temp_v1 = 0;
      do {
        temp_v6 = unaff_r4 + temp_v1 * 0x70;
        if (*(char *)(temp_v6 + 0xa20) != '\0') {
          if ((*(int *)(unaff_r4 + 0xa0c) << 0x19 < 0) &&
             (((*(unsigned int *)(unaff_r4 + 0x7c0) >> ((temp_v1 + 8U) & 0xff)) & 1) == 0)) {
            temp_v14 = unaff_r5[*(int *)(temp_v6 + 0xa80) + 0x1d];
            temp_v13 = FUN_002aa67c();
            if (unaff_r5[temp_v1 + 0x49] == temp_v14) {
              if (unaff_r5[temp_v1 + 0x6a] != 0) {
                if (g_commandBufferCursor < g_commandBufferEnd) {
                  *g_commandBufferCursor = (float)(unaff_r5[temp_v1 + 0x8b] | (temp_v1 * 0x100 + 0x800U));
                  g_commandBufferCursor[1] = 1.378167e-39f;
                  g_commandBufferCursor = g_commandBufferCursor + 2;
                }
                FUN_002aa790(0x1c8,unaff_r5[temp_v1 + 0x6a],
                             *(int *)(temp_v13 + 0x804) + unaff_r5[temp_v1 + 0x8b] * 4);
                unaff_r5[temp_v1 + 0x6a] = 0;
              }
            }
            else {
              if (unaff_r5[temp_v1 + 0x6a] != 0) {
                unaff_r5[temp_v1 + 0x6a] = 0;
              }
              unaff_r5[temp_v1 + 0x49] = temp_v14;
              if ((*(unsigned int *)(temp_v13 + 0x81c) & 1) != 0) {
                if (*(int *)(temp_v13 + 0x804) == 0) {
                  if (DAT_0044e330 == (romwright_code *)0x0) {
                    temp_v24 = 0;
                  }
                  else {
                    temp_v24 = (*DAT_0044e330)(0x10000,0x100,0,0x400);
                  }
                  *(unsigned int *)(temp_v13 + 0x804) = temp_v24;
                }
                temp_v3 = 0;
                do {
                  temp_v16 = temp_v13 + temp_v3 * 4;
                  temp_v15 = *(float *)(temp_v16 + 4);
                  temp_v10 = (float)((unsigned long long)temp_v42 >> 0x20);
                  if ((temp_v15 <= temp_v10) || ((unsigned int)romwright_fabs_4(temp_v15) >> 0x17 == 0xff)) {
                    temp_v14 = 0;
                  }
                  else {
                    temp_v15 = temp_v15 * (float)((unsigned long long)temp_v38 >> 0x20);
                    temp_v14 = 0xfff;
                    if ((int)temp_v15 < 0x45800000) {
                      temp_v14 = VectorFloatToUnsigned(temp_v15,3);
                    }
                  }
                  *(unsigned int *)(*(int *)(temp_v13 + 0x804) + temp_v3 * 4) = temp_v14;
                  temp_v15 = *(float *)(temp_v16 + 0x404);
                  if (temp_v15 == temp_v10 || (unsigned int)romwright_fabs_4(temp_v15) >> 0x17 == 0xff) {
                    temp_v7 = 0;
                  }
                  else {
                    temp_v15 = temp_v15 * (float)temp_v38;
                    if (temp_v15 < temp_v10) {
                      temp_v15 = -temp_v15;
                      temp_v7 = 0x800;
                    }
                    else {
                      temp_v7 = 0;
                    }
                    if ((int)temp_v15 >= 0x45000000) {
                      temp_v15 = (float)temp_v37;
                    }
                    temp_v42 = CONCAT44(temp_v10,temp_v15);
                    temp_v8 = VectorFloatToUnsigned(temp_v15,3);
                    temp_v7 = temp_v7 | temp_v8;
                  }
                  *(unsigned int *)(*(int *)(temp_v13 + 0x804) + temp_v3 * 4) = temp_v14 | (temp_v7 << 0xc);
                  temp_v3 = temp_v3 + 1;
                } while (temp_v3 < 0x100);
                *(unsigned int *)(temp_v13 + 0x81c) = *(unsigned int *)(temp_v13 + 0x81c) & 0xfffffffe;
              }
              if (g_commandBufferCursor < g_commandBufferEnd) {
                g_commandBufferCursor[1] = 1.378167e-39f;
                *g_commandBufferCursor = (float)(temp_v1 * 0x100 + 0x800);
                g_commandBufferCursor = g_commandBufferCursor + 2;
              }
              FUN_002aa790(0x1c8,0x100,*(unsigned int *)(temp_v13 + 0x804));
              *(float *)((int)((unsigned int)__current_sp()) + 0x818) = 1.4013e-45f;
            }
          }
          if (((*(unsigned int *)(unaff_r4 + 0x7c0) >> ((temp_v1 + 0x18U) & 0xff)) & 1) == 0) {
            temp_v14 = unaff_r5[*(int *)(temp_v6 + 0xa8c) + 0x1d];
            temp_v6 = FUN_002aa67c();
            if (unaff_r5[temp_v1 + 0x51] == temp_v14) {
              if (unaff_r5[temp_v1 + 0x72] != 0) {
                if (g_commandBufferCursor < g_commandBufferEnd) {
                  temp_v14 = unaff_r5[temp_v1 + 0x93];
                  g_commandBufferCursor[1] = 1.378167e-39f;
                  *g_commandBufferCursor = (float)(temp_v14 | (temp_v1 * 0x100 + 0x1000U));
                  g_commandBufferCursor = g_commandBufferCursor + 2;
                }
                FUN_002aa790(0x1c8,unaff_r5[temp_v1 + 0x72],
                             *(int *)(temp_v6 + 0x804) + unaff_r5[temp_v1 + 0x93] * 4);
                unaff_r5[temp_v1 + 0x72] = 0;
              }
            }
            else {
              if (unaff_r5[temp_v1 + 0x72] != 0) {
                unaff_r5[temp_v1 + 0x72] = 0;
              }
              unaff_r5[temp_v1 + 0x51] = temp_v14;
              if ((*(unsigned int *)(temp_v6 + 0x81c) & 1) != 0) {
                if (*(int *)(temp_v6 + 0x804) == 0) {
                  if (DAT_0044e330 == (romwright_code *)0x0) {
                    temp_v24 = 0;
                  }
                  else {
                    temp_v24 = (*DAT_0044e330)(0x10000,0x100,0,0x400);
                  }
                  *(unsigned int *)(temp_v6 + 0x804) = temp_v24;
                }
                temp_v13 = 0;
                do {
                  temp_v3 = temp_v6 + temp_v13 * 4;
                  temp_v15 = *(float *)(temp_v3 + 4);
                  temp_v10 = (float)((unsigned long long)temp_v42 >> 0x20);
                  if ((temp_v15 <= temp_v10) || ((unsigned int)romwright_fabs_4(temp_v15) >> 0x17 == 0xff)) {
                    temp_v14 = 0;
                  }
                  else {
                    temp_v15 = temp_v15 * (float)((unsigned long long)temp_v38 >> 0x20);
                    temp_v14 = 0xfff;
                    if ((int)temp_v15 < 0x45800000) {
                      temp_v14 = VectorFloatToUnsigned(temp_v15,3);
                    }
                  }
                  *(unsigned int *)(*(int *)(temp_v6 + 0x804) + temp_v13 * 4) = temp_v14;
                  temp_v15 = *(float *)(temp_v3 + 0x404);
                  if (temp_v15 == temp_v10 || (unsigned int)romwright_fabs_4(temp_v15) >> 0x17 == 0xff) {
                    temp_v7 = 0;
                  }
                  else {
                    temp_v15 = temp_v15 * (float)temp_v38;
                    if (temp_v15 < temp_v10) {
                      temp_v15 = -temp_v15;
                      temp_v7 = 0x800;
                    }
                    else {
                      temp_v7 = 0;
                    }
                    if ((int)temp_v15 >= 0x45000000) {
                      temp_v15 = (float)temp_v37;
                    }
                    temp_v8 = VectorFloatToUnsigned(temp_v15,3);
                    temp_v7 = temp_v7 | temp_v8;
                  }
                  *(unsigned int *)(*(int *)(temp_v6 + 0x804) + temp_v13 * 4) = temp_v14 | (temp_v7 << 0xc);
                  temp_v13 = temp_v13 + 1;
                } while (temp_v13 < 0x100);
                *(unsigned int *)(temp_v6 + 0x81c) = *(unsigned int *)(temp_v6 + 0x81c) & 0xfffffffe;
              }
              if (g_commandBufferCursor < g_commandBufferEnd) {
                g_commandBufferCursor[1] = 1.378167e-39f;
                *g_commandBufferCursor = (float)(temp_v1 * 0x100 + 0x1000);
                g_commandBufferCursor = g_commandBufferCursor + 2;
              }
              FUN_002aa790(0x1c8,0x100,*(unsigned int *)(temp_v6 + 0x804));
              *(float *)((int)((unsigned int)__current_sp()) + 0x818) = 1.4013e-45f;
            }
          }
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 8);
    }
    temp_v15 = (float)((unsigned long long)temp_v42 >> 0x20);
    temp_v37 = 0x437f0000;
    if ((*(int *)(unaff_r4 + 0xe0c) != 0) &&
       ((**(unsigned int **)((int)((unsigned int)__current_sp()) + 0x854) & 0x4020) != 0)) {
      temp_v1 = 0;
      temp_v39 = 0x457ff000;
      temp_v37 = 0x3f800000437f0000;
      *(float *)((int)((unsigned int)__current_sp()) + 0x820) = 2.8026e-45f;
      *(float *)((int)((unsigned int)__current_sp()) + 0x824) = 4.2039e-45f;
      do {
        temp_v14 = unaff_r5[*(int *)(unaff_r4 + temp_v1 * 4 + 0xdf0) + 0x1d];
        temp_v6 = FUN_002aa67c();
        if (unaff_r5[temp_v1 + 0x59] == temp_v14) {
          if (unaff_r5[temp_v1 + 0x7a] != 0) {
            if (g_commandBufferCursor < g_commandBufferEnd) {
              temp_v15 = *(float *)((int)((unsigned int)__current_sp()) + (temp_v1 + 0x208) * 4);
              temp_v14 = unaff_r5[temp_v1 + 0x9b];
              g_commandBufferCursor[1] = 1.377778e-39f;
              *g_commandBufferCursor = (float)(temp_v14 | ((int)temp_v15 << 8));
              g_commandBufferCursor = g_commandBufferCursor + 2;
            }
            FUN_002aa790(0xb0,unaff_r5[temp_v1 + 0x7a],
                         *(int *)(temp_v6 + 0x810) + unaff_r5[temp_v1 + 0x9b] * 4);
            unaff_r5[temp_v1 + 0x7a] = 0;
          }
        }
        else {
          if (unaff_r5[temp_v1 + 0x7a] != 0) {
            unaff_r5[temp_v1 + 0x7a] = 0;
          }
          unaff_r5[temp_v1 + 0x59] = temp_v14;
          if ((*(unsigned int *)(temp_v6 + 0x81c) & 8) != 0) {
            if (*(int *)(temp_v6 + 0x810) == 0) {
              if (DAT_0044e330 == (romwright_code *)0x0) {
                temp_v24 = 0;
              }
              else {
                temp_v24 = (*DAT_0044e330)(0x10000,0x100,0,0x200);
              }
              *(unsigned int *)(temp_v6 + 0x810) = temp_v24;
            }
            temp_v13 = 0;
            do {
              temp_v3 = temp_v6 + temp_v13 * 4;
              temp_v15 = *(float *)(temp_v3 + 4);
              temp_v10 = (float)((unsigned long long)temp_v42 >> 0x20);
              if ((temp_v15 <= temp_v10) || ((unsigned int)romwright_fabs_4(temp_v15) >> 0x17 == 0xff)) {
                temp_v14 = 0;
              }
              else {
                temp_v15 = temp_v15 * (float)((unsigned long long)temp_v38 >> 0x20);
                temp_v14 = 0xfff;
                if ((int)temp_v15 < 0x45800000) {
                  temp_v14 = VectorFloatToUnsigned(temp_v15,3);
                }
              }
              *(unsigned int *)(*(int *)(temp_v6 + 0x810) + temp_v13 * 4) = temp_v14;
              temp_v15 = *(float *)(temp_v3 + 0x204);
              if (temp_v15 == temp_v10 || (unsigned int)romwright_fabs_4(temp_v15) >> 0x17 == 0xff) {
                temp_v3 = 0;
              }
              else {
                temp_v25 = (float)temp_v38;
                temp_v27 = (temp_v15 + (float)((unsigned long long)temp_v37 >> 0x20)) * temp_v25;
                temp_v15 = temp_v27;
                if (temp_v27 < temp_v10) {
                  temp_v15 = temp_v10;
                }
                temp_v42 = CONCAT44(temp_v10,temp_v15);
                if (temp_v10 <= temp_v27) {
                  temp_v19 = SBORROW4((int)temp_v15,0x45800000);
                  temp_v3 = (int)temp_v15 - 0x45800000;
                  if ((int)temp_v15 >= 0x45800000) {
                    temp_v42 = CONCAT44(temp_v10,(int)temp_v39);
                  }
                  else {
                    temp_v19 = SBORROW4((int)temp_v15,0x45000000);
                    temp_v3 = (int)temp_v15 - 0x45000000;
                  }
                  if (temp_v3 < 0 == temp_v19) {
                    temp_v3 = VectorFloatToUnsigned((float)temp_v42 - temp_v25,3);
                  }
                  else {
                    temp_v3 = VectorFloatToUnsigned((float)temp_v42 + temp_v25,3);
                  }
                }
                else {
                  temp_v3 = VectorFloatToUnsigned((float)temp_v42 + temp_v25,3);
                }
              }
              *(unsigned int *)(*(int *)(temp_v6 + 0x810) + temp_v13 * 4) = temp_v14 | (temp_v3 << 0xc);
              temp_v13 = temp_v13 + 1;
            } while (temp_v13 < 0x80);
            *(unsigned int *)(temp_v6 + 0x81c) = *(unsigned int *)(temp_v6 + 0x81c) & 0xfffffff7;
          }
          if (g_commandBufferCursor < g_commandBufferEnd) {
            temp_v15 = *(float *)((int)((unsigned int)__current_sp()) + (temp_v1 + 0x208) * 4);
            g_commandBufferCursor[1] = 1.377778e-39f;
            *g_commandBufferCursor = (float)((int)temp_v15 << 8);
            g_commandBufferCursor = g_commandBufferCursor + 2;
          }
          FUN_002aa790(0xb0,0x80,*(unsigned int *)(temp_v6 + 0x810));
          *(float *)((int)((unsigned int)__current_sp()) + 0x818) = 1.4013e-45f;
        }
        temp_v15 = (float)temp_v39;
        temp_v1 = temp_v1 + 1;
      } while ((temp_v1 < 2) && ((temp_v1 != 1 || ((*(unsigned int *)(unaff_r4 + 0x594) & 0x4000) != 0))));
      if ((*(unsigned int *)(unaff_r4 + 0x594) & 0x8000) != 0) {
        temp_v14 = unaff_r5[*(int *)(unaff_r4 + 0xdf8) + 0x1d];
        temp_v1 = FUN_002aa67c();
        if (unaff_r5[0x5b] == temp_v14) {
          if (unaff_r5[0x7c] != 0) {
            if (g_commandBufferCursor < g_commandBufferEnd) {
              temp_v15 = (float)unaff_r5[0x9d];
              g_commandBufferCursor[1] = 1.377778e-39f;
              *g_commandBufferCursor = temp_v15;
              g_commandBufferCursor = g_commandBufferCursor + 2;
            }
            FUN_002aa790(0xb0,unaff_r5[0x7c],*(int *)(temp_v1 + 0x814) + unaff_r5[0x9d] * 4);
            unaff_r5[0x7c] = 0;
          }
        }
        else {
          if (unaff_r5[0x7c] != 0) {
            unaff_r5[0x7c] = 0;
          }
          unaff_r5[0x5b] = temp_v14;
          if ((*(unsigned int *)(temp_v1 + 0x81c) & 0x10) != 0) {
            if (*(int *)(temp_v1 + 0x814) == 0) {
              if (DAT_0044e330 == (romwright_code *)0x0) {
                temp_v24 = 0;
              }
              else {
                temp_v24 = (*DAT_0044e330)(0x10000,0x100,0,0x200);
              }
              *(unsigned int *)(temp_v1 + 0x814) = temp_v24;
            }
            temp_v6 = 0;
            do {
              temp_v13 = temp_v1 + temp_v6 * 4;
              temp_v27 = *(float *)(temp_v13 + 4);
              temp_v10 = (float)((unsigned long long)temp_v42 >> 0x20);
              if ((temp_v27 <= temp_v10) || ((unsigned int)romwright_fabs_4(temp_v27) >> 0x17 == 0xff)) {
                temp_v14 = 0;
              }
              else {
                temp_v27 = temp_v27 * (float)((unsigned long long)temp_v38 >> 0x20);
                temp_v14 = 0xfff;
                if ((int)temp_v27 < 0x45800000) {
                  temp_v14 = VectorFloatToUnsigned(temp_v27,3);
                }
              }
              *(unsigned int *)(*(int *)(temp_v1 + 0x814) + temp_v6 * 4) = temp_v14;
              temp_v27 = *(float *)(temp_v13 + 0x204);
              if (temp_v27 == temp_v10 || (unsigned int)romwright_fabs_4(temp_v27) >> 0x17 == 0xff) {
                temp_v13 = 0;
              }
              else {
                temp_v25 = (float)temp_v38;
                temp_v27 = (temp_v27 + (float)((unsigned long long)temp_v37 >> 0x20)) * temp_v25;
                if (temp_v10 <= temp_v27) {
                  temp_v19 = SBORROW4((int)temp_v27,0x45800000);
                  temp_v13 = (int)temp_v27 - 0x45800000;
                  temp_v10 = temp_v15;
                  if ((int)temp_v27 < 0x45800000) {
                    temp_v19 = SBORROW4((int)temp_v27,0x45000000);
                    temp_v13 = (int)temp_v27 - 0x45000000;
                    temp_v10 = temp_v27;
                  }
                  if (temp_v13 < 0 == temp_v19) {
                    temp_v13 = VectorFloatToUnsigned(temp_v10 - temp_v25,3);
                  }
                  else {
                    temp_v13 = VectorFloatToUnsigned(temp_v10 + temp_v25,3);
                  }
                }
                else {
                  temp_v13 = VectorFloatToUnsigned(temp_v10 + temp_v25,3);
                }
              }
              *(unsigned int *)(*(int *)(temp_v1 + 0x814) + temp_v6 * 4) = temp_v14 | (temp_v13 << 0xc);
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < 0x80);
            *(unsigned int *)(temp_v1 + 0x81c) = *(unsigned int *)(temp_v1 + 0x81c) & 0xffffffef;
          }
          if (g_commandBufferCursor < g_commandBufferEnd) {
            g_commandBufferCursor[1] = 1.377778e-39f;
            *g_commandBufferCursor = 0.0f;
            g_commandBufferCursor = g_commandBufferCursor + 2;
          }
          FUN_002aa790(0xb0,0x80,*(unsigned int *)(temp_v1 + 0x814));
          *(float *)((int)((unsigned int)__current_sp()) + 0x818) = 1.4013e-45f;
        }
      }
      temp_v15 = (float)((unsigned long long)temp_v42 >> 0x20);
      temp_v1 = 0;
      do {
        if (unaff_r5[*(int *)(unaff_r4 + temp_v1 * 4 + 0xdfc) + 0x1d] != unaff_r5[temp_v1 + 0x5c])
        break;
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 4);
      if (temp_v1 != 4) {
        temp_v1 = 0;
        temp_v39 = 0x3f00000043000000;
        do {
          temp_v6 = FUN_002aa67c(*(unsigned int *)(unaff_r4 + temp_v1 * 4 + 0xdfc));
          if (unaff_r5[temp_v1 + 0x7d] != 0) {
            unaff_r5[temp_v1 + 0x7d] = 0;
          }
          if ((*(unsigned int *)(temp_v6 + 0x81c) & 0x20) != 0) {
            if (*(int *)(temp_v6 + 0x818) == 0) {
              if (DAT_0044e330 == (romwright_code *)0x0) {
                temp_v24 = 0;
              }
              else {
                temp_v24 = (*DAT_0044e330)(0x10000,0x100,0,0x200);
              }
              *(unsigned int *)(temp_v6 + 0x818) = temp_v24;
            }
            temp_v13 = 0;
            do {
              temp_v15 = *(float *)(temp_v6 + temp_v13 * 4 + 4);
              temp_v10 = (float)((unsigned long long)temp_v37 >> 0x20);
              if ((int)temp_v15 >= 0x3f800001) {
                temp_v15 = temp_v10;
              }
              temp_v24 = VectorFloatToUnsigned
                                 ((float)((unsigned long long)temp_v39 >> 0x20) + temp_v15 * (float)temp_v37,3);
              *(char *)(*(int *)(temp_v6 + 0x818) + temp_v13) = (char)temp_v24;
              temp_v13 = temp_v13 + 1;
            } while (temp_v13 < 0x100);
            if (temp_v13 < 0x1ff) {
              temp_v15 = (float)((unsigned long long)temp_v42 >> 0x20);
              temp_v42 = CONCAT44(temp_v15,temp_v15);
              do {
                temp_v27 = *(float *)(temp_v6 + temp_v13 * 4 + 4);
                if (temp_v27 == temp_v15 || (unsigned int)romwright_fabs_4(temp_v27) >> 0x17 == 0xff) {
                  *(unsigned char *)(*(int *)(temp_v6 + 0x818) + temp_v13) = 0;
                }
                else {
                  temp_v28 = (float)temp_v39;
                  temp_v25 = (temp_v27 + temp_v10) * temp_v28;
                  temp_v27 = temp_v15;
                  if (temp_v15 <= temp_v25) {
                    temp_v19 = SBORROW4((int)temp_v25,0x43800000);
                    temp_v3 = (int)temp_v25 - 0x43800000;
                    temp_v27 = (float)temp_v37;
                    if ((int)temp_v25 < 0x43800000) {
                      temp_v19 = SBORROW4((int)temp_v25,0x43000000);
                      temp_v3 = (int)temp_v25 - 0x43000000;
                      temp_v27 = temp_v25;
                    }
                    if (temp_v3 < 0 == temp_v19) {
                      temp_v24 = VectorFloatToUnsigned(temp_v27 - temp_v28,3);
                      *(char *)(*(int *)(temp_v6 + 0x818) + temp_v13) = (char)temp_v24;
                    }
                    else {
                      temp_v24 = VectorFloatToUnsigned(temp_v27 + temp_v28,3);
                      *(char *)(*(int *)(temp_v6 + 0x818) + temp_v13) = (char)temp_v24;
                    }
                  }
                  else {
                    temp_v24 = VectorFloatToUnsigned(temp_v27 + temp_v28,3);
                    *(char *)(*(int *)(temp_v6 + 0x818) + temp_v13) = (char)temp_v24;
                  }
                }
                temp_v13 = temp_v13 + 1;
              } while (temp_v13 < 0x1ff);
            }
            *(unsigned char *)(*(int *)(temp_v6 + 0x818) + temp_v13) = 0;
            *(unsigned int *)(temp_v6 + 0x81c) = *(unsigned int *)(temp_v6 + 0x81c) & 0xffffffdf;
          }
          temp_v15 = (float)((unsigned long long)temp_v42 >> 0x20);
          temp_v13 = 0;
          do {
            *(unsigned int *)((int)((unsigned int)__current_sp()) + (temp_v13 + 2) * 4) =
                 ((unsigned int)*(float *)((int)((unsigned int)__current_sp()) + (temp_v13 + 2) * 4) &
                 ~(0xff << ((temp_v1 << 3) & 0xffU))) |
                 ((unsigned int)*(unsigned char *)(*(int *)(temp_v6 + 0x818) + temp_v13) << ((temp_v1 << 3) & 0xffU));
            temp_v13 = temp_v13 + 1;
          } while (temp_v13 < 0x200);
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 4);
        if (temp_v1 == 4) {
          if (g_commandBufferCursor < g_commandBufferEnd) {
            g_commandBufferCursor[1] = 1.377778e-39f;
            *g_commandBufferCursor = 1.43493e-42f;
            g_commandBufferCursor = g_commandBufferCursor + 2;
          }
          FUN_002aa790(0xb0,0x100,(float *)((int)((unsigned int)__current_sp()) + 8));
          if (g_commandBufferCursor < g_commandBufferEnd) {
            *g_commandBufferCursor = 1.79366e-42f;
            g_commandBufferCursor[1] = 1.377778e-39f;
            g_commandBufferCursor = g_commandBufferCursor + 2;
          }
          FUN_002aa790(0xb0,0x100,(float *)((int)((unsigned int)__current_sp()) + 0x408));
          *(float *)((int)((unsigned int)__current_sp()) + 0x818) = 1.4013e-45f;
          temp_v1 = 0;
          do {
            temp_v6 = temp_v1 + 1;
            unaff_r5[temp_v1 + 0x5c] = unaff_r5[*(int *)(unaff_r4 + temp_v1 * 4 + 0xdfc) + 0x1d];
            temp_v1 = temp_v6;
          } while (temp_v6 < 4);
        }
      }
      else {
        temp_v14 = unaff_r5[0x7d];
        temp_v19 = temp_v14 == 0;
        if (temp_v19) {
          temp_v14 = unaff_r5[0x7e];
        }
        if (temp_v19 && temp_v14 == 0) {
          temp_v14 = unaff_r5[0x7f];
          temp_v19 = temp_v14 == 0;
          if (temp_v19) {
            temp_v14 = unaff_r5[0x80];
          }
          if (temp_v19 && temp_v14 == 0) goto LAB_001367f8;
        }
        temp_v7 = 0;
        temp_v14 = 0x200;
        temp_v1 = 0;
        do {
          temp_v8 = unaff_r5[temp_v1 + 0x7d];
          if (temp_v8 != 0) {
            temp_v4 = unaff_r5[temp_v1 + 0x9e];
            unaff_r5[temp_v1 + 0x7d] = 0;
            if (temp_v4 < temp_v14) {
              temp_v14 = temp_v4;
            }
            temp_v8 = (temp_v8 + temp_v4) - 1;
            if (temp_v7 < temp_v8) {
              temp_v7 = temp_v8;
            }
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 4);
        temp_v1 = 0;
        do {
          temp_v6 = FUN_002aa67c(*(unsigned int *)(unaff_r4 + temp_v1 * 4 + 0xdfc));
          temp_v15 = (float)((unsigned long long)temp_v42 >> 0x20);
          if (temp_v14 <= temp_v7) {
            temp_v8 = temp_v14;
            do {
              *(unsigned int *)((int)((unsigned int)__current_sp()) + (temp_v8 + 2) * 4) =
                   ((unsigned int)*(float *)((int)((unsigned int)__current_sp()) + (temp_v8 + 2) * 4) &
                   ~(0xff << ((temp_v1 << 3) & 0xffU))) |
                   ((unsigned int)*(unsigned char *)(*(int *)(temp_v6 + 0x818) + temp_v8) << ((temp_v1 << 3) & 0xffU));
              temp_v8 = temp_v8 + 1;
            } while (temp_v8 <= temp_v7);
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 4);
        if (temp_v14 < 0x100) {
          if (temp_v7 >= 0x100) {
            if (g_commandBufferCursor < g_commandBufferEnd) {
              g_commandBufferCursor[1] = 1.377778e-39f;
              *g_commandBufferCursor = (float)(temp_v14 | 0x400);
              g_commandBufferCursor = g_commandBufferCursor + 2;
            }
            FUN_002aa790(0xb0,0x100 - temp_v14,(float *)((int)((unsigned int)__current_sp()) + (temp_v14 + 2) * 4));
            if (g_commandBufferCursor < g_commandBufferEnd) {
              g_commandBufferCursor[1] = 1.377778e-39f;
              *g_commandBufferCursor = 1.79366e-42f;
              g_commandBufferCursor = g_commandBufferCursor + 2;
            }
            FUN_002aa790(0xb0,temp_v7 - 0xff,(float *)((int)((unsigned int)__current_sp()) + 0x408));
          }
          else {
            if (g_commandBufferCursor < g_commandBufferEnd) {
              g_commandBufferCursor[1] = 1.377778e-39f;
              *g_commandBufferCursor = (float)(temp_v14 | 0x400);
              g_commandBufferCursor = g_commandBufferCursor + 2;
            }
            FUN_002aa790(0xb0,(temp_v7 - temp_v14) + 1,
                         (float *)((int)((unsigned int)__current_sp()) + (temp_v14 + 2) * 4));
          }
        }
        else {
          if (g_commandBufferCursor < g_commandBufferEnd) {
            g_commandBufferCursor[1] = 1.377778e-39f;
            *g_commandBufferCursor = (float)((temp_v14 - 0x100) | 0x500);
            g_commandBufferCursor = g_commandBufferCursor + 2;
          }
          FUN_002aa790(0xb0,(temp_v7 - temp_v14) + 1,
                       (float *)((int)((unsigned int)__current_sp()) + (temp_v14 + 2) * 4));
        }
      }
    }
LAB_001367f8:
    temp_v24 = (unsigned int)temp_v37;
    if (((*(unsigned int *)(unaff_r4 + 0x624) & 7) != 0) &&
       ((**(unsigned int **)((int)((unsigned int)__current_sp()) + 0x854) & 0x4010) != 0)) {
      temp_v14 = unaff_r5[*(int *)(unaff_r4 + 0xe64) + 0x1d];
      temp_v1 = FUN_002aa67c();
      if (unaff_r5[0x60] == temp_v14) {
        if (unaff_r5[0x81] != 0) {
          if (g_commandBufferCursor < g_commandBufferEnd) {
            *g_commandBufferCursor = (float)unaff_r5[0xa2];
            g_commandBufferCursor[1] = 1.377855e-39f;
            g_commandBufferCursor = g_commandBufferCursor + 2;
          }
          FUN_002aa790(0xe8,unaff_r5[0x81],*(int *)(temp_v1 + 0x808) + unaff_r5[0xa2] * 4);
          unaff_r5[0x81] = 0;
        }
      }
      else {
        if (unaff_r5[0x81] != 0) {
          unaff_r5[0x81] = 0;
        }
        unaff_r5[0x60] = temp_v14;
        if ((*(unsigned int *)(temp_v1 + 0x81c) & 2) != 0) {
          if (*(int *)(temp_v1 + 0x808) == 0) {
            if (DAT_0044e330 == (romwright_code *)0x0) {
              temp_v0 = 0;
            }
            else {
              temp_v0 = (*DAT_0044e330)(0x10000,0x100,0,0x200);
            }
            *(unsigned int *)(temp_v1 + 0x808) = temp_v0;
          }
          temp_v6 = 0;
          do {
            temp_v13 = temp_v1 + temp_v6 * 4;
            temp_v10 = *(float *)(temp_v13 + 0x204);
            if (temp_v10 == temp_v15 || (unsigned int)romwright_fabs_4(temp_v10) >> 0x17 == 0xff) {
              *(unsigned int *)(*(int *)(temp_v1 + 0x808) + temp_v6 * 4) = 0;
            }
            else {
              temp_v27 = (temp_v10 + 2.0f) * (float)temp_v38;
              temp_v25 = (float)((unsigned long long)temp_v38 >> 0x20);
              temp_v10 = temp_v15;
              if (temp_v15 <= temp_v27) {
                temp_v19 = SBORROW4((int)temp_v27,0x46000000);
                temp_v3 = (int)temp_v27 - 0x46000000;
                temp_v10 = 8191.0f;
                if ((int)temp_v27 < 0x46000000) {
                  temp_v19 = SBORROW4((int)temp_v27,0x45800000);
                  temp_v3 = (int)temp_v27 - 0x45800000;
                  temp_v10 = temp_v27;
                }
                if (temp_v3 < 0 == temp_v19) {
                  temp_v0 = VectorFloatToUnsigned(temp_v10 - temp_v25,3);
                  *(unsigned int *)(*(int *)(temp_v1 + 0x808) + temp_v6 * 4) = temp_v0;
                }
                else {
                  temp_v0 = VectorFloatToUnsigned(temp_v10 + temp_v25,3);
                  *(unsigned int *)(*(int *)(temp_v1 + 0x808) + temp_v6 * 4) = temp_v0;
                }
              }
              else {
                temp_v0 = VectorFloatToUnsigned(temp_v10 + temp_v25,3);
                *(unsigned int *)(*(int *)(temp_v1 + 0x808) + temp_v6 * 4) = temp_v0;
              }
            }
            temp_v10 = *(float *)(temp_v13 + 4);
            if ((temp_v10 <= temp_v15) || ((unsigned int)romwright_fabs_4(temp_v10) >> 0x17 == 0xff)) {
              temp_v13 = 0;
            }
            else {
              temp_v10 = temp_v10 * (float)temp_v38;
              temp_v13 = 0x7ff;
              if ((int)temp_v10 < 0x45000000) {
                temp_v13 = VectorFloatToUnsigned(temp_v10,3);
              }
            }
            *(unsigned int *)(*(int *)(temp_v1 + 0x808) + temp_v6 * 4) =
                 *(unsigned int *)(*(int *)(temp_v1 + 0x808) + temp_v6 * 4) | (temp_v13 << 0xd);
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < 0x80);
          *(unsigned int *)(temp_v1 + 0x81c) = *(unsigned int *)(temp_v1 + 0x81c) & 0xfffffffd;
        }
        if (g_commandBufferCursor < g_commandBufferEnd) {
          *g_commandBufferCursor = 0.0f;
          g_commandBufferCursor[1] = 1.377855e-39f;
          g_commandBufferCursor = g_commandBufferCursor + 2;
        }
        FUN_002aa790(0xe8,0x80,*(unsigned int *)(temp_v1 + 0x808));
        *(float *)((int)((unsigned int)__current_sp()) + 0x818) = 1.4013e-45f;
      }
    }
    if (((~*(unsigned int *)(unaff_r4 + 0x624) & 7) == 0) &&
       ((**(unsigned int **)((int)((unsigned int)__current_sp()) + 0x854) & 0x2004000) != 0)) {
      temp_v1 = 0;
      do {
        if (unaff_r5[*(int *)(unaff_r4 + temp_v1 * 4 + 0xe78) + 0x1d] != unaff_r5[temp_v1 + 0x61])
        break;
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 3);
      if (temp_v1 != 3) {
        temp_v1 = 0;
        temp_v36 = (unsigned long long)(unsigned int)temp_v15;
        *(float *)((int)((unsigned int)__current_sp()) + 0x10) = 0.0f;
        *(float *)((int)((unsigned int)__current_sp()) + 0x14) = 0.0f;
        *(float *)((int)((unsigned int)__current_sp()) + 0x18) = 0.0f;
        *(float *)((int)((unsigned int)__current_sp()) + 0x1c) = 0.0f;
        *(float *)((int)((unsigned int)__current_sp()) + 0x20) = 0.0f;
        *(float *)((int)((unsigned int)__current_sp()) + 0x24) = 0.0f;
        temp_v42 = romwright_piece_4_4(0x42fe0000,temp_v24);
        *(float *)((int)((unsigned int)__current_sp()) + 0x28) = 0.0f;
        *(float *)((int)((unsigned int)__current_sp()) + 0x2c) = 0.0f;
        *(float *)((int)((unsigned int)__current_sp()) + 0x30) = 0.0f;
        *(float *)((int)((unsigned int)__current_sp()) + 0x34) = 0.0f;
        *(float *)((int)((unsigned int)__current_sp()) + 0x38) = 0.0f;
        *(float *)((int)((unsigned int)__current_sp()) + 0x3c) = 0.0f;
        *(float *)((int)((unsigned int)__current_sp()) + 0x40) = 0.0f;
        *(float *)((int)((unsigned int)__current_sp()) + 0x44) = 0.0f;
        *(float *)((int)((unsigned int)__current_sp()) + 0x48) = 0.0f;
        *(float *)((int)((unsigned int)__current_sp()) + 0x4c) = 0.0f;
        do {
          temp_v6 = FUN_002aa67c(*(unsigned int *)(unaff_r4 + temp_v1 * 4 + 0xe78));
          if ((*(unsigned int *)(temp_v6 + 0x81c) & 4) != 0) {
            if (*(int *)(temp_v6 + 0x80c) == 0) {
              if (DAT_0044e330 == (romwright_code *)0x0) {
                temp_v24 = 0;
              }
              else {
                temp_v24 = (*DAT_0044e330)(0x10000,0x100,0,0x40);
              }
              *(unsigned int *)(temp_v6 + 0x80c) = temp_v24;
            }
            temp_v13 = 0;
            do {
              temp_v3 = temp_v6 + temp_v13 * 4;
              temp_v15 = *(float *)(temp_v3 + 4) * (float)temp_v42;
              if ((temp_v15 <= (float)temp_v36) || ((unsigned int)romwright_fabs_4(temp_v15) >> 0x17 == 0xff)) {
                temp_v24 = 0;
              }
              else if ((int)temp_v15 < 0x43800000) {
                temp_v24 = VectorFloatToUnsigned(temp_v15,3);
              }
              else {
                temp_v24 = 0xff;
              }
              *(unsigned int *)(*(int *)(temp_v6 + 0x80c) + temp_v13 * 4) = temp_v24;
              temp_v16 = temp_v13 * 4 + 0x20;
              temp_v14 = VectorFloatToUnsigned
                                 (romwright_fabs_4(*(float *)(temp_v3 + 0x24) * (float)((unsigned long long)temp_v42 >> 0x20))
                                  ,3);
              *(unsigned int *)(*(int *)(temp_v6 + 0x80c) + temp_v16) = temp_v14 & 0x7f;
              if (*(float *)(temp_v3 + 0x24) < (float)temp_v36) {
                *(unsigned int *)(*(int *)(temp_v6 + 0x80c) + temp_v16) = (temp_v14 & 0x7f) | 0x80;
              }
              temp_v13 = temp_v13 + 1;
            } while (temp_v13 < 8);
            *(unsigned int *)(temp_v6 + 0x81c) = *(unsigned int *)(temp_v6 + 0x81c) & 0xfffffffb;
          }
          temp_v13 = 0;
          do {
            *(unsigned int *)((int)((unsigned int)__current_sp()) + (temp_v13 + 4) * 4) =
                 (unsigned int)*(float *)((int)((unsigned int)__current_sp()) + (temp_v13 + 4) * 4) |
                 (*(int *)(*(int *)(temp_v6 + 0x80c) + temp_v13 * 4 + 0x20) << ((temp_v1 << 3) & 0xffU));
            temp_v3 = temp_v13 + 1;
            *(unsigned int *)((int)((unsigned int)__current_sp()) + (temp_v13 + 0xc) * 4) =
                 (unsigned int)*(float *)((int)((unsigned int)__current_sp()) + (temp_v13 + 0xc) * 4) |
                 (*(int *)(*(int *)(temp_v6 + 0x80c) + temp_v13 * 4) << ((temp_v1 << 3) & 0xffU));
            temp_v13 = temp_v3;
          } while (temp_v3 < 8);
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 3);
        if (temp_v1 == 3) {
          if (*(float *)((int)((unsigned int)__current_sp()) + 0x818) == 0.0f) {
            FUN_002aa924(0xc0,0x2d);
          }
          if (g_commandBufferCursor < g_commandBufferEnd) {
            *g_commandBufferCursor = 0.0f;
            g_commandBufferCursor[1] = 1.37794e-39f;
            g_commandBufferCursor = g_commandBufferCursor + 2;
          }
          FUN_002aa790(0x124,0x10,(float *)((int)((unsigned int)__current_sp()) + 0x10));
          if (g_commandBufferCursor < g_commandBufferEnd) {
            *g_commandBufferCursor = 0.0f;
            g_commandBufferCursor[1] = 3.58732e-43f;
            g_commandBufferCursor = g_commandBufferCursor + 2;
          }
          temp_v1 = 0;
          do {
            temp_v6 = temp_v1 + 1;
            unaff_r5[temp_v1 + 0x61] = unaff_r5[*(int *)(unaff_r4 + temp_v1 * 4 + 0xe78) + 0x1d];
            temp_v1 = temp_v6;
          } while (temp_v6 < 3);
        }
      }
    }
  }
  if (((unsigned int)*(float **)((int)((unsigned int)__current_sp()) + 0x858) & 0x800) == 0) {
    return *(float **)((int)((unsigned int)__current_sp()) + 0x858);
  }
  if (((**(unsigned int **)((int)((unsigned int)__current_sp()) + 0x854) & 0x100) == 0) &&
     (*(float **)(unaff_r4 + 0xe38) == (float *)unaff_r5[0x191])) {
    return *(float **)(unaff_r4 + 0xe38);
  }
  unaff_r5[0x191] = *(unsigned int *)(unaff_r4 + 0xe38);
  pfVar3 = (float *)(((unsigned int)*(unsigned char *)((int)unaff_r5 + 0x656) << 2) |
                     ((unsigned int)*(unsigned char *)((int)unaff_r5 + 0x657) << 3) |
                    (unsigned int)(unsigned char)unaff_r5[0x195] | ((unsigned int)*(unsigned char *)((int)unaff_r5 + 0x655) << 1));
  if (g_commandBufferCursor < g_commandBufferEnd) {
    *g_commandBufferCursor = 1.4013e-45f;
    g_commandBufferCursor[1] = 1.377915e-39f;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if (g_commandBufferCursor < g_commandBufferEnd) {
    *g_commandBufferCursor = 1.4013e-45f;
    g_commandBufferCursor[1] = 1.377914e-39f;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  temp_v14 = unaff_r5[0x191];
  if (temp_v14 != 0x6030) {
    if (temp_v14 != 0x6048) {
      if (temp_v14 != 0x6051) {
        return pfVar3;
      }
      if (g_commandBufferCursor < g_commandBufferEnd) {
        *g_commandBufferCursor = 2.10195e-44f;
        g_commandBufferCursor[1] = 1.377918e-39f;
        g_commandBufferCursor = g_commandBufferCursor + 2;
      }
      if (g_commandBufferCursor < g_commandBufferEnd) {
        g_commandBufferCursor[1] = 1.377916e-39f;
        *g_commandBufferCursor = 2.10195e-44f;
        g_commandBufferCursor = g_commandBufferCursor + 2;
      }
      if (g_commandBufferCursor < g_commandBufferEnd) {
        g_commandBufferCursor[1] = 1.377919e-39f;
        *g_commandBufferCursor = 4.2039e-45f;
        g_commandBufferCursor = g_commandBufferCursor + 2;
      }
      pfVar15 = g_commandBufferCursor;
      if (g_commandBufferEnd <= g_commandBufferCursor) {
        return g_commandBufferCursor;
      }
    }
    else {
      if (g_commandBufferCursor < g_commandBufferEnd) {
        *g_commandBufferCursor = 2.10195e-44f;
        g_commandBufferCursor[1] = 1.377918e-39f;
        g_commandBufferCursor = g_commandBufferCursor + 2;
      }
      if (g_commandBufferCursor < g_commandBufferEnd) {
        g_commandBufferCursor[1] = 1.377916e-39f;
        *g_commandBufferCursor = 2.10195e-44f;
        g_commandBufferCursor = g_commandBufferCursor + 2;
      }
      if (g_commandBufferCursor < g_commandBufferEnd) {
        g_commandBufferCursor[1] = 1.377919e-39f;
        *g_commandBufferCursor = 0.0f;
        g_commandBufferCursor = g_commandBufferCursor + 2;
      }
      pfVar15 = g_commandBufferCursor;
      if (g_commandBufferEnd <= g_commandBufferCursor) {
        return g_commandBufferCursor;
      }
    }
    *pfVar15 = 0.0f;
    pfVar15[1] = 1.37792e-39f;
    g_commandBufferCursor = pfVar15;
  }
  else {
    if (pfVar3 == (float *)0x0) {
      temp_v14 = 0;
    }
    else {
      if ((unaff_r5[0x1a2] != 1) && ((char)unaff_r5[0x193] == '\0')) {
        temp_v19 = pfVar3 == (float *)0xf;
        if (temp_v19) {
          pfVar3 = (float *)(unsigned int)*(unsigned char *)((int)unaff_r5 + 0x64d);
        }
        if (!temp_v19 || pfVar3 != (float *)0x0) {
          pfVar3 = (float *)0x1;
        }
      }
      else {
        pfVar3 = (float *)0x1;
      }
      temp_v14 = 2;
    }
    temp_v19 = *(char *)((int)unaff_r5 + 0x64b) != '\0';
    if (temp_v19) {
      temp_v7 = 4;
    }
    else {
      temp_v7 = 0;
    }
    temp_v8 = temp_v7;
    if (temp_v19) {
      temp_v8 = (unsigned int)(unsigned char)unaff_r5[0x196];
    }
    if (temp_v19 && temp_v8 != 0) {
      temp_v8 = 8;
    }
    else {
      temp_v8 = 0;
    }
    temp_v19 = *(char *)((int)unaff_r5 + 0x64a) != '\0';
    if (temp_v19) {
      temp_v4 = 0x10;
    }
    else {
      temp_v4 = 0;
    }
    temp_v5 = temp_v4;
    if (temp_v19) {
      temp_v5 = unaff_r5[0x197];
    }
    if (temp_v19 && temp_v5 != 0) {
      temp_v5 = 0x20;
    }
    else {
      temp_v5 = 0;
    }
    pfVar15 = (float *)((unsigned int)pfVar3 | temp_v14 | temp_v7 | temp_v8 | temp_v4 | temp_v5);
    if (g_commandBufferCursor < g_commandBufferEnd) {
      if (((unsigned int)pfVar3 & 1) == 0) {
        temp_v15 = 0.0f;
      }
      else {
        temp_v15 = 2.10195e-44f;
      }
      g_commandBufferCursor[1] = 1.377916e-39f;
      *g_commandBufferCursor = temp_v15;
      g_commandBufferCursor = g_commandBufferCursor + 2;
    }
    if (g_commandBufferCursor < g_commandBufferEnd) {
      if (((unsigned int)pfVar3 & 2) == 0 && temp_v14 == 0) {
        temp_v15 = 0.0f;
      }
      else {
        temp_v15 = 2.10195e-44f;
      }
      *g_commandBufferCursor = temp_v15;
      g_commandBufferCursor[1] = 1.377918e-39f;
      g_commandBufferCursor = g_commandBufferCursor + 2;
    }
    if (g_commandBufferCursor < g_commandBufferEnd) {
      if ((((unsigned int)pfVar3 & 4) == 0 && temp_v7 == 0) ||
          ((((unsigned int)pfVar3 & 10) == 0 && temp_v14 == 0) && temp_v8 == 0)) {
        temp_v7 = 0;
      }
      else {
        temp_v7 = 2;
      }
      g_commandBufferCursor[1] = 1.377919e-39f;
      *g_commandBufferCursor =
           (float)(temp_v7 | ((((unsigned int)pfVar3 & 0x10) != 0 || temp_v4 != 0) &&
                            ((((unsigned int)pfVar3 & 0x22) != 0 || temp_v14 != 0) || temp_v5 != 0)));
      g_commandBufferCursor = g_commandBufferCursor + 2;
    }
    if (g_commandBufferEnd <= g_commandBufferCursor) {
      return pfVar15;
    }
    temp_v14 = 0;
    if (((unsigned int)pfVar3 & 8) != 0 || temp_v8 != 0) {
      temp_v14 = 2;
    }
    *g_commandBufferCursor = (float)(temp_v14 | ((((unsigned int)pfVar3 & 0x20) | temp_v5) >> 5));
    g_commandBufferCursor[1] = 1.37792e-39f;
  }
  g_commandBufferCursor = g_commandBufferCursor + 2;
  return pfVar15;
}

} /* extern "C" */
