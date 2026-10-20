/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ba460` (_code @ 0x3ba460, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00296f4c(unsigned int, unsigned int);
int FUN_002be624(unsigned char [32], unsigned char *, int);

extern unsigned char LAB_003ba4c0; /* 0x3ba4c0 */

extern int FUN_0022b14c(int);
extern unsigned int FUN_00290d74(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_00296f4c. */
/* Supplied declaration required: FUN_002be624. */


void FUN_003ba460(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [32];
  
  temp_v0 = FUN_0022b14c(param_1 + 0x9c);
  if (temp_v0 != 0) {
    FUN_002be624(temp_v2,&LAB_003ba4c0,*(int *)(param_1 + 0xd5c) + 0x20);
    temp_v1 = FUN_00290d74(*(unsigned int *)(param_1 + 0xd6c),temp_v2);
    FUN_00296f4c(*(unsigned int *)(param_1 + 0xd74),temp_v1);
    *(unsigned int *)(param_1 + 0x28) = 4;
    *(unsigned int *)(param_1 + 0x2c) = 0;
  }
  return;
}

} /* extern "C" */
