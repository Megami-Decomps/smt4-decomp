/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038aee4` (_code @ 0x38aee4, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00152434. */
/* Supplied declaration required: FUN_00234840. */
/* Supplied declaration required: FUN_002348a0. */
/* Supplied declaration required: FUN_002348e0. */
extern int FUN_002bf6d0(unsigned int, unsigned int);


void FUN_0038aee4(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_00152434();
  temp_v0 = FUN_002bf6d0(0x3a,0x4f);
  FUN_002348e0(param_1,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10),
               (int)**(short **)(temp_v0 + 0xc),(int)(*(short **)(temp_v0 + 0xc))[1]);
  temp_v0 = FUN_002bf6d0(0x3a,0x50);
  FUN_002348a0(param_1,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10),
               (int)**(short **)(temp_v0 + 0xc),(int)(*(short **)(temp_v0 + 0xc))[1]);
  temp_v0 = FUN_002bf6d0(0x3a,0x4e);
  FUN_00234840(param_1,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10),
               (int)**(short **)(temp_v0 + 0xc),(int)(*(short **)(temp_v0 + 0xc))[1]);
  *(unsigned char *)(param_1 + 100) = 1;
  return;
}
