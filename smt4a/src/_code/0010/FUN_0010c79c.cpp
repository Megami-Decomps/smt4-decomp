/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010c79c` (_code @ 0x10c79c, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f6650(void);
int FUN_002f670c(int, int);

extern unsigned char DAT_00558eec; /* 0x558eec */

extern int FUN_002e7168(int, unsigned int);
extern int FUN_002f6628(unsigned int *);
/* Supplied declaration required: FUN_002f6650. */
/* Supplied declaration required: FUN_002f670c. */


int FUN_0010c79c(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  *param_1 = (unsigned int)&DAT_00558eec;
  temp_v0 = FUN_002f6628(param_1 + 1);
  temp_v1 = FUN_002e7168(temp_v0 + 0x9cc,1);
  temp_v0 = temp_v1;
  FUN_002f6650();
  FUN_002f670c(temp_v1 - 0x9cc,temp_v0);
  return temp_v1 - 0x9d0;
}

} /* extern "C" */
