/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aecd8` (_code @ 0x2aecd8, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014caa4(int, int, unsigned int);
int FUN_002c0cc4(void);
int FUN_002c0cec(int, int);

extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_0014caa4. */
/* Supplied declaration required: FUN_002c0cc4. */
/* Supplied declaration required: FUN_002c0cec. */


void FUN_002aecd8(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if (*(char *)(param_1 + 0x2a) != '\0') {
    temp_v0 = DAT_00433158;
    FUN_0014caa4(DAT_00433158,param_1,param_2);
    if (temp_v0 == 0) {
      FUN_002c0cec(0x19,*(unsigned char *)(param_1 + 0x2a));
      FUN_002c0cc4();
    }
  }
  return;
}

} /* extern "C" */
