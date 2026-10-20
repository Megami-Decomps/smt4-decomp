/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ebe4` (_code @ 0x30ebe4, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e33f0(void);
int FUN_002e3494(int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e33f0. */
/* Supplied declaration required: FUN_002e3494. */


unsigned long long FUN_0030ebe4(int *param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)(param_2 << 2);
  FUN_002e33f0();
  temp_v0 = param_1[1];
  if (param_2 <= (unsigned int)param_1[1]) {
    temp_v0 = param_2;
  }
  puVar3 = puVar1;
  for (puVar2 = (unsigned int *)*param_1; (unsigned int *)(*param_1 + temp_v0 * 4) != puVar2;
      puVar2 = puVar2 + 1) {
    *puVar3 = *puVar2;
    puVar3 = puVar3 + 1;
  }
  for (; temp_v0 < param_2; temp_v0 = temp_v0 + 1) {
    puVar1[temp_v0] = *param_3;
  }
  FUN_002e3494(*param_1);
  *param_1 = (int)puVar1;
  param_1[1] = param_2;
  return romwright_piece_4_4(param_1,puVar1);
}

} /* extern "C" */
