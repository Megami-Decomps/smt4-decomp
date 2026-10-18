/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a2404` (_code @ 0x4a2404, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00163aa4. */
extern unsigned int FUN_001654d8(int);
extern unsigned int FUN_001654e4(int);
extern int FUN_002bf444(void);
/* Supplied declaration required: FUN_0032cfe0. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_004935b0. */


void FUN_004a2404(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = param_1 + 0x55c;
  *(unsigned short *)(param_1 + 0xa874) = 8;
  FUN_00163aa4(temp_v2);
  temp_v0 = FUN_001654e4(temp_v2);
  temp_v1 = FUN_001654d8(temp_v2);
  FUN_004935b0(param_1 + 200,temp_v1,temp_v0);
  if ((*(char *)(param_1 + 0x5e6) != '\0') && (temp_v2 = FUN_002bf444(), temp_v2 != 0)) {
    FUN_003343f0(0);
    *(unsigned int *)(param_1 + 0x14) = 2;
    *(unsigned int *)(param_1 + 0x18) = 0;
    FUN_004935b0(param_1 + 200,0,0);
    FUN_0032cfe0(param_1);
    return;
  }
  return;
}
