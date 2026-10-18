/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb99c` (_code @ 0x2bb99c, 0x15c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRam00000024; /* 0x24 */
extern unsigned int DAT_00433158; /* 0x433158 */
extern int DAT_004652a0; /* 0x4652a0 */
extern unsigned int DAT_00476638; /* 0x476638 */
extern unsigned int DAT_004efd9c; /* 0x4efd9c */
extern unsigned int DAT_004efda0; /* 0x4efda0 */
extern unsigned int DAT_004efda4; /* 0x4efda4 */
extern unsigned int DAT_004efda8; /* 0x4efda8 */
extern unsigned int DAT_004efdac; /* 0x4efdac */
extern unsigned int DAT_004efdb0; /* 0x4efdb0 */
extern float DAT_004efdec; /* 0x4efdec */

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_moveto (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0023ae58. */
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002bd420. */
extern int FUN_002bfefc(unsigned int *);
extern int FUN_002c1850(unsigned int);
extern int FUN_0031c658(unsigned int, unsigned int);


/* WARNING: Control flow encountered bad instruction data */

int FUN_002bb99c(unsigned int *param_1,unsigned int param_2,unsigned char *param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_ZR, in_cr0, in_cr1, in_cr10, in_cr13, in_cr2, in_cr3, in_cr5, in_cr8, in_cr9, in_fpscr, in_s2, in_s5; 12 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int unaff_r4;
  int unaff_r6;
  int unaff_r7;
  char in_ZR;
  unsigned char temp_v3;
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
  int iStack_5c;
  
  if (in_ZR != '\0') {
    *param_1 = (unsigned char)param_3[unaff_r6] | 0x80000000;
    param_1[1] = param_4;
    FUN_0023ae58(param_1 + 2,param_2,0xff02c1);
    DAT_004652a0 = (((int)param_1 + (0x50 - unaff_r7)) & 0xfffffffcU) + DAT_004652a0;
    return DAT_004652a0;
  }
  if ((((unsigned int)param_1 & 1) == 0) && (temp_v1 = FUN_002bfefc(&DAT_00476638), temp_v1 != 0)) {
    DAT_004efd9c = 0x3f800000;
    DAT_004efda0 = 0;
    DAT_004efda4 = 0;
    DAT_004efda8 = 0;
    DAT_004efdac = 0;
    DAT_004efdb0 = 0x3f800000;
    *param_3 = (char)param_3;
    iStack_5c = (int)param_3 << 1;
    FUN_002b9024();
    if (param_3 == (unsigned char *)0x0) {
      coprocessor_function(10,0xf,1,in_cr0,in_cr8,in_cr0);
      coprocessor_function(0,0xb,0,in_cr0,in_cr13,in_cr9);
      coprocessor_moveto(10,0,0,temp_v4,in_cr1,in_cr10);
      VectorSignedToFloat(DAT_004efdec - in_s5 * in_s2,(unsigned char)(in_fpscr >> 0x16) & 3);
      coprocessor_function(10,0xf,4,in_cr2,in_cr8,in_cr3);
    }
    else {
      temp_v0 = param_3[2];
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
  temp_v3 = (((int)param_4 >> 0x1f) & 1U) != 0;
  while( 1 ) {
    if (temp_v3) {
      temp_v1 = 0;
    }
    else {
      temp_v1 = unaff_r6 + unaff_r4 * 0x78;
    }
    temp_v2 = FUN_002c1850(*(unsigned int *)(temp_v1 + 0x48));
    if (temp_v2 != 0) break;
    unaff_r4 = unaff_r4 + 1;
    if ((int)unaff_r4 >= 4) {
      return 0;
    }
    temp_v3 = unaff_r4 >= 4;
  }
  if (temp_v1 == 0) {
    return 0;
  }
  return 1;
}
