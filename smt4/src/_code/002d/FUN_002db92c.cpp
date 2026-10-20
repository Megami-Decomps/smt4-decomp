/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002db92c` (_code @ 0x2db92c, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00294f64(void);
int asdTMTexTableReleaseNode(...);
int asdMemFree(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00294f64. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
extern int jobGetWork(void);
/* Supplied declaration required: asdMemFree. */


void FUN_002db92c(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = jobGetWork();
  if (*(int *)(temp_v0 + 0x48) != 0) {
    FUN_00294f64();
    *(unsigned int *)(temp_v0 + 0x48) = 0;
  }
  else if (*(int *)(temp_v0 + 0xc) != 1) {
    asdTMTexTableReleaseNode(*(unsigned int *)(temp_v0 + 0x3c),*(unsigned int *)(temp_v0 + 0x40));
    if (-1 < *(int *)(temp_v0 + 0x44)) {
      asdTMTexTableReleaseNode(*(unsigned int *)(temp_v0 + 0x3c));
    }
    if (*(char *)(temp_v0 + 100) != '\0') {
      asdTMTexTableReleaseNode(0x32,0);
    }
  }
  asdMemFree(temp_v0);
  return;
}

} /* extern "C" */
