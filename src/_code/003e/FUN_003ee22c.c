/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ee22c` (_code @ 0x3ee22c, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned char LAB_0033b848; /* 0x33b848 */
extern unsigned int DAT_00447a40; /* 0x447a40 */
extern unsigned int DAT_00447a44; /* 0x447a44 */
extern unsigned char DAT_004a1264; /* 0x4a1264 */
extern unsigned int uRam004afd64; /* 0x4afd64 */

/* Supplied declaration required: FUN_002c5f58. */


void FUN_003ee22c(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: irregular input(s): in_stack_0000003c, in_stack_00000060; 5 native warning(s); review required */
  int temp_v0;
  int unaff_r4;
  int unaff_r6;
  unsigned int *in_stack_0000003c;
  unsigned int in_stack_00000060;
  
  *(unsigned int *)(param_3 + 0x10) = param_1;
  *(unsigned int *)(param_3 + 0x14) = param_2;
  DAT_00447a40 = 0;
  DAT_00447a44 = 0;
  FUN_002c5f58(&DAT_004a1264,&LAB_0033b848,0x178,0xa0);
  temp_v0 = 0x4afd64;
  uRam004afd64 = 0x4afd64;
  while (temp_v0 = temp_v0 + 1, temp_v0 < unaff_r6) {
    *(unsigned char *)(unaff_r4 + temp_v0) = 0x44;
  }
  *(unsigned char *)(unaff_r4 + unaff_r6) = 0;
  in_stack_0000003c[2] = in_stack_00000060;
  *in_stack_0000003c = 0;
  in_stack_0000003c[1] = unaff_r6;
  return;
}
