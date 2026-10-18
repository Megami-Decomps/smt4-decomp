/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b6a54` (_code @ 0x2b6a54, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
extern int FUN_002c6a20(int);


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b6a54(float *param_1,unsigned int *param_2)

{
/* irregular: 2 goto(s); irregular input(s): in_cr0, in_cr1, in_cr15, in_cr3, in_cr4, in_cr6, in_cr7, in_r12, in_s0, in_s12, in_s13, in_s14, in_s18, in_s2, in_s6, in_s7, in_s8, in_s9, in_stack_000000f0, in_stack_000000f4, in_stack_000000f8, in_stack_00000108; 23 native warning(s); review required */
  unsigned char temp_v0;
  float *pfVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *unaff_r5;
  float *unaff_r6;
  unsigned int *puVar8;
  float *in_r12;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr3;
  unsigned int in_cr4;
  unsigned int in_cr6;
  unsigned int in_cr7;
  unsigned int in_cr15;
  float in_s0;
  float in_s2;
  float temp_v5;
  float in_s6;
  float in_s7;
  float in_s8;
  float in_s9;
  float in_s12;
  float in_s13;
  float in_s14;
  float in_s18;
  unsigned char uStack0000006c;
  unsigned char uStack00000070;
  unsigned int *in_stack_000000f0;
  int in_stack_000000f4;
  unsigned int in_stack_000000f8;
  romwright_code *in_stack_00000108;
  int uStack_14;
  unsigned char uStack_10;
  
  puVar5 = (unsigned int *)0x0;
  if (param_1 == (float *)0x5) {
    puVar5 = (unsigned int *)0x2;
  }
  else if ((int)param_1 < 6) {
    if (param_1 != (float *)0x3) {
      puVar5 = (unsigned int *)(unsigned int)(param_1 == (float *)0x4);
    }
  }
  else {
    if (param_1 != (float *)0x5c) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar5 = (unsigned int *)0x4;
  }
  temp_v5 = in_s2 - in_s13 * in_s0;
  coprocessor_function(10,0xb,4,in_cr4,in_cr1,in_cr6);
  *param_1 = in_s9;
  param_1[1] = -(in_s12 * in_s2);
  param_1[0x20] = -(in_s12 * in_s2) * in_s9 * temp_v5;
  param_1[10] = in_s0;
  param_1[0xc2] = in_s9;
  coprocessor_function(10,0xb,1,in_cr1,in_cr1,in_cr4);
  *in_r12 = in_s0 * temp_v5 * in_s9 + temp_v5 * in_s9 * in_s7 * in_s9;
  in_r12[1] = in_s14;
  coprocessor_function(10,0xb,0,in_cr0,in_cr1,in_cr3);
  param_1[0x25] = temp_v5 + in_s6 * in_s6 + in_s8 * in_s18;
  coprocessor_function(10,0xb,0,in_cr0,in_cr1,in_cr7);
  param_1[0xb] = in_s7 * in_s9;
  coprocessor_store(0xf,in_cr15,param_1 + 0x1e);
  puVar8 = puVar5;
  while( 1 ) {
    *puVar8 = (unsigned int)puVar5;
    in_stack_000000f0 = in_stack_000000f0 + 1;
    param_1 = param_1 + -1;
    if (param_1 == (float *)0x0) break;
code_r0x002b7b7a:
    puVar5 = (unsigned int *)*param_2;
    *param_2 = *in_stack_000000f0;
    param_2 = param_2 + 1;
    puVar8 = in_stack_000000f0;
  }
  do {
    param_2 = (unsigned int *)((int)param_2 - (int)unaff_r6);
    temp_v1 = FUN_002c6a20((int)param_2 - (int)unaff_r5);
    temp_v2 = temp_v1 - 1;
    temp_v4 = (in_stack_000000f8 - temp_v2) - 1;
    if ((int)temp_v4 < (int)temp_v2) {
      puVar5 = unaff_r5;
      in_stack_000000f8 = temp_v2;
      if ((int)temp_v4 >= 0xb) {
        *(unsigned int **)(&uStack_10 + in_stack_000000f4 * 4) = unaff_r5;
        *(unsigned int *)(&uStack00000070 + in_stack_000000f4 * 4) = temp_v2;
        in_stack_000000f4 = in_stack_000000f4 + 1;
        unaff_r5 = param_2;
        in_stack_000000f8 = temp_v4;
      }
      else {
joined_r0x002b7bb4:
        unaff_r5 = puVar5;
        if ((int)in_stack_000000f8 < 0xb) {
          if (in_stack_000000f4 == 0) {
            return;
          }
          temp_v1 = in_stack_000000f4 * 4;
          unaff_r5 = (unsigned int *)(&uStack_14)[in_stack_000000f4];
          in_stack_000000f4 = in_stack_000000f4 - 1;
          in_stack_000000f8 = *(unsigned int *)(&uStack0000006c + temp_v1);
        }
      }
    }
    else {
      puVar5 = param_2;
      in_stack_000000f8 = temp_v4;
      if ((int)temp_v2 < 0xb) goto joined_r0x002b7bb4;
      *(unsigned int **)(&uStack_10 + in_stack_000000f4 * 4) = param_2;
      *(unsigned int *)(&uStack00000070 + in_stack_000000f4 * 4) = temp_v4;
      in_stack_000000f4 = in_stack_000000f4 + 1;
      in_stack_000000f8 = temp_v2;
    }
    temp_v1 = (int)unaff_r6 * ((int)in_stack_000000f8 >> 1);
    puVar5 = (unsigned int *)((int)unaff_r5 + temp_v1);
    if ((in_stack_000000f8 & 1) == 0) {
      temp_v1 = temp_v1 - (int)unaff_r6;
    }
    puVar8 = (unsigned int *)((int)puVar5 + temp_v1);
    temp_v1 = (*in_stack_00000108)(unaff_r5,puVar5);
    if (0 < temp_v1) {
      pfVar2 = unaff_r6;
      if ((((unsigned int)unaff_r6 | (unsigned int)unaff_r5) & 3) != 0) {
        do {
          temp_v0 = *(unsigned char *)unaff_r5;
          *(unsigned char *)unaff_r5 = *(unsigned char *)puVar5;
          *(unsigned char *)puVar5 = temp_v0;
          unaff_r5 = (unsigned int *)((int)unaff_r5 + 1);
          puVar5 = (unsigned int *)((int)puVar5 + 1);
          pfVar2 = (float *)((int)pfVar2 - 1);
        } while (pfVar2 != (float *)0x0);
      }
      else {
        do {
          temp_v3 = *unaff_r5;
          pfVar2 = pfVar2 + -1;
          *unaff_r5 = *puVar5;
          unaff_r5 = unaff_r5 + 1;
          *puVar5 = temp_v3;
          puVar5 = puVar5 + 1;
        } while (pfVar2 != (float *)0x0);
      }
      unaff_r5 = (unsigned int *)((int)unaff_r5 - (int)unaff_r6);
      puVar5 = (unsigned int *)((int)puVar5 - (int)unaff_r6);
    }
    temp_v1 = (*in_stack_00000108)(puVar5,puVar8);
    if (0 < temp_v1) {
      temp_v1 = (*in_stack_00000108)(unaff_r5,puVar8);
      if (0 < temp_v1) {
        pfVar2 = unaff_r6;
        if ((((unsigned int)unaff_r6 | (unsigned int)unaff_r5) & 3) != 0) {
          do {
            temp_v0 = *(unsigned char *)unaff_r5;
            *(unsigned char *)unaff_r5 = *(unsigned char *)puVar8;
            *(unsigned char *)puVar8 = temp_v0;
            unaff_r5 = (unsigned int *)((int)unaff_r5 + 1);
            puVar8 = (unsigned int *)((int)puVar8 + 1);
            pfVar2 = (float *)((int)pfVar2 - 1);
          } while (pfVar2 != (float *)0x0);
        }
        else {
          do {
            temp_v3 = *unaff_r5;
            pfVar2 = pfVar2 + -1;
            *unaff_r5 = *puVar8;
            unaff_r5 = unaff_r5 + 1;
            *puVar8 = temp_v3;
            puVar8 = puVar8 + 1;
          } while (pfVar2 != (float *)0x0);
        }
        unaff_r5 = (unsigned int *)((int)unaff_r5 - (int)unaff_r6);
        puVar8 = (unsigned int *)((int)puVar8 - (int)unaff_r6);
      }
      pfVar2 = unaff_r6;
      if ((((unsigned int)unaff_r6 | (unsigned int)puVar5) & 3) != 0) {
        do {
          temp_v0 = *(unsigned char *)puVar5;
          *(unsigned char *)puVar5 = *(unsigned char *)puVar8;
          *(unsigned char *)puVar8 = temp_v0;
          puVar5 = (unsigned int *)((int)puVar5 + 1);
          puVar8 = (unsigned int *)((int)puVar8 + 1);
          pfVar2 = (float *)((int)pfVar2 - 1);
        } while (pfVar2 != (float *)0x0);
      }
      else {
        do {
          temp_v3 = *puVar5;
          pfVar2 = pfVar2 + -1;
          *puVar5 = *puVar8;
          puVar5 = puVar5 + 1;
          *puVar8 = temp_v3;
          puVar8 = puVar8 + 1;
        } while (pfVar2 != (float *)0x0);
      }
      puVar5 = (unsigned int *)((int)puVar5 - (int)unaff_r6);
      puVar8 = (unsigned int *)((int)puVar8 - (int)unaff_r6);
    }
    puVar8 = (unsigned int *)((int)puVar8 - (int)unaff_r6);
    pfVar2 = unaff_r6;
    if ((((unsigned int)unaff_r6 | (unsigned int)puVar5) & 3) != 0) {
      do {
        temp_v0 = *(unsigned char *)puVar5;
        *(unsigned char *)puVar5 = *(unsigned char *)puVar8;
        *(unsigned char *)puVar8 = temp_v0;
        puVar5 = (unsigned int *)((int)puVar5 + 1);
        puVar8 = (unsigned int *)((int)puVar8 + 1);
        pfVar2 = (float *)((int)pfVar2 - 1);
      } while (pfVar2 != (float *)0x0);
    }
    else {
      do {
        temp_v3 = *puVar5;
        pfVar2 = pfVar2 + -1;
        *puVar5 = *puVar8;
        puVar5 = puVar5 + 1;
        *puVar8 = temp_v3;
        puVar8 = puVar8 + 1;
      } while (pfVar2 != (float *)0x0);
    }
    puVar8 = (unsigned int *)((int)puVar8 - (int)unaff_r6);
    param_2 = unaff_r5;
    in_stack_000000f0 = puVar8;
    while( 1 ) {
      do {
        param_2 = (unsigned int *)((int)param_2 + (int)unaff_r6);
        temp_v1 = (*in_stack_00000108)(param_2,in_stack_000000f0);
      } while (temp_v1 < 0);
      do {
        puVar8 = (unsigned int *)((int)puVar8 - (int)unaff_r6);
        temp_v1 = (*in_stack_00000108)(puVar8,in_stack_000000f0);
      } while (0 < temp_v1);
      if (puVar8 <= param_2) break;
      pfVar2 = unaff_r6;
      if ((((unsigned int)unaff_r6 | (unsigned int)param_2) & 3) != 0) {
        do {
          temp_v0 = *(unsigned char *)param_2;
          *(unsigned char *)param_2 = *(unsigned char *)puVar8;
          *(unsigned char *)puVar8 = temp_v0;
          param_2 = (unsigned int *)((int)param_2 + 1);
          puVar8 = (unsigned int *)((int)puVar8 + 1);
          pfVar2 = (float *)((int)pfVar2 - 1);
        } while (pfVar2 != (float *)0x0);
      }
      else {
        do {
          temp_v3 = *param_2;
          pfVar2 = pfVar2 + -1;
          *param_2 = *puVar8;
          param_2 = param_2 + 1;
          *puVar8 = temp_v3;
          puVar8 = puVar8 + 1;
        } while (pfVar2 != (float *)0x0);
      }
      param_2 = (unsigned int *)((int)param_2 - (int)unaff_r6);
      puVar8 = (unsigned int *)((int)puVar8 - (int)unaff_r6);
    }
    pfVar2 = unaff_r6;
    param_1 = unaff_r6;
    if ((((unsigned int)unaff_r6 | (unsigned int)param_2) & 3) == 0) goto code_r0x002b7b7a;
    do {
      temp_v0 = *(unsigned char *)param_2;
      *(unsigned char *)param_2 = *(unsigned char *)in_stack_000000f0;
      param_2 = (unsigned int *)((int)param_2 + 1);
      *(unsigned char *)in_stack_000000f0 = temp_v0;
      in_stack_000000f0 = (unsigned int *)((int)in_stack_000000f0 + 1);
      pfVar2 = (float *)((int)pfVar2 - 1);
    } while (pfVar2 != (float *)0x0);
  } while( 1 );
}
