/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001578d4` (_code @ 0x1578d4, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned char DAT_004ead10; /* 0x4ead10 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002a2ab0. */
/* Supplied declaration required: FUN_002a3178. */
/* Supplied declaration required: FUN_002b4cd4. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */
/* Supplied declaration required: nn_snd_CTR_FxDelay_Finalize. */
/* Supplied declaration required: nn_snd_CTR_FxDelay_Initialize. */
/* Supplied declaration required: nn_snd_CTR_FxReverb_Finalize. */
/* Supplied declaration required: nw_snd_internal_MoveValue_float_int_SetTarget. */


unsigned int FUN_001578d4(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r4;
  unsigned int unaff_r5;
  int temp_v1;
  unsigned int unaff_r6;
  unsigned long long temp_v2;
  
  temp_v1 = param_1 + param_2 * 0x10;
  if (*(int *)(temp_v1 + 0x30) < *(int *)(temp_v1 + 0x2c)) {
    FUN_002b4cd4(param_1,param_2);
  }
  nw_snd_internal_MoveValue_float_int_SetTarget(temp_v1 + 0x24,0);
  temp_v1 = (int)(char)param_2;
  FUN_002a3178();
  if (param_3 != 0) {
    temp_v2 = romwright_piece_4_4(unaff_r5,unaff_r4);
    nn_os_CriticalSection_Enter(0x4e6f58);
    temp_v0 = temp_v1 * 8;
    if (*(int *)(temp_v0 + 0x4e6f48) != 0) {
      nn_snd_CTR_FxDelay_Finalize();
    }
    if (*(int *)(temp_v0 + 0x4e6f4c) != 0) {
      nn_snd_CTR_FxReverb_Finalize();
    }
    *(unsigned int *)(temp_v0 + 0x4e6f48) = 0;
    *(unsigned int *)(temp_v0 + 0x4e6f4c) = 0;
    FUN_002a2ab0(&DAT_004ead10,temp_v1,0,param_4,temp_v2,unaff_r6);
    nn_os_CriticalSection_Leave(0x4e6f58);
    nn_os_CriticalSection_Enter(0x4e6f58);
    *(int *)(temp_v0 + 0x4e6f48) = param_3;
    nn_snd_CTR_FxDelay_Initialize(param_3);
    FUN_002a2ab0(&DAT_004ead10,temp_v1,1);
    nn_os_CriticalSection_Leave(0x4e6f58);
    return 1;
  }
  return 0;
}
