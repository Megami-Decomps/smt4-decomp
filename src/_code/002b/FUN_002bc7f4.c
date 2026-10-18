/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bc7f4` (_code @ 0x2bc7f4, 0x1d8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int iRam00000000; /* 0x0 */
extern unsigned int uRam00000024; /* 0x24 */
extern unsigned int DAT_00433158; /* 0x433158 */
extern int *DAT_004c632c; /* 0x4c632c */
extern int DAT_004e3154; /* 0x4e3154 */
extern int DAT_004e3158; /* 0x4e3158 */

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_moveto (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned int FUN_002b52b4(void);
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002bd420. */
extern int FUN_0031c658(unsigned int, unsigned int);


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x002bd2e6) overlaps instruction at (ram,0x002bd2e4)
    */
/* WARNING: Removing unreachable block (ram,0x002bcb58) */
/* WARNING: Removing unreachable block (ram,0x002bcb54) */
/* WARNING: Removing unreachable block (ram,0x002bcb5c) */
/* WARNING: Removing unreachable block (ram,0x002bc68c) */

int * FUN_002bc7f4(int param_1,unsigned int param_2,unsigned int param_3,int param_4,int *param_5,
                  int *param_6)

{
/* irregular: 6 goto(s); irregular input(s): in_cr0, in_cr1, in_cr10, in_cr13, in_cr2, in_cr3, in_cr5, in_cr8, in_cr9, in_fpscr, in_lr, in_s16, in_s2, in_s5, in_stack_00000148; 26 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  int *piVar3;
  int temp_v1;
  int *piVar5;
  unsigned int unaff_r4;
  int unaff_r5;
  int *unaff_r6;
  int *unaff_r7;
  int in_lr;
  int *piVar6;
  unsigned int in_fpscr;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr2;
  unsigned int in_cr3;
  unsigned int in_cr5;
  unsigned int in_cr8;
  unsigned int in_cr9;
  unsigned int in_cr10;
  unsigned int in_cr13;
  float in_s2;
  float in_s5;
  unsigned int in_s16;
  unsigned char uStack00000010;
  unsigned int in_stack_00000148;
  unsigned char temp_v2 [12];
  int iStack_2c;
  unsigned char uStack_8;
  
  piVar5 = (int *)(param_1 - 0x200);
  piVar6 = (int *)&uStack_8;
  switch(piVar5) {
  case (int *)0x0:
    *(short *)(unaff_r5 + (int)piVar5) = (short)unaff_r5;
    piVar2 = (int *)((int)piVar5 * 0x10);
    iStack_2c = (param_4 << 9) >> 8;
    piVar6 = (int *)temp_v2;
    piVar3 = piVar5;
    param_5 = piVar5;
    unaff_r7 = piVar2;
    goto LAB_002bc398;
  case (int *)0x1:
    piVar2 = (int *)0x58;
    piVar3 = DAT_004c632c;
    param_5 = unaff_r6;
LAB_002bc398:
    *(char *)piVar3 = (char)piVar3;
    param_6 = piVar2;
code_r0x002bce2e:
    *(int *)((int)piVar6 - 4) = in_lr;
    *(int **)((int)piVar6 - 8) = param_6;
    *(int **)((int)piVar6 - 0xc) = unaff_r7;
    *(int **)((int)piVar6 - 0x10) = param_5;
    *(int *)((int)piVar6 - 0x14) = unaff_r5;
    piVar6 = (int *)((int)piVar6 - 0x18);
    *piVar6 = (int)piVar3 << 1;
    in_lr = 0x2bce3c;
    FUN_002b9024();
    if (piVar3 == (int *)0x0) {
      piVar6[-1] = in_lr;
      coprocessor_function(10,0xf,1,in_cr0,in_cr8,in_cr0);
      coprocessor_function(0,0xb,0,in_cr0,in_cr13,in_cr9);
      coprocessor_moveto(10,0,0,piVar6 + -1,in_cr1,in_cr10);
      VectorSignedToFloat((float)piVar2[0x10] - in_s5 * in_s2,(unsigned char)(in_fpscr >> 0x16) & 3);
      coprocessor_function(10,0xf,4,in_cr2,in_cr8,in_cr3);
    }
    else {
      temp_v0 = *(unsigned char *)((int)piVar3 + 2);
      temp_v1 = FUN_0031c658(DAT_00433158,(unsigned int)temp_v0);
      if (temp_v1 == 0) {
        FUN_002bd420((unsigned int)temp_v0 << 1);
        uRam00000024 = 0x24;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *piVar6 = 0;
    }
    break;
  case (int *)0x2:
    break;
  case (int *)0x3:
    piVar2 = (int *)(unaff_r4 >> 8);
    coprocessor_load(0,in_cr1,piVar2 + 0x10);
    goto LAB_002bc3f6;
  case (int *)0x4:
    break;
  case (int *)0x5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (int *)0x6:
    coprocessor_function(1,1,0,in_cr1,in_cr0,in_cr2);
    piVar2 = DAT_004c632c;
    piVar6[-1] = in_lr;
    coprocessor_function(10,0xf,1,in_cr0,in_cr8,in_cr0);
    coprocessor_function(0,0xb,0,in_cr0,in_cr13,in_cr9);
    coprocessor_moveto(10,0,0,piVar6 + -1,in_cr1,in_cr10);
    VectorSignedToFloat((float)piVar2[0x10] - in_s5 * in_s2,(unsigned char)(in_fpscr >> 0x16) & 3);
    coprocessor_function(10,0xf,4,in_cr2,in_cr8,in_cr3);
    break;
  case (int *)0x7:
    break;
  case (int *)0x8:
    goto FUN_002bcb1c;
  case (int *)0x9:
    piVar2 = piVar5;
LAB_002bc3f6:
    piVar2 = (int *)((unsigned int)piVar2 >> 8);
    *(unsigned int *)(unaff_r4 + 0x2ec) = in_s16;
    coprocessor_store(0xe,in_cr0,unaff_r4 + 0xbc);
    piVar3 = (int *)(param_1 * 0x40000000);
    *(unsigned short *)piVar5 = 0;
    piVar6 = (int *)&uStack00000010;
    piVar2[0x15] = (int)piVar3;
    goto code_r0x002bce2e;
  case (int *)0xa:
    goto FUN_002bcb1c;
  case (int *)0xb:
    goto FUN_002bcb1c;
  case (int *)0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (int *)0xd:
FUN_002bcb1c:
    if (DAT_004e3158 < 1) {
      return (int *)0x0;
    }
    if (DAT_004e3158 < 1) {
      iRam00000000 = DAT_004e3154;
      DAT_004e3158 = 0xb4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iRam00000000 = DAT_004e3154;
    return (int *)(DAT_004e3154 << 1);
  case (int *)0xe:
    piVar5 = (int *)FUN_002b52b4();
    (**(romwright_code **)(*piVar5 + 0x24))(piVar5);
    return piVar5;
  default:
    return DAT_004c632c;
  }
  coprocessor_function(0,3,0,in_cr5,in_cr2,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
