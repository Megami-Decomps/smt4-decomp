/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00173c1c` (_code @ 0x173c1c, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int listAppendNode(int, int);
int FUN_0019102c(int, int);
int FUN_001912cc(int, unsigned int);

extern int FUN_00175678(void);
/* Supplied declaration required: listAppendNode. */
/* Supplied declaration required: FUN_0019102c. */
extern unsigned int FUN_001911a4(int, unsigned int);
/* Supplied declaration required: FUN_001912cc. */


void FUN_00173c1c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00175678();
  temp_v1 = temp_v0;
  FUN_0019102c(temp_v0,5);
  *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
  *(unsigned char *)(temp_v1 + 4) = 0x33;
  *(int *)(temp_v1 + 0x10) = param_1;
  listAppendNode(temp_v0,temp_v1);
  temp_v2 = FUN_001911a4(temp_v0,1);
  FUN_001912cc(temp_v0,temp_v2);
  *(unsigned int *)(param_1 + 0x21c) = 0;
  *(unsigned int *)(param_1 + 0x218) = 0;
  return;
}

} /* extern "C" */
