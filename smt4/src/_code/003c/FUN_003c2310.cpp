/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c2310` (_code @ 0x3c2310, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024571c(int, int);
int FUN_0029c6b0(int);
int FUN_002b9024(void);
int FUN_003c219c(int, int *, int);
int SBORROW4(int, int);

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_0024571c. */
extern int FUN_00245768(unsigned short);
extern int padIsButtonDown(unsigned int);
/* Supplied declaration required: FUN_0029c6b0. */
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_003c219c. */


void FUN_003c2310(int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned short temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  if (param_2 < 1) {
    return;
  }
  temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 0x46);
  FUN_002b9024();
  uStack_28 = (unsigned int)*(unsigned short *)(temp_v0 + 0x16);
  uStack_38 = *(unsigned int *)(temp_v0 + 0x24);
  uStack_30 = *(unsigned int *)(temp_v0 + 0x16);
  uStack_34 = (unsigned int)*(unsigned char *)(temp_v0 + 0x28) | ((unsigned int)*(unsigned short *)(temp_v0 + 0x14) << 0x10);
  temp_v4 = 9999;
  temp_v2 = (int)(short)(unsigned short)*(unsigned char *)(temp_v0 + 3) * (int)(short)(unsigned short)*(unsigned char *)(temp_v0 + 0x18) +
          (unsigned int)*(unsigned short *)(temp_v0 + 0x14);
  uStack_2c = temp_v4;
  if (temp_v2 < 10000) {
    uStack_2c = temp_v2 & 0xffff;
  }
  temp_v0 = (((unsigned int)*(unsigned char *)(temp_v0 + 3) * (unsigned int)*(unsigned char *)(temp_v0 + 0x19) + uStack_28) * 0x2d) / 100;
  if (temp_v0 < 10000) {
    temp_v4 = temp_v0;
  }
  uStack_2c = uStack_2c | (temp_v4 << 0x10);
  temp_v5 = 0;
  do {
    if (*(char *)(param_1 + 0x48) == 'c') break;
    temp_v3 = 0;
    do {
      temp_v1 = param_1;
      FUN_003c219c(param_1,&uStack_38,1);
      switch(temp_v1) {
      case 0:
        *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) + 1;
        break;
      case 1:
        *(short *)(param_1 + 0x22) = *(short *)(param_1 + 0x22) + 1;
        break;
      case 2:
        *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
        break;
      case 3:
        *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + 1;
        break;
      case 4:
        *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 5);
    temp_v3 = padIsButtonDown(7);
    temp_v6 = temp_v3 != 0;
    temp_v3 = 0;
    temp_v1 = 0;
    if (temp_v6) {
      temp_v1 = (int)*(short *)(param_1 + 4);
      temp_v3 = 999 - temp_v1;
    }
    if ((temp_v6 && temp_v1 != 999) && temp_v3 < 0 == (temp_v6 && SBORROW4(999,temp_v1))) {
      *(short *)(param_1 + 4) = (short)temp_v1 + 1;
      *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) + 1;
    }
    temp_v3 = padIsButtonDown(8);
    temp_v6 = temp_v3 != 0;
    temp_v3 = 0;
    temp_v1 = 0;
    if (temp_v6) {
      temp_v1 = (int)*(short *)(param_1 + 10);
      temp_v3 = 999 - temp_v1;
    }
    if ((temp_v6 && temp_v1 != 999) && temp_v3 < 0 == (temp_v6 && SBORROW4(999,temp_v1))) {
      *(short *)(param_1 + 10) = (short)temp_v1 + 1;
      *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + 1;
    }
    temp_v3 = padIsButtonDown(9);
    temp_v6 = temp_v3 != 0;
    temp_v3 = 0;
    temp_v1 = 0;
    if (temp_v6) {
      temp_v1 = (int)*(short *)(param_1 + 0xc);
      temp_v3 = 999 - temp_v1;
    }
    if ((temp_v6 && temp_v1 != 999) && temp_v3 < 0 == (temp_v6 && SBORROW4(999,temp_v1))) {
      *(short *)(param_1 + 0xc) = (short)temp_v1 + 1;
      *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + 1;
    }
    temp_v3 = padIsButtonDown(10);
    temp_v6 = temp_v3 != 0;
    temp_v3 = 0;
    temp_v1 = 0;
    if (temp_v6) {
      temp_v1 = (int)*(short *)(param_1 + 8);
      temp_v3 = 999 - temp_v1;
    }
    if ((temp_v6 && temp_v1 != 999) && temp_v3 < 0 == (temp_v6 && SBORROW4(999,temp_v1))) {
      *(short *)(param_1 + 8) = (short)temp_v1 + 1;
      *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
    }
    temp_v3 = padIsButtonDown(0xb);
    temp_v6 = temp_v3 != 0;
    temp_v3 = 0;
    temp_v1 = 0;
    if (temp_v6) {
      temp_v1 = (int)*(short *)(param_1 + 6);
      temp_v3 = 999 - temp_v1;
    }
    if ((temp_v6 && temp_v1 != 999) && temp_v3 < 0 == (temp_v6 && SBORROW4(999,temp_v1))) {
      *(short *)(param_1 + 6) = (short)temp_v1 + 1;
      *(short *)(param_1 + 0x22) = *(short *)(param_1 + 0x22) + 1;
    }
    *(char *)(param_1 + 0x49) = *(char *)(param_1 + 0x49) + '\x01';
    *(char *)(param_1 + 0x48) = *(char *)(param_1 + 0x48) + '\x01';
    temp_v3 = FUN_00245768(*(unsigned short *)(param_1 + 0x46));
    FUN_0024571c(*(unsigned short *)(param_1 + 0x46),temp_v3 + 0x32);
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < param_2);
  FUN_0029c6b0(param_1);
  *(unsigned short *)(param_1 + 0x2a) = *(unsigned short *)(param_1 + 0xe);
  *(unsigned short *)(param_1 + 0x44) = 0;
  *(unsigned short *)(param_1 + 0x2c) = *(unsigned short *)(param_1 + 0x10);
  return;
}

} /* extern "C" */
