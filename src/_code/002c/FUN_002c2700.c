/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2700` (_code @ 0x2c2700, 0xec bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned int DAT_004c6290; /* 0x4c6290 */
extern int DAT_004c63b4; /* 0x4c63b4 */

/* Unsupported intrinsic, declaration required: coprocessor_movefromRt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x002c2754) overlaps instruction at (ram,0x002c2752)
    */

unsigned long long FUN_002c2700(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: irregular input(s): in_cr0, in_cr12, in_cr2, in_cr4; 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned short unaff_r5;
  unsigned int in_cr0;
  unsigned int in_cr2;
  unsigned int in_cr4;
  unsigned int in_cr12;
  unsigned int uStack_30;
  unsigned int *puStack_2c;
  unsigned char *puStack_28;
  unsigned char temp_v2;
  
  temp_v1 = DAT_004c63b4;
  puStack_28 = &temp_v2;
  puStack_2c = &DAT_004c6290 + DAT_004c63b4;
  if (param_1 == 0x8057) {
    *(int *)((int)puStack_2c * 2) = DAT_004c63b4;
    temp_v1 = coprocessor_movefromRt(10,5,0,in_cr12,in_cr0);
    coprocessor_function(0xc,1,0,in_cr0,in_cr0,in_cr0);
    coprocessor_movefromRt(10,5,0,in_cr4,in_cr0);
    coprocessor_function(10,0xf,0,in_cr2,in_cr0,in_cr2);
    coprocessor_movefromRt(10,5,0,in_cr12,in_cr0);
    coprocessor_load(0,in_cr2,temp_v1 + 0x3fc);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 < 0x8057) {
    temp_v0 = param_1 - 0x8051;
    if (temp_v0 == 0) {
      uStack_30 = 0;
      coprocessor_store(0,in_cr0,uStack_30 >> 8);
      return romwright_piece_4_4(*(unsigned int *)puStack_28,uStack_30 >> 8);
    }
    puStack_2c = (unsigned int *)(param_1 - 0x8057);
    if (temp_v0 != 5) {
      *(short *)(param_4 + 0x3e) = (short)temp_v0;
      *(unsigned short *)(temp_v1 + 2) = unaff_r5;
      halt_baddata();
    }
  }
  uStack_30 = *(int *)(DAT_004c63b4 * 4 + 0x4c63b8) << 6;
  puStack_28 = (unsigned char *)&uStack_30;
  coprocessor_store(0,in_cr0,uStack_30 >> 8);
  return romwright_piece_4_4(*(unsigned int *)puStack_28,uStack_30 >> 8);
}
