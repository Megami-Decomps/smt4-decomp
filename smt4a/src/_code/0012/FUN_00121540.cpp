/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121540` (_code @ 0x121540, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea0b8(int);

extern unsigned char DAT_0055b00c; /* 0x55b00c */

/* Supplied declaration required: FUN_002ea0b8. */
extern int FUN_002ec890(unsigned int *);
extern int FUN_002ec9f4(int);


void FUN_00121540(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055b00c;
  temp_v0 = FUN_002ec890(param_1 + 0xd);
  temp_v0 = FUN_002ec9f4(temp_v0 - 0x28);
  FUN_002ea0b8(temp_v0 - 0xc);
  return;
}

} /* extern "C" */
