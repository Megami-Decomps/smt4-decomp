/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00394a50` (_code @ 0x394a50, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c1dd8(int);
int nw_snd_SoundHeap_LoadState(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_004e316c; /* 0x4e316c */

/* Supplied declaration required: FUN_002c1dd8. */
extern int FUN_002c564c(unsigned int);
extern int FUN_002e14e4(unsigned int);
/* Supplied declaration required: nw_snd_SoundHeap_LoadState. */


int FUN_00394a50(void)

{
/* irregular: irregular input(s): in_r3; 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int in_r3;
  
  temp_v0 = FUN_002c564c(1);
  if (temp_v0 != 0) {
    return temp_v0;
  }
  FUN_002c1dd8(2);
  temp_v0 = FUN_002e14e4(2);
  temp_v1 = 0;
  if (DAT_004e316c != 0) {
    in_r3 = *(int *)(DAT_004e316c + 0x10);
  }
  if (DAT_004e316c != 0 && in_r3 != 0) {
    if (*(int *)(DAT_004e316c + 0x44) < temp_v0) {
      temp_v0 = *(int *)(DAT_004e316c + 0x44);
    }
    nw_snd_SoundHeap_LoadState(DAT_004e316c,temp_v0);
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
