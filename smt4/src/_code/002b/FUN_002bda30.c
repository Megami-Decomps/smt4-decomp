/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bda30` (_code @ 0x2bda30, 0x114 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char uRam00000085; /* 0x85 */
extern int iRam000000c0; /* 0xc0 */

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_moveto (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_002be304. */
extern unsigned long long func_0x006be38c(void);


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bda30(unsigned int param_1,int param_2,unsigned char *param_3)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr10, in_cr13, in_cr2, in_cr3, in_cr5, in_cr8, in_cr9, in_fpscr, in_s2, in_s5; 21 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned char *puVar4;
  int temp_v2;
  int unaff_r6;
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
  unsigned long long temp_v3;
  unsigned char temp_v4 [8];
  int iStack_50;
  unsigned char *puStack_44;
  int iStack_40;
  unsigned char *puStack_3c;
  unsigned char temp_v5 [4];
  
  temp_v1 = param_1;
  if (param_2 != 0) {
    temp_v1 = (unsigned int)*(unsigned char *)(param_1 + 0x8b);
  }
  if (param_2 == 0 || temp_v1 == 2) {
    coprocessor_function(10,0xf,1,in_cr0,in_cr8,in_cr0);
    coprocessor_function(0,0xb,0,in_cr0,in_cr13,in_cr9);
    coprocessor_moveto(10,0,0,temp_v5,in_cr1,in_cr10);
    VectorSignedToFloat(*(float *)(param_1 + 0x40) - in_s5 * in_s2,(unsigned char)(in_fpscr >> 0x16) & 3);
    coprocessor_function(10,0xf,4,in_cr2,in_cr8,in_cr3);
    coprocessor_function(0,3,0,in_cr5,in_cr2,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  temp_v2 = unaff_r6 * 0x80;
  *(unsigned short *)(param_3 + temp_v2) = 0xf4;
  *(short *)(param_3 + temp_v2) = (short)temp_v2;
  iStack_40 = (int)param_3 << 4;
  puVar4 = temp_v4;
  iStack_50 = -(int)param_3;
  puStack_44 = param_3;
  puStack_3c = param_3;
  if (unaff_r6 != 0) {
    temp_v2 = iStack_50;
    if (0 < (int)param_3) {
      temp_v2 = 0x8400ff;
    }
    if (param_3 == (unsigned char *)0x0) {
      temp_v2 = 0x787878ff;
    }
    if (-1 < (int)param_3) {
      FUN_002be304(temp_v2);
      VectorFloatToUnsigned(in_s2,3);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    temp_v3 = FUN_002be304(0xdc0f14ff);
    puVar4 = param_3;
  }
  else {
    FUN_002be304(0xff);
    temp_v3 = func_0x006be38c();
  }
  puVar3 = (unsigned short *)((unsigned long long)temp_v3 >> 0x20);
  *puVar3 = (short)temp_v3;
  *(unsigned char *)((int)puVar3 * 2) = 0;
  temp_v0 = *(unsigned char *)temp_v3;
  temp_v1 = (unsigned int)temp_v0;
  *(short *)(unaff_r6 + (int)puVar3) = (short)temp_v3;
  *(unsigned char *)(unaff_r6 + 0xd) = temp_v0;
  *(unsigned int *)(temp_v1 + 0x44) = temp_v1;
  *(unsigned int *)(unaff_r6 + (int)puVar3) = temp_v1 + 0x73;
  *(char *)(temp_v1 + 0x84) = (char)((unsigned long long)temp_v3 >> 0x20);
  iRam000000c0 = *(int *)(temp_v1 + 0x77);
  uRam00000085 = 0;
  *(unsigned int *)(temp_v1 + 0x73 + iRam000000c0 + (unsigned int)(0xffffff8c < temp_v1) + 0x54) =
       *(unsigned int *)(puVar4 + 0x74);
  (*(romwright_code *)0xffffffff)();
  return;
}
