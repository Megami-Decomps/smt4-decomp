/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba948` (_code @ 0x2ba948, 0x86 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_004652a8; /* 0x4652a8 */
extern unsigned int *DAT_004655c0; /* 0x4655c0 */

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


/* WARNING: Control flow encountered bad instruction data */

long long FUN_002ba948(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_cr0, in_cr10; 7 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned int unaff_r4;
  int unaff_r6;
  unsigned int *puVar4;
  unsigned int in_cr0;
  unsigned int in_cr10;
  
  piVar1 = DAT_004652a8;
  if (param_1 == 0) {
    return (unsigned long long)param_2 << 0x20;
  }
  temp_v0 = *DAT_004652a8;
  if (temp_v0 == 0) {
    return romwright_piece_4_4(unaff_r4,unaff_r6 << 3);
  }
  temp_v1 = 0;
  do {
    puVar4 = (unsigned int *)(temp_v0 + temp_v1 * 0x10);
    if (puVar4[3] == param_1) {
      if (piVar1[2] == temp_v0) {
        *DAT_004655c0 = *DAT_004655c0 | 1;
      }
      puVar4[3] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  coprocessor_function(0xe,0xb,2,in_cr0,in_cr0,in_cr10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
