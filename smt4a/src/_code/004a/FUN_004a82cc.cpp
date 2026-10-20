/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a82cc` (_code @ 0x4a82cc, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055c928; /* 0x55c928 */
extern unsigned char DAT_0055ca10; /* 0x55ca10 */

extern int FUN_00493764(int);
extern int flagsDESet(unsigned int *);


void FUN_004a82cc(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055c928;
  temp_v0 = flagsDESet(param_1 + 8);
  temp_v0 = FUN_00493764(temp_v0 + 0xa8);
  *(unsigned char **)(temp_v0 + 0x750) = &DAT_0055ca10;
  *(unsigned char *)(temp_v0 - 0xac) = 0;
  *(unsigned char *)(temp_v0 - 0xab) = 0;
  *(unsigned char *)(temp_v0 - 0xaa) = 0;
  *(unsigned int *)(temp_v0 + 0x794) = 0;
  *(unsigned int *)(temp_v0 + 0x78c) = 0;
  *(unsigned int *)(temp_v0 + 0x790) = 0;
  return;
}

} /* extern "C" */
