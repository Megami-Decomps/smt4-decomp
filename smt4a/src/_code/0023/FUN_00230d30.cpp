/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230d30` (_code @ 0x230d30, 0x700 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001641c4(void);
int FUN_001643b4(...);
int FUN_001b4a90(int, int, unsigned int);
int FUN_00284168(int, int, int, int);

extern int DAT_00588fe8; /* 0x588fe8 */

/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_001643b4. */
extern int FUN_001834a4(unsigned int, unsigned int);
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_00284168. */
extern int FUN_002c2c68(int);


void FUN_00230d30(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  char temp_v2;
  int temp_v3;
  int temp_v4;
  char *unaff_r6;
  int temp_v5;
  char *pcVar7;
  
  temp_v0 = DAT_00588fe8;
  temp_v3 = 0;
  if (*(char *)(DAT_00588fe8 + 0x59a) != '\0') {
    do {
      FUN_001641c4();
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < (int)(unsigned int)*(unsigned char *)(temp_v0 + 0x59a));
  }
  *(unsigned char *)(temp_v0 + 0x59a) = 0;
  FUN_001b4a90(temp_v0 + 0x544,0x54,0xffffffff);
  switch(*(unsigned int *)(temp_v0 + 0x518)) {
  case 3:
    temp_v5 = 0;
    temp_v3 = FUN_002c2c68(temp_v0 + 0x5ec);
    if (0 < temp_v3) {
      do {
        temp_v1 = FUN_001643b4(0x12,temp_v5 + 0x414);
        temp_v3 = temp_v5 * 2;
        temp_v5 = temp_v5 + 1;
        *(unsigned short *)(temp_v0 + temp_v3 + 0x544) = temp_v1;
        *(char *)(temp_v0 + 0x59a) = *(char *)(temp_v0 + 0x59a) + '\x01';
        temp_v3 = FUN_002c2c68(temp_v0 + 0x5ec);
      } while (temp_v5 < temp_v3);
    }
    temp_v1 = FUN_001643b4(0x12,0x50f);
    *(unsigned short *)(temp_v0 + 0x592) = temp_v1;
    temp_v1 = FUN_001643b4(0x12,0x50e);
    *(unsigned short *)(temp_v0 + 0x594) = temp_v1;
    temp_v2 = *(char *)(temp_v0 + 0x59a) + '\x02';
    break;
  case 4:
    temp_v5 = 0;
    temp_v3 = FUN_002c2c68(temp_v0 + 0x5ec);
    if (0 < temp_v3) {
      do {
        temp_v1 = FUN_001643b4(0x12,temp_v5 + 0x414);
        temp_v3 = temp_v5 * 2;
        temp_v5 = temp_v5 + 1;
        *(unsigned short *)(temp_v0 + temp_v3 + 0x544) = temp_v1;
        *(char *)(temp_v0 + 0x59a) = *(char *)(temp_v0 + 0x59a) + '\x01';
        temp_v3 = FUN_002c2c68(temp_v0 + 0x5ec);
      } while (temp_v5 < temp_v3);
      return;
    }
  default:
    return;
  case 7:
    temp_v5 = 0;
    temp_v3 = FUN_002c2c68(temp_v0 + 0x5ec);
    if (0 < temp_v3) {
      do {
        temp_v1 = FUN_001643b4(0x12,temp_v5 + 0x414);
        temp_v3 = temp_v5 * 2;
        temp_v5 = temp_v5 + 1;
        *(unsigned short *)(temp_v0 + temp_v3 + 0x544) = temp_v1;
        *(char *)(temp_v0 + 0x59a) = *(char *)(temp_v0 + 0x59a) + '\x01';
        temp_v3 = FUN_002c2c68(temp_v0 + 0x5ec);
      } while (temp_v5 < temp_v3);
    }
    temp_v1 = FUN_001643b4(0x12,0x4f1);
    *(unsigned short *)(temp_v0 + (unsigned int)*(unsigned char *)(temp_v0 + 0x59a) * 2 + 0x544) = temp_v1;
    *(char *)(temp_v0 + 0x59a) = *(char *)(temp_v0 + 0x59a) + '\x01';
    return;
  case 0xe:
    temp_v5 = 0;
    temp_v3 = FUN_002c2c68(temp_v0 + 0x5ec);
    if (temp_v3 != 1 && -1 < temp_v3 - 1) {
      unaff_r6 = (char *)(temp_v0 + 0x59a);
    }
    if (0 < temp_v3 - 1) {
      do {
        temp_v1 = FUN_001643b4(0x12,temp_v5 + 0x414);
        temp_v3 = temp_v5 * 2;
        temp_v5 = temp_v5 + 1;
        *(unsigned short *)(temp_v0 + temp_v3 + 0x544) = temp_v1;
        *unaff_r6 = *(char *)(temp_v0 + 0x59a) + '\x01';
        temp_v3 = FUN_002c2c68(temp_v0 + 0x5ec);
      } while (temp_v5 < temp_v3 - 1);
    }
    temp_v3 = FUN_001834a4(0x12,0x4f1);
    temp_v5 = FUN_001834a4(0x12,0x41f);
    temp_v4 = (int)*(short *)(temp_v3 + 8);
    FUN_00284168(temp_v4,(int)*(short *)(temp_v3 + 10),(int)**(short **)(temp_v5 + 0xc),
                 (int)*(short *)(*(int *)(temp_v3 + 0xc) + 2));
    *(short *)(temp_v0 + (unsigned int)*(unsigned char *)(temp_v0 + 0x59a) * 2 + 0x544) = (short)temp_v4;
    *(char *)(temp_v0 + 0x59a) = *(char *)(temp_v0 + 0x59a) + '\x01';
    return;
  case 0x13:
    temp_v3 = 0;
    do {
      temp_v5 = FUN_0018719c(0x410);
      if ((temp_v5 != 0) || (!(temp_v3 == 1 || temp_v3 == 2))) {
        temp_v1 = FUN_001643b4(0x12,temp_v3 + 0x466);
        *(unsigned short *)(temp_v0 + temp_v3 * 2 + 0x544) = temp_v1;
      }
      else {
        *(unsigned short *)(temp_v0 + temp_v3 * 2 + 0x544) = 0;
      }
      temp_v3 = temp_v3 + 1;
      *(char *)(temp_v0 + 0x59a) = *(char *)(temp_v0 + 0x59a) + '\x01';
    } while (temp_v3 < 7);
    temp_v1 = FUN_001643b4(0x12,0x50f);
    *(unsigned short *)(temp_v0 + 0x592) = temp_v1;
    temp_v1 = FUN_001643b4(0x12,0x50e);
    *(unsigned short *)(temp_v0 + 0x594) = temp_v1;
    *(char *)(temp_v0 + 0x59a) = *(char *)(temp_v0 + 0x59a) + '\x02';
    return;
  case 0x14:
    temp_v3 = 0;
    pcVar7 = (char *)(temp_v0 + 0x59a);
    do {
      temp_v1 = FUN_001643b4(0x12,temp_v3 + 0x44c);
      temp_v5 = temp_v3 * 2;
      temp_v3 = temp_v3 + 1;
      *(unsigned short *)(temp_v0 + temp_v5 + 0x544) = temp_v1;
      *pcVar7 = *(char *)(temp_v0 + 0x59a) + '\x01';
    } while (temp_v3 < 0xb);
    temp_v1 = FUN_001643b4(0x12,0x4e7);
    *(unsigned short *)(temp_v0 + 0x58e) = temp_v1;
    temp_v1 = FUN_001643b4(0x12,0x4e8);
    *(unsigned short *)(temp_v0 + 0x590) = temp_v1;
    temp_v1 = FUN_001643b4(0x12,0x4e9);
    *(unsigned short *)(temp_v0 + 0x58c) = temp_v1;
    *pcVar7 = *(char *)(temp_v0 + 0x59a) + '\x03';
    temp_v1 = FUN_001643b4(0x12,0x50f);
    *(unsigned short *)(temp_v0 + 0x592) = temp_v1;
    temp_v1 = FUN_001643b4(0x12,0x50e);
    *(unsigned short *)(temp_v0 + 0x594) = temp_v1;
    *pcVar7 = *pcVar7 + '\x02';
    return;
  case 0x16:
    temp_v3 = 0;
    pcVar7 = (char *)(temp_v0 + 0x59a);
    do {
      temp_v5 = 0;
      do {
        temp_v4 = temp_v5 + temp_v3 * 4;
        if (*(short *)(temp_v0 + 0x234a) <= temp_v4) break;
        temp_v1 = FUN_001643b4(0x12,temp_v4 + 0x4ae);
        temp_v5 = temp_v5 + 1;
        *(unsigned short *)(temp_v0 + temp_v4 * 2 + 0x544) = temp_v1;
        *pcVar7 = *(char *)(temp_v0 + 0x59a) + '\x01';
      } while (temp_v5 < 4);
      temp_v3 = temp_v3 + 1;
      if (temp_v3 >= 9) {
        temp_v1 = FUN_001643b4(0x12,0x4e7);
        *(unsigned short *)(temp_v0 + 0x58e) = temp_v1;
        temp_v1 = FUN_001643b4(0x12,0x4e8);
        *(unsigned short *)(temp_v0 + 0x590) = temp_v1;
        temp_v1 = FUN_001643b4(0x12,0x4e9);
        *(unsigned short *)(temp_v0 + 0x58c) = temp_v1;
        *pcVar7 = *(char *)(temp_v0 + 0x59a) + '\x03';
        temp_v1 = FUN_001643b4(0x12,0x50f);
        *(unsigned short *)(temp_v0 + 0x592) = temp_v1;
        temp_v1 = FUN_001643b4(0x12,0x50e);
        *(unsigned short *)(temp_v0 + 0x594) = temp_v1;
        *pcVar7 = *pcVar7 + '\x02';
        return;
      }
    } while( 1 );
  case 0x18:
    temp_v1 = FUN_001643b4(0x12,0x4ea);
    *(unsigned short *)(temp_v0 + 0x58e) = temp_v1;
    temp_v1 = FUN_001643b4(0x12,0x4eb);
    *(unsigned short *)(temp_v0 + 0x590) = temp_v1;
    temp_v1 = FUN_001643b4(0x12,0x4ec);
    *(unsigned short *)(temp_v0 + 0x58c) = temp_v1;
    *(char *)(temp_v0 + 0x59a) = *(char *)(temp_v0 + 0x59a) + '\x03';
    temp_v1 = FUN_001643b4(0x12,0x50f);
    *(unsigned short *)(temp_v0 + 0x592) = temp_v1;
    temp_v1 = FUN_001643b4(0x12,0x50e);
    *(unsigned short *)(temp_v0 + 0x594) = temp_v1;
    *(char *)(temp_v0 + 0x59a) = *(char *)(temp_v0 + 0x59a) + '\x02';
    return;
  case 0x19:
  case 0x1a:
  case 0x1c:
  case 0x1d:
    temp_v3 = temp_v0 + 0x2424;
    temp_v4 = 0;
    temp_v5 = FUN_002c2c68(temp_v3);
    if (temp_v5 != 1 && -1 < temp_v5 - 1) {
      unaff_r6 = (char *)(temp_v0 + 0x59a);
    }
    if (0 < temp_v5 - 1) {
      do {
        temp_v1 = FUN_001643b4(0x12,temp_v4 + 0x414);
        temp_v5 = temp_v4 * 2;
        temp_v4 = temp_v4 + 1;
        *(unsigned short *)(temp_v0 + temp_v5 + 0x544) = temp_v1;
        *unaff_r6 = *(char *)(temp_v0 + 0x59a) + '\x01';
        temp_v5 = FUN_002c2c68(temp_v3);
      } while (temp_v4 < temp_v5 - 1);
    }
    temp_v1 = FUN_001643b4(0x12,0x54a);
    temp_v3 = FUN_002c2c68(temp_v3);
    *(unsigned short *)(temp_v0 + temp_v3 * 2 + 0x542) = temp_v1;
    temp_v2 = *(char *)(temp_v0 + 0x59a) + '\x01';
    break;
  case 0x1f:
    temp_v5 = 0;
    temp_v3 = 0;
    if (0 < *(int *)(temp_v0 + 0x24ec)) {
      do {
        temp_v1 = FUN_001643b4(0x12,temp_v3 + 0x566);
        temp_v4 = temp_v3 * 2;
        temp_v3 = temp_v3 + 1;
        *(unsigned short *)(temp_v0 + temp_v4 + 0x544) = temp_v1;
        temp_v5 = temp_v5 + 1;
        *(char *)(temp_v0 + 0x59a) = *(char *)(temp_v0 + 0x59a) + '\x01';
      } while (temp_v3 < *(int *)(temp_v0 + 0x24ec));
    }
    temp_v1 = FUN_001643b4(0x12,0x56e);
    *(unsigned short *)(temp_v0 + temp_v5 * 2 + 0x544) = temp_v1;
    *(char *)(temp_v0 + 0x59a) = *(char *)(temp_v0 + 0x59a) + '\x01';
    *(int *)(temp_v0 + 0x257c) = temp_v5;
    return;
  }
  *(char *)(temp_v0 + 0x59a) = temp_v2;
  return;
}

} /* extern "C" */
