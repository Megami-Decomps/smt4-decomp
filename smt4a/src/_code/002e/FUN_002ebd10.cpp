/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ebd10` (_code @ 0x2ebd10, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(int, int);
int onlineTimeGetNow(int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: onlineTimeGetNow. */


void FUN_002ebd10(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = param_3;
  temp_v1 = param_4;
  sysMemClear(param_1 + 0x10,0xbc);
  *(unsigned int *)(param_1 + 0xc0) = 0xffffffff;
  onlineTimeGetNow(&temp_v0);
  *(unsigned int *)(param_1 + 0xc) = temp_v1;
  *(unsigned int *)(param_1 + 8) = temp_v0;
  return;
}

} /* extern "C" */
