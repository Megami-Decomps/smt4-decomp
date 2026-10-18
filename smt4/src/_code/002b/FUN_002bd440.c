/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd440` (_code @ 0x2bd440, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int iRam00000000; /* 0x0 */
extern unsigned int uRam00000024; /* 0x24 */
extern unsigned int DAT_00433158; /* 0x433158 */
extern int DAT_00472364; /* 0x472364 */
extern int DAT_004e3154; /* 0x4e3154 */
extern int DAT_004e3158; /* 0x4e3158 */

/* Unsupported intrinsic, declaration required: SCARRY4 (INT_SCARRY). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_moveto (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
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

unsigned long long
FUN_002bd440(unsigned int param_1,unsigned int param_2,unsigned short *param_3,unsigned int param_4,
            unsigned int param_5,int param_6,int param_7,unsigned int param_8,
            unsigned int param_9,unsigned int param_10)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr10, in_cr13, in_cr2, in_cr3, in_cr5, in_cr8, in_cr9, in_fpscr, in_s2, in_s5; 16 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int unaff_r4;
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
  unsigned int uStack00000018;
  unsigned int uStack0000001c;
  
  if ((DAT_00472364 & 1) == 0) {
    temp_v2 = DAT_00472364 + 0x2c;
    if ((int)temp_v2 < 0) {
      uStack0000001c = temp_v2 & ((unsigned int)&param_7 >> 0x12);
    }
    else {
      uStack0000001c = unaff_r4 & (temp_v2 >> 3);
    }
    if (SCARRY4(DAT_00472364,0x2c)) {
      uStack0000001c = param_2 & (temp_v2 * 0x20);
    }
    temp_v1 = (int)param_3 << 0x1e;
    *param_3 = 0;
    *(int *)(param_2 + 0x54) = temp_v1;
    param_7 = (int)param_3 << 0x1f;
    uStack00000018 = param_10;
    FUN_002b9024();
    if (temp_v1 == 0) {
      coprocessor_function(10,0xf,1,in_cr0,in_cr8,in_cr0);
      coprocessor_function(0,0xb,0,in_cr0,in_cr13,in_cr9);
      coprocessor_moveto(10,0,0,&param_6,in_cr1,in_cr10);
      VectorSignedToFloat(*(float *)(param_2 + 0x40) - in_s5 * in_s2,(unsigned char)(in_fpscr >> 0x16) & 3);
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
  if (0 < DAT_004e3158) {
    if (DAT_004e3158 < 1) {
      iRam00000000 = DAT_004e3154;
      DAT_004e3158 = 0xb4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iRam00000000 = DAT_004e3154;
    return romwright_piece_4_4(((int)param_2 >> 2) << (param_2 & 0xff),DAT_004e3154 << 1);
  }
  return 0x4e315400000000;
}
