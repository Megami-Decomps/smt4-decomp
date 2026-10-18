/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bdd20` (_code @ 0x2bdd20, 0x198 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRam00000038; /* 0x38 */
extern unsigned int uRam00000048; /* 0x48 */
extern unsigned int uRam00000058; /* 0x58 */
extern unsigned int uRam00000068; /* 0x68 */
extern int DAT_004652a0; /* 0x4652a0 */
extern unsigned int DAT_004652a4; /* 0x4652a4 */
extern int DAT_004c632c; /* 0x4c632c */

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: func_0x006befd4. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002bef92) */

void FUN_002bdd20(void)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr14, in_cr3, in_cr6, in_cr8, in_s0; 13 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar3;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int unaff_r5;
  unsigned int unaff_r10;
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
  unsigned char uStack000000e8;
  unsigned char uStack_18;
  
  temp_v4 = DAT_004c632c;
  puVar3 = &DAT_004652a4;
  temp_v3 = DAT_004652a0 - *(int *)(DAT_004c632c + 4);
  temp_v5 = (temp_v3 & 8) != 0;
  temp_v1 = DAT_004652a0;
  if (temp_v5) {
    temp_v1 = temp_v3 + 0x18;
  }
  *(unsigned int *)(DAT_004c632c + 0xc) = temp_v3;
  if (temp_v5) {
    *(int *)(temp_v4 + 0xc) = temp_v1;
    temp_v5 = 0;
    temp_v0 = 0;
    temp_v3 = temp_v0;
  }
  else {
    *(unsigned int *)(temp_v4 + 0xc) = temp_v3 + 0x20;
    func_0x006befd4(&DAT_004652a0);
    temp_v3 = temp_v2 * 2;
    *(unsigned int *)(temp_v2 + 8) = temp_v3;
    temp_v4 = (int)temp_v3 >> 0x1f;
    *(char *)(temp_v2 + 2) = (char)temp_v3;
    coprocessor_store(0,in_cr1,500);
    temp_v0 = ((int)temp_v2 >> 0x20) & temp_v4;
    coprocessor_storelong(0,in_cr1,&uStack000000e8);
    temp_v5 = temp_v3 >= 0x68;
    puVar3 = (unsigned int *)(temp_v3 - 0x68);
    temp_v3 = temp_v2;
    uRam00000038 = in_s0;
    uRam00000048 = in_s0;
    uRam00000058 = in_s0;
    uRam00000068 = in_s0;
  }
  coprocessor_function(0xb,0xb,0,in_cr8,in_cr0,in_cr6);
  coprocessor_load(0,in_cr3,&uStack_18);
  if ((int)temp_v0 < 0) {
    temp_v1 = temp_v3 + 0xb4000;
    temp_v6 = 0;
    temp_v7 = temp_v5;
    if (temp_v0 == 0) {
      temp_v7 = unaff_r10 >= 0x63148001 || unaff_r10 + 0x9ceb8000 < (unsigned int)temp_v5;
      temp_v1 = unaff_r10 - (!temp_v5 + 0x63148000);
      temp_v6 = temp_v1 == 0;
    }
    temp_v5 = 0;
    temp_v8 = temp_v7;
    if (temp_v6) {
      temp_v3 = unaff_r5 * 0x4c6290 + temp_v1;
      temp_v8 = temp_v3 >= 0x63148001 || temp_v3 + 0x9ceb8000 < (unsigned int)temp_v7;
      temp_v1 = temp_v3 - (!temp_v7 + 0x63148000);
      temp_v5 = temp_v1 == 0;
    }
    temp_v6 = 0;
    if (temp_v5) {
      temp_v6 = (long long)unaff_r5 * 0x4c6290 + romwright_piece_4_4(temp_v0,temp_v1) == 0;
    }
    temp_v5 = 0;
    if (temp_v6) {
      temp_v5 = (long long)unaff_r5 * 0x4c6290 +
              romwright_piece_4_4(temp_v4,0x63148000 - ((int)puVar3 + (unsigned int)!temp_v8)) == 0;
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
