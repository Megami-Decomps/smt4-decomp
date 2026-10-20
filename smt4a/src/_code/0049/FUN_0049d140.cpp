/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049d140` (_code @ 0x49d140, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001681cc(...);
int FUN_0019de98(int, unsigned int);
int FUN_0037b578(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_0019de98. */
extern int FUN_002ebce4(void);
/* Supplied declaration required: FUN_0037b578. */


void FUN_0049d140(int param_1,unsigned int param_2,unsigned char param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  *(char *)(param_1 + 4) = (char)param_2;
  *(unsigned char *)(param_1 + 5) = param_3;
  switch(param_2) {
  case 0:
    FUN_001681cc(*(unsigned int *)(param_1 + 0x46c) & 0xffff);
    FUN_0019de98(0,0xf4f4f4ff);
    break;
  case 2:
    FUN_001681cc(0x106);
    FUN_0019de98(0,0xf4f4f4ff);
    break;
  case 3:
    FUN_001681cc(0x106);
    temp_v0 = *(unsigned int *)(param_1 + 0xc);
    temp_v2 = 0;
    FUN_0037b578(temp_v0,temp_v2);
    break;
  case 4:
  case 6:
    FUN_001681cc(0x107);
    temp_v0 = *(unsigned int *)(param_1 + 0xc);
    temp_v2 = 1;
    FUN_0037b578(temp_v0,temp_v2);
    break;
  case 7:
  case 8:
  case 9:
    FUN_001681cc(0x115);
    FUN_0037b578(*(unsigned int *)(param_1 + 0xc),1);
    break;
  case 10:
    FUN_0019de98(0,0xf4f4f4ff);
    return;
  }
  temp_v1 = FUN_002ebce4();
  if (temp_v1 != 0) {
    return;
  }
  FUN_0019de98(0,0xf4f4f4ff);
  return;
}

} /* extern "C" */
