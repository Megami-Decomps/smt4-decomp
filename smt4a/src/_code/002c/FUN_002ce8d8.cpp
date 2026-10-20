/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ce8d8` (_code @ 0x2ce8d8, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001800b8(void);
int asdMemFree(unsigned short *);
int FUN_002ce8b0(void);
int FUN_002e3328(void);
int FUN_00412f9c(unsigned int);
int FUN_0041302c(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_001800b8. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_002ce8b0. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_00412f9c. */
/* Supplied declaration required: FUN_0041302c. */


void FUN_002ce8d8(unsigned short *param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = (unsigned int)*param_1;
  temp_v1 = (*param_1 & 0x200) == 0;
  if (!temp_v1) {
    temp_v0 = *(unsigned int *)(param_1 + 6);
  }
  if (!(temp_v1 || temp_v0 == 0)) {
    FUN_002ce8b0();
  }
  else {
    FUN_00412f9c(*(unsigned int *)(param_1 + 4));
    if (*(int *)(param_1 + 4) != 0) {
      FUN_0041302c();
      FUN_002e3328();
    }
  }
  if (*(int *)(param_1 + 2) != 0) {
    FUN_001800b8();
  }
  asdMemFree(param_1);
  return;
}

} /* extern "C" */
