/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00465210` (_code @ 0x465210, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned char sp90; /* 0x90: local_90 */
} param_1_stack;

extern unsigned int FUN_001b1f04(void);
/* Supplied declaration required: FUN_001b6694. */
/* Supplied declaration required: FUN_00461a54. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_Pause. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_Start. */


void FUN_00465210(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int unaff_r6;
  unsigned int temp_v5;
  unsigned char temp_v6 [4];
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    temp_v5 = 0;
    if (*(int *)(param_1 + 0x224) != 0) {
      do {
        temp_v4 = param_1 + temp_v5 * 0x24;
        if (*(char *)(temp_v4 + 0x2068) != '\0') {
          temp_v6[0] = *(unsigned char *)(param_1 + 0x88);
          temp_v2 = 0;
          temp_v7 = (unsigned int)*(unsigned char *)(temp_v4 + 0x2074);
          temp_v8 = *(unsigned int *)(param_1 + 0x8c);
          if (*(char *)(temp_v4 + 0x2074) != '\0') {
            do {
              temp_v0 = *(int *)((char *)(temp_v4 + 0x2068) + temp_v2 * 4 + 4);
              if (temp_v0 != 0) {
                unaff_r6 = *(int *)(temp_v0 + 4);
              }
              if (temp_v0 != 0 && unaff_r6 != 0) {
                FUN_00461a54(unaff_r6,temp_v6,0);
                nw_snd_internal_driver_Voice_Start(unaff_r6);
              }
              temp_v2 = temp_v2 + 1;
            } while (temp_v2 < (int)(unsigned int)*(unsigned char *)(temp_v4 + 0x2074));
          }
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < *(unsigned int *)(param_1 + 0x224));
    }
    temp_v5 = (unsigned int)(*(char *)(param_1 + 0xe) != '\0');
    if (*(char *)(param_1 + 0x55) != '\0') {
      temp_v5 = 1;
    }
    if ((int)*(char *)(param_1 + 0x54) != temp_v5) {
      temp_v3 = 0;
      if (*(int *)(param_1 + 0x220) != 0) {
        do {
          temp_v4 = *(int *)(param_1 + temp_v3 * 0x3c8 + 0x22c);
          if (temp_v4 != 0) {
            nw_snd_internal_driver_Voice_Pause(temp_v4,temp_v5);
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < *(unsigned int *)(param_1 + 0x220));
      }
      *(char *)(param_1 + 0x54) = (char)temp_v5;
    }
    temp_v1 = FUN_001b1f04();
    FUN_001b6694(temp_v1,param_1 + 0x44);
    *(unsigned char *)(param_1 + 0xd) = 1;
  }
  return;
}
