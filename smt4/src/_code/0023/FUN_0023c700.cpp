/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023c700` (_code @ 0x23c700, 0x2c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bf694(unsigned char [148], int);
int memClear(unsigned char [148], int);
int FUN_003d98e0(int, int, unsigned int, unsigned int, int, unsigned int, unsigned char [148]);

/* stack frame of param_6: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
} param_6_stack;

/* Supplied declaration required: FUN_002bf694. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: FUN_003d98e0. */


int FUN_0023c700(int param_1,unsigned int param_2,unsigned int param_3,int param_4,int param_5,
                unsigned int param_6)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2 [148];
  
  temp_v1 = 0xff;
  if (param_4 >= 10) {
    return 0;
  }
  memClear(temp_v2,0x80);
  switch(param_4) {
  case 0:
    if (param_5 >= 4) {
      return 0;
    }
    temp_v0 = param_1 + param_5 * 0x8c;
    temp_v1 = *(unsigned char *)(temp_v0 + 0x1d00);
    FUN_002bf694(temp_v2,temp_v0 + 0x1d08);
    break;
  case 1:
    if (param_5 >= 4) {
      return 0;
    }
    temp_v0 = param_1 + param_5 * 0x8c;
    temp_v1 = *(unsigned char *)(temp_v0 + 0x1f30);
    FUN_002bf694(temp_v2,temp_v0 + 0x1f38);
    break;
  case 2:
    if (param_5 >= 4) {
      return 0;
    }
    temp_v0 = param_1 + param_5 * 0x8c;
    temp_v1 = *(unsigned char *)(temp_v0 + 0x2160);
    FUN_002bf694(temp_v2,temp_v0 + 0x2168);
    break;
  case 3:
    if (param_5 >= 4) {
      return 0;
    }
    temp_v0 = param_1 + param_5 * 0x8c;
    temp_v1 = *(unsigned char *)(temp_v0 + 0x2390);
    FUN_002bf694(temp_v2,temp_v0 + 0x2398);
    break;
  case 4:
    if (param_5 >= 11) {
      return 0;
    }
    temp_v0 = param_1 + param_5 * 0x8c;
    temp_v1 = *(unsigned char *)(temp_v0 + 0x25c0);
    FUN_002bf694(temp_v2,temp_v0 + 0x25c8);
    break;
  case 5:
    if (param_5 >= 2) {
      return 0;
    }
    temp_v0 = param_1 + param_5 * 0x8c;
    temp_v1 = *(unsigned char *)(temp_v0 + 0x2bc4);
    FUN_002bf694(temp_v2,temp_v0 + 0x2bcc);
    break;
  case 6:
    if (param_5 >= 5) {
      return 0;
    }
    temp_v0 = param_1 + param_5 * 0x8c;
    temp_v1 = *(unsigned char *)(temp_v0 + 0x2cdc);
    FUN_002bf694(temp_v2,temp_v0 + 0x2ce4);
    break;
  case 7:
    if (param_5 >= 3) {
      return 0;
    }
    temp_v0 = param_1 + param_5 * 0x8c;
    temp_v1 = *(unsigned char *)(temp_v0 + 0x3070);
    FUN_002bf694(temp_v2,temp_v0 + 0x3078);
    break;
  case 8:
    if (param_5 != 0) {
      return 0;
    }
    temp_v1 = *(unsigned char *)(param_1 + 0x3218);
    FUN_002bf694(temp_v2,param_1 + 0x3220);
    break;
  case 9:
    if (param_5 != 0) {
      return 0;
    }
    temp_v1 = *(unsigned char *)(param_1 + 0x2f9c);
    FUN_002bf694(temp_v2,param_1 + 0x2fa4);
  }
  FUN_003d98e0(param_1,temp_v1,param_2,param_3,param_4,param_6,temp_v2);
  return param_1;
}

} /* extern "C" */
