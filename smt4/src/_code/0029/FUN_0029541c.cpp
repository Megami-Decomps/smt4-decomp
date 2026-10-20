/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029541c` (_code @ 0x29541c, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002523f0(void);
int FUN_00296774(int, int);
int FUN_0029e788(void);
int FUN_0029e874(int);
int FUN_002a7218(unsigned int);
int FUN_002c415c(unsigned int);

/* Supplied declaration required: FUN_002523f0. */
/* Supplied declaration required: FUN_00296774. */
/* Supplied declaration required: FUN_0029e788. */
/* Supplied declaration required: FUN_0029e874. */
/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002c415c. */


unsigned int FUN_0029541c(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  FUN_002a7218(*(unsigned int *)(param_1 + 0x3574));
  FUN_002c415c(*(unsigned int *)(param_1 + 0x3578));
  FUN_002523f0();
  *(unsigned char *)(param_1 + 0xd640) = 0;
  temp_v0 = *(int *)(param_1 + 0xcf78) + 1;
  *(int *)(param_1 + 0xcf78) = temp_v0;
  if (*(int *)(param_1 + 0xcf74) == temp_v0) {
    FUN_00296774(param_1,0x14);
    return 0;
  }
  FUN_0029e874(1);
  FUN_0029e788();
  FUN_00296774(param_1,9);
  return 1;
}

} /* extern "C" */
