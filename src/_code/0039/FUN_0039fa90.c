/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039fa90` (_code @ 0x39fa90, 0x100 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00152434. */
extern int FUN_00231300(unsigned int);
/* Supplied declaration required: FUN_00234840. */
/* Supplied declaration required: FUN_002348a0. */
/* Supplied declaration required: FUN_002348e0. */
extern int FUN_002bf6d0(unsigned int, unsigned int);


void FUN_0039fa90(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_00152434();
  temp_v0 = FUN_00231300(param_1);
  temp_v0 = FUN_002bf6d0(0x1c,*(unsigned int *)(temp_v0 * 4 + 0x44cf78));
  FUN_002348e0(param_1,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10));
  temp_v0 = FUN_00231300(param_1);
  temp_v0 = FUN_002bf6d0(0x1c,*(unsigned int *)(temp_v0 * 4 + 0x44cf84));
  FUN_002348a0(param_1,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10));
  temp_v0 = FUN_00231300(param_1);
  temp_v0 = FUN_002bf6d0(0x1c,*(unsigned int *)(temp_v0 * 4 + 0x44cf90));
  FUN_00234840(param_1,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10));
  return;
}
