/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026b0d0` (_code @ 0x26b0d0, 0x634 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e190; /* 0x44e190 */

/* Supplied declaration required: FUN_0029e2f4. */
extern int FUN_0029f0f4(int);
/* Supplied declaration required: FUN_002b88c4. */
/* Supplied declaration required: FUN_002b9008. */
extern int FUN_002bf6d0(unsigned int, unsigned int);
extern int FUN_002c0ba8(unsigned int);
/* Supplied declaration required: FUN_002c4450. */


void FUN_0026b0d0(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  char temp_v3;
  int temp_v4;
  int temp_v5;
  char *unaff_r6;
  char *pcVar7;
  
  temp_v0 = DAT_0044e190;
  temp_v4 = 0;
  if (*(char *)(DAT_0044e190 + 0x480) != '\0') {
    do {
      FUN_002b9008();
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < (int)(unsigned int)*(unsigned char *)(temp_v0 + 0x480));
  }
  *(unsigned char *)(temp_v0 + 0x480) = 0;
  FUN_002c4450(temp_v0 + 0x42c,0x29,0xffffffff);
  switch(*(unsigned int *)(temp_v0 + 0x400)) {
  case 3:
    temp_v2 = 0;
    temp_v4 = FUN_0029f0f4(temp_v0 + 0x4d4);
    if (0 < temp_v4) {
      do {
        temp_v1 = FUN_002b88c4(0x1a,temp_v2 + 0x414);
        temp_v4 = temp_v2 * 2;
        temp_v2 = temp_v2 + 1;
        *(unsigned short *)(temp_v0 + temp_v4 + 0x42c) = temp_v1;
        *(char *)(temp_v0 + 0x480) = *(char *)(temp_v0 + 0x480) + '\x01';
        temp_v4 = FUN_0029f0f4(temp_v0 + 0x4d4);
      } while (temp_v2 < temp_v4);
    }
    temp_v1 = FUN_002b88c4(0x1a,0x50f);
    *(unsigned short *)(temp_v0 + 0x47a) = temp_v1;
    temp_v1 = FUN_002b88c4(0x1a,0x50e);
    *(unsigned short *)(temp_v0 + 0x47c) = temp_v1;
    temp_v3 = *(char *)(temp_v0 + 0x480) + '\x02';
    break;
  case 4:
    temp_v2 = 0;
    temp_v4 = FUN_0029f0f4(temp_v0 + 0x4d4);
    if (0 < temp_v4) {
      do {
        temp_v1 = FUN_002b88c4(0x1a,temp_v2 + 0x414);
        temp_v4 = temp_v2 * 2;
        temp_v2 = temp_v2 + 1;
        *(unsigned short *)(temp_v0 + temp_v4 + 0x42c) = temp_v1;
        *(char *)(temp_v0 + 0x480) = *(char *)(temp_v0 + 0x480) + '\x01';
        temp_v4 = FUN_0029f0f4(temp_v0 + 0x4d4);
      } while (temp_v2 < temp_v4);
      return;
    }
  default:
    return;
  case 6:
    temp_v2 = 0;
    temp_v4 = FUN_0029f0f4(temp_v0 + 0x4d4);
    if (0 < temp_v4) {
      do {
        temp_v1 = FUN_002b88c4(0x1a,temp_v2 + 0x414);
        temp_v4 = temp_v2 * 2;
        temp_v2 = temp_v2 + 1;
        *(unsigned short *)(temp_v0 + temp_v4 + 0x42c) = temp_v1;
        *(char *)(temp_v0 + 0x480) = *(char *)(temp_v0 + 0x480) + '\x01';
        temp_v4 = FUN_0029f0f4(temp_v0 + 0x4d4);
      } while (temp_v2 < temp_v4);
    }
    temp_v1 = FUN_002b88c4(0x1a,0x4f1);
    *(unsigned short *)(temp_v0 + (unsigned int)*(unsigned char *)(temp_v0 + 0x480) * 2 + 0x42c) = temp_v1;
    *(char *)(temp_v0 + 0x480) = *(char *)(temp_v0 + 0x480) + '\x01';
    return;
  case 0xb:
    temp_v2 = 0;
    temp_v4 = FUN_0029f0f4(temp_v0 + 0x4d4);
    if (temp_v4 != 1 && -1 < temp_v4 - 1) {
      unaff_r6 = (char *)(temp_v0 + 0x480);
    }
    if (0 < temp_v4 - 1) {
      do {
        temp_v1 = FUN_002b88c4(0x1a,temp_v2 + 0x414);
        temp_v4 = temp_v2 * 2;
        temp_v2 = temp_v2 + 1;
        *(unsigned short *)(temp_v0 + temp_v4 + 0x42c) = temp_v1;
        *unaff_r6 = *(char *)(temp_v0 + 0x480) + '\x01';
        temp_v4 = FUN_0029f0f4(temp_v0 + 0x4d4);
      } while (temp_v2 < temp_v4 - 1);
    }
    temp_v4 = FUN_002bf6d0(0x1a,0x4f1);
    temp_v2 = FUN_002bf6d0(0x1a,0x41f);
    temp_v5 = (int)*(short *)(temp_v4 + 8);
    FUN_0029e2f4(temp_v5,(int)*(short *)(temp_v4 + 10),(int)**(short **)(temp_v2 + 0xc),
                 (int)*(short *)(*(int *)(temp_v4 + 0xc) + 2));
    *(short *)(temp_v0 + (unsigned int)*(unsigned char *)(temp_v0 + 0x480) * 2 + 0x42c) = (short)temp_v5;
    *(char *)(temp_v0 + 0x480) = *(char *)(temp_v0 + 0x480) + '\x01';
    return;
  case 0x10:
    temp_v4 = 0;
    do {
      temp_v2 = FUN_002c0ba8(0x410);
      if ((temp_v2 != 0) || (!(temp_v4 == 1 || temp_v4 == 2))) {
        temp_v1 = FUN_002b88c4(0x1a,temp_v4 + 0x466);
        *(unsigned short *)(temp_v0 + temp_v4 * 2 + 0x42c) = temp_v1;
      }
      else {
        *(unsigned short *)(temp_v0 + temp_v4 * 2 + 0x42c) = 0;
      }
      temp_v4 = temp_v4 + 1;
      *(char *)(temp_v0 + 0x480) = *(char *)(temp_v0 + 0x480) + '\x01';
    } while (temp_v4 < 7);
    temp_v1 = FUN_002b88c4(0x1a,0x50f);
    *(unsigned short *)(temp_v0 + 0x47a) = temp_v1;
    temp_v1 = FUN_002b88c4(0x1a,0x50e);
    *(unsigned short *)(temp_v0 + 0x47c) = temp_v1;
    *(char *)(temp_v0 + 0x480) = *(char *)(temp_v0 + 0x480) + '\x02';
    return;
  case 0x11:
    temp_v4 = 0;
    pcVar7 = (char *)(temp_v0 + 0x480);
    do {
      temp_v1 = FUN_002b88c4(0x1a,temp_v4 + 0x44c);
      temp_v2 = temp_v4 * 2;
      temp_v4 = temp_v4 + 1;
      *(unsigned short *)(temp_v0 + temp_v2 + 0x42c) = temp_v1;
      *pcVar7 = *(char *)(temp_v0 + 0x480) + '\x01';
    } while (temp_v4 < 0xb);
    temp_v1 = FUN_002b88c4(0x1a,0x4e7);
    *(unsigned short *)(temp_v0 + 0x476) = temp_v1;
    temp_v1 = FUN_002b88c4(0x1a,0x4e8);
    *(unsigned short *)(temp_v0 + 0x478) = temp_v1;
    temp_v1 = FUN_002b88c4(0x1a,0x4e9);
    *(unsigned short *)(temp_v0 + 0x474) = temp_v1;
    *pcVar7 = *(char *)(temp_v0 + 0x480) + '\x03';
    temp_v1 = FUN_002b88c4(0x1a,0x50f);
    *(unsigned short *)(temp_v0 + 0x47a) = temp_v1;
    temp_v1 = FUN_002b88c4(0x1a,0x50e);
    *(unsigned short *)(temp_v0 + 0x47c) = temp_v1;
    *pcVar7 = *pcVar7 + '\x02';
    return;
  case 0x13:
    temp_v4 = 0;
    pcVar7 = (char *)(temp_v0 + 0x480);
    do {
      temp_v2 = 0;
      do {
        temp_v5 = temp_v2 + temp_v4 * 4;
        if (*(short *)(temp_v0 + 0x2232) <= temp_v5) break;
        temp_v1 = FUN_002b88c4(0x1a,temp_v5 + 0x4ae);
        temp_v2 = temp_v2 + 1;
        *(unsigned short *)(temp_v0 + temp_v5 * 2 + 0x42c) = temp_v1;
        *pcVar7 = *(char *)(temp_v0 + 0x480) + '\x01';
      } while (temp_v2 < 4);
      temp_v4 = temp_v4 + 1;
      if (temp_v4 >= 9) {
        temp_v1 = FUN_002b88c4(0x1a,0x4e7);
        *(unsigned short *)(temp_v0 + 0x476) = temp_v1;
        temp_v1 = FUN_002b88c4(0x1a,0x4e8);
        *(unsigned short *)(temp_v0 + 0x478) = temp_v1;
        temp_v1 = FUN_002b88c4(0x1a,0x4e9);
        *(unsigned short *)(temp_v0 + 0x474) = temp_v1;
        *pcVar7 = *(char *)(temp_v0 + 0x480) + '\x03';
        temp_v1 = FUN_002b88c4(0x1a,0x50f);
        *(unsigned short *)(temp_v0 + 0x47a) = temp_v1;
        temp_v1 = FUN_002b88c4(0x1a,0x50e);
        *(unsigned short *)(temp_v0 + 0x47c) = temp_v1;
        *pcVar7 = *pcVar7 + '\x02';
        return;
      }
    } while( 1 );
  case 0x15:
    temp_v1 = FUN_002b88c4(0x1a,0x4ea);
    *(unsigned short *)(temp_v0 + 0x476) = temp_v1;
    temp_v1 = FUN_002b88c4(0x1a,0x4eb);
    *(unsigned short *)(temp_v0 + 0x478) = temp_v1;
    temp_v1 = FUN_002b88c4(0x1a,0x4ec);
    *(unsigned short *)(temp_v0 + 0x474) = temp_v1;
    *(char *)(temp_v0 + 0x480) = *(char *)(temp_v0 + 0x480) + '\x03';
    temp_v1 = FUN_002b88c4(0x1a,0x50f);
    *(unsigned short *)(temp_v0 + 0x47a) = temp_v1;
    temp_v1 = FUN_002b88c4(0x1a,0x50e);
    *(unsigned short *)(temp_v0 + 0x47c) = temp_v1;
    *(char *)(temp_v0 + 0x480) = *(char *)(temp_v0 + 0x480) + '\x02';
    return;
  case 0x16:
  case 0x17:
  case 0x19:
  case 0x1a:
    temp_v4 = temp_v0 + 0x230c;
    temp_v5 = 0;
    temp_v2 = FUN_0029f0f4(temp_v4);
    if (temp_v2 != 1 && -1 < temp_v2 - 1) {
      unaff_r6 = (char *)(temp_v0 + 0x480);
    }
    if (0 < temp_v2 - 1) {
      do {
        temp_v1 = FUN_002b88c4(0x1a,temp_v5 + 0x414);
        temp_v2 = temp_v5 * 2;
        temp_v5 = temp_v5 + 1;
        *(unsigned short *)(temp_v0 + temp_v2 + 0x42c) = temp_v1;
        *unaff_r6 = *(char *)(temp_v0 + 0x480) + '\x01';
        temp_v2 = FUN_0029f0f4(temp_v4);
      } while (temp_v5 < temp_v2 - 1);
    }
    temp_v1 = FUN_002b88c4(0x1a,0x54a);
    temp_v4 = FUN_0029f0f4(temp_v4);
    *(unsigned short *)(temp_v0 + temp_v4 * 2 + 0x42a) = temp_v1;
    temp_v3 = *(char *)(temp_v0 + 0x480) + '\x01';
  }
  *(char *)(temp_v0 + 0x480) = temp_v3;
  return;
}
