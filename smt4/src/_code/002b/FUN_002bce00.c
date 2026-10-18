/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bce00` (_code @ 0x2bce00, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRam00000024; /* 0x24 */
extern unsigned int DAT_00433158; /* 0x433158 */

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_moveto (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00131780. */
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002bd420. */
extern int FUN_0031c658(unsigned int, unsigned int);


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bce00(unsigned int param_1,unsigned int param_2,unsigned short *param_3)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr10, in_cr13, in_cr2, in_cr3, in_cr5, in_cr8, in_cr9, in_fpscr, in_s2, in_s5; 10 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
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
  unsigned char temp_v3 [4];
  
  FUN_00131780(DAT_00433158,param_1);
  temp_v1 = (int)param_3 << 0x1e;
  *param_3 = 0;
  *(int *)(temp_v2 + 0x54) = temp_v1;
  FUN_002b9024();
  if (temp_v1 == 0) {
    coprocessor_function(10,0xf,1,in_cr0,in_cr8,in_cr0);
    coprocessor_function(0,0xb,0,in_cr0,in_cr13,in_cr9);
    coprocessor_moveto(10,0,0,temp_v3,in_cr1,in_cr10);
    VectorSignedToFloat(*(float *)(temp_v2 + 0x40) - in_s5 * in_s2,(unsigned char)(in_fpscr >> 0x16) & 3)
    ;
    coprocessor_function(10,0xf,4,in_cr2,in_cr8,in_cr3);
  }
  else {
    temp_v0 = *(unsigned char *)(temp_v1 + 2);
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
