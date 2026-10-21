/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f4ddc` (_code @ 0x1f4ddc, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

void partyStatusRefreshSlot(void*, int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: partyStatusRefreshSlot. */


void FUN_001f4ddc(int param_1,int param_2,unsigned short param_3,unsigned char param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = param_1 + param_2;
  temp_v0 = param_1 + param_2 * 2;
  if (*(char *)(temp_v2 + 0x5925) == '\0') {
    if (*(short *)(temp_v0 + 0x38f4) < 0) {
      temp_v1 = 7;
    }
    else {
      temp_v1 = 0;
    }
    *(unsigned int *)(param_1 + param_2 * 4 + 0x592c) = temp_v1;
  }
  *(unsigned char *)(temp_v2 + 0x5925) = 1;
  *(unsigned short *)(temp_v0 + 0x5940) = param_3;
  *(unsigned char *)(temp_v2 + 0x594a) = param_4;
  partyStatusRefreshSlot(reinterpret_cast<void*>(param_1),param_2,1);
  return;
}

} /* extern "C" */
