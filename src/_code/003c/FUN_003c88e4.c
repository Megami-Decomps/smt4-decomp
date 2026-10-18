/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c88e4` (_code @ 0x3c88e4, 0x188 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b66ec(void);
extern int FUN_002b6d94(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b6e60. */
extern int FUN_002c0bcc(short);
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int FUN_002eea2c(unsigned int, unsigned char);


void FUN_003c88e4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  unsigned short temp_v4;
  unsigned short temp_v5;
  unsigned short temp_v6;
  short temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned short *puVar12;
  unsigned short temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  
  temp_v8 = FUN_002b6e60();
  temp_v11 = (unsigned short)(*(short *)(temp_v8 + 0x60a) != 0);
  if (*(short *)(temp_v8 + 0x60c) != 0) {
    temp_v11 = temp_v11 + 1;
  }
  if (*(short *)(temp_v8 + 0x60e) != 0) {
    temp_v11 = temp_v11 + 1;
  }
  temp_v9 = FUN_002c0bcc(temp_v11 - 1);
  temp_v10 = 0;
  do {
    if (*(short *)(temp_v8 + temp_v10 * 2 + 0x60a) != 0) {
      if (temp_v9 == 0) {
        temp_v7 = *(short *)(temp_v8 + temp_v10 * 2 + 0x60a);
        temp_v12 = (unsigned int)temp_v7;
        puVar12 = (unsigned short *)FUN_002b6e60();
        temp_v13 = 0xffffffff;
        temp_v8 = 0;
        break;
      }
      temp_v9 = temp_v9 - 1;
    }
    temp_v10 = temp_v10 + 1;
    if (temp_v10 >= 3) {
      return;
    }
  } while( 1 );
  while (temp_v8 = temp_v8 + 1, temp_v8 < 3) {
    if ((unsigned short)puVar12[temp_v8 + 0x305] == temp_v12) {
      temp_v8 = FUN_002b66ec();
      temp_v13 = FUN_002eea2c(temp_v12,*(unsigned char *)(temp_v8 + 0x76));
      break;
    }
  }
  FUN_002c4b30(puVar12,0x604);
  temp_v8 = FUN_002b6d94(temp_v12,temp_v13);
  puVar12[0x302] = temp_v7;
  puVar12[0x303] = (short)temp_v13;
  puVar12[0x23] = 0x4b1;
  *(unsigned char *)(puVar12 + 0x24) = (unsigned char)*(unsigned int *)(temp_v8 + 8) & 0x7f;
  temp_v0 = *(unsigned short *)(temp_v8 + 0x14);
  *puVar12 = temp_v0;
  temp_v1 = *(unsigned short *)(temp_v8 + 0x16);
  puVar12[1] = temp_v1;
  temp_v2 = *(unsigned short *)(temp_v8 + 0x18);
  puVar12[2] = temp_v2;
  temp_v3 = *(unsigned short *)(temp_v8 + 0x1c);
  puVar12[4] = temp_v3;
  temp_v4 = *(unsigned short *)(temp_v8 + 0x1e);
  puVar12[5] = temp_v4;
  temp_v5 = *(unsigned short *)(temp_v8 + 0x20);
  puVar12[6] = temp_v5;
  temp_v6 = *(unsigned short *)(temp_v8 + 0x1a);
  puVar12[3] = temp_v6;
  puVar12[0xe] = temp_v0;
  puVar12[7] = temp_v0;
  puVar12[0xf] = temp_v1;
  puVar12[8] = temp_v1;
  puVar12[0x10] = temp_v2;
  puVar12[9] = temp_v2;
  puVar12[0x12] = temp_v3;
  puVar12[0xb] = temp_v3;
  puVar12[0x13] = temp_v4;
  puVar12[0xc] = temp_v4;
  puVar12[0x14] = temp_v5;
  puVar12[0xd] = temp_v5;
  puVar12[0x11] = temp_v6;
  puVar12[10] = temp_v6;
  puVar12[0x15] = temp_v0;
  puVar12[0x16] = temp_v1;
  return;
}
