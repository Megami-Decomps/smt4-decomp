/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003df37c` (_code @ 0x3df37c, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern int FUN_0023a0d8(unsigned int, int *, unsigned int);
extern unsigned int FUN_002b5c44(void);


int FUN_003df37c(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,int param_4)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = param_4;
  temp_v0 = FUN_002b5c44();
  temp_v1 = FUN_0023a0d8(temp_v0,&temp_v2,*param_1);
  if (-1 < temp_v1) {
    *param_2 = *(unsigned int *)(temp_v2 + 8);
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
