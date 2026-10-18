/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd348` (_code @ 0x2bd348, 0xa4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002bcf64) */
/* WARNING: Removing unreachable block (ram,0x002bcf70) */
/* WARNING: Removing unreachable block (ram,0x002bcf7c) */
/* WARNING: Removing unreachable block (ram,0x002bcf80) */
/* WARNING: Removing unreachable block (ram,0x002bcf84) */
/* WARNING: Removing unreachable block (ram,0x002bcf88) */
/* WARNING: Removing unreachable block (ram,0x002bcfc0) */
/* WARNING: Removing unreachable block (ram,0x002bcfb8) */
/* WARNING: Removing unreachable block (ram,0x002bcfa8) */
/* WARNING: Removing unreachable block (ram,0x002bcf90) */
/* WARNING: Removing unreachable block (ram,0x002bcf98) */
/* WARNING: Removing unreachable block (ram,0x002bcfb4) */
/* WARNING: Removing unreachable block (ram,0x002bcfbc) */
/* WARNING: Removing unreachable block (ram,0x002bcfc4) */
/* WARNING: Removing unreachable block (ram,0x002bcfc8) */

unsigned long long FUN_002bd348(unsigned char *param_1,unsigned char *param_2)

{
/* irregular: irregular input(s): in_cr0, in_cr2, in_cr5; 22 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int in_cr0;
  unsigned int in_cr2;
  unsigned int in_cr5;
  
  if (param_2 == (unsigned char *)0x0) {
    param_2 = (unsigned char *)0x4e0d88;
  }
  temp_v0 = *param_1;
  if (temp_v0 != 0) {
    if ((temp_v0 & 0x80) != 0) {
      *param_2 = temp_v0;
      *(unsigned char **)param_1 = param_1;
      return romwright_piece_4_4(param_2,param_1);
    }
    coprocessor_function(0,3,0,in_cr5,in_cr2,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
