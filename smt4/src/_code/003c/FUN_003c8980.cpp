/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8980` (_code @ 0x3c8980, 0x190 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int bitsetSetBit(int, int);
int FUN_0029c6b0(int);
int FUN_0029d770(int, unsigned char [1552]);
int FUN_0029dc74(int, unsigned char [1552]);
int devilGetRecord(void);
int memClear(int, int);

/* Supplied declaration required: bitsetSetBit. */
/* Supplied declaration required: FUN_0029c6b0. */
/* Supplied declaration required: FUN_0029d770. */
/* Supplied declaration required: FUN_0029dc74. */
extern unsigned char *FUN_002b066c(unsigned short);
/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: memClear. */


void FUN_003c8980(unsigned int param_1,unsigned short *param_2,int param_3)

{
/* irregular: 6 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char *unaff_r4;
  int temp_v6;
  unsigned char temp_v7 [1552];
  
  *(unsigned int *)(param_3 + 0x4c) = 0;
  *(unsigned int *)(param_3 + 0x50) = 0;
  *(unsigned int *)(param_3 + 0x54) = 0;
  *(unsigned int *)(param_3 + 0x58) = 0;
  *(unsigned int *)(param_3 + 0x5c) = 0;
  *(unsigned int *)(param_3 + 0x60) = 0;
  *(unsigned int *)(param_3 + 100) = 0;
  *(unsigned int *)(param_3 + 0x68) = 0;
  *(unsigned int *)(param_3 + 0x6c) = 0;
  *(unsigned int *)(param_3 + 0x70) = 0;
  *(unsigned int *)(param_3 + 0x74) = 0;
  *(unsigned int *)(param_3 + 0x78) = 0;
  *(unsigned int *)(param_3 + 0x7c) = 0;
  *(unsigned int *)(param_3 + 0x80) = 0;
  *(unsigned int *)(param_3 + 0x84) = 0;
  *(unsigned int *)(param_3 + 0x88) = 0;
  memClear(param_3 + 0x8c,0x500);
  temp_v6 = 0;
  do {
    temp_v1 = param_2[temp_v6 + 1];
    if (temp_v1 != 0) {
      temp_v0 = *(char *)((int)param_2 + temp_v6 + 0x1a);
      if (temp_v0 != '\x01') {
        if (temp_v0 != '\x03') {
          if (temp_v0 == '\x02') {
            FUN_0029dc74(temp_v1,temp_v7);
            unaff_r4 = temp_v7;
          }
        }
        else {
          FUN_0029d770(temp_v1,temp_v7);
          unaff_r4 = temp_v7;
        }
      }
      else {
        unaff_r4 = (unsigned char *)FUN_002b066c(temp_v1);
      }
      temp_v3 = 0;
      do {
        temp_v4 = param_3 + temp_v3;
        temp_v2 = temp_v3 + 2;
        *(unsigned char *)(temp_v4 + 0x4c) = *(unsigned char *)(temp_v4 + 0x4c) | unaff_r4[temp_v3 + 0x4c];
        *(unsigned char *)(temp_v4 + 0x4d) = unaff_r4[temp_v3 + 0x4d] | *(unsigned char *)(temp_v4 + 0x4d);
        temp_v3 = temp_v2;
      } while (temp_v2 < 0x40);
      temp_v3 = 0;
      do {
        temp_v4 = param_3 + temp_v3;
        temp_v2 = temp_v3 + 0x8c;
        temp_v3 = temp_v3 + 1;
        temp_v5 = (unsigned int)(unsigned char)unaff_r4[temp_v2] + (unsigned int)*(unsigned char *)(temp_v4 + 0x8c);
        if (temp_v5 >= 0x100) {
          temp_v5 = 0xff;
        }
        *(char *)(temp_v4 + 0x8c) = (char)temp_v5;
      } while (temp_v3 < 0x500);
      temp_v0 = *(char *)((unsigned int)*(unsigned short *)(unaff_r4 + 0x46) + param_3 + 0x8c);
      if (temp_v0 != -1) {
        *(char *)((unsigned int)*(unsigned short *)(unaff_r4 + 0x46) + param_3 + 0x8c) = temp_v0 + '\x01';
      }
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 0xc);
  temp_v5 = (unsigned int)*param_2;
  devilGetRecord();
  bitsetSetBit(param_3,*(unsigned short *)(temp_v5 + 0x38));
  FUN_0029c6b0(param_3);
  return;
}

} /* extern "C" */
