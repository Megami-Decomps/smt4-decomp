/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001418b8` (_code @ 0x1418b8, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015fe40(unsigned char *, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_0063e1e8; /* 0x63e1e8 */

extern int nw_snd_SoundArchive_IsAvailable(unsigned char *);
/* Supplied declaration required: FUN_0015fe40. */


void FUN_001418b8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = nw_snd_SoundArchive_IsAvailable(&DAT_0063e1e8);
  if (temp_v0 != 0) {
    FUN_0015fe40(&DAT_0063e1e8,param_1);
    return;
  }
  return;
}

} /* extern "C" */
