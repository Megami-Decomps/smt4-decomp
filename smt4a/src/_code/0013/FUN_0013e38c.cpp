/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013e38c` (_code @ 0x13e38c, 0x3b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00164b5c(int, int, int);
int FUN_001677c0(void);
int FUN_001835b4(int, int, unsigned int, int, int, int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */


unsigned short FUN_0013e38c(int param_1,unsigned int param_2,int param_3)

{
/* irregular: irregular input(s): in_s0, in_s1; 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned short temp_v3;
  float in_s0;
  float in_s1;
  
  FUN_001677c0();
  temp_v1 = 0;
  temp_v2 = -1;
  temp_v3 = 0;
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 != 2) {
        FUN_001677c0();
        return temp_v3;
      }
      switch(param_2) {
      case 0:
        temp_v1 = 0x3f7;
        break;
      case 1:
        temp_v1 = 0x3f8;
        break;
      case 2:
        temp_v1 = 0x3f9;
        break;
      case 3:
        temp_v1 = 0x3fa;
        break;
      case 4:
        temp_v1 = 0x3fb;
        break;
      case 5:
        temp_v1 = 0x3fc;
        break;
      case 6:
        temp_v1 = 0x3fd;
        break;
      case 7:
        temp_v1 = 0x3fe;
        break;
      case 8:
        temp_v1 = 0x3ff;
        break;
      case 9:
        temp_v1 = 0x400;
      }
      temp_v2 = FUN_001834a4(0xb,temp_v1);
    }
    else {
      switch(param_2) {
      case 0:
        temp_v1 = 1000;
        break;
      case 1:
        temp_v1 = 0x3e9;
        break;
      case 2:
        temp_v1 = 0x3ea;
        break;
      case 3:
        temp_v1 = 0x3eb;
        break;
      case 4:
        temp_v1 = 0x3ec;
        break;
      case 5:
        temp_v1 = 0x3ed;
        break;
      case 6:
        temp_v1 = 0x3ee;
        break;
      case 7:
        temp_v1 = 0x3ef;
        break;
      case 8:
        temp_v1 = 0x3f0;
        break;
      case 9:
        temp_v1 = 0x3f1;
        break;
      case 10:
        temp_v1 = 0x3f2;
        break;
      case 0xb:
        temp_v1 = 0x3f3;
        break;
      case 0xc:
        temp_v1 = 0x3f4;
        break;
      case 0xd:
        temp_v1 = 0x3f6;
      }
      temp_v2 = FUN_001834a4(0xb,temp_v1);
    }
    if ((temp_v2 == 0) || (param_3 != 0)) {
      FUN_001677c0();
      return temp_v3;
    }
    FUN_001835b4(2,0xb,temp_v1,(int)in_s0,(int)(in_s1 + 2.0f),0xb);
    temp_v3 = *(unsigned short *)(temp_v2 + 4);
    temp_v3 = temp_v3 & 0x7fff;
    FUN_001677c0();
    return temp_v3;
  }
  switch(param_2) {
  case 0:
    temp_v2 = 0;
    temp_v1 = 3000;
    break;
  case 1:
    temp_v2 = 1;
    temp_v1 = 3000;
    break;
  case 2:
    temp_v2 = 2;
    temp_v1 = 3000;
    break;
  case 3:
    temp_v2 = 3;
    temp_v1 = 3000;
    break;
  case 4:
    temp_v1 = 0xbb9;
    temp_v2 = 4;
    break;
  case 5:
    temp_v1 = 0xbba;
    temp_v2 = 5;
    break;
  case 6:
    temp_v2 = 7;
    temp_v1 = 0xbbb;
    break;
  case 7:
    temp_v2 = 6;
    temp_v1 = 0xbbb;
    break;
  case 8:
    temp_v1 = 0xbbc;
    temp_v2 = 8;
    break;
  case 9:
    temp_v1 = 0xbc1;
    break;
  case 10:
    temp_v1 = 0xbc2;
    break;
  case 0xb:
    temp_v1 = 0xbc3;
    break;
  case 0xc:
    temp_v1 = 0xbc4;
    break;
  case 0xd:
    temp_v1 = 0xbc5;
    break;
  case 0xe:
    temp_v1 = 0xbbd;
    break;
  case 0xf:
    temp_v1 = 0xbbe;
    break;
  case 0x10:
    temp_v1 = 0xbc0;
    break;
  case 0x11:
    temp_v1 = 0xbbf;
    break;
  case 0x12:
    temp_v2 = 0x1b;
    temp_v1 = 0xbbb;
    break;
  case 0x13:
    temp_v2 = 0x1c;
    temp_v1 = 0xbbb;
    break;
  case 0x14:
    temp_v2 = 0x1d;
    temp_v1 = 0xbbb;
    break;
  case 0x15:
    temp_v2 = 0x1e;
    temp_v1 = 0xbbb;
  }
  temp_v0 = FUN_001834a4(0xb,temp_v1);
  if ((temp_v0 != 0) && (param_3 == 0)) {
    if (temp_v2 >= 0) {
      FUN_00164b5c(2,0xb,temp_v2);
    }
    else {
      FUN_001835b4(2,0xb,temp_v1,(int)in_s0,(int)(in_s1 + 2.0f),0xb);
    }
    temp_v3 = *(unsigned short *)(temp_v0 + 4);
    temp_v3 = temp_v3 & 0x7fff;
  }
  FUN_001677c0();
  return temp_v3;
}

} /* extern "C" */
