/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030fa74` (_code @ 0x30fa74, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(void);
int jobStop(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int g_btlActionReflect; /* 0x434290 */

extern int jobGetWork(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */


void FUN_0030fa74(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = jobGetWork();
  temp_v0 = g_btlActionReflect;
  temp_v2 = *(int *)(g_btlActionReflect + 8);
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
  if (g_btlActionReflect != 0) {
    asdMemFree();
    g_btlActionReflect = 0;
  }
  jobStop(*(unsigned int *)(temp_v1 + 0x28),0);
  return;
}

} /* extern "C" */
