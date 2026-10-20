/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_Channel_AppendWaveBuffer` (_code @ 0x37fb84, 0x254 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015d240(unsigned int, int, unsigned char [32]);
int nw_snd_internal_driver_Voice_AppendWaveBuffer(...);
int nw_snd_internal_driver_Voice_CalcOffsetAdpcmParam(unsigned short *, unsigned char [32], unsigned int, unsigned short *);
int nw_snd_internal_driver_Voice_FrameToByte(...);
int rt_memcpy(unsigned char [32], char *, int);

/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp70; /* 0x70: local_70 */
} param_3_stack;

/* Supplied declaration required: FUN_0015d240. */
extern void nn_snd_CTR_InitializeWaveBuffer(unsigned int);
/* Supplied declaration required: nw_snd_internal_driver_Voice_AppendWaveBuffer. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_CalcOffsetAdpcmParam. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_FrameToByte. */
/* Supplied declaration required: rt_memcpy. */


void nw_snd_internal_driver_Channel_AppendWaveBuffer(int param_1,char *param_2,unsigned int param_3)

{
/* irregular: 5 native warning(s); review required */
  long long temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  unsigned short *puVar7;
  unsigned short *puVar8;
  unsigned int temp_v5;
  int *piVar10;
  unsigned short *temp_v6;
  unsigned char temp_v7 [32];
  int temp_v8;
  
  *(char *)(param_1 + 0x7c) = param_2[1];
  temp_v1 = *(unsigned int *)(param_2 + 0xc);
  *(unsigned int *)(param_1 + 0x78) = temp_v1;
  temp_v5 = param_3;
  if ((param_3 != 0) && (*param_2 == '\x03')) {
    temp_v0 = (unsigned long long)param_3 * 0x49249249 + 0x49249249;
    param_3 = (unsigned int)temp_v0;
    temp_v5 = (unsigned int)((unsigned long long)temp_v0 >> 0x22) * 0xe;
  }
  temp_v8 = nw_snd_internal_driver_Voice_FrameToByte(temp_v1,*param_2,param_3);
  nw_snd_internal_driver_Voice_FrameToByte(*(unsigned int *)(param_2 + 0x10),*param_2);
  temp_v4 = 0;
  temp_v2 = *(int *)(*(int *)(param_1 + 0x134) + 8);
  if (0 < temp_v2) {
    do {
      puVar7 = *(unsigned short **)(param_2 + temp_v4 * 0x30 + 0x14);
      temp_v6 = puVar7;
      if (temp_v5 != 0) {
        temp_v3 = nw_snd_internal_driver_Voice_FrameToByte(temp_v5,*param_2);
        temp_v6 = (unsigned short *)(temp_v3 + (int)puVar7);
      }
      temp_v3 = param_1 + temp_v4 * 6;
      puVar8 = (unsigned short *)(temp_v3 + 0x60);
      if (*param_2 == '\x03') {
        rt_memcpy(temp_v7,param_2 + temp_v4 * 0x30 + 0x18,0x20);
        if (temp_v5 != 0) {
          *puVar8 = *temp_v6;
          *(unsigned short *)(temp_v3 + 0x62) = *(unsigned short *)(param_2 + temp_v4 * 0x30 + 0x3a);
          *(unsigned short *)(temp_v3 + 100) = *(unsigned short *)(param_2 + temp_v4 * 0x30 + 0x3c);
          nw_snd_internal_driver_Voice_CalcOffsetAdpcmParam(puVar8,temp_v7,temp_v5,puVar7);
        }
        else {
          *puVar8 = *(unsigned short *)(param_2 + temp_v4 * 0x30 + 0x38);
          *(unsigned short *)(temp_v3 + 0x62) = *(unsigned short *)(param_2 + temp_v4 * 0x30 + 0x3a);
          *(unsigned short *)(temp_v3 + 100) = *(unsigned short *)(param_2 + temp_v4 * 0x30 + 0x3c);
        }
        if (param_2[1] != '\0') {
          *(unsigned short *)(temp_v3 + 0x6c) = *(unsigned short *)(param_2 + temp_v4 * 0x30 + 0x3e);
          *(unsigned short *)(temp_v3 + 0x6e) = *(unsigned short *)(param_2 + temp_v4 * 0x30 + 0x40);
          *(unsigned short *)(temp_v3 + 0x70) = *(unsigned short *)(param_2 + temp_v4 * 0x30 + 0x42);
        }
        FUN_0015d240(*(unsigned int *)(param_1 + 0x134),temp_v4,temp_v7);
      }
      puVar5 = (unsigned int *)(param_1 + temp_v4 * 0x30);
      piVar10 = (int *)(puVar5 + 6);
      nn_snd_CTR_InitializeWaveBuffer((unsigned int)puVar5);
      *puVar5 = (unsigned int)temp_v6;
      puVar5[1] = *(int *)(param_2 + 0x10) - temp_v5;
      *(unsigned char *)(puVar5 + 4) = 0;
      if (*param_2 == '\x03') {
        puVar5[2] = (unsigned int)puVar8;
      }
      nw_snd_internal_driver_Voice_AppendWaveBuffer(*(unsigned int *)(param_1 + 0x134),temp_v4,puVar5);
      if (param_2[1] != '\0') {
        nn_snd_CTR_InitializeWaveBuffer((unsigned int)piVar10);
        *piVar10 = temp_v8 + (int)puVar7;
        puVar5[7] = *(int *)(param_2 + 0x10) - *(int *)(param_1 + 0x78);
        *(unsigned char *)(puVar5 + 10) = 1;
        if (*param_2 == '\x03') {
          puVar5[8] = (unsigned int)(temp_v3 + 0x6c);
        }
        nw_snd_internal_driver_Voice_AppendWaveBuffer
                  (*(unsigned int *)(param_1 + 0x134),temp_v4,piVar10,1);
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v2);
  }
  return;
}

} /* extern "C" */
