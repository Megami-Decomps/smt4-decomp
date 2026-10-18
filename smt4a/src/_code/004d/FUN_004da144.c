/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004da144` (_code @ 0x4da144, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014bef4(short);
extern int FUN_00168518(unsigned int, unsigned int);
extern int FUN_001801a4(void);
/* Supplied declaration required: FUN_0019a7dc. */
/* Supplied declaration required: FUN_002e6354. */
extern unsigned int FUN_0036fd64(unsigned int, unsigned short);


void FUN_004da144(void)

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
  
  temp_v8 = FUN_0019a7dc();
  temp_v11 = (unsigned short)(*(short *)(temp_v8 + 0x132) != 0);
  if (*(short *)(temp_v8 + 0x134) != 0) {
    temp_v11 = temp_v11 + 1;
  }
  if (*(short *)(temp_v8 + 0x136) != 0) {
    temp_v11 = temp_v11 + 1;
  }
  temp_v9 = FUN_0014bef4(temp_v11 - 1);
  temp_v10 = 0;
  do {
    if (*(short *)(temp_v8 + temp_v10 * 2 + 0x132) != 0) {
      if (temp_v9 == 0) {
        temp_v7 = *(short *)(temp_v8 + temp_v10 * 2 + 0x132);
        temp_v12 = (unsigned int)temp_v7;
        puVar12 = (unsigned short *)FUN_0019a7dc();
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
    if ((unsigned short)puVar12[temp_v8 + 0x99] == temp_v12) {
      temp_v8 = FUN_001801a4();
      temp_v13 = FUN_0036fd64(temp_v12,*(unsigned short *)(temp_v8 + 0x62));
      break;
    }
  }
  FUN_002e6354(puVar12,300);
  temp_v8 = FUN_00168518(temp_v12,temp_v13);
  puVar12[0x96] = temp_v7;
  puVar12[0x97] = (short)temp_v13;
  puVar12[0x31] = 0x4b1;
  puVar12[0x32] = *(unsigned short *)(temp_v8 + 8);
  temp_v0 = *(unsigned short *)(temp_v8 + 0x18);
  *puVar12 = temp_v0;
  temp_v1 = *(unsigned short *)(temp_v8 + 0x1a);
  puVar12[1] = temp_v1;
  temp_v2 = *(unsigned short *)(temp_v8 + 0x1c);
  puVar12[2] = temp_v2;
  temp_v3 = *(unsigned short *)(temp_v8 + 0x20);
  puVar12[4] = temp_v3;
  temp_v4 = *(unsigned short *)(temp_v8 + 0x22);
  puVar12[5] = temp_v4;
  temp_v5 = *(unsigned short *)(temp_v8 + 0x24);
  puVar12[6] = temp_v5;
  temp_v6 = *(unsigned short *)(temp_v8 + 0x1e);
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
