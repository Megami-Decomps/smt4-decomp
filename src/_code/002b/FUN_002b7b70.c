/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b7b70` (_code @ 0x2b7b70, 0x5e bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
extern int FUN_002c6c10(int);


void FUN_002b7b70(float *param_1,float *param_2,float *param_3,float *param_4)

{
/* irregular: 2 goto(s); irregular input(s): in_cr0, in_cr1, in_cr15, in_cr3, in_cr4, in_cr6, in_cr7, in_s13, in_s14, in_s18, in_stack_00000100, in_stack_00000104, in_stack_00000108, in_stack_00000118; 13 native warning(s); review required */
  unsigned char temp_v0;
  float *pfVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  float *unaff_r4;
  float *pfVar7;
  float *unaff_r5;
  float *unaff_r6;
  float *pfVar8;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr3;
  unsigned int in_cr4;
  unsigned int in_cr6;
  unsigned int in_cr7;
  unsigned int in_cr15;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float in_s13;
  float in_s14;
  float in_s18;
  unsigned char uStack00000000;
  unsigned char uStack0000007c;
  unsigned char uStack00000080;
  float *in_stack_00000100;
  int in_stack_00000104;
  unsigned int in_stack_00000108;
  romwright_code *in_stack_00000118;
  int uStack_4;
  
  temp_v9 = *param_2;
  temp_v10 = param_2[2];
  temp_v8 = temp_v9 - *param_4;
  temp_v6 = param_2[1] - param_4[1];
  temp_v5 = temp_v10 - param_4[2];
  temp_v11 = *param_3;
  temp_v7 = 1.0f / romwright_sqrt_4(temp_v8 * temp_v8 + temp_v6 * temp_v6 + temp_v5 * temp_v5);
  temp_v8 = temp_v8 * temp_v7;
  temp_v12 = param_3[1] * temp_v5 * temp_v7;
  temp_v5 = (float)(unsigned int)*(unsigned short *)((int)param_1 + (int)param_2);
  temp_v6 = temp_v6 * temp_v7 - in_s13 * temp_v8;
  coprocessor_function(10,0xb,4,in_cr4,in_cr1,in_cr6);
  temp_v7 = param_2[1] * temp_v11;
  *param_1 = temp_v11;
  param_1[1] = temp_v12;
  param_1[0x20] = temp_v12 * temp_v11 * temp_v6;
  param_1[10] = temp_v8;
  param_1[0xc2] = temp_v11;
  coprocessor_function(10,0xb,1,in_cr1,in_cr1,in_cr4);
  param_1[4] = temp_v8 * temp_v6 * temp_v11 + temp_v6 * temp_v11 * temp_v7;
  param_1[5] = in_s14;
  coprocessor_function(10,0xb,0,in_cr0,in_cr1,in_cr3);
  param_1[0x25] = temp_v6 + temp_v9 * temp_v9 + temp_v10 * in_s18;
  coprocessor_function(10,0xb,0,in_cr0,in_cr1,in_cr7);
  param_1[0xb] = temp_v7;
  coprocessor_store(0xf,in_cr15,param_1 + 0x1e);
  while( 1 ) {
    *param_3 = temp_v5;
    in_stack_00000100 = in_stack_00000100 + 1;
    param_1 = param_1 + -1;
    if (param_1 == (float *)0x0) break;
code_r0x002b7eba:
    temp_v5 = *unaff_r4;
    *unaff_r4 = *in_stack_00000100;
    unaff_r4 = unaff_r4 + 1;
    param_3 = in_stack_00000100;
  }
  do {
    pfVar7 = (float *)((int)unaff_r4 - (int)unaff_r6);
    temp_v1 = FUN_002c6c10((int)pfVar7 - (int)unaff_r5);
    temp_v4 = in_stack_00000104;
    temp_v2 = temp_v1 - 1;
    temp_v3 = (in_stack_00000108 - temp_v2) - 1;
    if ((int)temp_v3 < (int)temp_v2) {
      pfVar8 = unaff_r5;
      in_stack_00000108 = temp_v2;
      if ((int)temp_v3 >= 0xb) {
        temp_v4 = in_stack_00000104 * 4;
        *(float **)(&uStack00000000 + temp_v4) = unaff_r5;
        *(unsigned int *)(&uStack00000080 + temp_v4) = temp_v2;
        in_stack_00000104 = in_stack_00000104 + 1;
        unaff_r5 = pfVar7;
        in_stack_00000108 = temp_v3;
      }
      else {
joined_r0x002b7ef4:
        unaff_r5 = pfVar8;
        if ((int)in_stack_00000108 < 0xb) {
          if (in_stack_00000104 == 0) {
            return;
          }
          in_stack_00000104 = in_stack_00000104 - 1;
          unaff_r5 = (float *)(&uStack_4)[temp_v4];
          in_stack_00000108 = *(unsigned int *)(&uStack0000007c + temp_v4 * 4);
        }
      }
    }
    else {
      pfVar8 = pfVar7;
      in_stack_00000108 = temp_v3;
      if ((int)temp_v2 < 0xb) goto joined_r0x002b7ef4;
      temp_v4 = in_stack_00000104 * 4;
      *(float **)(&uStack00000000 + temp_v4) = pfVar7;
      *(unsigned int *)(&uStack00000080 + temp_v4) = temp_v3;
      in_stack_00000104 = in_stack_00000104 + 1;
      in_stack_00000108 = temp_v2;
    }
    temp_v4 = (int)unaff_r6 * ((int)in_stack_00000108 >> 1);
    pfVar7 = (float *)((int)unaff_r5 + temp_v4);
    if ((in_stack_00000108 & 1) == 0) {
      temp_v4 = temp_v4 - (int)unaff_r6;
    }
    pfVar8 = (float *)((int)pfVar7 + temp_v4);
    temp_v4 = (*in_stack_00000118)(unaff_r5,pfVar7);
    if (0 < temp_v4) {
      pfVar2 = unaff_r6;
      if ((((unsigned int)unaff_r6 | (unsigned int)unaff_r5) & 3) != 0) {
        do {
          temp_v0 = *(unsigned char *)unaff_r5;
          *(unsigned char *)unaff_r5 = *(unsigned char *)pfVar7;
          *(unsigned char *)pfVar7 = temp_v0;
          unaff_r5 = (float *)((int)unaff_r5 + 1);
          pfVar7 = (float *)((int)pfVar7 + 1);
          pfVar2 = (float *)((int)pfVar2 - 1);
        } while (pfVar2 != (float *)0x0);
      }
      else {
        do {
          temp_v5 = *unaff_r5;
          pfVar2 = pfVar2 + -1;
          *unaff_r5 = *pfVar7;
          unaff_r5 = unaff_r5 + 1;
          *pfVar7 = temp_v5;
          pfVar7 = pfVar7 + 1;
        } while (pfVar2 != (float *)0x0);
      }
      unaff_r5 = (float *)((int)unaff_r5 - (int)unaff_r6);
      pfVar7 = (float *)((int)pfVar7 - (int)unaff_r6);
    }
    temp_v4 = (*in_stack_00000118)(pfVar7,pfVar8);
    if (0 < temp_v4) {
      temp_v4 = (*in_stack_00000118)(unaff_r5,pfVar8);
      if (0 < temp_v4) {
        pfVar2 = unaff_r6;
        if ((((unsigned int)unaff_r6 | (unsigned int)unaff_r5) & 3) != 0) {
          do {
            temp_v0 = *(unsigned char *)unaff_r5;
            *(unsigned char *)unaff_r5 = *(unsigned char *)pfVar8;
            *(unsigned char *)pfVar8 = temp_v0;
            unaff_r5 = (float *)((int)unaff_r5 + 1);
            pfVar8 = (float *)((int)pfVar8 + 1);
            pfVar2 = (float *)((int)pfVar2 - 1);
          } while (pfVar2 != (float *)0x0);
        }
        else {
          do {
            temp_v5 = *unaff_r5;
            pfVar2 = pfVar2 + -1;
            *unaff_r5 = *pfVar8;
            unaff_r5 = unaff_r5 + 1;
            *pfVar8 = temp_v5;
            pfVar8 = pfVar8 + 1;
          } while (pfVar2 != (float *)0x0);
        }
        unaff_r5 = (float *)((int)unaff_r5 - (int)unaff_r6);
        pfVar8 = (float *)((int)pfVar8 - (int)unaff_r6);
      }
      pfVar2 = unaff_r6;
      if ((((unsigned int)unaff_r6 | (unsigned int)pfVar7) & 3) != 0) {
        do {
          temp_v0 = *(unsigned char *)pfVar7;
          *(unsigned char *)pfVar7 = *(unsigned char *)pfVar8;
          *(unsigned char *)pfVar8 = temp_v0;
          pfVar7 = (float *)((int)pfVar7 + 1);
          pfVar8 = (float *)((int)pfVar8 + 1);
          pfVar2 = (float *)((int)pfVar2 - 1);
        } while (pfVar2 != (float *)0x0);
      }
      else {
        do {
          temp_v5 = *pfVar7;
          pfVar2 = pfVar2 + -1;
          *pfVar7 = *pfVar8;
          pfVar7 = pfVar7 + 1;
          *pfVar8 = temp_v5;
          pfVar8 = pfVar8 + 1;
        } while (pfVar2 != (float *)0x0);
      }
      pfVar7 = (float *)((int)pfVar7 - (int)unaff_r6);
      pfVar8 = (float *)((int)pfVar8 - (int)unaff_r6);
    }
    pfVar8 = (float *)((int)pfVar8 - (int)unaff_r6);
    pfVar2 = unaff_r6;
    if ((((unsigned int)unaff_r6 | (unsigned int)pfVar7) & 3) != 0) {
      do {
        temp_v0 = *(unsigned char *)pfVar7;
        *(unsigned char *)pfVar7 = *(unsigned char *)pfVar8;
        *(unsigned char *)pfVar8 = temp_v0;
        pfVar7 = (float *)((int)pfVar7 + 1);
        pfVar8 = (float *)((int)pfVar8 + 1);
        pfVar2 = (float *)((int)pfVar2 - 1);
      } while (pfVar2 != (float *)0x0);
    }
    else {
      do {
        temp_v5 = *pfVar7;
        pfVar2 = pfVar2 + -1;
        *pfVar7 = *pfVar8;
        pfVar7 = pfVar7 + 1;
        *pfVar8 = temp_v5;
        pfVar8 = pfVar8 + 1;
      } while (pfVar2 != (float *)0x0);
    }
    pfVar8 = (float *)((int)pfVar8 - (int)unaff_r6);
    unaff_r4 = unaff_r5;
    in_stack_00000100 = pfVar8;
    while( 1 ) {
      do {
        unaff_r4 = (float *)((int)unaff_r4 + (int)unaff_r6);
        temp_v4 = (*in_stack_00000118)(unaff_r4,in_stack_00000100);
      } while (temp_v4 < 0);
      do {
        pfVar8 = (float *)((int)pfVar8 - (int)unaff_r6);
        temp_v4 = (*in_stack_00000118)(pfVar8,in_stack_00000100);
      } while (0 < temp_v4);
      if (pfVar8 <= unaff_r4) break;
      pfVar7 = unaff_r6;
      if ((((unsigned int)unaff_r6 | (unsigned int)unaff_r4) & 3) != 0) {
        do {
          temp_v0 = *(unsigned char *)unaff_r4;
          *(unsigned char *)unaff_r4 = *(unsigned char *)pfVar8;
          *(unsigned char *)pfVar8 = temp_v0;
          unaff_r4 = (float *)((int)unaff_r4 + 1);
          pfVar8 = (float *)((int)pfVar8 + 1);
          pfVar7 = (float *)((int)pfVar7 - 1);
        } while (pfVar7 != (float *)0x0);
      }
      else {
        do {
          temp_v5 = *unaff_r4;
          pfVar7 = pfVar7 + -1;
          *unaff_r4 = *pfVar8;
          unaff_r4 = unaff_r4 + 1;
          *pfVar8 = temp_v5;
          pfVar8 = pfVar8 + 1;
        } while (pfVar7 != (float *)0x0);
      }
      unaff_r4 = (float *)((int)unaff_r4 - (int)unaff_r6);
      pfVar8 = (float *)((int)pfVar8 - (int)unaff_r6);
    }
    pfVar7 = unaff_r6;
    param_1 = unaff_r6;
    if ((((unsigned int)unaff_r6 | (unsigned int)unaff_r4) & 3) == 0) goto code_r0x002b7eba;
    do {
      temp_v0 = *(unsigned char *)unaff_r4;
      *(unsigned char *)unaff_r4 = *(unsigned char *)in_stack_00000100;
      unaff_r4 = (float *)((int)unaff_r4 + 1);
      *(unsigned char *)in_stack_00000100 = temp_v0;
      in_stack_00000100 = (float *)((int)in_stack_00000100 + 1);
      pfVar7 = (float *)((int)pfVar7 - 1);
    } while (pfVar7 != (float *)0x0);
  } while( 1 );
}
