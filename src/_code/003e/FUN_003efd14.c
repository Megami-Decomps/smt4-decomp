/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003efd14` (_code @ 0x3efd14, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned char LAB_00346d28; /* 0x346d28 */
extern unsigned char LAB_00346d2c; /* 0x346d2c */
extern unsigned int DAT_00447e20; /* 0x447e20 */
extern unsigned int DAT_00447e24; /* 0x447e24 */
extern unsigned char DAT_004b765c; /* 0x4b765c */

/* Supplied declaration required: FUN_002c5f58. */


void FUN_003efd14(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: irregular input(s): in_stack_0000003c, in_stack_00000060; 5 native warning(s); review required */
  unsigned char *puVar1;
  int unaff_r4;
  int unaff_r6;
  unsigned int *in_stack_0000003c;
  unsigned int in_stack_00000060;
  
  *(unsigned int *)(param_3 + 8) = param_1;
  *(unsigned int *)(param_3 + 0xc) = param_2;
  DAT_00447e20 = 0;
  DAT_00447e24 = 0;
  puVar1 = &DAT_004b765c;
  FUN_002c5f58(&DAT_004b765c,&LAB_00346d2c,0x44,0x40);
  puVar1 = puVar1 + 0x1100;
  FUN_002c5f58(puVar1,&LAB_00346d28,0x2c,9);
  puVar1 = puVar1 + 0x18c;
  *(unsigned char **)puVar1 = puVar1;
  while (puVar1 = puVar1 + 1, (int)puVar1 < unaff_r6) {
    puVar1[unaff_r4] = 0x28;
  }
  *(unsigned char *)(unaff_r4 + unaff_r6) = 0;
  in_stack_0000003c[2] = in_stack_00000060;
  *in_stack_0000003c = 0;
  in_stack_0000003c[1] = unaff_r6;
  return;
}
