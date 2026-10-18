/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002be77c` (_code @ 0x2be77c, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRam00000038; /* 0x38 */
extern unsigned int uRam00000048; /* 0x48 */
extern unsigned int uRam00000058; /* 0x58 */
extern unsigned int uRam00000068; /* 0x68 */

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: func_0x006befd4. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002bef92) */

void FUN_002be77c(unsigned int param_1,int param_2)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr14, in_cr2, in_cr3, in_cr6, in_cr8, in_s0; 16 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int unaff_r6;
  unsigned int unaff_r10;
  int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr2;
  unsigned int in_cr3;
  unsigned int in_cr6;
  unsigned int in_cr8;
  unsigned int in_cr14;
  unsigned int in_s0;
  unsigned char uStack000000d0;
  unsigned char uStack00000120;
  unsigned char temp_v9 [32];
  
  coprocessor_function(0,0xb,0,in_cr6,in_cr0,in_cr2);
  coprocessor_storelong(0,in_cr0,&uStack00000120);
  func_0x006befd4(param_1,param_2,param_1);
  temp_v3 = temp_v2 * 2;
  *(unsigned int *)(temp_v2 + 8) = temp_v3;
  *(char *)(temp_v2 + 2) = (char)temp_v3;
  uRam00000038 = in_s0;
  uRam00000048 = in_s0;
  uRam00000058 = in_s0;
  uRam00000068 = in_s0;
  coprocessor_store(0,in_cr1,500);
  temp_v1 = (temp_v2 >> 0x20) & ((int)temp_v3 >> 0x1f);
  coprocessor_storelong(0,in_cr1,&uStack000000d0);
  temp_v6 = temp_v3 >= 0x68;
  coprocessor_function(0xb,0xb,0,in_cr8,in_cr0,in_cr6);
  coprocessor_load(0,in_cr3,temp_v9);
  if ((int)temp_v1 < 0) {
    temp_v4 = temp_v2 + 0xb4000;
    temp_v5 = 0;
    temp_v7 = temp_v6;
    if (temp_v1 == 0) {
      temp_v7 = (unsigned int)(unaff_r6 * 0x800) < unaff_r10 || unaff_r10 + unaff_r6 * -0x800 < (unsigned int)temp_v6;
      temp_v4 = unaff_r10 - (unaff_r6 * 0x800 + (unsigned int)!temp_v6);
      temp_v5 = temp_v4 == 0;
    }
    temp_v6 = 0;
    temp_v8 = temp_v7;
    if (temp_v5) {
      temp_v0 = param_2 * unaff_r6 + temp_v4;
      temp_v8 = (unsigned int)(unaff_r6 * 0x800) < temp_v0 || temp_v0 + unaff_r6 * -0x800 < (unsigned int)temp_v7;
      temp_v4 = temp_v0 - (unaff_r6 * 0x800 + (unsigned int)!temp_v7);
      temp_v6 = temp_v4 == 0;
    }
    temp_v5 = 0;
    if (temp_v6) {
      temp_v5 = (long long)param_2 * (long long)unaff_r6 + romwright_piece_4_4(temp_v1,temp_v4) == 0;
    }
    temp_v6 = 0;
    if (temp_v5) {
      temp_v6 = (long long)param_2 * (long long)unaff_r6 +
              romwright_piece_4_4((int)temp_v3 >> 0x1f,unaff_r6 * 0x800 - ((temp_v3 - 0x68) + (unsigned int)!temp_v8)) == 0;
    }
    if (temp_v6) {
      coprocessor_function(5,0xb,4,in_cr14,in_cr6,in_cr6);
      software_interrupt(0xb8e1d6);
      software_interrupt(0xbae1d7);
    }
    if (temp_v8 && !temp_v6) {
      software_interrupt(0xbce1c6);
      software_interrupt(0xbee1c6);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
