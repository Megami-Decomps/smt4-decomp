/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011a724` (_code @ 0x11a724, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_0011a300. */


void FUN_0011a724(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = param_2;
  temp_v1 = param_3;
  temp_v2 = param_4;
  do {
    FUN_0011a300(param_1);
  } while (*(char *)(param_1 + 0x22) == '\x04');
  if ((*(char *)(param_1 + 0x22) == '\x05') && (*(int *)(param_1 + 0x2a0) != 0)) {
    temp_v0 = *(unsigned int *)(param_1 + 0x228);
    temp_v1 = *(unsigned int *)(param_1 + 0x22c);
    temp_v2 = *(unsigned int *)(param_1 + 0x230);
    (**(romwright_code **)(param_1 + 0x2a0))(*(unsigned int *)(param_1 + 0x1a0),&temp_v0,param_1 + 0x2a4);
  }
  return;
}
