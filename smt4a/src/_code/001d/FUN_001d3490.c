/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d3490` (_code @ 0x1d3490, 0x1fc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char DAT_006433d0; /* 0x6433d0 */

/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Memory_Barrier (CALLOTHER). */
/* Supplied declaration required: FUN_001d3798. */
/* Supplied declaration required: FUN_001d39a0. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_ResetChannelNextBuffer. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_UpdateChannelNextBuffer. */


void FUN_001d3490(unsigned int *param_1)

{
/* irregular: 1 unstructured edge(s); 1 goto(s); 7 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  nn_os_CriticalSection_Enter();
  if (*(char *)((int)param_1 + 0x6f) != '\0') {
    nn_snd_CTR_Dspsnd_ResetChannelNextBuffer(&DAT_006433d0,*param_1 & 0xff);
    if ((param_1[0xc] != 0) && (*(char *)(param_1[0xc] + 0x11) == '\x04')) {
      *(unsigned short *)(param_1 + 0xd) = 0;
    }
    else if (0 < (short)param_1[0xd]) {
      nn_snd_CTR_Dspsnd_UpdateChannelNextBuffer(&DAT_006433d0,*param_1 & 0xff);
      *(unsigned short *)(param_1 + 0xd) = 1;
    }
    *(unsigned short *)((int)param_1 + 0x36) = 0;
    temp_v4 = param_1[0xc];
    while( 1 ) {
      if (temp_v4 == 0) {
        param_1[0xc] = 0;
        goto LAB_001d3570;
      }
      if (*(char *)(temp_v4 + 0x11) != '\x04') break;
      coproc_moveto_Data_Memory_Barrier(0);
      *(unsigned char *)(temp_v4 + 0x11) = 3;
      temp_v4 = *(unsigned int *)(temp_v4 + 0x14);
    }
    param_1[0xc] = temp_v4;
    do {
      temp_v3 = *(unsigned int *)(temp_v4 + 0x14);
      if ((temp_v3 != 0) && (*(char *)(temp_v3 + 0x11) == '\x04')) {
        *(unsigned int *)(temp_v4 + 0x14) = *(unsigned int *)(temp_v3 + 0x14);
        coproc_moveto_Data_Memory_Barrier(0);
        *(unsigned char *)(temp_v3 + 0x11) = 3;
        temp_v3 = temp_v4;
      }
      temp_v4 = temp_v3;
    } while (temp_v3 != 0);
LAB_001d3570:
    *(unsigned char *)((int)param_1 + 0x6f) = 0;
  }
  temp_v4 = param_1[0xc];
  temp_v1 = (int)(short)param_1[0xd];
  for (temp_v2 = temp_v1; temp_v2 != 0 && temp_v4 != 0; temp_v2 = temp_v2 - 1) {
    temp_v4 = *(unsigned int *)(temp_v4 + 0x14);
  }
  for (; temp_v1 < 5; temp_v1 = temp_v1 + 1) {
    temp_v3 = 0;
    if (temp_v4 != 0) {
      if ((short)param_1[0xd] != 0) {
        FUN_001d3798(&DAT_006433d0,*param_1 & 0xff,temp_v4,(int)*(short *)((int)param_1 + 0x36));
        temp_v0 = *(short *)((int)param_1 + 0x36) + 1;
        *(short *)((int)param_1 + 0x36) = temp_v0;
        if (temp_v0 >= 4) {
          *(unsigned short *)((int)param_1 + 0x36) = 0;
        }
      }
      else {
        *(unsigned short *)((int)param_1 + 0x36) = 0;
        nn_snd_CTR_Dspsnd_ResetChannelNextBuffer(&DAT_006433d0,*param_1 & 0xff);
        *(unsigned char *)(temp_v4 + 0x11) = 2;
        if ((*(unsigned short *)((int)param_1 + 0x1e) & 0xf) >> 2 == 2) {
          temp_v3 = (unsigned int)*(unsigned char *)((int)param_1 + 0x6e);
          temp_v5 = temp_v3 == 0;
          if (temp_v5) {
            temp_v3 = *(unsigned int *)(temp_v4 + 8);
          }
          if (!temp_v5 || temp_v3 != 0) {
            *(unsigned char *)((int)param_1 + 0x6e) = 1;
          }
        }
        FUN_001d39a0(&DAT_006433d0,*param_1 & 0xff,temp_v4,*(unsigned short *)((int)param_1 + 0x1e));
      }
      temp_v3 = *(unsigned int *)(temp_v4 + 0x14);
      *(short *)(param_1 + 0xd) = (short)param_1[0xd] + 1;
    }
    temp_v4 = temp_v3;
  }
  nn_os_CriticalSection_Leave(param_1 + 0x1c);
  return;
}
