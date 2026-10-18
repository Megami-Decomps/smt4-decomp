/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b17f0` (_code @ 0x3b17f0, 0x1cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_0014bef4. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_00180118. */
extern int FUN_001801a4(void);
/* Supplied declaration required: FUN_00184310. */
extern int FUN_00184964(int, int);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019cac4. */
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_004d0bf0. */


unsigned int FUN_003b17f0(void)

{
/* irregular: 9 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  
  temp_v1 = FUN_00236038(0) & 0xffff;
  FUN_0019cac4();
  temp_v5 = (unsigned int)*(unsigned short *)(temp_v1 + 0x86);
  temp_v8 = temp_v5;
  FUN_0019cac4();
  FUN_00184310(temp_v5);
  if ((((temp_v5 == 0 || temp_v8 == 0) || ((*(unsigned short *)(temp_v8 + 0x16) & 0x80) == 0)) ||
      (temp_v2 = FUN_001801a4(), *(unsigned short *)(temp_v2 + 0x62) < (*(unsigned short *)(temp_v8 + 2) & 0x7fff))) ||
     (temp_v2 = FUN_004d0bf0(temp_v5), temp_v2 != 0)) {
    temp_v2 = 0x100;
    FUN_00163060(0x100,0x100,0,0x962,1);
    temp_v8 = 0;
    temp_v3 = FUN_001801a4();
    temp_v0 = *(unsigned short *)(temp_v1 + 2) & 0x7fff;
    if (*(unsigned short *)(temp_v3 + 0x62) <= temp_v0) {
      temp_v3 = FUN_001801a4();
      temp_v0 = *(unsigned short *)(temp_v3 + 0x62);
    }
    temp_v7 = (int)(short)temp_v0;
    temp_v3 = temp_v7 / 2;
    if (temp_v3 < 10) {
      temp_v3 = 10;
    }
    temp_v6 = (int)(short)(temp_v0 - (short)temp_v3);
    temp_v3 = FUN_00184964(temp_v6,temp_v7);
    if (temp_v3 < 1) {
      FUN_003283ac(0xffffffff);
    }
    else {
      if (temp_v6 < 1) {
        temp_v6 = 1;
      }
      temp_v1 = 1;
      do {
        puVar5 = (unsigned short *)(temp_v1 & 0xffff);
        FUN_00184310();
        temp_v5 = temp_v1 & 0xffff;
        FUN_0019cac4();
        temp_v4 = (unsigned int)(unsigned short)puVar5[3];
        temp_v9 = SBORROW4(temp_v4,temp_v6);
        temp_v3 = temp_v4 - temp_v6;
        if (temp_v6 <= (int)temp_v4) {
          temp_v9 = SBORROW4(temp_v7,temp_v4);
          temp_v3 = temp_v7 - temp_v4;
        }
        if (((temp_v3 < 0 == temp_v9) && ((*(unsigned short *)(temp_v5 + 0x16) & 0x80) != 0)) &&
           (temp_v3 = FUN_004d0bf0(*puVar5), temp_v3 == 0)) {
          FUN_00180118(*puVar5);
          temp_v3 = temp_v8 * 2;
          temp_v8 = (temp_v8 + 1) & 0xffff;
          *(unsigned short *)(temp_v2 + temp_v3) = *puVar5;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x4b1);
      if (temp_v8 != 0) {
        FUN_0014bef4((temp_v8 - 1) & 0xffff);
      }
      FUN_003283ac();
    }
    FUN_0019a5a0(temp_v2);
  }
  else {
    FUN_003283ac(temp_v5);
  }
  return 1;
}
