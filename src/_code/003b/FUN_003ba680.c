/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ba680` (_code @ 0x3ba680, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_003ba6e0; /* 0x3ba6e0 */

extern int FUN_0022b2e0(int);
extern unsigned int FUN_00291018(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002be7fc. */


void FUN_003ba680(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [32];
  
  temp_v0 = FUN_0022b2e0(param_1 + 0x9c);
  if (temp_v0 != 0) {
    FUN_002be7fc(temp_v2,&LAB_003ba6e0,*(int *)(param_1 + 0xd5c) + 0x20);
    temp_v1 = FUN_00291018(*(unsigned int *)(param_1 + 0xd6c),temp_v2);
    FUN_002971e4(*(unsigned int *)(param_1 + 0xd74),temp_v1);
    *(unsigned int *)(param_1 + 0x28) = 4;
    *(unsigned int *)(param_1 + 0x2c) = 0;
  }
  return;
}
