/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00135b64` (_code @ 0x135b64, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001003ea(unsigned int *, unsigned int *, int);
int FUN_00100b14(unsigned int *, unsigned int *, int);
int FUN_001028f4(void);
int FUN_00102984(void);
int FUN_002e31ea(unsigned int *);
int FUN_002e6e14(void);
int FUN_003077e8(void);
int SBORROW4(...);
int coprocessor_loadlong(int, unsigned int, unsigned int *);
int halt_baddata(void);
int romwright_set_sp(unsigned int);

typedef int romwright_code(...);
/* Unsupported intrinsic, declaration required: romwright_set_sp (a write of the stack pointer). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: coprocessor_loadlong (CALLOTHER). */
/* Supplied declaration required: FUN_001003ea. */
/* Supplied declaration required: FUN_00100b14. */
extern unsigned int FUN_00100c50(unsigned int *, int, int, unsigned int);
/* Supplied declaration required: FUN_001028f4. */
/* Supplied declaration required: FUN_00102984. */
/* Supplied declaration required: FUN_002e31ea. */
extern unsigned int FUN_002e3216(unsigned int *);
extern unsigned long long FUN_002e354a(unsigned int, unsigned int *, unsigned int *, unsigned int);
extern int FUN_002e3f88(unsigned int, unsigned short, unsigned int);
/* Supplied declaration required: FUN_002e6e14. */
extern int vectorCount4_002f1370(void);
/* Supplied declaration required: FUN_003077e8. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00100d5e) */
/* WARNING: Removing unreachable block (ram,0x00100afc) */
/* WARNING: Removing unreachable block (ram,0x00100aec) */
/* WARNING: Removing unreachable block (ram,0x00100b04) */
/* WARNING: Removing unreachable block (ram,0x00100b10) */
/* WARNING: Removing unreachable block (ram,0x00101e8c) */
/* WARNING: Removing unreachable block (ram,0x00101e80) */
/* WARNING: Removing unreachable block (ram,0x00100d46) */
/* WARNING: Removing unreachable block (ram,0x00100b0c) */

unsigned int * FUN_00135b64(unsigned int *param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4)

{
/* irregular: 1 unstructured edge(s); irregular input(s): in_cr11; 28 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar7;
  unsigned int unaff_r4;
  unsigned int unaff_r5;
  unsigned int *unaff_r6;
  unsigned int unaff_r7;
  unsigned int unaff_r8;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned int in_cr11;
  unsigned long long temp_v11;
  unsigned char temp_v12 [40];
  
  if (param_2 == 0x6e) {
    temp_v0 = *(unsigned char *)(param_4 + -0x280);
    temp_v5 = unaff_r8 & 0x1b800;
    *(unsigned int *)(temp_v5 - 4) = *param_4;
    *(unsigned int *)(temp_v5 - 8) = unaff_r7;
    *(unsigned int *)(temp_v5 - 0xc) = (unsigned int)temp_v0;
    *(unsigned int *)(temp_v5 - 0x10) = unaff_r5;
    *(unsigned int *)(temp_v5 - 0x14) = unaff_r4;
    *(unsigned int **)(temp_v5 - 0x18) = param_3;
    *(unsigned int *)(temp_v5 - 0x1c) = 0x6e;
    *(unsigned int **)(temp_v5 - 0x20) = param_1;
    temp_v3 = 0;
    temp_v1 = 0;
    *(unsigned int *)(temp_v5 - 0x38) = 0;
    *(unsigned int *)(temp_v5 - 0x34) = 0;
    while ((((int)(*param_1 << 0x1a) >= 0 || ((int)param_1[7] > temp_v3)) &&
           (((int)param_3 > temp_v1 || (*(short *)(*(int *)(temp_v5 - 0x1c) + temp_v1 * 2) != 0))))) {
      temp_v4 = FUN_002e3f88(temp_v5 - 0x30,*(unsigned short *)(*(int *)(temp_v5 - 0x1c) + temp_v1 * 2),
                           temp_v5 - 0x38);
      if (temp_v4 != -1) {
        if (((int)(*param_1 << 0x1a) < 0) && (param_1[7] < (unsigned int)(temp_v3 + temp_v4))) break;
        temp_v3 = temp_v3 + temp_v4;
      }
      temp_v1 = temp_v1 + 1;
    }
    param_1[6] = param_1[6] - temp_v3;
    FUN_002e31ea(param_1);
    *(unsigned int *)(temp_v5 - 0x38) = 0;
    *(unsigned int *)(temp_v5 - 0x34) = 0;
    temp_v4 = 0;
    while (*(int *)(temp_v5 - 0x28) = temp_v4, temp_v4 < temp_v1) {
      temp_v4 = FUN_002e3f88(temp_v5 - 0x30,*(unsigned short *)(*(int *)(temp_v5 - 0x1c) + temp_v4 * 2),
                           temp_v5 - 0x38);
      *(int *)(temp_v5 - 0x24) = temp_v4;
      if (temp_v4 != -1) {
        for (temp_v2 = 0; temp_v2 < *(unsigned int *)(temp_v5 - 0x24); temp_v2 = temp_v2 + 1) {
          (*(romwright_code *)param_1[1])(*(unsigned char *)((temp_v5 - 0x30) + temp_v2),param_1[2]);
        }
      }
      temp_v4 = *(int *)(temp_v5 - 0x28) + 1;
    }
    param_1[8] = param_1[8] + temp_v3;
    puVar7 = (unsigned int *)FUN_002e3216(param_1);
    return puVar7;
  }
  if (param_2 == 0x70) {
    puVar7 = (unsigned int *)0x0;
    do {
      temp_v2 = *param_1;
      if ((unsigned int)(unsigned char)temp_v2 == (unsigned int)param_4 >> 0x18) {
        puVar7 = param_1;
      }
      param_1 = (unsigned int *)((int)param_1 + 1);
    } while ((unsigned char)temp_v2 != 0);
    return puVar7;
  }
  if (((param_2 == 0x66) || (param_2 == 0x65)) || (param_2 == 0x67)) {
    puVar7 = (unsigned int *)(*(romwright_code *)0x2e4599)();
    return puVar7;
  }
  if (param_2 == 0x61) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((unsigned char)((unsigned char)(*param_1 >> 7) & 1)) {
    param_2 = param_2 | 0x80;
  }
  if (((param_2 == 0x69) || (param_2 == 100)) || (param_2 == 0x75)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2 == 0x6f) {
    temp_v11 = FUN_002e354a(*param_3,param_1,param_3,*param_1 >> 8);
    puVar7 = (unsigned int *)FUN_00100c50(param_1,(int)((unsigned long long)temp_v11 >> 0x20),(int)temp_v11,0);
    return puVar7;
  }
  if (param_2 == 0x78) {
    puVar7 = (unsigned int *)(*(romwright_code *)0x100d21)();
    return puVar7;
  }
  temp_v9 = param_2 >= 0xe9;
  temp_v10 = SBORROW4(param_2,0xe9);
  temp_v6 = (int)(param_2 - 0xe9) < 0;
  temp_v7 = param_2 == 0xe9;
  if (!temp_v7) {
    temp_v9 = param_2 >= 0xe4;
    temp_v10 = SBORROW4(param_2,0xe4);
    temp_v6 = (int)(param_2 - 0xe4) < 0;
    temp_v7 = param_2 == 0xe4;
    if (!temp_v7) {
      temp_v9 = param_2 >= 0xf5;
      temp_v10 = SBORROW4(param_2,0xf5);
      temp_v6 = (int)(param_2 - 0xf5) < 0;
      temp_v7 = param_2 == 0xf5;
      if (!temp_v7) {
        if (param_2 == 0xef) {
          puVar7 = (unsigned int *)(*(romwright_code *)0x100cad)();
          return puVar7;
        }
        if (param_2 == 0xf8) {
          puVar7 = (unsigned int *)(*(romwright_code *)0x100d3d)();
          return puVar7;
        }
        if ((unsigned char)((unsigned char)(*param_1 >> 6) & 1)) {
          param_2 = param_2 | 0x80;
        }
        if (param_2 == 99) {
          *(unsigned char *)(param_1 + 9) = (unsigned char)*param_3;
          *(unsigned char *)((int)param_1 + 0x25) = 0;
          if (param_1[5] != 0) {
            FUN_001028f4();
          }
          else {
            FUN_001003ea(param_1,param_1 + 9,1);
          }
          return (unsigned int *)0x1;
        }
        if (param_2 == 0x73) {
          puVar7 = (unsigned int *)(*(romwright_code *)0x1003e3)();
          return puVar7;
        }
        if (param_2 == 0xe3) {
          *(short *)(param_1 + 9) = (short)*param_3;
          ((unsigned char *)((int)param_1 + 0x26))[0] = 0;
          ((unsigned char *)((int)param_1 + 0x26))[1] = 0;
          if (param_1[5] != 0) {
            FUN_00102984();
          }
          else {
            FUN_00100b14(param_1,param_1 + 9,1);
          }
          return (unsigned int *)0x1;
        }
        if (param_2 == 0xf3) {
          puVar7 = (unsigned int *)(*(romwright_code *)0x100e5b)();
          return puVar7;
        }
        return (unsigned int *)0x0;
      }
    }
  }
  if (!temp_v7) {
    coprocessor_loadlong(5,in_cr11,param_3 + 0xf7);
    temp_v8 = temp_v9;
  }
  else {
    romwright_set_sp((unsigned int)((unsigned int *)param_3[2]));
    puVar1 = (unsigned int *)(unaff_r5 << (unaff_r5 & 0xff));
    temp_v8 = puVar1 < param_3 || (unsigned int)((int)param_3 - (int)puVar1) < (unsigned int)temp_v9;
    temp_v10 = SBORROW4((int)param_3,(int)puVar1) !=
             SBORROW4((int)param_3 - (int)puVar1,(unsigned int)!temp_v9);
    temp_v6 = (int)param_3 - (int)((int)puVar1 + (unsigned int)!temp_v9) < 0;
    temp_v7 = param_3 == (unsigned int *)((int)puVar1 + (unsigned int)!temp_v9);
  }
  if (!(temp_v7 || temp_v6 != temp_v10)) {
    return (unsigned int *)0x0;
  }
  if (temp_v8) {
    FUN_003077e8();
    temp_v1 = vectorCount4_002f1370();
    for (temp_v2 = *unaff_r6; temp_v2 != unaff_r6[1]; temp_v2 = temp_v2 + 4) {
    }
    FUN_002e6e14();
    temp_v3 = *(int *)((unsigned int)__current_sp());
    *unaff_r6 = unaff_r5;
    temp_v4 = *(int *)((int)((unsigned int)__current_sp()) + 4);
    unaff_r6[1] = temp_v1 * 4 + unaff_r5 + temp_v3;
    unaff_r6[2] = temp_v4 + unaff_r5;
    return (unsigned int *)(temp_v4 + unaff_r5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

} /* extern "C" */
