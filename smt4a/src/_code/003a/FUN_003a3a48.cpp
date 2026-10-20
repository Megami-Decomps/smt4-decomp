/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a3a48` (_code @ 0x3a3a48, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_005712f0; /* 0x5712f0 */

/* Supplied declaration required: jobStop. */
extern int jobGetWork(void);
/* Supplied declaration required: asdMemFree. */


void FUN_003a3a48(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = jobGetWork();
  temp_v0 = DAT_005712f0;
  temp_v2 = *(int *)(DAT_005712f0 + 8);
  while (temp_v2 != 0) {
    if (*(int *)(temp_v2 + 0x10) == 0) {
      *(unsigned int *)(temp_v0 + 8) = *(unsigned int *)(temp_v2 + 0xc);
    }
    else {
      *(unsigned int *)(*(int *)(temp_v2 + 0x10) + 0xc) = *(unsigned int *)(temp_v2 + 0xc);
    }
    if (*(int *)(temp_v2 + 0xc) == 0) {
      *(unsigned int *)(temp_v0 + 0xc) = *(unsigned int *)(temp_v2 + 0x10);
    }
    else {
      *(unsigned int *)(*(int *)(temp_v2 + 0xc) + 0x10) = *(unsigned int *)(temp_v2 + 0x10);
    }
    *(int *)(temp_v0 + 4) = *(int *)(temp_v0 + 4) - 1;
    asdMemFree();
    temp_v2 = *(int *)(temp_v0 + 8);
  }
  if (DAT_005712f0 != 0) {
    asdMemFree();
    DAT_005712f0 = 0;
  }
  jobStop(*(unsigned int *)(temp_v1 + 0x48),0);
  return;
}

} /* extern "C" */
