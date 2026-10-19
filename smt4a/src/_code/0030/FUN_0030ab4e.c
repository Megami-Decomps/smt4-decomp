/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ab4e` (_code @ 0x30ab4e, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0030ab4e. */
extern unsigned char *FUN_0030ab8e(unsigned int, unsigned char *);


unsigned long long FUN_0030ab4e(unsigned int param_1,unsigned char *param_2,unsigned char *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int temp_v0;
  unsigned char *puVar3;
  
  puVar3 = param_2;
  for (; param_2 != (unsigned char *)0x0; param_2 = *(unsigned char **)(param_2 + 8)) {
    puVar1 = (unsigned char *)FUN_0030ab8e(param_1,param_2 + 0x10);
    if (puVar3 == param_2) {
      puVar3 = puVar1;
    }
    *(unsigned char **)(param_3 + 8) = puVar1;
    *(unsigned char **)(puVar1 + 4) = param_3;
    *puVar1 = *param_2;
    temp_v0 = param_1;
    FUN_0030ab4e(param_1,(unsigned char *)*(unsigned int *)(param_2 + 0xc),puVar1);
    *(unsigned int *)(puVar1 + 0xc) = temp_v0;
    param_3 = puVar1;
  }
  *(unsigned int *)(param_3 + 8) = 0;
  return romwright_piece_4_4(param_1,puVar3);
}
