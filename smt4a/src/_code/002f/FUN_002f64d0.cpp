/* NON_MATCHING: found outside every function: called by FUN_002f5d38; not written yet. */
/* romwright 0.5.0 decompilation of FUN_002f64d0 for reference (not compiled; its own view of the boundaries):

/* WARNING: Control flow encountered bad instruction data * /
/* WARNING: Removing unreachable block (ram,0x002f64dc) * /

void FUN_002f64d0(unsigned int param_1,float *param_2,float *param_3)

{
  unsigned int *unaff_r4;
  unsigned int *puVar1;
  int unaff_r5;
  unsigned int *unaff_r6;
  int unaff_r7;
  float *unaff_r8;
  float *unaff_r9;
  int unaff_r10;
  unsigned int *in_r12;
  unsigned int in_lr;
  unsigned char in_CY;
  unsigned char in_OV;
  unsigned int in_fpscr;
  float in_s0;
  float fVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  float in_s2;
  float in_s3;
  unsigned int in_s4;
  unsigned long long in_d8;
  unsigned long long in_d9;
  float fVar7;
  unsigned long long in_d10;
  
  if (!in_CY) {
    if (in_OV) {
      *unaff_r4 = 0x2f64dc;
      unaff_r4[-1] = in_lr;
      unaff_r4[-2] = in_r12;
      unaff_r4[-3] = param_2;
      unaff_r4[-4] = param_1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here * /
    halt_baddata();
  }
  do {
    fVar7 = (float)in_d10;
    fVar2 = (float)VectorUnsignedToFloat(in_s4,(unsigned char)(in_fpscr >> 0x16) & 3);
    *param_2 = in_s2 * fVar7;
    param_2[1] = in_s3 * fVar7;
    param_2[2] = in_s0 * fVar7;
    param_2[3] = fVar2 * fVar7;
    *in_r12 = (int)in_d8;
    in_r12[1] = (int)((unsigned long long)in_d8 >> 0x20);
    in_r12[2] = (int)in_d9;
    in_r12[3] = (int)((unsigned long long)in_d9 >> 0x20);
    *unaff_r8 = *unaff_r8 * *unaff_r9;
    unaff_r8[1] = unaff_r8[1] * unaff_r9[1];
    unaff_r8[2] = unaff_r8[2] * unaff_r9[2];
    unaff_r8[3] = unaff_r8[3] * unaff_r9[3];
    fVar2 = (float)((unsigned long long)in_d10 >> 0x20);
    iVar3 = VectorFloatToUnsigned(*param_3 * fVar2,3);
    uVar6 = VectorFloatToUnsigned(param_3[1] * fVar2,3);
    uVar4 = VectorFloatToUnsigned(param_3[2] * fVar2,3);
    uVar5 = VectorFloatToUnsigned(param_2[3] * fVar2,3);
    FUN_001b4c1c(*unaff_r6,
                 (uVar5 & 0xff) | (iVar3 << 0x18) | ((uVar6 & 0xff) << 0x10) | ((uVar4 & 0xff) << 8)
                );
    FUN_00182540(*unaff_r6);
    do {
      puVar1 = unaff_r4;
      unaff_r7 = unaff_r7 + 1;
      unaff_r4 = puVar1 + 10;
      unaff_r6 = unaff_r6 + 1;
      if (unaff_r5 <= unaff_r7) {
        return;
      }
    } while ((int)puVar1[0xe] < 0);
    uVar4 = puVar1[0xf];
    param_2 = (float *)(unaff_r10 + 0x100);
    in_r12 = (unsigned int *)(unaff_r10 + 0x110);
    unaff_r9 = (float *)(unaff_r10 + 0x110);
    unaff_r8 = (float *)(unaff_r10 + 0x100);
    in_s3 = (float)VectorUnsignedToFloat((uVar4 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
    in_s4 = uVar4 & 0xff;
    in_s0 = (float)VectorUnsignedToFloat((uVar4 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
    in_s2 = (float)VectorUnsignedToFloat(uVar4 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
    param_3 = param_2;
  } while( 1 );
}
*/
#include "common.h"
