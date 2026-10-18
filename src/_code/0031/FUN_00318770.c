/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00318770` (_code @ 0x318770, 0x1c0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_0024ec64. */
/* Supplied declaration required: FUN_0028df54. */
extern unsigned int FUN_00296f60(unsigned int);
extern int FUN_00297004(int, unsigned int);
/* Supplied declaration required: FUN_002b087c. */
extern int FUN_002b66ec(void);
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_002bd25c. */
/* Supplied declaration required: FUN_002c0bcc. */
/* Supplied declaration required: FUN_002c4360. */
extern int FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


unsigned int FUN_00318770(void)

{
/* irregular: 8 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  unsigned short temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  
  temp_v1 = FUN_00296f60(0) & 0xffff;
  FUN_002b087c();
  temp_v6 = (unsigned int)*(unsigned short *)(temp_v1 + 0x82);
  temp_v8 = temp_v6;
  FUN_002b087c();
  FUN_002b9364(temp_v6);
  if ((((temp_v6 == 0 || temp_v8 == 0) || ((*(unsigned short *)(temp_v8 + 0x16) & 0x400) == 0)) ||
      (temp_v2 = FUN_002b66ec(), *(unsigned char *)(temp_v2 + 0x76) < *(unsigned char *)(temp_v8 + 2))) ||
     (temp_v2 = FUN_0024ec64(temp_v6), temp_v2 != 0)) {
    temp_v2 = FUN_002c4b84(0x100,0x100,0,0x962,1);
    temp_v6 = 0;
    temp_v3 = FUN_002b66ec();
    temp_v8 = (unsigned int)*(unsigned char *)(temp_v1 + 2);
    if (*(unsigned char *)(temp_v3 + 0x76) <= temp_v8) {
      temp_v3 = FUN_002b66ec();
      temp_v8 = (unsigned int)*(unsigned char *)(temp_v3 + 0x76);
    }
    temp_v0 = (short)(temp_v8 / 2);
    if (temp_v8 / 2 < 10) {
      temp_v0 = 10;
    }
    temp_v7 = (int)(short)((short)temp_v8 - temp_v0);
    temp_v3 = FUN_00297004(temp_v7,temp_v8);
    if (temp_v3 < 1) {
      FUN_0028df54(0xffffffff);
    }
    else {
      if (temp_v7 < 1) {
        temp_v7 = 1;
      }
      temp_v1 = 1;
      do {
        puVar5 = (unsigned short *)(temp_v1 & 0xffff);
        FUN_002b9364();
        temp_v4 = temp_v1;
        FUN_002b087c();
        temp_v5 = (unsigned int)*(unsigned char *)((int)puVar5 + 3);
        temp_v9 = SBORROW4(temp_v5,temp_v7);
        temp_v3 = temp_v5 - temp_v7;
        if (temp_v7 <= (int)temp_v5) {
          temp_v9 = SBORROW4(temp_v8,temp_v5);
          temp_v3 = temp_v8 - temp_v5;
        }
        if (((temp_v3 < 0 == temp_v9) && ((*(unsigned short *)(temp_v4 + 0x16) & 0x400) != 0)) &&
           (temp_v3 = FUN_0024ec64(*puVar5), temp_v3 == 0)) {
          FUN_002bd25c(*puVar5);
          temp_v3 = temp_v6 * 2;
          temp_v6 = (temp_v6 + 1) & 0xffff;
          *(unsigned short *)(temp_v2 + temp_v3) = *puVar5;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x4b1);
      if (temp_v6 != 0) {
        FUN_002c0bcc((temp_v6 - 1) & 0xffff);
      }
      FUN_0028df54();
    }
    FUN_002c4360(temp_v2);
  }
  else {
    FUN_0028df54(temp_v6);
  }
  return 1;
}
