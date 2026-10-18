/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c6b56` (_code @ 0x2c6b56, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0042a184; /* 0x42a184 */

extern int FUN_00138208(unsigned char *, unsigned int, unsigned int, unsigned int, unsigned int);
extern int FUN_0014d908(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002c6a54. */
/* Supplied declaration required: FUN_002c6bf4. */


void FUN_002c6b56(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  
  if ((int)(param_2 << 0x1e) < 0) {
    temp_v0 = FUN_00138208(&DAT_0042a184,param_3,param_3,param_4,param_4);
    if (temp_v0 == 0) {
      return;
    }
    temp_v1 = FUN_002c6bf4();
    *(int *)(temp_v1 + 4) = temp_v0 + 1;
  }
  if ((param_2 & 1) != 0) {
    puVar3 = (unsigned int *)FUN_002c6bf4(&DAT_0042a184,param_3);
    *puVar3 = (unsigned int)&DAT_0042a184;
  }
  if ((int)(param_2 << 0x1d) < 0) {
    temp_v0 = FUN_002c6bf4(&DAT_0042a184,param_3);
    *(unsigned char **)(temp_v0 + 8) = &DAT_0042a184;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    temp_v0 = FUN_0014d908(&DAT_0042a184,param_3);
    if (temp_v0 == 0) {
      return;
    }
    temp_v1 = FUN_002c6bf4();
    *(int *)(temp_v1 + 0xc) = temp_v0;
  }
  if ((int)(param_2 << 0x1b) < 0) {
    temp_v0 = FUN_002c6bf4(&DAT_0042a184,param_3);
    *(unsigned char **)(temp_v0 + 0x10) = &DAT_0042a184;
  }
  FUN_002c6a54(param_1,param_2);
  return;
}
