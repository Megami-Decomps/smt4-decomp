/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00423144` (_code @ 0x423144, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b4a58(unsigned int, int *, int, int, int, int, unsigned int, unsigned int);
int hasExclusiveAccess(int);

extern int DAT_005880d8; /* 0x5880d8 */
extern unsigned int DAT_005880e4; /* 0x5880e4 */
extern unsigned int DAT_005880e8; /* 0x5880e8 */
extern unsigned int DAT_005880ec; /* 0x5880ec */
extern unsigned int DAT_005c0ad8; /* 0x5c0ad8 */
extern int DAT_00618518; /* 0x618518 */
extern unsigned int DAT_0061851c; /* 0x61851c */
extern int DAT_00618520; /* 0x618520 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_001b4a58. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_snd_CTR_Voice_SetState(unsigned int, int);


void FUN_00423144(unsigned int param_1)

{
/* irregular: irregular input(s): in_lr; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int unaff_r4;
  unsigned int *puVar4;
  unsigned int in_lr;
  unsigned char temp_v3;
  
  if ((int)param_1 < 0) {
    return;
  }
  if (param_1 < DAT_005880e4) {
    nn_os_CriticalSection_Enter((unsigned int)&DAT_00618518);
    puVar4 = (unsigned int *)(DAT_005880d8 + param_1 * 0x70);
    nn_snd_CTR_Voice_SetState(*puVar4,1);
    temp_v0 = DAT_005880ec;
    if ((DAT_005880e8 >= 0x80000000) || (DAT_005880ec >= 0x80000000)) {
      if (DAT_005880ec < DAT_005880e8) {
        do {
          if (*(unsigned int **)((temp_v0 & 0x3f) * 0xc + 0x618524) == puVar4) {
            *(unsigned int *)((temp_v0 & 0x3f) * 0xc + 0x618524) = 0;
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < DAT_005880e8);
      }
    }
    else {
      temp_v2 = 1;
      temp_v1 = DAT_005880ec;
      if ((int)((DAT_005880e8 - DAT_005880ec) + 1) >= 2) {
        do {
          if (*(unsigned int **)((temp_v1 & 0x3f) * 0xc + 0x618524) == puVar4) {
            *(unsigned int *)((temp_v1 & 0x3f) * 0xc + 0x618524) = 0;
          }
          temp_v2 = temp_v2 + 1;
          temp_v1 = temp_v1 + 1;
        } while (temp_v2 < (int)((DAT_005880e8 - temp_v0) + 1));
      }
    }
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x18] = 0;
    puVar4[0x19] = 0;
    DAT_00618520 = DAT_00618520 - 1;
    if (DAT_00618520 == 0) {
      DAT_0061851c = 0;
      do {
        temp_v2 = -DAT_00618518;
        temp_v3 = (unsigned char)hasExclusiveAccess(0x618518);
      } while (!temp_v3);
      temp_v3 = DAT_00618518 != -1;
      DAT_00618518 = temp_v2;
      if (temp_v3 && 0 < temp_v2) {
        FUN_001b4a58(DAT_005c0ad8,&DAT_00618518,0,1,0,0,unaff_r4,in_lr);
      }
      return;
    }
    return;
  }
  return;
}

} /* extern "C" */
