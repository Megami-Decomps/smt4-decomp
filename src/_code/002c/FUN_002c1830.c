/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1830` (_code @ 0x2c1830, 0x1f8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004c6290; /* 0x4c6290 */
extern int DAT_004c63b4; /* 0x4c63b4 */

/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_movefromRt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x002c2754) overlaps instruction at (ram,0x002c2752)
    */

unsigned long long FUN_002c1830(unsigned int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr12, in_cr2, in_cr4; 14 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned short unaff_r5;
  int unaff_r7;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr2;
  unsigned int in_cr4;
  unsigned int in_cr12;
  unsigned int uStack000000a0;
  unsigned int *puStack000000a4;
  unsigned int *puStack000000a8;
  int iStack000000b0;
  unsigned char uStack_10;
  
  *(unsigned int *)param_1 = param_1;
  temp_v2 = DAT_004c63b4;
  temp_v0 = unaff_r7 * 2;
  coprocessor_load(0,in_cr1,&uStack_10);
  puStack000000a8 = (unsigned int *)&iStack000000b0;
  iStack000000b0 = param_2 << 1;
  puStack000000a4 = &DAT_004c6290 + DAT_004c63b4;
  if (temp_v0 == 0x8057) {
    *(int *)((int)puStack000000a4 * 2) = DAT_004c63b4;
    temp_v2 = coprocessor_movefromRt(10,5,0,in_cr12,in_cr0);
    coprocessor_function(0xc,1,0,in_cr0,in_cr0,in_cr0);
    coprocessor_movefromRt(10,5,0,in_cr4,in_cr0);
    coprocessor_function(10,0xf,0,in_cr2,in_cr0,in_cr2);
    coprocessor_movefromRt(10,5,0,in_cr12,in_cr0);
    coprocessor_load(0,in_cr2,temp_v2 + 0x3fc);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (temp_v0 < 0x8057) {
    temp_v1 = temp_v0 - 0x8051;
    if (temp_v1 == 0) {
      uStack000000a0 = 0;
      coprocessor_store(0,in_cr0,uStack000000a0 >> 8);
      return romwright_piece_4_4(*puStack000000a8,uStack000000a0 >> 8);
    }
    puStack000000a4 = (unsigned int *)(temp_v0 - 0x8057);
    if (temp_v1 != 5) {
      *(short *)(param_4 + 0x3e) = (short)temp_v1;
      *(unsigned short *)(temp_v2 + 2) = unaff_r5;
      halt_baddata();
    }
  }
  uStack000000a0 = *(int *)(DAT_004c63b4 * 4 + 0x4c63b8) << 6;
  puStack000000a8 = &uStack000000a0;
  coprocessor_store(0,in_cr0,uStack000000a0 >> 8);
  return romwright_piece_4_4(*puStack000000a8,uStack000000a0 >> 8);
}
