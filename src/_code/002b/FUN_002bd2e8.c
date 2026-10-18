/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd2e8` (_code @ 0x2bd2e8, 0x60 bytes) from smt4.cxi.
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

void FUN_002bd2e8(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr14, in_cr3, in_cr6, in_cr8; 17 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int unaff_r7;
  unsigned int unaff_r8;
  unsigned int unaff_r10;
  int temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr3;
  unsigned int in_cr6;
  unsigned int in_cr8;
  unsigned int in_cr14;
  unsigned char uStack000000f0;
  unsigned char uStack_10;
  
  *(unsigned int *)(param_2 * 0x8000) = param_2 * 0x4000;
  temp_v0 = (unsigned int)((int)param_2 >> 0xe) >> 8;
  temp_v2 = (int)temp_v0 >> 2;
  temp_v1 = (unaff_r7 * 0x10 + ((unaff_r8 >> 4) | (unaff_r8 << 0x1c))) & param_2;
  coprocessor_storelong(0,in_cr1,&uStack000000f0);
  temp_v5 = temp_v2 >> 3 >= 0x68;
  coprocessor_function(0xb,0xb,0,in_cr8,in_cr0,in_cr6);
  coprocessor_load(0,in_cr3,&uStack_10);
  if ((int)temp_v1 < 0) {
    temp_v3 = temp_v0 + 0xb4000;
    temp_v4 = 0;
    temp_v6 = temp_v5;
    if (temp_v1 == 0) {
      temp_v6 = param_2 * 0x800 < unaff_r10 || unaff_r10 + param_2 * -0x800 < (unsigned int)temp_v5;
      temp_v3 = unaff_r10 - (param_2 * 0x800 + (unsigned int)!temp_v5);
      temp_v4 = temp_v3 == 0;
    }
    temp_v5 = 0;
    temp_v7 = temp_v6;
    if (temp_v4) {
      temp_v0 = temp_v2 * param_2 + temp_v3;
      temp_v7 = param_2 * 0x800 < temp_v0 || temp_v0 + param_2 * -0x800 < (unsigned int)temp_v6;
      temp_v3 = temp_v0 - (param_2 * 0x800 + (unsigned int)!temp_v6);
      temp_v5 = temp_v3 == 0;
    }
    temp_v4 = 0;
    if (temp_v5) {
      temp_v4 = (long long)(int)temp_v2 * (long long)(int)param_2 + romwright_piece_4_4(temp_v1,temp_v3) == 0;
    }
    temp_v5 = 0;
    if (temp_v4) {
      temp_v5 = (long long)(int)temp_v2 * (long long)(int)param_2 +
              romwright_piece_4_4(param_2,param_2 * 0x800 - (((temp_v2 >> 3) - 0x68) + (unsigned int)!temp_v7)) == 0;
    }
    if (temp_v5) {
      coprocessor_function(5,0xb,4,in_cr14,in_cr6,in_cr6);
      software_interrupt(0xb8e1d6);
      software_interrupt(0xbae1d7);
    }
    if (temp_v7 && !temp_v5) {
      software_interrupt(0xbce1c6);
      software_interrupt(0xbee1c6);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
