/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_SequenceTrack_InitParam` (_code @ 0x37de08, 0x144 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_snd_internal_CurveLfoParam_Initialize(int);

/* Supplied declaration required: nw_snd_internal_CurveLfoParam_Initialize. */


void nw_snd_internal_driver_SequenceTrack_InitParam(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  *(unsigned int *)(param_1 + 8) = 0x3f800000;
  *(unsigned int *)(param_1 + 0xc) = 0x3f800000;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0x3f800000;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned char *)(param_1 + 0x24) = 1;
  *(unsigned char *)(param_1 + 0x25) = 1;
  *(unsigned char *)(param_1 + 0x26) = 0;
  *(unsigned char *)(param_1 + 0x27) = 0;
  *(unsigned char *)(param_1 + 0x40) = 0;
  *(unsigned int *)(param_1 + 0x44) = 0;
  *(unsigned char *)(param_1 + 0x48) = 0;
  *(unsigned char *)(param_1 + 0x49) = 0;
  *(unsigned char *)(param_1 + 0x4a) = 0;
  *(unsigned char *)(param_1 + 0x4b) = 0;
  *(unsigned char *)(param_1 + 0x4c) = 0;
  *(unsigned char *)(param_1 + 0x4d) = 0;
  *(unsigned int *)(param_1 + 0x50) = 0;
  nw_snd_internal_CurveLfoParam_Initialize(param_1 + 0x54);
  *(unsigned char *)(param_1 + 100) = 0;
  *(unsigned int *)(param_1 + 0x68) = temp_v2;
  *(unsigned char *)(param_1 + 0x6c) = 0x7f;
  *(unsigned char *)(param_1 + 0x6d) = 0x7f;
  *(unsigned short *)(param_1 + 0x6e) = 0;
  *(unsigned short *)(param_1 + 0x70) = 0;
  *(unsigned char *)(param_1 + 0x72) = 0;
  *(unsigned char *)(param_1 + 0x73) = 0;
  *(unsigned short *)(param_1 + 0x74) = 0;
  *(unsigned short *)(param_1 + 0x76) = 0;
  *(unsigned char *)(param_1 + 0x78) = 0;
  *(unsigned char *)(param_1 + 0x79) = 0;
  *(unsigned short *)(param_1 + 0x7a) = 0;
  *(unsigned short *)(param_1 + 0x7c) = 0;
  *(unsigned char *)(param_1 + 0x84) = 0x7f;
  *(unsigned char *)(param_1 + 0x85) = 0x7f;
  *(unsigned char *)(param_1 + 0x7e) = 0;
  *(unsigned char *)(param_1 + 0x7f) = 0;
  *(unsigned short *)(param_1 + 0x80) = 0;
  *(unsigned short *)(param_1 + 0x82) = 0;
  *(unsigned char *)(param_1 + 0x86) = 2;
  *(unsigned char *)(param_1 + 0x87) = 0;
  *(unsigned char *)(param_1 + 0x88) = 0;
  *(unsigned char *)(param_1 + 0x89) = 0x40;
  *(unsigned char *)(param_1 + 0x8a) = 0x3c;
  *(unsigned char *)(param_1 + 0x8b) = 0;
  *(unsigned char *)(param_1 + 0x8c) = 0xff;
  *(unsigned char *)(param_1 + 0x8d) = 0xff;
  *(unsigned char *)(param_1 + 0x8e) = 0xff;
  *(unsigned char *)(param_1 + 0x8f) = 0xff;
  *(unsigned short *)(param_1 + 0x90) = 0xff;
  *(unsigned char *)(param_1 + 0x92) = 0x7f;
  *(unsigned char *)(param_1 + 0x93) = 0;
  *(unsigned char *)(param_1 + 0x94) = 0;
  *(unsigned int *)(param_1 + 0x98) = temp_v2;
  *(unsigned char *)(param_1 + 0x95) = 0;
  *(unsigned int *)(param_1 + 0x9c) = temp_v2;
  temp_v0 = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 2;
    temp_v0 = temp_v0 + 2;
    *(unsigned short *)(temp_v1 + 0xa0) = 0xffff;
    *(unsigned short *)(temp_v1 + 0xa2) = 0xffff;
  } while (temp_v0 < 0x10);
  return;
}

} /* extern "C" */
