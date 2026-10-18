/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd3fc` (_code @ 0x2bd3fc, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002bef92) */

void FUN_002bd3fc(unsigned int param_1,int param_2)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr14, in_cr3, in_cr6, in_cr8; 17 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int unaff_r7;
  unsigned int unaff_r8;
  unsigned int unaff_r10;
  int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr3;
  unsigned int in_cr6;
  unsigned int in_cr8;
  unsigned int in_cr14;
  unsigned char uStack000000f0;
  unsigned char uStack_10;
  
  temp_v1 = (unaff_r7 * 0x10 + ((unaff_r8 >> 4) | (unaff_r8 << 0x1c))) & param_1;
  coprocessor_storelong(0,in_cr1,&uStack000000f0);
  temp_v4 = param_1 >> 3 >= 0x68;
  coprocessor_function(0xb,0xb,0,in_cr8,in_cr0,in_cr6);
  coprocessor_load(0,in_cr3,&uStack_10);
  if ((int)temp_v1 < 0) {
    temp_v2 = param_1 + 0xb4000;
    temp_v3 = 0;
    temp_v5 = temp_v4;
    if (temp_v1 == 0) {
      temp_v5 = (unsigned int)(param_2 * 0x800) < unaff_r10 || unaff_r10 + param_2 * -0x800 < (unsigned int)temp_v4;
      temp_v2 = unaff_r10 - (param_2 * 0x800 + (unsigned int)!temp_v4);
      temp_v3 = temp_v2 == 0;
    }
    temp_v4 = 0;
    temp_v6 = temp_v5;
    if (temp_v3) {
      temp_v0 = param_1 * param_2 + temp_v2;
      temp_v6 = (unsigned int)(param_2 * 0x800) < temp_v0 || temp_v0 + param_2 * -0x800 < (unsigned int)temp_v5;
      temp_v2 = temp_v0 - (param_2 * 0x800 + (unsigned int)!temp_v5);
      temp_v4 = temp_v2 == 0;
    }
    temp_v3 = 0;
    if (temp_v4) {
      temp_v3 = (long long)(int)param_1 * (long long)param_2 + romwright_piece_4_4(temp_v1,temp_v2) == 0;
    }
    temp_v4 = 0;
    if (temp_v3) {
      temp_v4 = (long long)(int)param_1 * (long long)param_2 +
              romwright_piece_4_4(param_1,param_2 * 0x800 - (((param_1 >> 3) - 0x68) + (unsigned int)!temp_v6)) == 0;
    }
    if (temp_v4) {
      coprocessor_function(5,0xb,4,in_cr14,in_cr6,in_cr6);
      software_interrupt(0xb8e1d6);
      software_interrupt(0xbae1d7);
    }
    if (temp_v6 && !temp_v4) {
      software_interrupt(0xbce1c6);
      software_interrupt(0xbee1c6);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
