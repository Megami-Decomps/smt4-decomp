/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundPlayer_detail_FreePlayerHeap` (_code @ 0x376a78, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003798ec(int, int);
int FUN_00379cc4(int);
int nw_ut_internal_LinkListImpl_insert(int, int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_003798ec. */
/* Supplied declaration required: FUN_00379cc4. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void nw_snd_SoundPlayer_detail_FreePlayerHeap(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_2 + 4);
  if (temp_v0 != 0) {
    FUN_00379cc4(temp_v0);
    FUN_003798ec(param_2,temp_v0);
    nw_ut_internal_LinkListImpl_insert(param_1 + 0x18,param_1 + 0x1c,temp_v0 + 0x18);
    return;
  }
  return;
}

} /* extern "C" */
