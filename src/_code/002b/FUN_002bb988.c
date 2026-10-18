/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb988` (_code @ 0x2bb988, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern romwright_code *DAT_0044e450; /* 0x44e450 */
extern unsigned char DAT_004d4200; /* 0x4d4200 */
extern unsigned char DAT_004d4201; /* 0x4d4201 */
extern unsigned short DAT_004d4202; /* 0x4d4202 */
extern unsigned int DAT_004d4204; /* 0x4d4204 */
extern unsigned int DAT_004d4208; /* 0x4d4208 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002ad784. */


unsigned long long FUN_002bb988(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_lr; 2 native warning(s); review required */
  romwright_code *pcVar1;
  unsigned int unaff_r4;
  unsigned int in_lr;
  
  DAT_004d4200 = 5;
  DAT_004d4201 = 0;
  DAT_004d4202 = 0xbca3;
  DAT_004d4204 = param_1;
  DAT_004d4208 = param_2;
  FUN_002ad784();
  pcVar1 = DAT_0044e450;
  if (DAT_0044e450 != (romwright_code *)0x0) {
    DAT_0044e450 = (romwright_code *)0x0;
    (*pcVar1)(0,0,0,0,0,param_1,unaff_r4,in_lr);
  }
  software_interrupt(0x3c);
  return 0;
}
