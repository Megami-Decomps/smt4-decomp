/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00464a10` (_code @ 0x464a10, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001915c4(int, int, int);
int FUN_002e5700(int, unsigned char *, int, int);
int FUN_004637fc(void);

extern unsigned char LAB_001914b4; /* 0x1914b4 */

extern int FUN_001914b8(int);
/* Supplied declaration required: FUN_001915c4. */
/* Supplied declaration required: FUN_002e5700. */
/* Supplied declaration required: FUN_004637fc. */


int FUN_00464a10(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_004637fc();
  FUN_001915c4(param_1 + 0x90,param_1 + 0x94,0xb00);
  FUN_002e5700(param_1 + 0x94,&LAB_001914b4,0x58,0x20);
  temp_v0 = FUN_001914b8(param_1 + 100);
  return temp_v0 - 100;
}

} /* extern "C" */
