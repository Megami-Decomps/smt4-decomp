/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b1fb8` (_code @ 0x1b1fb8, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern int *FUN_00191548(void);
/* Supplied declaration required: FUN_001b6668. */
/* Supplied declaration required: FUN_001b9f70. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_Free. */


void FUN_001b1fb8(unsigned int param_1,int param_2,int *param_3)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  
  temp_v0 = 2;
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 == 2 || param_2 == 3) {
        temp_v0 = 1;
      }
    }
    else {
      temp_v0 = 3;
      nw_snd_internal_driver_Voice_Free();
    }
  }
  else {
    nw_snd_internal_driver_Voice_Free();
  }
  if ((romwright_code *)param_3[0x68] != (romwright_code *)0x0) {
    (*(romwright_code *)param_3[0x68])(param_3,temp_v0,param_3[0x69]);
  }
  param_3[0x6a] = 0;
  *(unsigned char *)(param_3 + 0x4e) = 0;
  *(unsigned char *)((int)param_3 + 0x139) = 0;
  *(unsigned char *)((int)param_3 + 0x13a) = 0;
  piVar1 = (int *)FUN_00191548();
  FUN_001b6668(piVar1 + 1,param_3 + 0x6c);
  if (param_3 != (int *)0x0) {
    FUN_001b9f70(param_3);
    *param_3 = *piVar1;
    *piVar1 = (int)param_3;
    return;
  }
  return;
}
