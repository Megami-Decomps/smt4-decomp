/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1f44` (_code @ 0x2c1f44, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned int uRam0000000d; /* 0xd */
extern unsigned int uRam00000011; /* 0x11 */
extern unsigned char DAT_004e21b8; /* 0x4e21b8 */
extern int DAT_004e316c; /* 0x4e316c */

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Supplied declaration required: FUN_00132cc8. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c1f44(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_s1, in_s16, in_s2, in_s7, in_s8; 8 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  int unaff_r7;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s7;
  unsigned int in_s8;
  unsigned int in_s16;
  
  temp_v0 = 0;
  if (DAT_004e316c != 0) {
    puVar2 = &DAT_004e21b8;
    FUN_00132cc8(&DAT_004e21b8,param_1,0xffffffff,param_4,param_4);
    if (puVar2 == (unsigned char *)0x0) {
      uRam00000011 = in_s16;
      uRam0000000d = in_s16;
      coprocessor_store(0,in_cr1,temp_v1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    temp_v0 = 1;
  }
  *(short *)(unaff_r7 + 6) = (short)temp_v0;
  if (temp_v0 != -1) {
    *(unsigned int *)(temp_v0 + 0x8c) = in_s7;
    *(unsigned int *)(temp_v0 + 0x90) = in_s2;
    do {
      *(unsigned int *)(temp_v0 + 0x94) = in_s1;
      in_s1 = *(unsigned int *)(temp_v0 + 0x1a4);
      *(unsigned int *)(temp_v0 + 0x1b8) = in_s8;
      *(unsigned int *)(temp_v0 + 0x10) = in_s2;
      coprocessor_storelong(0,in_cr0,temp_v0);
    } while( 1 );
  }
  DAT_004e316c = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
