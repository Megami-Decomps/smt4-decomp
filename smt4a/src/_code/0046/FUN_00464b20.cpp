/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00464b20` (_code @ 0x464b20, 0x2fc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001cc084(unsigned int, int [9], unsigned int, unsigned int, unsigned int, unsigned int, int);
int FUN_002ffa9c(int, unsigned int, int, int);
int aeabi_uidivmod(unsigned int);
int nw_snd_internal_driver_Voice_Pause(int, int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
} param_4_stack;

/* Supplied declaration required: FUN_001cc084. */
/* Supplied declaration required: FUN_002ffa9c. */
extern int FUN_0050947c(int);
extern int FUN_005094c4(unsigned int);
/* Supplied declaration required: aeabi_uidivmod. */
extern void nn_snd_CTR_InitializeWaveBuffer(unsigned int);
extern int nw_snd_internal_driver_Voice_IsRun(int);
/* Supplied declaration required: nw_snd_internal_driver_Voice_Pause. */


void FUN_00464b20(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 goto(s); 6 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int unaff_r5;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  int aiStack_40 [9];
  
  if (*(char *)(param_1 + 0xd) != '\0') {
    temp_v9 = *(char *)(param_1 + 0x2068) != '\0';
    if (temp_v9) {
      unaff_r5 = *(int *)(param_1 + 0x22c);
    }
    if ((temp_v9 && unaff_r5 != 0) &&
       (temp_v1 = nw_snd_internal_driver_Voice_IsRun(unaff_r5), temp_v1 != 0)) {
      while (temp_v1 = param_1 + *(int *)(param_1 + 0x70) * 0x18, *(char *)(temp_v1 + 0x241) == '\x03')
      {
        nn_snd_CTR_InitializeWaveBuffer(temp_v1 + 0x230);
        *(int *)(param_1 + 0x58) =
             *(int *)(param_1 + *(int *)(param_1 + 0x70) * 8 + 0x20fc) + *(int *)(param_1 + 0x58);
        temp_v3 = 0;
        if (*(int *)(param_1 + 0x220) != 0) {
          do {
            aiStack_40[temp_v3] =
                 *(int *)(param_1 + 0xa8) * *(int *)(param_1 + 0x6c) +
                 *(int *)(param_1 + temp_v3 * 0x3c8 + 0x228);
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < *(unsigned int *)(param_1 + 0x220));
        }
        param_4 = 0;
        if (*(char *)(param_1 + 0x7c) == '\0') {
          param_4 = *(unsigned int *)(param_1 + 0x80);
        }
        else if (*(char *)(param_1 + 0x7c) == '\x01') {
          temp_v8 = *(unsigned int *)(param_1 + 0x80);
          temp_v3 = *(unsigned int *)(param_1 + 0x8c);
          FUN_002ffa9c((int)((unsigned long long)temp_v3 * (unsigned long long)temp_v8),
                       ((int)temp_v8 >> 0x1f) * temp_v3 +
                       (int)((unsigned long long)temp_v3 * (unsigned long long)temp_v8 >> 0x20),1000,0);
          if (temp_v4 != 0) {
            param_4 = 0xffffffff;
          }
          else {
            param_4 = FUN_002ffa9c((int)((unsigned long long)temp_v3 * (unsigned long long)temp_v8),
                                   ((int)temp_v8 >> 0x1f) * temp_v3 +
                                   (int)((unsigned long long)temp_v3 * (unsigned long long)temp_v8 >> 0x20),1000,0);
          }
        }
        temp_v2 = *(unsigned int *)(param_1 + 0x21c);
        *(unsigned int *)(param_1 + 0x80) = 0;
        *(unsigned int *)(param_1 + 0x21c) = 0;
        if (*(char *)(param_1 + 0xd) == '\0') {
          temp_v6 = 1;
        }
        else {
          temp_v6 = 2;
        }
        FUN_001cc084(*(unsigned int *)(param_1 + 0x60),aiStack_40,*(unsigned int *)(param_1 + 0x6c),
                     param_4,temp_v2,temp_v6,(int)*(char *)(param_1 + 0x84));
        temp_v3 = *(int *)(param_1 + 0x6c) + 1;
        *(unsigned int *)(param_1 + 0x6c) = temp_v3;
        if (*(unsigned int *)(param_1 + 0x68) <= temp_v3) {
          *(unsigned int *)(param_1 + 0x6c) = 0;
        }
        temp_v3 = *(int *)(param_1 + 0x70) + 1;
        *(unsigned int *)(param_1 + 0x70) = temp_v3;
        if (*(unsigned int *)(param_1 + 0x68) <= temp_v3) {
          *(unsigned int *)(param_1 + 0x70) = 0;
        }
      }
      if ((*(char *)(param_1 + 0x55) != '\0') ||
         (temp_v1 = FUN_005094c4(*(unsigned int *)(param_1 + 0x60)), temp_v1 == 0)) {
LAB_00464d94:
        temp_v1 = FUN_0050947c(unaff_r5);
        temp_v3 = *(int *)(param_1 + *(int *)(param_1 + 0x70) * 8 + 0x20f8) + temp_v1;
        *(unsigned int *)(param_1 + 0x74) = temp_v3;
        temp_v9 = *(char *)(param_1 + 0x90) != '\0';
        if (temp_v9) {
          param_4 = *(unsigned int *)(param_1 + 0xa0);
        }
        if (temp_v9 && param_4 < temp_v3) {
          temp_v7 = *(int *)(param_1 + 0x9c);
          temp_v1 = 0xe;
          if (*(char *)(param_1 + 0x88) == '\0') {
            temp_v1 = 8;
          }
          else if (*(char *)(param_1 + 0x88) == '\x01') {
            temp_v1 = 4;
          }
          if (param_4 - temp_v7 >= (unsigned int)(temp_v1 << 0xb)) {
            temp_v3 = (temp_v3 - param_4) + temp_v7;
          }
          else {
            aeabi_uidivmod(temp_v3 - temp_v7);
            temp_v3 = temp_v5 + temp_v7;
          }
        }
        *(unsigned int *)(param_1 + 0x78) = temp_v3;
        return;
      }
      temp_v3 = 0;
      if (temp_v3 < *(unsigned int *)(param_1 + 0x68)) {
        do {
          param_4 = temp_v3 * 3;
          temp_v0 = *(char *)(param_1 + temp_v3 * 0x18 + 0x241);
          if (temp_v0 == '\x02' || temp_v0 == '\x01') goto LAB_00464d94;
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < *(unsigned int *)(param_1 + 0x68));
      }
      *(unsigned char *)(param_1 + 0x57) = 1;
      *(unsigned char *)(param_1 + 0x55) = 1;
      if (*(char *)(param_1 + 0x54) != '\x01') {
        temp_v3 = 0;
        if (*(int *)(param_1 + 0x220) != 0) {
          do {
            temp_v1 = *(int *)(param_1 + temp_v3 * 0x3c8 + 0x22c);
            if (temp_v1 != 0) {
              nw_snd_internal_driver_Voice_Pause(temp_v1,1);
            }
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < *(unsigned int *)(param_1 + 0x220));
        }
        *(unsigned char *)(param_1 + 0x54) = 1;
      }
    }
  }
  return;
}

} /* extern "C" */
