/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105f86` (_code @ 0x105f86, 0x86 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ecda8(unsigned int, int);
int FUN_002ece70(int, int);

extern int _Znwj(unsigned int);
extern int FUN_002ec75c(int);
extern unsigned int FUN_002ecd54(void);
/* Supplied declaration required: FUN_002ecda8. */
extern int FUN_002ecdec(int, unsigned int);
/* Supplied declaration required: FUN_002ece70. */


int FUN_00105f86(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  param_1 = param_1 + 4;
  FUN_002ece70(param_1,1);
  param_1 = param_1 + 0xc;
  FUN_002ece70(param_1,1);
  temp_v0 = FUN_002ec75c(param_1 + 0x10);
  temp_v0 = FUN_002ecdec(temp_v0 + 0x18,0x20);
  temp_v0 = FUN_002ecdec(temp_v0 + 0x18,0x20);
  *(unsigned char *)(temp_v0 + 0x18) = 0;
  temp_v1 = _Znwj(0x230);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_002ecd54();
  }
  FUN_002ecda8(temp_v2,0);
  **(unsigned int **)(temp_v0 - 0x4c) = temp_v2;
  temp_v1 = _Znwj(0x230);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_002ecd54();
  }
  FUN_002ecda8(temp_v2,0);
  **(unsigned int **)(temp_v0 - 0x40) = temp_v2;
  temp_v1 = _Znwj(0x230);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_002ecd54();
  }
  FUN_002ecda8(temp_v2,0);
  *(unsigned int *)(temp_v0 - 0x34) = temp_v2;
  return temp_v0 - 0x50;
}

} /* extern "C" */
