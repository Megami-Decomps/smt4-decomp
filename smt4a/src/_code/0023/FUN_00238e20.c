/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00238e20` (_code @ 0x238e20, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_8: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_8_stack;

extern int FUN_00213020(); /* 0x213020 */

/* Supplied declaration required: FUN_0028c05c. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_0034a16c. */
/* Supplied declaration required: rt_memcpy_w. */


romwright_code * FUN_00238e20(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                   unsigned int param_5,unsigned char param_6,unsigned short param_7,unsigned int param_8)

{
/* irregular: 5 native warning(s); review required */
  romwright_code *pcVar1;
  
  pcVar1 = FUN_00213020;
  FUN_0028c05c(FUN_00213020,0,0,0,0,0x304,3,0,0);
  if (pcVar1 != (romwright_code *)0x0) {
    FUN_002e6354();
    rt_memcpy_w((unsigned char *)pcVar1 + 0x38,param_2,0x134);
    rt_memcpy_w((unsigned char *)pcVar1 + 0x16c,param_3,0xb0);
    *(unsigned int *)((unsigned char *)pcVar1 + 0x21c) = param_4;
    *(unsigned int *)((unsigned char *)pcVar1 + 0x220) = param_8;
    *(unsigned int *)((unsigned char *)pcVar1 + 0x224) = param_1;
    ((unsigned char *)pcVar1)[0x22c] = (unsigned char)param_6;
    *(unsigned int *)((unsigned char *)pcVar1 + 0x234) = 0xffffffff;
    *(unsigned int *)((unsigned char *)pcVar1 + 0x230) = 0xffffffff;
    FUN_0034a16c((unsigned char *)pcVar1 + 0x16c,(unsigned char *)pcVar1 + 0x28,(unsigned char *)pcVar1 + 0x30,(unsigned char *)pcVar1 + 0xc,(unsigned char *)pcVar1 + 0x18);
    *(unsigned int *)((unsigned char *)pcVar1 + 0x228) = param_5;
    *(unsigned short *)((unsigned char *)pcVar1 + 0x302) = param_7;
    *(unsigned short *)((unsigned char *)pcVar1 + 0x300) = param_7;
  }
  return pcVar1;
}
