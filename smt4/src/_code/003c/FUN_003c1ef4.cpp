/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c1ef4` (_code @ 0x3c1ef4, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00299370(int);
int dataTableGetCount(void);
int dataTableGetEntries(unsigned int);

/* Supplied declaration required: FUN_00299370. */
extern int FUN_002b63ac(void);
/* Supplied declaration required: dataTableGetCount. */
/* Supplied declaration required: dataTableGetEntries. */
extern unsigned int dataTableGet(unsigned int, unsigned int);


void FUN_003c1ef4(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  char *pcVar5;
  int temp_v4;
  unsigned short temp_v5;
  unsigned short temp_v6;
  unsigned int temp_v7;
  
  temp_v2 = FUN_002b63ac();
  *(unsigned char *)(temp_v2 + 0x76) = 1;
  *(unsigned int *)(temp_v2 + 0x30) = 0;
  *(unsigned short *)(temp_v2 + 0x72) = 0;
  temp_v3 = dataTableGet(9,0);
  dataTableGetCount();
  pcVar5 = (char *)dataTableGetEntries(temp_v3);
  *(short *)(temp_v2 + 0x12) = (short)*pcVar5;
  *(short *)(temp_v2 + 0x14) = (short)pcVar5[1];
  *(short *)(temp_v2 + 0x16) = (short)pcVar5[2];
  *(short *)(temp_v2 + 0x18) = (short)pcVar5[3];
  *(short *)(temp_v2 + 0x1a) = (short)pcVar5[4];
  temp_v3 = dataTableGet(9,0);
  dataTableGetCount();
  temp_v4 = dataTableGetEntries(temp_v3);
  temp_v0 = *(unsigned char *)(temp_v4 + 0xb);
  temp_v1 = *(unsigned char *)(temp_v4 + 0xd);
  temp_v5 = 9999;
  temp_v7 = (int)(short)(unsigned short)*(unsigned char *)(temp_v2 + 0x76) * (int)(short)(unsigned short)*(unsigned char *)(temp_v4 + 0xc) +
          (unsigned int)*(unsigned char *)(temp_v4 + 10);
  if (temp_v7 < 10000) {
    temp_v6 = (unsigned short)temp_v7;
  }
  else {
    temp_v6 = 9999;
  }
  *(unsigned short *)(temp_v2 + 0xe) = temp_v6;
  temp_v7 = (((int)(short)(unsigned short)*(unsigned char *)(temp_v2 + 0x76) * (int)(short)(unsigned short)temp_v1 + (unsigned int)temp_v0) *
          0x2d) / 100;
  if (temp_v7 < 10000) {
    temp_v5 = (unsigned short)temp_v7;
  }
  *(unsigned short *)(temp_v2 + 0x10) = temp_v5;
  FUN_00299370(0);
  *(unsigned short *)(temp_v2 + 0x2a) = *(unsigned short *)(temp_v2 + 0x1c);
  *(unsigned short *)(temp_v2 + 0x2c) = *(unsigned short *)(temp_v2 + 0x1e);
  return;
}

} /* extern "C" */
