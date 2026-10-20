/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001037e4` (_code @ 0x1037e4, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
} param_4_stack;

extern int FUN_002e7328(int, unsigned int, unsigned int, unsigned int, unsigned int);
extern int FUN_002e76b6(unsigned int);


int FUN_001037e4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  int temp_v0;
  char temp_v1;
  
  temp_v0 = FUN_002e7328(param_1,1,param_3,param_4,param_4);
  if (temp_v0 != 0) {
    temp_v0 = FUN_002e76b6(*(unsigned int *)(param_1 + 8));
    temp_v1 = *(char *)(temp_v0 + *(int *)(param_1 + 0xc));
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  else {
    temp_v1 = '\0';
  }
  *(unsigned char *)param_2 = temp_v1 != '\0';
  return param_1;
}

} /* extern "C" */
