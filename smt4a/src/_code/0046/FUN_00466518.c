/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00466518` (_code @ 0x466518, 0x264 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp70; /* 0x70: local_70 */
} param_3_stack;

/* Supplied declaration required: FUN_001d0984. */
/* Supplied declaration required: nn_snd_CTR_InitializeWaveBuffer. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_AppendWaveBuffer. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_CalcOffsetAdpcmParam. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_FrameToByte. */
/* Supplied declaration required: rt_memcpy. */


void FUN_00466518(int param_1,char *param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  unsigned short *puVar6;
  unsigned short *puVar7;
  int *piVar8;
  unsigned short *temp_v4;
  unsigned char temp_v5 [32];
  int temp_v6;
  
  *(char *)(param_1 + 0x84) = param_2[1];
  temp_v2 = *(unsigned int *)(param_2 + 0xc);
  *(unsigned int *)(param_1 + 0x7c) = temp_v2;
  *(unsigned int *)(param_1 + 0x80) = *(unsigned int *)(param_2 + 0x14);
  if ((param_3 != 0) && (*param_2 == '\x03')) {
    param_3 = (unsigned int)(((unsigned long long)param_3 * 0x49249249 + 0x49249249) >> 0x22) * 0xe;
  }
  *(unsigned int *)(param_1 + 0x78) = param_3;
  temp_v6 = nw_snd_internal_driver_Voice_FrameToByte(temp_v2,*param_2);
  nw_snd_internal_driver_Voice_FrameToByte(*(unsigned int *)(param_2 + 0x10),*param_2);
  temp_v3 = 0;
  temp_v0 = *(int *)(*(int *)(param_1 + 0x1a8) + 8);
  if (0 < temp_v0) {
    do {
      puVar6 = *(unsigned short **)(param_2 + temp_v3 * 0x30 + 0x18);
      temp_v4 = puVar6;
      if (param_3 != 0) {
        temp_v1 = nw_snd_internal_driver_Voice_FrameToByte(param_3,*param_2);
        temp_v4 = (unsigned short *)(temp_v1 + (int)puVar6);
      }
      temp_v1 = param_1 + temp_v3 * 6;
      puVar7 = (unsigned short *)(temp_v1 + 0x60);
      if (*param_2 == '\x03') {
        rt_memcpy(temp_v5,param_2 + temp_v3 * 0x30 + 0x1c,0x20);
        if (param_3 != 0) {
          *puVar7 = *temp_v4;
          *(unsigned short *)(temp_v1 + 0x62) = *(unsigned short *)(param_2 + temp_v3 * 0x30 + 0x3e);
          *(unsigned short *)(temp_v1 + 100) = *(unsigned short *)(param_2 + temp_v3 * 0x30 + 0x40);
          nw_snd_internal_driver_Voice_CalcOffsetAdpcmParam(puVar7,temp_v5,param_3,puVar6);
        }
        else {
          *puVar7 = *(unsigned short *)(param_2 + temp_v3 * 0x30 + 0x3c);
          *(unsigned short *)(temp_v1 + 0x62) = *(unsigned short *)(param_2 + temp_v3 * 0x30 + 0x3e);
          *(unsigned short *)(temp_v1 + 100) = *(unsigned short *)(param_2 + temp_v3 * 0x30 + 0x40);
        }
        if (param_2[1] != '\0') {
          *(unsigned short *)(temp_v1 + 0x6c) = *(unsigned short *)(param_2 + temp_v3 * 0x30 + 0x42);
          *(unsigned short *)(temp_v1 + 0x6e) = *(unsigned short *)(param_2 + temp_v3 * 0x30 + 0x44);
          *(unsigned short *)(temp_v1 + 0x70) = *(unsigned short *)(param_2 + temp_v3 * 0x30 + 0x46);
        }
        FUN_001d0984(*(unsigned int *)(param_1 + 0x1a8),temp_v3,temp_v5);
      }
      puVar4 = (unsigned int *)(param_1 + temp_v3 * 0x30);
      piVar8 = (int *)(puVar4 + 6);
      nn_snd_CTR_InitializeWaveBuffer(puVar4);
      *puVar4 = (unsigned int)temp_v4;
      puVar4[1] = *(int *)(param_2 + 0x10) - param_3;
      *(unsigned char *)(puVar4 + 4) = 0;
      if (*param_2 == '\x03') {
        puVar4[2] = (unsigned int)puVar7;
      }
      nw_snd_internal_driver_Voice_AppendWaveBuffer(*(unsigned int *)(param_1 + 0x1a8),temp_v3,puVar4);
      if (param_2[1] != '\0') {
        nn_snd_CTR_InitializeWaveBuffer(piVar8);
        *piVar8 = (int)puVar6 + temp_v6;
        puVar4[7] = *(int *)(param_2 + 0x10) - *(int *)(param_1 + 0x7c);
        *(unsigned char *)(puVar4 + 10) = 1;
        if (*param_2 == '\x03') {
          puVar4[8] = (unsigned int)(temp_v1 + 0x6c);
        }
        nw_snd_internal_driver_Voice_AppendWaveBuffer
                  (*(unsigned int *)(param_1 + 0x1a8),temp_v3,piVar8,1);
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v0);
  }
  return;
}
