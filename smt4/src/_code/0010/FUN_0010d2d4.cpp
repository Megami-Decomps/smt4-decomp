/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d2d4` (_code @ 0x10d2d4, 0x120 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_snd_internal_BasicSound_Pause(int, int, unsigned int);

extern unsigned int DAT_004e3178; /* 0x4e3178 */

extern int FUN_001221b4(void);
extern int nw_snd_internal_BasicSound_IsPause(void);
/* Supplied declaration required: nw_snd_internal_BasicSound_Pause. */


unsigned int FUN_0010d2d4(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  
  if (param_1 >= 2) {
    return 0;
  }
  piVar3 = (int *)(&DAT_004e3178)[param_1];
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  if (param_2 != 0) {
    if ((param_2 == 1) && ((*(unsigned char *)(piVar3 + 3) & 0x20) == 0)) {
      if (*piVar3 == 0) goto LAB_0010d3c8;
      temp_v1 = nw_snd_internal_BasicSound_IsPause();
      if (temp_v1 != 0) {
        if (*piVar3 != 0) {
          nw_snd_internal_BasicSound_Pause(*piVar3,0,param_3);
        }
        temp_v0 = (*(unsigned char *)(piVar3 + 3) & 0xfb) | 0x20;
        *(unsigned char *)(piVar3 + 3) = temp_v0;
      }
    }
  }
  else if (((*(unsigned char *)(piVar3 + 3) & 0x10) == 0) &&
          ((*piVar3 == 0 || (temp_v1 = nw_snd_internal_BasicSound_IsPause(), temp_v1 == 0)))) {
    if (*piVar3 != 0) {
      nw_snd_internal_BasicSound_Pause(*piVar3,1,param_3);
    }
    temp_v0 = *(unsigned char *)(piVar3 + 3) | 0x14;
    *(unsigned char *)(piVar3 + 3) = temp_v0;
  }
  if ((*piVar3 != 0) && (temp_v1 = FUN_001221b4(), 0 < temp_v1)) {
    return 0;
  }
LAB_0010d3c8:
  temp_v0 = *(unsigned char *)(piVar3 + 3);
  if ((temp_v0 & 0x10) != 0) {
    temp_v0 = temp_v0 & 0xef;
    *(unsigned char *)(piVar3 + 3) = temp_v0;
  }
  if ((temp_v0 & 0x20) != 0) {
    *(unsigned char *)(piVar3 + 3) = temp_v0 & 0xdf;
  }
  return 1;
}

} /* extern "C" */
