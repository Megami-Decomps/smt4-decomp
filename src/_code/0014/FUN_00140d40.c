/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00140d40` (_code @ 0x140d40, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp58; /* 0x58: local_58 */
} param_5_stack;

/* Supplied declaration required: FUN_002a7060. */
extern int FUN_002a7094(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a8d68. */


void FUN_00140d40(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned char temp_v1 [68];
  
  temp_v0 = FUN_002a7094(param_1,0x1a,param_2);
  puVar2 = (unsigned int *)0x0;
  if (temp_v0 != 0) {
    puVar2 = *(unsigned int **)(temp_v0 + 4);
  }
  temp_v0 = *(int *)*puVar2;
  FUN_002a7060(temp_v1,2,param_3,param_4,param_5);
  FUN_002a8d68(**(unsigned int **)(temp_v0 + 4),temp_v1,temp_v0);
  return;
}
