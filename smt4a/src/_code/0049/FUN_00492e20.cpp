/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00492e20` (_code @ 0x492e20, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b3f7c(void);
int FUN_004d091c(unsigned int, int, int);
int FUN_004d09b8(unsigned int, int, int);
int FUN_004d0a98(unsigned int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001b3f7c. */
/* Supplied declaration required: FUN_004d091c. */
/* Supplied declaration required: FUN_004d09b8. */
/* Supplied declaration required: FUN_004d0a98. */
extern int FUN_004d0ad8(unsigned int);


void FUN_00492e20(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_001b3f7c();
  temp_v0 = FUN_004d0ad8(param_1);
  temp_v0 = FUN_001834a4(0x13,*(unsigned int *)(temp_v0 * 4 + 0x587fe4));
  FUN_004d09b8(param_1,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10));
  temp_v0 = FUN_004d0ad8(param_1);
  temp_v0 = FUN_001834a4(0x13,*(unsigned int *)(temp_v0 * 4 + 0x587ff0));
  FUN_004d0a98(param_1,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10));
  temp_v0 = FUN_004d0ad8(param_1);
  temp_v0 = FUN_001834a4(0x13,*(unsigned int *)(temp_v0 * 4 + 0x587ffc));
  FUN_004d091c(param_1,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10));
  return;
}

} /* extern "C" */
