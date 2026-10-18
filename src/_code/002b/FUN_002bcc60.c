/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bcc60` (_code @ 0x2bcc60, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002bcc60_arg2 fn_002bcc60_arg2;
struct fn_002bcc60_arg2 {
    undefined1 field_0x0; /* +0x0 */
    unsigned char pad_0x1[0x27];
    undefined4 field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0xc];
    undefined4 field_0x38; /* +0x38 */
};

typedef int romwright_code();
/* stack frame of param_8: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_8_stack;

extern unsigned int uRam00000024; /* 0x24 */
extern unsigned int DAT_00433158; /* 0x433158 */

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_moveto (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002bd420. */
extern int FUN_0031c658(unsigned int, unsigned int);


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bcc60(unsigned int param_1,int *param_2,fn_002bcc60_arg2 *param_3,unsigned int param_4,
                 int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr10, in_cr13, in_cr2, in_cr3, in_cr5, in_cr8, in_cr9, in_fpscr, in_s2, in_s5; 8 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned char *puVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
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
  unsigned char temp_v4 [4];
  int iStack_78;
  int iStack_74;
  unsigned char *puStack_70;
  int iStack_6c;
  int iStack_68;
  unsigned int uStack_64;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  fn_002bcc60_arg2 *pfStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int temp_v5;
  unsigned int uStack_2c;
  unsigned int temp_v6;
  
  temp_v2 = (param_5 - *param_2) & 0xfffffff8;
  temp_v3 = 0x2bcc9c;
  (*(romwright_code *)param_2[1])(param_4,temp_v2);
  piVar3 = (int *)(temp_v2 - 0x14);
  *(int *)(temp_v2 - 0x18) = param_2[2];
  temp_v1 = param_2[3];
  *(unsigned int *)(temp_v2 - 0xc) = temp_v2;
  *piVar3 = temp_v1;
  *(fn_002bcc60_arg2 **)(temp_v2 - 0x10) = param_3;
  *(char *)(temp_v2 - 4) = (char)param_8;
  *(int *)(temp_v2 - 8) = param_5;
  if (param_6 < 0x21) {
    piVar3 = (int *)((param_6 + 0x20) * 0x10000);
    temp_v5 = param_4;
    uStack_2c = param_1;
  }
  temp_v6 = 0;
  puVar4 = (unsigned char *)piVar3[2];
  iStack_74 = piVar3[3];
  *(short *)(puVar4 + iStack_74) = (short)iStack_74;
  iStack_4c = iStack_74 << 9;
  temp_v1 = (int)puVar4 * 0x10;
  iStack_54 = iStack_4c >> 8;
  uStack_38 = param_8;
  uStack_3c = param_7;
  iStack_44 = param_5;
  *puVar4 = (char)puVar4;
  iStack_78 = (int)puVar4 << 1;
  puStack_70 = puVar4;
  iStack_6c = temp_v1;
  iStack_68 = temp_v1;
  uStack_64 = temp_v3;
  iStack_50 = iStack_74;
  iStack_48 = temp_v1;
  pfStack_40 = param_3;
  uStack_34 = temp_v3;
  FUN_002b9024();
  if (puVar4 == (unsigned char *)0x0) {
    coprocessor_function(10,0xf,1,in_cr0,in_cr8,in_cr0);
    coprocessor_function(0,0xb,0,in_cr0,in_cr13,in_cr9);
    coprocessor_moveto(10,0,0,temp_v4,in_cr1,in_cr10);
    VectorSignedToFloat(*(float *)(temp_v1 + 0x40) - in_s5 * in_s2,(unsigned char)(in_fpscr >> 0x16) & 3);
    coprocessor_function(10,0xf,4,in_cr2,in_cr8,in_cr3);
  }
  else {
    temp_v0 = puVar4[2];
    temp_v1 = FUN_0031c658(DAT_00433158,(unsigned int)temp_v0);
    if (temp_v1 == 0) {
      FUN_002bd420((unsigned int)temp_v0 << 1);
      uRam00000024 = 0x24;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  coprocessor_function(0,3,0,in_cr5,in_cr2,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
