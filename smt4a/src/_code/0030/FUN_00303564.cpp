/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303564` (_code @ 0x303564, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiSetFloatPair(unsigned char *);
int distSpatial(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int g_lmapScene; /* 0x581288 */
extern unsigned char g_localCamera; /* 0x5f10cc */

/* Supplied declaration required: uiSetFloatPair. */
/* Supplied declaration required: distSpatial. */


void FUN_00303564(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(g_lmapScene + 0x1c);
  distSpatial();
  if (temp_v0 < 0x43340000) {
    uiSetFloatPair(&g_localCamera);
    return;
  }
  uiSetFloatPair(&g_localCamera);
  return;
}

} /* extern "C" */
