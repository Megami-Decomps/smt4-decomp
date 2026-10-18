/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd688` (_code @ 0x2bd688, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRam00000038; /* 0x38 */
extern float fRam00000040; /* 0x40 */
extern unsigned int uRam00000048; /* 0x48 */
extern unsigned int uRam00000058; /* 0x58 */
extern unsigned int uRam00000068; /* 0x68 */
extern char s__6_6_6_6_6_6_6_6_7_6_0044e8b0[65]; /* 0x44e8b0 */

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_movefromRt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_moveto (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: func_0x006befd4. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002bef92) */

unsigned int FUN_002bd688(unsigned int *param_1)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr10, in_cr13, in_cr14, in_cr2, in_cr3, in_cr5, in_cr6, in_cr8, in_cr9, in_fpscr, in_lr, in_s0, in_s2, in_s5; 32 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned int temp_v5;
  unsigned int unaff_r4;
  short *unaff_r5;
  int unaff_r6;
  unsigned int unaff_r10;
  unsigned int in_lr;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned int *puVar12;
  unsigned int in_fpscr;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr2;
  unsigned int in_cr3;
  unsigned int in_cr5;
  unsigned int in_cr6;
  unsigned int in_cr8;
  unsigned int in_cr9;
  unsigned int in_cr10;
  unsigned int in_cr13;
  unsigned int in_cr14;
  unsigned int in_s0;
  float in_s2;
  float in_s5;
  
  while( 1 ) {
    *(unsigned int *)((int)register0x00000054 - 4) = in_lr;
    puVar12 = (unsigned int *)((int)register0x00000054 - 8);
    *puVar12 = unaff_r4;
    piVar6 = (int *)*param_1;
    unaff_r4 = 0;
    temp_v2 = *piVar6;
    if (temp_v2 == 0x20000009) {
      temp_v2 = 0x20000009;
      piVar2 = (int *)0x0;
      while (piVar2 != (int *)0x0) {
        temp_v2 = *(int *)(*(int *)(temp_v2 + 0x70) + 0x70);
        piVar6 = (int *)((int)piVar6 - 1);
        piVar2 = piVar6;
      }
      if ((temp_v2 != 0) && ((*(unsigned int *)(temp_v2 + 0x90) & 2) != 0)) {
        return 1;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (temp_v2 < 0x2000000a) break;
    param_1 = (unsigned int *)((int)piVar6 >> 0x20);
    *unaff_r5 = (short)((int)piVar6 >> 0x1f);
    register0x00000054 = (BADSPACEBASE *)puVar12;
  }
  if (temp_v2 == 0x20000002) {
    coprocessor_function(10,0xf,4,in_cr1,in_cr8,in_cr2);
    temp_v3 = coprocessor_movefromRt(10,1,4,in_cr1,in_cr0);
    coprocessor_moveto(10,0,0,temp_v3,in_cr0,in_cr10);
    coprocessor_function(10,0xf,1,in_cr0,in_cr8,in_cr0);
    coprocessor_function(0,0xb,0,in_cr0,in_cr13,in_cr9);
    coprocessor_moveto(10,0,0,puVar12,in_cr1,in_cr10);
    VectorSignedToFloat(fRam00000040 - in_s5 * in_s2,(unsigned char)(in_fpscr >> 0x16) & 3);
    coprocessor_function(10,0xf,4,in_cr2,in_cr8,in_cr3);
    coprocessor_function(0,3,0,in_cr5,in_cr2,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x006befd4(s__6_6_6_6_6_6_6_6_7_6_0044e8b0,temp_v2,0x89d16000);
  temp_v5 = temp_v4 * 2;
  *(unsigned int *)(temp_v4 + 8) = temp_v5;
  *(char *)(temp_v4 + 2) = (char)temp_v5;
  uRam00000038 = in_s0;
  uRam00000048 = in_s0;
  uRam00000058 = in_s0;
  uRam00000068 = in_s0;
  coprocessor_store(0,in_cr1,500);
  temp_v1 = (temp_v4 >> 0x20) & ((int)temp_v5 >> 0x1f);
  coprocessor_storelong(0,in_cr1,(unsigned int *)((int)register0x00000054 + 0xf8));
  temp_v7 = temp_v5 >= 0x68;
  coprocessor_function(0xb,0xb,0,in_cr8,in_cr0,in_cr6);
  coprocessor_load(0,in_cr3,puVar12);
  if ((int)temp_v1 < 0) {
    temp_v2 = temp_v4 + 0xb4000;
    temp_v6 = 0;
    temp_v8 = temp_v7;
    if (temp_v1 == 0) {
      temp_v8 = (unsigned int)(unaff_r6 * 0x800) < unaff_r10 || unaff_r10 + unaff_r6 * -0x800 < (unsigned int)temp_v7;
      temp_v2 = unaff_r10 - (unaff_r6 * 0x800 + (unsigned int)!temp_v7);
      temp_v6 = temp_v2 == 0;
    }
    temp_v7 = 0;
    temp_v9 = temp_v8;
    if (temp_v6) {
      temp_v0 = (int)unaff_r5 * unaff_r6 + temp_v2;
      temp_v9 = (unsigned int)(unaff_r6 * 0x800) < temp_v0 || temp_v0 + unaff_r6 * -0x800 < (unsigned int)temp_v8;
      temp_v2 = temp_v0 - (unaff_r6 * 0x800 + (unsigned int)!temp_v8);
      temp_v7 = temp_v2 == 0;
    }
    temp_v6 = 0;
    if (temp_v7) {
      temp_v6 = (long long)(int)unaff_r5 * (long long)unaff_r6 + romwright_piece_4_4(temp_v1,temp_v2) == 0;
    }
    temp_v7 = 0;
    if (temp_v6) {
      temp_v7 = (long long)(int)unaff_r5 * (long long)unaff_r6 +
              romwright_piece_4_4((int)temp_v5 >> 0x1f,unaff_r6 * 0x800 - ((temp_v5 - 0x68) + (unsigned int)!temp_v9)) == 0;
    }
    if (temp_v7) {
      coprocessor_function(5,0xb,4,in_cr14,in_cr6,in_cr6);
      software_interrupt(0xb8e1d6);
      software_interrupt(0xbae1d7);
    }
    if (temp_v9 && !temp_v7) {
      software_interrupt(0xbce1c6);
      software_interrupt(0xbee1c6);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
