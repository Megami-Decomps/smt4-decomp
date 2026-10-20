/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e2fce` (_code @ 0x2e2fce, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e2ec0(...);
int FUN_002e2ecc(unsigned int, unsigned int);

extern unsigned char DAT_00567078; /* 0x567078 */

extern int FUN_00197c2c(unsigned char *, unsigned int, unsigned int, unsigned int, unsigned int);
extern int FUN_001bc5ac(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002e2ec0. */
/* Supplied declaration required: FUN_002e2ecc. */


void FUN_002e2fce(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  
  if ((int)(param_2 << 0x1e) < 0) {
    temp_v0 = FUN_00197c2c(&DAT_00567078,param_3,param_3,param_4,param_4);
    if (temp_v0 == 0) {
      return;
    }
    temp_v1 = FUN_002e2ec0();
    *(int *)(temp_v1 + 4) = temp_v0 + 1;
  }
  if ((param_2 & 1) != 0) {
    puVar3 = (unsigned int *)FUN_002e2ec0(&DAT_00567078,param_3);
    *puVar3 = (unsigned int)&DAT_00567078;
  }
  if ((int)(param_2 << 0x1d) < 0) {
    temp_v0 = FUN_002e2ec0(&DAT_00567078,param_3);
    *(unsigned char **)(temp_v0 + 8) = &DAT_00567078;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    temp_v0 = FUN_001bc5ac(&DAT_00567078,param_3);
    if (temp_v0 == 0) {
      return;
    }
    temp_v1 = FUN_002e2ec0();
    *(int *)(temp_v1 + 0xc) = temp_v0;
  }
  if ((int)(param_2 << 0x1b) < 0) {
    temp_v0 = FUN_002e2ec0(&DAT_00567078,param_3);
    *(unsigned char **)(temp_v0 + 0x10) = &DAT_00567078;
  }
  FUN_002e2ecc(param_1,param_2);
  return;
}

} /* extern "C" */
