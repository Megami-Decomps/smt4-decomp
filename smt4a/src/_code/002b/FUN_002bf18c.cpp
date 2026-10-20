/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf18c` (_code @ 0x2bf18c, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00162e8c(void);


void FUN_002bf18c(unsigned int param_1,int param_2)

{
/* irregular: irregular input(s): in_s0, in_s1; 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned char *pbVar4;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  float in_s0;
  int temp_v6;
  float in_s1;
  int temp_v7;
  
  temp_v7 = (int)in_s1;
  temp_v6 = (int)in_s0;
  temp_v2 = FUN_00162e8c();
  if (param_2 != 0x65) {
    temp_v3 = temp_v7 * 5 + temp_v6;
    temp_v0 = (int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1d)) >> 3;
    if (param_2 != 0x66) {
      if (((param_2 == 0x67) && (-1 < temp_v6)) && ((temp_v6 < 5 && ((-1 < temp_v7 && (temp_v7 < 7)))))) {
        temp_v2 = temp_v2 + temp_v0;
        *(unsigned char *)(temp_v2 + 0xdc0) = *(unsigned char *)(temp_v2 + 0xdc0) | (unsigned char)(1 << ((temp_v3 % 8) & 0xffU));
      }
    }
    else if ((((-1 < temp_v6) && (temp_v6 < 5)) && (-1 < temp_v7)) && (temp_v7 < 7)) {
      temp_v2 = temp_v2 + temp_v0;
      *(unsigned char *)(temp_v2 + 0xdb8) = (unsigned char)(1 << ((temp_v3 % 8) & 0xffU)) | *(unsigned char *)(temp_v2 + 0xdb8);
      return;
    }
    return;
  }
  if (temp_v6 < 0) {
    return;
  }
  if (temp_v6 >= 10) {
    return;
  }
  if (temp_v7 < 0) {
    return;
  }
  if (temp_v7 >= 0xe) {
    return;
  }
  pbVar4 = (unsigned char *)(temp_v6 + temp_v7 * 10);
  temp_v4 = (int)pbVar4 % 8;
  temp_v6 = ((int)(pbVar4 + ((unsigned int)((int)pbVar4 >> 0x1f) >> 0x1d)) >> 3) + temp_v2;
  temp_v5 = pbVar4 == (unsigned char *)0xb;
  if (temp_v5) {
    pbVar4 = (unsigned char *)(temp_v2 + 0xdb0);
  }
  *(unsigned char *)(temp_v6 + 0xdb0) = (unsigned char)(1 << (temp_v4 & 0xff)) | *(unsigned char *)(temp_v6 + 0xdb0);
  if (temp_v5) {
    temp_v1 = *(unsigned char *)(temp_v2 + 0xdb0);
  }
  else {
    if (pbVar4 == (unsigned char *)0x47) {
      pbVar4 = (unsigned char *)(temp_v2 + 0xdb8);
      temp_v1 = *(unsigned char *)(temp_v2 + 0xdb8) | 0x40;
      *pbVar4 = temp_v1;
      return;
    }
    if (pbVar4 != (unsigned char *)0x48) {
      if (pbVar4 != (unsigned char *)0x5e) {
        if (pbVar4 != (unsigned char *)0x55) {
          if (pbVar4 != (unsigned char *)0x42) {
            if (pbVar4 != (unsigned char *)0x57) {
              if (pbVar4 != (unsigned char *)0x56) {
                return;
              }
              pbVar4 = (unsigned char *)(temp_v2 + 0xdbc);
              temp_v1 = *(unsigned char *)(temp_v2 + 0xdbc) | 1;
            }
            else {
              pbVar4 = (unsigned char *)(temp_v2 + 0xdbc);
              temp_v1 = *(unsigned char *)(temp_v2 + 0xdbc) | 2;
            }
          }
          else {
            pbVar4 = (unsigned char *)(temp_v2 + 0xdb8);
            temp_v1 = *(unsigned char *)(temp_v2 + 0xdb8) | 8;
          }
        }
        else {
          pbVar4 = (unsigned char *)(temp_v2 + 0xdbb);
          temp_v1 = *(unsigned char *)(temp_v2 + 0xdbb) | 0x80;
        }
      }
      else {
        pbVar4 = (unsigned char *)(temp_v2 + 0xdbb);
        temp_v1 = *(unsigned char *)(temp_v2 + 0xdbb) | 0x30;
      }
      *pbVar4 = temp_v1;
      return;
    }
    temp_v1 = *(unsigned char *)(temp_v2 + 0xdba);
    pbVar4 = (unsigned char *)(temp_v2 + 0xdba);
  }
  temp_v1 = temp_v1 | 2;
  *pbVar4 = temp_v1;
  return;
}

} /* extern "C" */
