/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ae554` (_code @ 0x2ae554, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023f328(int, int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_0023f328. */


void FUN_002ae554(int param_1,int param_2,unsigned short param_3,unsigned char param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = param_1 + param_2;
  temp_v0 = param_1 + param_2 * 2;
  if (*(char *)(temp_v2 + 0x4ae5) == '\0') {
    if (*(short *)(temp_v0 + 0x4210) < 0) {
      temp_v1 = 4;
    }
    else {
      temp_v1 = 0;
    }
    *(unsigned int *)(param_1 + param_2 * 4 + 0x4aec) = temp_v1;
  }
  *(unsigned char *)(temp_v2 + 0x4ae5) = 1;
  *(unsigned short *)(temp_v0 + 0x4b00) = param_3;
  *(unsigned char *)(temp_v2 + 0x4b0a) = param_4;
  FUN_0023f328(param_1,param_2,1);
  return;
}

} /* extern "C" */
