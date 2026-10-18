/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bdeb8` (_code @ 0x2bdeb8, 0x2b4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern unsigned int uRam00000038; /* 0x38 */
extern unsigned int uRam00000048; /* 0x48 */
extern unsigned int uRam00000058; /* 0x58 */
extern unsigned int uRam00000068; /* 0x68 */

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: func_0x006befd4. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x002bdf0c) overlaps instruction at (ram,0x002bdf0a)
    */
/* WARNING: Removing unreachable block (ram,0x002bef92) */

void FUN_002bdeb8(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr14, in_cr3, in_cr6, in_cr8, in_pc, in_s0; 14 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int in_pc;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr3;
  unsigned int in_cr6;
  unsigned int in_cr8;
  unsigned int in_cr14;
  unsigned int in_s0;
  unsigned char uStack000000b8;
  unsigned char uStack00000108;
  unsigned char temp_v9 [8];
  int temp_v10;
  int iStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  int temp_v11;
  
  temp_v10 = -param_1;
  temp_v0 = param_3;
  if (param_4 != 0) {
    temp_v3 = param_1;
    if (-1 < param_1) {
      temp_v0 = 0;
    }
  }
  else {
    temp_v3 = param_1 << 3;
  }
  coprocessor_storelong(0,in_cr0,&uStack00000108);
  iStack_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  temp_v11 = param_4;
  func_0x006befd4(((temp_v3 + 0xdc0f14ffU) & ((in_pc >> 3) | (in_pc << 0x1d))) >> 8,
                  ((temp_v0 >> 1) & 0xdc0f14ff) | (temp_v0 << 0x1f));
  temp_v2 = temp_v1 * 2;
  *(unsigned int *)(temp_v1 + 8) = temp_v2;
  *(char *)(temp_v1 + 2) = (char)temp_v2;
  uRam00000038 = in_s0;
  uRam00000048 = in_s0;
  uRam00000058 = in_s0;
  uRam00000068 = in_s0;
  coprocessor_store(0,in_cr1,500);
  temp_v0 = (temp_v1 >> 0x20) & ((int)temp_v2 >> 0x1f);
  coprocessor_storelong(0,in_cr1,&uStack000000b8);
  temp_v6 = temp_v2 >= 0x68;
  coprocessor_function(0xb,0xb,0,in_cr8,in_cr0,in_cr6);
  coprocessor_load(0,in_cr3,temp_v9);
  if ((int)temp_v0 < 0) {
    temp_v4 = temp_v1 + 0xb4000;
    temp_v5 = 0;
    temp_v7 = temp_v6;
    if (temp_v0 == 0) {
      temp_v7 = param_3 != 0 || param_3 < temp_v6;
      temp_v4 = param_3 - !temp_v6;
      temp_v5 = temp_v4 == 0;
    }
    temp_v6 = 0;
    temp_v8 = temp_v7;
    if (temp_v5) {
      temp_v8 = temp_v4 != 0 || temp_v4 < temp_v7;
      temp_v4 = temp_v4 - !temp_v7;
      temp_v6 = temp_v4 == 0;
    }
    temp_v5 = 0;
    if (temp_v6 && romwright_piece_4_4(temp_v0,temp_v4) == 0) {
      temp_v5 = romwright_piece_4_4((int)temp_v2 >> 0x1f,-((temp_v2 - 0x68) + (unsigned int)!temp_v8)) == 0;
    }
    if (temp_v5) {
      coprocessor_function(5,0xb,4,in_cr14,in_cr6,in_cr6);
      software_interrupt(0xb8e1d6);
      software_interrupt(0xbae1d7);
    }
    if (temp_v8 && !temp_v5) {
      software_interrupt(0xbce1c6);
      software_interrupt(0xbee1c6);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
