/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001413d0` (_code @ 0x1413d0, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp58; /* 0x58: local_58 */
} param_5_stack;

/* Supplied declaration required: FUN_002a6d1c. */
extern int FUN_002a6d50(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a8ac4. */


void FUN_001413d0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned char temp_v1 [68];
  
  temp_v0 = FUN_002a6d50(param_1,0x1a,param_2);
  puVar2 = (unsigned int *)0x0;
  if (temp_v0 != 0) {
    puVar2 = *(unsigned int **)(temp_v0 + 4);
  }
  temp_v0 = *(int *)*puVar2;
  FUN_002a6d1c(temp_v1,2,param_3,param_4,param_5);
  FUN_002a8ac4(**(unsigned int **)(temp_v0 + 4),temp_v1,temp_v0);
  return;
}
