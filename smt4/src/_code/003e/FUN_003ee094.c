/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ee094` (_code @ 0x3ee094, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned char LAB_0034203c; /* 0x34203c */
extern unsigned int DAT_0044cd98; /* 0x44cd98 */
extern unsigned int DAT_0044cd9c; /* 0x44cd9c */
extern unsigned char DAT_004bdc04; /* 0x4bdc04 */

/* Supplied declaration required: FUN_002c5d5c. */


void FUN_003ee094(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: irregular input(s): in_stack_0000003c, in_stack_00000060; 5 native warning(s); review required */
  unsigned char *puVar1;
  int unaff_r4;
  int unaff_r6;
  unsigned int *in_stack_0000003c;
  unsigned int in_stack_00000060;
  
  *(unsigned int *)(param_3 + 8) = param_1;
  *(unsigned int *)(param_3 + 0xc) = param_2;
  DAT_0044cd98 = 0;
  DAT_0044cd9c = 0;
  puVar1 = &DAT_004bdc04;
  FUN_002c5d5c(&DAT_004bdc04,&LAB_0034203c,0x4c,0x20);
  puVar1 = puVar1 + 0x980;
  *(unsigned char **)puVar1 = puVar1;
  while (puVar1 = puVar1 + 1, (int)puVar1 < unaff_r6) {
    puVar1[unaff_r4] = 0x3c;
  }
  *(unsigned char *)(unaff_r4 + unaff_r6) = 0;
  in_stack_0000003c[2] = in_stack_00000060;
  *in_stack_0000003c = 0;
  in_stack_0000003c[1] = unaff_r6;
  return;
}
