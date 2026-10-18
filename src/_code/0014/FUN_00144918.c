/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00144918` (_code @ 0x144918, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_002a8d68. */
extern int FUN_002b0188(void);


void FUN_00144918(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002b0188();
  FUN_002a8d68(**(int **)(temp_v0 + 4) + (param_2 % 1000) * 0x14,param_3);
  return;
}
