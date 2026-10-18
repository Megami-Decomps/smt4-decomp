/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf75c` (_code @ 0x2bf75c, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRam00000038; /* 0x38 */
extern unsigned int uRam00000048; /* 0x48 */
extern unsigned int uRam00000058; /* 0x58 */
extern unsigned int uRam00000068; /* 0x68 */

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
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

void FUN_002bf75c(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr14, in_cr3, in_cr6, in_cr8, in_s0; 20 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  unsigned int unaff_r10;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr3;
  unsigned int in_cr6;
  unsigned int in_cr8;
  unsigned int in_cr14;
  unsigned int in_s0;
  unsigned char uStack00000000;
  unsigned char uStack00000100;
  
  *(int *)(param_2 + 8) = param_1;
  *(char *)(param_1 + 0x1e) = (char)param_2;
  uRam00000038 = in_s0;
  uRam00000048 = in_s0;
  uRam00000058 = in_s0;
  uRam00000068 = in_s0;
  coprocessor_store(0,in_cr1,500);
  temp_v1 = ((param_1 + 0x1c) >> 0x20) & unaff_r4;
  coprocessor_storelong(0,in_cr1,&uStack00000100);
  temp_v3 = param_2 >= 0x68;
  coprocessor_function(0xb,0xb,0,in_cr8,in_cr0,in_cr6);
  coprocessor_load(0,in_cr3,&uStack00000000);
  if ((int)temp_v1 < 0) {
    param_1 = param_1 + 0xb401c;
    temp_v2 = 0;
    temp_v4 = temp_v3;
    if (temp_v1 == 0) {
      temp_v4 = (unsigned int)(unaff_r6 * 0x800) < unaff_r10 || unaff_r10 + unaff_r6 * -0x800 < (unsigned int)temp_v3;
      param_1 = unaff_r10 - (unaff_r6 * 0x800 + (unsigned int)!temp_v3);
      temp_v2 = param_1 == 0;
    }
    temp_v3 = 0;
    temp_v5 = temp_v4;
    if (temp_v2) {
      temp_v0 = unaff_r5 * unaff_r6 + param_1;
      temp_v5 = (unsigned int)(unaff_r6 * 0x800) < temp_v0 || temp_v0 + unaff_r6 * -0x800 < (unsigned int)temp_v4;
      param_1 = temp_v0 - (unaff_r6 * 0x800 + (unsigned int)!temp_v4);
      temp_v3 = param_1 == 0;
    }
    temp_v2 = 0;
    if (temp_v3) {
      temp_v2 = (long long)unaff_r5 * (long long)unaff_r6 + romwright_piece_4_4(temp_v1,param_1) == 0;
    }
    temp_v3 = 0;
    if (temp_v2) {
      temp_v3 = (long long)unaff_r5 * (long long)unaff_r6 +
              romwright_piece_4_4(unaff_r4,unaff_r6 * 0x800 - ((param_2 - 0x68) + (unsigned int)!temp_v5)) == 0;
    }
    if (temp_v3) {
      coprocessor_function(5,0xb,4,in_cr14,in_cr6,in_cr6);
      software_interrupt(0xb8e1d6);
      software_interrupt(0xbae1d7);
    }
    if (temp_v5 && !temp_v3) {
      software_interrupt(0xbce1c6);
      software_interrupt(0xbee1c6);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
