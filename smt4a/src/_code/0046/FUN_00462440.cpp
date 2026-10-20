/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00462440` (_code @ 0x462440, 0x170 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b8e18(int);

/* Supplied declaration required: FUN_001b8e18. */


void FUN_00462440(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned long long temp_v3;
  
  *(unsigned int *)(param_1 + 8) = 0x3f800000;
  *(unsigned int *)(param_1 + 0xc) = 0x3f800000;
  *(unsigned int *)(param_1 + 0x18) = 0x3f800000;
  temp_v3 = 0;
  *(unsigned char *)(param_1 + 0x24) = 1;
  *(unsigned char *)(param_1 + 0x25) = 1;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned char *)(param_1 + 0x26) = 0;
  *(unsigned char *)(param_1 + 0x27) = 0;
  *(unsigned char *)(param_1 + 0x78) = 0;
  *(unsigned int *)(param_1 + 0x7c) = 0;
  *(unsigned char *)(param_1 + 0x7a) = 0;
  *(unsigned char *)(param_1 + 0x7b) = 0;
  *(unsigned char *)(param_1 + 0x80) = 0;
  *(unsigned char *)(param_1 + 0x81) = 0;
  *(unsigned char *)(param_1 + 0x82) = 0;
  *(unsigned char *)(param_1 + 0x83) = 0;
  temp_v1 = 0;
  *(unsigned int *)(param_1 + 0x84) = 0;
  do {
    FUN_001b8e18(param_1 + temp_v1 * 0x10 + 0xac);
    temp_v0 = param_1 + temp_v1;
    temp_v1 = temp_v1 + 1;
    *(unsigned char *)(temp_v0 + 0xec) = 0;
  } while (temp_v1 < 4);
  temp_v2 = (unsigned int)temp_v3;
  *(unsigned int *)(param_1 + 0x88) = temp_v2;
  *(unsigned char *)(param_1 + 0x8c) = 0x7f;
  *(unsigned char *)(param_1 + 0x8d) = 0x7f;
  *(unsigned short *)(param_1 + 0x8e) = 0;
  *(unsigned short *)(param_1 + 0x90) = 0;
  *(unsigned char *)(param_1 + 0x92) = 0x7f;
  *(unsigned char *)(param_1 + 0x93) = 0x7f;
  *(unsigned short *)(param_1 + 0x94) = 0;
  *(unsigned short *)(param_1 + 0x96) = 0;
  *(unsigned char *)(param_1 + 0x98) = 0;
  *(unsigned char *)(param_1 + 0x99) = 0;
  *(unsigned short *)(param_1 + 0x9a) = 0;
  *(unsigned short *)(param_1 + 0x9c) = 0;
  *(unsigned char *)(param_1 + 0x9e) = 0;
  *(unsigned char *)(param_1 + 0x9f) = 0;
  *(unsigned short *)(param_1 + 0xa0) = 0;
  *(unsigned short *)(param_1 + 0xa2) = 0;
  *(unsigned char *)(param_1 + 0xf0) = 0x7f;
  *(unsigned char *)(param_1 + 0xa4) = 0;
  *(unsigned char *)(param_1 + 0xa5) = 0;
  *(unsigned short *)(param_1 + 0xa6) = 0;
  *(unsigned short *)(param_1 + 0xa8) = 0;
  *(unsigned char *)(param_1 + 0xf1) = 2;
  *(unsigned char *)(param_1 + 0xf2) = 0;
  *(unsigned char *)(param_1 + 0xf4) = 0;
  *(unsigned char *)(param_1 + 0xf5) = 0x40;
  *(unsigned char *)(param_1 + 0xf6) = 0x3c;
  *(unsigned char *)(param_1 + 0xf7) = 0;
  *(unsigned char *)(param_1 + 0xf8) = 0xff;
  *(unsigned char *)(param_1 + 0xf9) = 0xff;
  *(unsigned char *)(param_1 + 0xfa) = 0xff;
  *(unsigned char *)(param_1 + 0xfb) = 0xff;
  *(unsigned short *)(param_1 + 0xfc) = 0xff;
  *(unsigned char *)(param_1 + 0xff) = 0x7f;
  *(unsigned char *)(param_1 + 0x100) = 0;
  *(unsigned char *)(param_1 + 0x101) = 0;
  *(unsigned int *)(param_1 + 0x104) = temp_v2;
  *(unsigned char *)(param_1 + 0xfe) = 0;
  *(unsigned int *)(param_1 + 0x108) = temp_v2;
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 2;
    temp_v1 = temp_v1 + 2;
    *(unsigned short *)(temp_v0 + 0x10c) = 0xffff;
    *(unsigned short *)(temp_v0 + 0x10e) = 0xffff;
  } while (temp_v1 < 0x10);
  return;
}

} /* extern "C" */
