/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00473270` (_code @ 0x473270, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001b3f7c. */
/* Supplied declaration required: FUN_004d091c. */
/* Supplied declaration required: FUN_004d09b8. */
/* Supplied declaration required: FUN_004d0a98. */


void FUN_00473270(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_001b3f7c();
  temp_v0 = FUN_001834a4(0x2f,0x4f);
  FUN_004d09b8(param_1,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10),
               (int)**(short **)(temp_v0 + 0xc),(int)(*(short **)(temp_v0 + 0xc))[1]);
  temp_v0 = FUN_001834a4(0x2f,0x50);
  FUN_004d0a98(param_1,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10),
               (int)**(short **)(temp_v0 + 0xc),(int)(*(short **)(temp_v0 + 0xc))[1]);
  temp_v0 = FUN_001834a4(0x2f,0x4e);
  FUN_004d091c(param_1,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10),
               (int)**(short **)(temp_v0 + 0xc),(int)(*(short **)(temp_v0 + 0xc))[1]);
  *(unsigned char *)(param_1 + 100) = 1;
  return;
}
