/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_Finalize` (_code @ 0x129384, 0xf0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp18; /* 0x18: local_18 */
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned short sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char DAT_004a95c0; /* 0x4a95c0 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0013a1c0. */
/* Supplied declaration required: FUN_0013a1f4. */
/* Supplied declaration required: FUN_0013a294. */
/* Supplied declaration required: FUN_0013a4c0. */
/* Supplied declaration required: FUN_002bb150. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */
/* Supplied declaration required: rt_memcpy. */


void nn_snd_CTR_Dspsnd_Finalize(int *param_1,int param_2)

{
/* irregular: 9 native warning(s); review required */
  unsigned short temp_v0 [2];
  short temp_v1 [2];
  char temp_v2 [8];
  
  if (param_2 == 0) {
    temp_v0[0] = 1;
  }
  else {
    temp_v0[0] = 3;
  }
  FUN_0013a1f4(2,temp_v0,4);
  while( 1 ) {
    temp_v1[0] = 0;
    FUN_0013a1c0(0,temp_v2);
    if (temp_v2[0] != '\0') {
      FUN_0013a4c0(0,temp_v1);
    }
    if (temp_v1[0] == 1) break;
    FUN_002bb150(&DAT_004a95c0,0);
  }
  if (param_2 != 0) {
    rt_memcpy(param_1 + 6,param_1[0x42a],0x1080);
  }
  nn_os_CriticalSection_Enter(param_1 + 2);
  *(unsigned char *)(param_1 + 0x4c6) = 0;
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  FUN_0013a294(*param_1,2);
  software_interrupt(0x23);
  param_1[1] = 0;
  nn_os_CriticalSection_Leave(param_1 + 2);
  param_1[4] = -1;
  return;
}
