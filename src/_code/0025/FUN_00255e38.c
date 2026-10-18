/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00255e38` (_code @ 0x255e38, 0x264 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

/* Supplied declaration required: FUN_002550d8. */
extern unsigned int *FUN_002561d8(int, int, unsigned int);
extern unsigned int FUN_002a8740(int);
extern int FUN_002a8764(void);
/* Supplied declaration required: FUN_002b06c4. */
extern unsigned int FUN_002b63ac(void);
/* Supplied declaration required: FUN_002bcd68. */
/* Supplied declaration required: FUN_002c3944. */
extern unsigned int *FUN_0033a5a0(void);
/* Supplied declaration required: FUN_003be758. */


void FUN_00255e38(int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  
  *(unsigned int *)(param_2 + 0x184) = 0;
  *(unsigned int *)(param_2 + 0x14c) = 0;
  *(unsigned int *)(param_2 + 0x150) = 0;
  *(unsigned int *)(param_2 + 0x154) = 0;
  *(unsigned int *)(param_2 + 0x158) = 0;
  *(unsigned int *)(param_2 + 0x15c) = 0;
  *(unsigned int *)(param_2 + 0x160) = 0;
  *(unsigned int *)(param_2 + 0x164) = 0;
  *(unsigned int *)(param_2 + 0x168) = 0;
  *(unsigned int *)(param_2 + 0x16c) = 0;
  *(unsigned int *)(param_2 + 0x170) = 0;
  *(unsigned int *)(param_2 + 0x174) = 0;
  *(unsigned int *)(param_2 + 0x178) = 0;
  *(unsigned int *)(param_2 + 0x17c) = 0;
  puVar4 = (unsigned int *)0x0;
  *(unsigned int *)(param_2 + 0x180) = 0;
  if (param_3 != 0) {
    if (param_3 != 1) {
      if (param_3 == 2) {
        puVar4 = (unsigned int *)FUN_002561d8(param_1,param_4,0);
        FUN_002bcd68(puVar4 + 0x33,param_2,0x18c);
        *puVar4 = 0x21;
        puVar4[1] = 0;
        temp_v1 = FUN_002a8764();
        puVar4[0xa0] = temp_v1 + 0x910c;
        if ((*(unsigned short *)(temp_v1 + 0x9150) & 2) != 0) {
          *(unsigned char *)(param_1 + 0x49c4) = 0;
        }
        else {
          *(unsigned char *)(param_1 + 0x49c4) = 1;
        }
      }
    }
    else {
      puVar4 = (unsigned int *)FUN_0033a5a0();
      FUN_002bcd68(puVar4 + 0x33,param_2,0x18c);
      *puVar4 = 0x11;
      puVar4[1] = 0;
      temp_v0 = (unsigned int)*(unsigned short *)((int)puVar4 + 0xce);
      FUN_002b06c4();
      puVar4[0xa1] = temp_v0;
      if ((char)puVar4[0x68] == '\x01') {
        *puVar4 = *puVar4 | 0x100;
      }
      *(short *)(param_1 + 0x1fc6) = *(short *)(param_1 + 0x1fc6) + 1;
    }
  }
  else {
    puVar4 = (unsigned int *)FUN_002561d8(param_1,param_4,0);
    FUN_002bcd68(puVar4 + 0x33,param_2,0x18c);
    if ((puVar4[0x33] & 1) != 0) {
      *puVar4 = 7;
      puVar4[1] = 0;
      temp_v0 = FUN_002b63ac();
      puVar4[0x9e] = temp_v0;
    }
    else {
      *puVar4 = 9;
      puVar4[1] = 0;
      temp_v0 = FUN_002a8740((int)(short)puVar4[0x35]);
      puVar4[0x9f] = temp_v0;
    }
    *(short *)(param_1 + 0x1fc4) = *(short *)(param_1 + 0x1fc4) + 1;
  }
  *(short *)(puVar4 + 2) = (short)param_4;
  FUN_002c3944((int)puVar4 + 0x72,0x3c);
  *(unsigned int *)((int)puVar4 + 0xae) = 0;
  *(unsigned int *)((int)puVar4 + 0xb2) = 0;
  *(unsigned int *)((int)puVar4 + 0xb6) = 0;
  *(unsigned int *)((int)puVar4 + 0xba) = 0;
  *(unsigned short *)((int)puVar4 + 0xbe) = 0;
  puVar4[0x96] = 0;
  puVar4[0x97] = 0;
  puVar4[0x98] = 0;
  puVar4[0x99] = 0;
  puVar4[0x9a] = 0;
  puVar4[0x9b] = 0;
  puVar4[0x9c] = 0;
  puVar4[0x9d] = 0;
  if (param_5 != 0) {
    *puVar4 = *puVar4 | 0x20000000;
  }
  temp_v1 = *(int *)(param_1 + 0x1e98) + param_4 * 0x114;
  *(unsigned int *)(temp_v1 + 0x50) = 0x81;
  if (param_4 < 4) {
    *(unsigned int *)(temp_v1 + 0x50) = 0x281;
  }
  else {
    if (param_4 < 0x36) {
      temp_v2 = 0x481;
    }
    else {
      temp_v2 = 0x881;
    }
    *(unsigned int *)(temp_v1 + 0x50) = temp_v2;
  }
  *(unsigned short *)(temp_v1 + 0x60) = *(unsigned short *)((int)puVar4 + 0x6e);
  *(short *)(temp_v1 + 0x62) = (short)param_4;
  FUN_003be758(puVar4);
  FUN_002550d8(param_4,0xc,puVar4,0);
  return;
}
