/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f1a40` (_code @ 0x3f1a40, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned char LAB_00333fec; /* 0x333fec */
extern unsigned char LAB_003489d8; /* 0x3489d8 */
extern unsigned int DAT_00434188; /* 0x434188 */
extern unsigned int DAT_0043418c; /* 0x43418c */
extern unsigned int DAT_00490e4c; /* 0x490e4c */
extern unsigned int DAT_00490e50; /* 0x490e50 */
extern unsigned int DAT_00490e54; /* 0x490e54 */
extern unsigned int DAT_00490e70; /* 0x490e70 */
extern unsigned int DAT_00490e74; /* 0x490e74 */
extern unsigned int DAT_00490e78; /* 0x490e78 */
extern unsigned int DAT_00490e7c; /* 0x490e7c */
extern unsigned char DAT_00490e80; /* 0x490e80 */
extern unsigned char DAT_00490f48; /* 0x490f48 */
extern unsigned int uRam00492258; /* 0x492258 */

/* Supplied declaration required: FUN_002c5f58. */


void FUN_003f1a40(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: irregular input(s): in_stack_0000003c, in_stack_00000060; 5 native warning(s); review required */
  int temp_v0;
  int unaff_r4;
  int unaff_r6;
  unsigned int *in_stack_0000003c;
  unsigned int in_stack_00000060;
  
  *(unsigned int *)(param_3 + 8) = param_1;
  *(unsigned int *)(param_3 + 0xc) = param_2;
  DAT_00434188 = 0;
  DAT_0043418c = 0;
  DAT_00490e4c = 0;
  DAT_00490e50 = 0;
  DAT_00490e54 = 0;
  DAT_00490e74 = 1;
  DAT_00490e70 = 0;
  DAT_00490e78 = 1;
  DAT_00490e7c = 1;
  FUN_002c5f58(&DAT_00490e80,&LAB_00333fec,0x14,10);
  FUN_002c5f58(&DAT_00490f48,&LAB_003489d8,0x20,0x96);
  temp_v0 = 0x492258;
  uRam00492258 = 0x492258;
  while (temp_v0 = temp_v0 + 1, temp_v0 < unaff_r6) {
    *(unsigned char *)(unaff_r4 + temp_v0) = 0xd8;
  }
  *(unsigned char *)(unaff_r4 + unaff_r6) = 0;
  in_stack_0000003c[2] = in_stack_00000060;
  *in_stack_0000003c = 0;
  in_stack_0000003c[1] = unaff_r6;
  return;
}
