/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025765c` (_code @ 0x25765c, 0x354 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;


int FUN_0025765c(int param_1,unsigned int param_2)

{
  short temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  short temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  
  temp_v4 = 0;
  if (param_1 == 0xb) {
    temp_v4 = 10;
  }
  else if (param_1 < 0xb) {
    switch(param_1) {
    case 2:
      temp_v4 = 1;
      break;
    case 3:
      temp_v4 = 2;
      break;
    case 4:
      temp_v4 = 3;
      break;
    case 5:
      temp_v4 = 4;
      break;
    case 6:
      temp_v4 = 5;
      break;
    case 7:
      temp_v4 = 6;
      break;
    case 8:
      temp_v4 = 7;
      break;
    case 9:
      temp_v4 = 8;
      break;
    case 10:
      temp_v4 = 9;
    }
  }
  else if (param_1 == 0x13) {
    temp_v4 = 0xf;
  }
  else if (param_1 < 0x13) {
    if (param_1 == 0xc) {
      temp_v4 = 0xb;
    }
    else if (param_1 == 0xd) {
      temp_v4 = 0xc;
    }
    else if (param_1 == 0xe) {
      temp_v4 = 0xd;
    }
    else if (param_1 == 0xf) {
      temp_v4 = 0xe;
    }
  }
  else if (param_1 == 0x14) {
    temp_v4 = 0x10;
  }
  else if (param_1 == 0x15) {
    temp_v4 = 0x11;
  }
  else if (param_1 == 0x16) {
    temp_v4 = 0x13;
  }
  else if (param_1 == 0xff) {
    temp_v4 = 0x12;
  }
  temp_v5 = 0;
  temp_v2 = 0;
  temp_v10 = 0;
  if (param_1 != 0xff) {
    if ((int)param_2 < 7) {
      temp_v4 = temp_v4 * 9;
      temp_v2 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db58);
      temp_v5 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db59);
      temp_v10 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db5a);
      temp_v11 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db5b);
      temp_v6 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db5c);
      temp_v8 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db5d);
    }
    else {
      temp_v4 = temp_v4 * 9;
      if ((int)param_2 < 0xe) {
        temp_v2 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db5b);
        temp_v5 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db5c);
        temp_v10 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db5d);
        temp_v11 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db5e);
        temp_v6 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db5f);
        temp_v8 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db60);
      }
      else {
        temp_v11 = 0;
        temp_v2 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db5e);
        temp_v5 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db5f);
        temp_v10 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db60);
        temp_v6 = 0;
        temp_v8 = 0;
      }
    }
    temp_v11 = (temp_v11 - temp_v2) * 0x1000;
    temp_v4 = (int)(((long long)(int)temp_v11 * -0x6db6db6d + ((unsigned long long)temp_v11 << 0x20)) >> 0x20);
    temp_v9 = (int)(((long long)(int)param_2 * -0x6db6db6d + ((unsigned long long)param_2 << 0x20)) >> 0x20);
    temp_v0 = (short)temp_v2 +
            (short)((int)(((temp_v4 >> 2) - (temp_v4 >> 0x1f)) *
                         (((temp_v9 >> 2) - (temp_v9 >> 0x1f)) * -7 + param_2)) >> 0xc);
    temp_v4 = (int)(((long long)(int)param_2 * -0x6db6db6d + ((unsigned long long)param_2 << 0x20)) >> 0x20);
    temp_v2 = (temp_v6 - temp_v5) * 0x1000;
    temp_v7 = (int)(((long long)(int)temp_v2 * -0x6db6db6d + ((unsigned long long)temp_v2 << 0x20)) >> 0x20);
    temp_v9 = (int)(((long long)(int)param_2 * -0x6db6db6d + ((unsigned long long)param_2 << 0x20)) >> 0x20);
    temp_v1 = (short)temp_v5 +
            (short)((int)(((temp_v7 >> 2) - (temp_v7 >> 0x1f)) *
                         (((temp_v4 >> 2) - (temp_v4 >> 0x1f)) * -7 + param_2)) >> 0xc);
    temp_v2 = (temp_v8 - temp_v10) * 0x1000;
    temp_v4 = (int)(((long long)(int)temp_v2 * -0x6db6db6d + ((unsigned long long)temp_v2 << 0x20)) >> 0x20);
    temp_v3 = (short)temp_v10 +
            (short)((int)(((temp_v4 >> 2) - (temp_v4 >> 0x1f)) *
                         (param_2 + ((temp_v9 >> 2) - (temp_v9 >> 0x1f)) * -7)) >> 0xc);
  }
  else {
    if ((int)param_2 < 9) {
      temp_v4 = temp_v4 * 9;
      temp_v5 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db58);
      temp_v2 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db59);
      temp_v10 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db5a);
      temp_v11 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db5b);
      temp_v8 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db5c);
      temp_v6 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db5d);
    }
    else if ((int)param_2 < 0xe) {
      temp_v4 = temp_v4 * 9;
      temp_v11 = 0;
      temp_v5 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db5b);
      temp_v2 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db5c);
      temp_v10 = (unsigned int)*(unsigned char *)(temp_v4 + 0x43db5d);
      temp_v8 = 0;
      temp_v6 = 0;
    }
    else {
      temp_v11 = 0;
      temp_v8 = 0;
      temp_v6 = 0;
    }
    temp_v4 = (int)param_2 % 9;
    temp_v0 = (short)temp_v5 + (short)(((int)((temp_v11 - temp_v5) * 0x1000) / 9) * temp_v4 >> 0xc);
    temp_v1 = (short)temp_v2 + (short)(((int)((temp_v8 - temp_v2) * 0x1000) / 9) * temp_v4 >> 0xc);
    temp_v3 = (short)temp_v10 + (short)(((int)((temp_v6 - temp_v10) * 0x1000) / 9) * temp_v4 >> 0xc);
  }
  return temp_v0 * 0x1000000 + temp_v1 * 0x10000 + temp_v3 * 0x100 + 0xff;
}
