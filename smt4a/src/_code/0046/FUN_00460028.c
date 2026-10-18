/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00460028` (_code @ 0x460028, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055bea8; /* 0x55bea8 */

extern int FUN_00464a10(unsigned int *);
extern int FUN_00465564(int);


void FUN_00460028(unsigned int *param_1,unsigned int param_2)

{
  int temp_v0;
  
  *param_1 = param_2;
  temp_v0 = FUN_00464a10(param_1 + 0x8c5);
  temp_v0 = FUN_00465564(temp_v0 - 0x21fc);
  *(unsigned char **)(temp_v0 - 0x118) = &DAT_0055bea8;
  *(unsigned char *)(temp_v0 - 0x79) = 3;
  return;
}
