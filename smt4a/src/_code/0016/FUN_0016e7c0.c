/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016e7c0` (_code @ 0x16e7c0, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern romwright_code *DAT_00589280; /* 0x589280 */
extern unsigned char DAT_0062d200; /* 0x62d200 */
extern unsigned char DAT_0062d201; /* 0x62d201 */
extern unsigned short DAT_0062d202; /* 0x62d202 */
extern unsigned int DAT_0062d204; /* 0x62d204 */
extern unsigned int DAT_0062d208; /* 0x62d208 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00189a80. */


unsigned long long FUN_0016e7c0(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_lr; 3 native warning(s); review required */
  romwright_code *pcVar1;
  unsigned int temp_v0;
  unsigned int unaff_r4;
  unsigned int in_lr;
  
  DAT_0062d200 = 5;
  DAT_0062d201 = 0;
  DAT_0062d202 = 0xedac;
  DAT_0062d204 = param_1;
  DAT_0062d208 = param_2;
  FUN_00189a80();
  pcVar1 = DAT_00589280;
  if (DAT_00589280 != (romwright_code *)0x0) {
    DAT_00589280 = (romwright_code *)0x0;
    (*pcVar1)(0,0,0,0,0,temp_v0,unaff_r4,in_lr);
  }
  software_interrupt(0x3c);
  return 0;
}
