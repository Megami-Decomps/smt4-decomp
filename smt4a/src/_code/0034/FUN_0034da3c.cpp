/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034da3c` (_code @ 0x34da3c, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(int);
int asdTMTexTableReleaseNode(...);
int FUN_0040a244(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int jobGetWork(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: FUN_0040a244. */


void FUN_0034da3c(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = jobGetWork();
  if (*(int *)(temp_v0 + 0x4c) != 0) {
    FUN_0040a244();
    *(unsigned int *)(temp_v0 + 0x4c) = 0;
  }
  else if (*(int *)(temp_v0 + 0xc) != 1) {
    asdTMTexTableReleaseNode(*(unsigned int *)(temp_v0 + 0x40),*(unsigned int *)(temp_v0 + 0x44));
    if (-1 < *(int *)(temp_v0 + 0x48)) {
      asdTMTexTableReleaseNode(*(unsigned int *)(temp_v0 + 0x40));
    }
    if (*(char *)(temp_v0 + 0x88) != '\0') {
      asdTMTexTableReleaseNode(0x27,0);
    }
  }
  asdMemFree(temp_v0);
  return;
}

} /* extern "C" */
