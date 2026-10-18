/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fbe30` (_code @ 0x2fbe30, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern int FUN_002e3390(unsigned int);
extern unsigned int FUN_0043b0dc(int, unsigned int, unsigned int, int, unsigned int, int);


unsigned int FUN_002fbe30(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (*(int *)(param_1 + 4) < 1) {
    temp_v0 = 0xd8a0a064;
  }
  else {
    temp_v1 = FUN_002e3390(param_3);
    temp_v2 = FUN_002e3390(param_2);
    temp_v0 = FUN_0043b0dc(param_1 + 0xc,*(unsigned int *)(param_1 + 4),param_2,temp_v2 + 1,param_3,
                         temp_v1 + 1);
  }
  return temp_v0;
}
