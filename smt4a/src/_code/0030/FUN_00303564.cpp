/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303564` (_code @ 0x303564, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001418fc(unsigned char *);
int FUN_002b5cb4(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int g_lmapScene; /* 0x581288 */
extern unsigned char DAT_005f10cc; /* 0x5f10cc */

/* Supplied declaration required: FUN_001418fc. */
/* Supplied declaration required: FUN_002b5cb4. */


void FUN_00303564(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(g_lmapScene + 0x1c);
  FUN_002b5cb4();
  if (temp_v0 < 0x43340000) {
    FUN_001418fc(&DAT_005f10cc);
    return;
  }
  FUN_001418fc(&DAT_005f10cc);
  return;
}

} /* extern "C" */
