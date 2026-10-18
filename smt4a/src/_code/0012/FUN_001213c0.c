/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001213c0` (_code @ 0x1213c0, 0x42 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned char DAT_0055afcc; /* 0x55afcc */
extern int *DAT_00594b20; /* 0x594b20 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_002e995c(unsigned int *);


unsigned long long FUN_001213c0(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  unsigned int temp_v1;
  
  *param_1 = (unsigned int)&DAT_0055afcc;
  *(unsigned char *)(param_1 + 1) = 3;
  temp_v0 = FUN_002e995c(param_1 + 2);
  *(unsigned char *)(temp_v0 + 0x24) = 1;
  *(unsigned int *)(temp_v0 + 0x28) = param_2;
  *(unsigned int *)(temp_v0 + 0x2c) = param_3;
  *(unsigned char *)(temp_v0 + 0x30) = 0;
  *(unsigned char *)(temp_v0 + 0x38) = 1;
  *(unsigned char *)(temp_v0 + 0x39) = 1;
  temp_v1 = 0;
  if (DAT_00594b20 != (int *)0x0) {
    temp_v1 = (**(romwright_code **)(*DAT_00594b20 + 8))();
  }
  *(unsigned int *)(temp_v0 + 0x34) = temp_v1;
  return romwright_piece_4_4(param_1,temp_v0 - 8);
}
