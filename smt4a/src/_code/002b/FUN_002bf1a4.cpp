/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf1a4` (_code @ 0x2bf1a4, 0x1e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameFlagsGetBlock(void);


void FUN_002bf1a4(int param_1,int param_2,int param_3)

{
  unsigned char temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  temp_v1 = gameFlagsGetBlock();
  if (param_1 != 0x65) {
    temp_v2 = param_3 * 5 + param_2;
    temp_v3 = (int)(temp_v2 + ((unsigned int)(temp_v2 >> 0x1f) >> 0x1d)) >> 3;
    if (param_1 != 0x66) {
      if (((param_1 == 0x67) && (-1 < param_2)) &&
         ((param_2 < 5 && ((-1 < param_3 && (param_3 < 7)))))) {
        temp_v1 = temp_v1 + temp_v3;
        *(unsigned char *)(temp_v1 + 0xdc0) = *(unsigned char *)(temp_v1 + 0xdc0) | (unsigned char)(1 << ((temp_v2 % 8) & 0xffU));
      }
    }
    else if ((((-1 < param_2) && (param_2 < 5)) && (-1 < param_3)) && (param_3 < 7)) {
      temp_v1 = temp_v1 + temp_v3;
      *(unsigned char *)(temp_v1 + 0xdb8) = (unsigned char)(1 << ((temp_v2 % 8) & 0xffU)) | *(unsigned char *)(temp_v1 + 0xdb8);
      return;
    }
    return;
  }
  if (param_2 < 0) {
    return;
  }
  if (param_2 >= 10) {
    return;
  }
  if (param_3 < 0) {
    return;
  }
  if (param_3 >= 0xe) {
    return;
  }
  pbVar3 = (unsigned char *)(param_2 + param_3 * 10);
  temp_v4 = (int)pbVar3 % 8;
  temp_v3 = ((int)(pbVar3 + ((unsigned int)((int)pbVar3 >> 0x1f) >> 0x1d)) >> 3) + temp_v1;
  temp_v5 = pbVar3 == (unsigned char *)0xb;
  if (temp_v5) {
    pbVar3 = (unsigned char *)(temp_v1 + 0xdb0);
  }
  *(unsigned char *)(temp_v3 + 0xdb0) = (unsigned char)(1 << (temp_v4 & 0xff)) | *(unsigned char *)(temp_v3 + 0xdb0);
  if (temp_v5) {
    temp_v0 = *(unsigned char *)(temp_v1 + 0xdb0);
  }
  else {
    if (pbVar3 == (unsigned char *)0x47) {
      pbVar3 = (unsigned char *)(temp_v1 + 0xdb8);
      temp_v0 = *(unsigned char *)(temp_v1 + 0xdb8) | 0x40;
      *pbVar3 = temp_v0;
      return;
    }
    if (pbVar3 != (unsigned char *)0x48) {
      if (pbVar3 != (unsigned char *)0x5e) {
        if (pbVar3 != (unsigned char *)0x55) {
          if (pbVar3 != (unsigned char *)0x42) {
            if (pbVar3 != (unsigned char *)0x57) {
              if (pbVar3 != (unsigned char *)0x56) {
                return;
              }
              pbVar3 = (unsigned char *)(temp_v1 + 0xdbc);
              temp_v0 = *(unsigned char *)(temp_v1 + 0xdbc) | 1;
            }
            else {
              pbVar3 = (unsigned char *)(temp_v1 + 0xdbc);
              temp_v0 = *(unsigned char *)(temp_v1 + 0xdbc) | 2;
            }
          }
          else {
            pbVar3 = (unsigned char *)(temp_v1 + 0xdb8);
            temp_v0 = *(unsigned char *)(temp_v1 + 0xdb8) | 8;
          }
        }
        else {
          pbVar3 = (unsigned char *)(temp_v1 + 0xdbb);
          temp_v0 = *(unsigned char *)(temp_v1 + 0xdbb) | 0x80;
        }
      }
      else {
        pbVar3 = (unsigned char *)(temp_v1 + 0xdbb);
        temp_v0 = *(unsigned char *)(temp_v1 + 0xdbb) | 0x30;
      }
      *pbVar3 = temp_v0;
      return;
    }
    temp_v0 = *(unsigned char *)(temp_v1 + 0xdba);
    pbVar3 = (unsigned char *)(temp_v1 + 0xdba);
  }
  temp_v0 = temp_v0 | 2;
  *pbVar3 = temp_v0;
  return;
}

} /* extern "C" */
