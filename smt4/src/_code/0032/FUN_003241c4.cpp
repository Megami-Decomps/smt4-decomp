/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003241c4` (_code @ 0x3241c4, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002be624(int, unsigned char *, int);

extern unsigned char LAB_00324224; /* 0x324224 */

/* Supplied declaration required: FUN_002be624. */
extern unsigned int FUN_002c30c4(int);


unsigned int FUN_003241c4(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  FUN_002be624(param_2,&LAB_00324224,*(int *)(param_1 + 0x30) + 0xc);
  temp_v0 = FUN_002c30c4(param_2);
  for (temp_v1 = 0; (temp_v1 < temp_v0 && (*(char *)(param_2 + temp_v1) != '.')); temp_v1 = temp_v1 + 1) {
  }
  if (temp_v0 != temp_v1) {
    *(unsigned char *)(param_2 + temp_v1) = 0;
  }
  return **(unsigned int **)(param_1 + 0x30);
}

} /* extern "C" */
