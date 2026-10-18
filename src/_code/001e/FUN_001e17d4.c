/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e17d4` (_code @ 0x1e17d4, 0xe4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_0021f5bc(int, unsigned int);
/* Supplied declaration required: FUN_0025ccb8. */
/* Supplied declaration required: FUN_0026385c. */
/* Supplied declaration required: FUN_0026389c. */
extern int FUN_002cb75c(int, unsigned int);
/* Supplied declaration required: FUN_002f503c. */


void FUN_001e17d4(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_1 + 200);
  if (temp_v1 != 0) {
    temp_v0 = param_1;
    if (temp_v1 == 1) {
      temp_v0 = *(int *)(param_1 + 0xc4);
    }
    if ((temp_v1 == 1 && temp_v0 == 0) &&
       (temp_v1 = FUN_002cb75c((int)(short)*(unsigned int *)(param_1 + 0xcc),0), temp_v1 != 0)) {
      FUN_0026389c((int)(short)*(unsigned int *)(param_1 + 0xcc),0);
      FUN_0025ccb8((int)(short)*(unsigned int *)(param_1 + 0xcc),0);
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0xc4) == 1) {
      FUN_002f503c(*(unsigned int *)(param_1 + 0x10c));
      return;
    }
    if ((*(int *)(param_1 + 0xc4) == 0) &&
       (temp_v1 = FUN_0021f5bc((int)(short)*(unsigned int *)(param_1 + 0xcc),0), temp_v1 != 0)) {
      FUN_0026385c((int)(short)*(unsigned int *)(param_1 + 0xcc),0);
      return;
    }
  }
  return;
}
