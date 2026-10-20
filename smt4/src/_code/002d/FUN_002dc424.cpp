#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;


void FUN_002dc424(int param_1,int param_2,unsigned int param_3)

{
  int temp_v0;
  
  temp_v0 = param_1 + param_2 * 4;
  *(unsigned char *)(param_1 + param_2 + 0x389c) = 1;
  *(unsigned int *)(temp_v0 + 0x38a4) = 0;
  *(unsigned int *)(temp_v0 + 0x38b8) = param_3;
  return;
}

} /* extern "C" */
