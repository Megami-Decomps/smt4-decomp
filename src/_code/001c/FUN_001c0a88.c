/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c0a88` (_code @ 0x1c0a88, 0xa4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
} param_5_stack;

extern unsigned int DAT_0044ea00; /* 0x44ea00 */
extern unsigned int DAT_004d46ac; /* 0x4d46ac */
extern unsigned int DAT_004d46bc; /* 0x4d46bc */
extern unsigned int DAT_004d46cc; /* 0x4d46cc */
extern unsigned int DAT_004d46dc; /* 0x4d46dc */
extern signed char DAT_004d46fd; /* 0x4d46fd */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b7a10. */
/* Supplied declaration required: FUN_002c1d3c. */


void FUN_001c0a88(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 int param_5)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int in_fpscr;
  
  puVar1 = (unsigned int *)0x0;
  puVar2 = (unsigned int *)0x0;
  puVar3 = (unsigned int *)0x0;
  puVar4 = (unsigned int *)0x0;
  if (DAT_004d46fd != '\0') {
    puVar1 = &DAT_004d46ac;
    puVar2 = &DAT_004d46bc;
    puVar3 = &DAT_004d46cc;
    puVar4 = &DAT_004d46dc;
  }
  FUN_002c1d3c(DAT_0044ea00,0,param_3,param_4,param_1,param_2,param_3,param_4);
  VectorSignedToFloat(0x100 - param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002b7a10(puVar1,puVar2,puVar3,puVar4);
  return;
}
