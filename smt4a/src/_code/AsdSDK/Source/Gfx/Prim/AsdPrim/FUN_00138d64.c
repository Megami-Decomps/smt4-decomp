/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138d64` (_code @ 0x138d64, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char DAT_00636f40; /* 0x636f40 */
extern unsigned int DAT_00636f50; /* 0x636f50 */
extern unsigned int DAT_00636f54; /* 0x636f54 */

/* Supplied declaration required: FUN_00167ab4. */


void FUN_00138d64(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  do {
    temp_v1 = 0x10000;
    FUN_00167ab4(0x10000,0x100,0,param_1,0x10,1);
    *(unsigned int *)(&DAT_00636f40 + temp_v2 * 4) = temp_v1;
    temp_v0 = temp_v2 * 4;
    temp_v2 = temp_v2 + 1;
    *(unsigned int *)(temp_v0 + 0x636f48) = 0;
  } while (temp_v2 < 2);
  DAT_00636f50 = 0;
  DAT_00636f54 = param_1;
  return;
}
