/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd158` (_code @ 0x2bd158, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char uRam0000000a; /* 0xa */
extern unsigned int uRam00000045; /* 0x45 */
extern unsigned char uRam004095fb; /* 0x4095fb */

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002bd2dc) */
/* WARNING: Removing unreachable block (ram,0x002bedba) */
/* WARNING: Removing unreachable block (ram,0x002bedb2) */

unsigned long long FUN_002bd158(unsigned char *param_1,unsigned char *param_2)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr2, in_cr3, in_cr5, in_cr6, in_cr8; 19 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int unaff_r4;
  int unaff_r7;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr2;
  unsigned int in_cr3;
  unsigned int in_cr5;
  unsigned int in_cr6;
  unsigned int in_cr8;
  unsigned char uStack000000ec;
  unsigned char uStack_14;
  
  if (param_2 == (unsigned char *)0x0) {
    param_2 = (unsigned char *)0x4e0d88;
  }
  temp_v0 = *param_1;
  if (temp_v0 == 0) {
    coprocessor_storelong(0,in_cr1,&uStack000000ec);
    coprocessor_function(0xb,0xb,0,in_cr8,in_cr0,in_cr6);
    coprocessor_load(0,in_cr3,&uStack_14);
    uRam004095fb = 0x8a;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((temp_v0 & 0x80) != 0) {
    *param_2 = temp_v0;
    return romwright_piece_4_4(unaff_r4,param_1 + 1);
  }
  *(char *)(unaff_r7 + 0x12) = (char)param_1;
  uRam00000045 = 1;
  *(unsigned int *)(param_2 + 0x54) = 0x4095fa;
  *(char *)(unaff_r7 + 0x11) = (char)param_1;
  uRam0000000a = 0xf8;
                    /* WARNING: Read-only address (ram,0x004095fb) is written */
  uRam004095fb = 1;
  coprocessor_function(0,3,0,in_cr5,in_cr2,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
