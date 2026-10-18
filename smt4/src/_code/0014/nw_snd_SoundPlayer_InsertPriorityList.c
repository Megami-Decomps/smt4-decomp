/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundPlayer_InsertPriorityList` (_code @ 0x14be8c, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void nw_snd_SoundPlayer_InsertPriorityList(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)(param_1 + 0x10)) {
    temp_v0 = (unsigned int)*(unsigned char *)(param_2 + 0x98) + *(int *)(param_2 + 0x50);
    do {
      if (temp_v0 >= 0x80) {
        temp_v1 = 0x7f;
      }
      else {
        temp_v1 = temp_v0;
        if (temp_v0 < 0) {
          temp_v1 = 0;
        }
      }
      temp_v2 = piVar1[-0x25] + (unsigned int)*(unsigned char *)(piVar1 + -0x13);
      if (temp_v2 >= 0x80) {
        temp_v2 = 0x7f;
      }
      else if (temp_v2 < 0) {
        temp_v2 = 0;
      }
    } while ((temp_v2 <= temp_v1) && (piVar1 = (int *)*piVar1, piVar1 != (int *)(param_1 + 0x10)));
  }
  nw_ut_internal_LinkListImpl_insert(param_1 + 0xc,piVar1,param_2 + 0xe4);
  return;
}
