/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043d84c` (_code @ 0x43d84c, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int FUN_00440328(unsigned int *, unsigned int);


int FUN_0043d84c(unsigned int param_1,char *param_2)

{
  int temp_v0;
  int temp_v1;
  
  if (*param_2 == '\0') {
    temp_v0 = -0x375f8c08;
  }
  else {
    temp_v1 = *(unsigned int *)(param_2 + 4);
    temp_v0 = FUN_00440328((unsigned int *)&temp_v1,param_1);
    if (-1 < temp_v0) {
      temp_v0 = 0;
    }
  }
  return temp_v0;
}
