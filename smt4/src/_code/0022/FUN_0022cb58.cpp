/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022cb58` (_code @ 0x22cb58, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00422484; /* 0x422484 */
extern unsigned char DAT_00422590; /* 0x422590 */

extern int FUN_0022e480(int);
extern int FUN_00287314(unsigned int *);


void FUN_0022cb58(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00422484;
  temp_v0 = FUN_00287314(param_1 + 8);
  temp_v0 = FUN_0022e480(temp_v0 + 0xa8);
  *(unsigned char **)(temp_v0 + 0x494) = &DAT_00422590;
  *(unsigned char *)(temp_v0 - 0xac) = 0;
  *(unsigned char *)(temp_v0 - 0xab) = 0;
  *(unsigned char *)(temp_v0 - 0xaa) = 0;
  *(unsigned int *)(temp_v0 + 0x4d8) = 0;
  *(unsigned int *)(temp_v0 + 0x4d0) = 0;
  *(unsigned int *)(temp_v0 + 0x4d4) = 0;
  return;
}

} /* extern "C" */
