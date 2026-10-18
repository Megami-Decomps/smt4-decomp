/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e868` (_code @ 0x37e868, 0x268 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

/* Supplied declaration required: FUN_0015c404. */
/* Supplied declaration required: FUN_002aa278. */
/* Supplied declaration required: nn_snd_CTR_InitializeWaveBuffer. */
extern int nw_snd_internal_driver_Voice_IsRun(void);
/* Supplied declaration required: nw_snd_internal_driver_Voice_Pause. */


void FUN_0037e868(int param_1)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  int aiStack_38 [8];
  
  if (*(char *)(param_1 + 0xd) != '\0') {
    temp_v7 = *(char *)(param_1 + 0x1ad8) != '\0';
    temp_v1 = 0;
    if (temp_v7) {
      temp_v1 = *(int *)(param_1 + 0x108);
    }
    if ((temp_v7 && temp_v1 != 0) && (temp_v1 = nw_snd_internal_driver_Voice_IsRun(), temp_v1 != 0)) {
      while (temp_v1 = param_1 + *(int *)(param_1 + 0x70) * 0x18, *(char *)(temp_v1 + 0x11d) == '\x03')
      {
        nn_snd_CTR_InitializeWaveBuffer(temp_v1 + 0x10c);
        *(int *)(param_1 + 0x58) =
             *(int *)(param_1 + *(int *)(param_1 + 0x70) * 8 + 0x1b5c) + *(int *)(param_1 + 0x58);
        temp_v2 = 0;
        if (*(int *)(param_1 + 0xd0) != 0) {
          do {
            aiStack_38[temp_v2] =
                 *(int *)(param_1 + 0x94) * *(int *)(param_1 + 0x6c) +
                 *(int *)(param_1 + temp_v2 * 0x340 + 0xd8);
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < *(unsigned int *)(param_1 + 0xd0));
        }
        temp_v5 = 0;
        if (*(char *)(param_1 + 0x74) == '\0') {
          temp_v5 = *(unsigned int *)(param_1 + 0x78);
        }
        else if (*(char *)(param_1 + 0x74) == '\x01') {
          temp_v2 = *(unsigned int *)(param_1 + 0x78);
          temp_v6 = *(unsigned int *)(param_1 + 0x80);
          FUN_002aa278((int)((unsigned long long)temp_v6 * (unsigned long long)temp_v2),
                       ((int)temp_v2 >> 0x1f) * temp_v6 +
                       (int)((unsigned long long)temp_v6 * (unsigned long long)temp_v2 >> 0x20),1000,0);
          if (temp_v4 != 0) {
            temp_v5 = 0xffffffff;
          }
          else {
            temp_v5 = FUN_002aa278((int)((unsigned long long)temp_v6 * (unsigned long long)temp_v2),
                                 ((int)temp_v2 >> 0x1f) * temp_v6 +
                                 (int)((unsigned long long)temp_v6 * (unsigned long long)temp_v2 >> 0x20),1000,0);
          }
        }
        *(unsigned int *)(param_1 + 0x78) = 0;
        if (*(char *)(param_1 + 0xd) == '\0') {
          temp_v3 = 1;
        }
        else {
          temp_v3 = 2;
        }
        FUN_0015c404(*(unsigned int *)(param_1 + 0x60),aiStack_38,*(unsigned int *)(param_1 + 0x6c),
                     temp_v5,temp_v3);
        temp_v2 = *(int *)(param_1 + 0x6c) + 1;
        *(unsigned int *)(param_1 + 0x6c) = temp_v2;
        if (*(unsigned int *)(param_1 + 0x68) <= temp_v2) {
          *(unsigned int *)(param_1 + 0x6c) = 0;
        }
        temp_v2 = *(int *)(param_1 + 0x70) + 1;
        *(unsigned int *)(param_1 + 0x70) = temp_v2;
        if (*(unsigned int *)(param_1 + 0x68) <= temp_v2) {
          *(unsigned int *)(param_1 + 0x70) = 0;
        }
      }
      if (((*(char *)(param_1 + 0x54) == '\0') &&
          (*(char *)(*(int *)(param_1 + 0x60) + 0x4d) == '\0')) &&
         (*(int *)(*(int *)(param_1 + 0x60) + 0x80) != 0)) {
        temp_v2 = 0;
        if (temp_v2 < *(unsigned int *)(param_1 + 0x68)) {
          do {
            temp_v0 = *(char *)(param_1 + temp_v2 * 0x18 + 0x11d);
            if (temp_v0 == '\x02' || temp_v0 == '\x01') {
              return;
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < *(unsigned int *)(param_1 + 0x68));
        }
        *(unsigned char *)(param_1 + 0x56) = 1;
        *(unsigned char *)(param_1 + 0x54) = 1;
        if (*(char *)(param_1 + 0x53) != '\x01') {
          temp_v2 = 0;
          if (*(int *)(param_1 + 0xd0) != 0) {
            do {
              temp_v1 = *(int *)(param_1 + temp_v2 * 0x340 + 0x108);
              if (temp_v1 != 0) {
                nw_snd_internal_driver_Voice_Pause(temp_v1,1);
              }
              temp_v2 = temp_v2 + 1;
            } while (temp_v2 < *(unsigned int *)(param_1 + 0xd0));
          }
          *(unsigned char *)(param_1 + 0x53) = 1;
        }
      }
    }
  }
  return;
}
