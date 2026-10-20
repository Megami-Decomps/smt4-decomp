/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c9754` (_code @ 0x3c9754, 0x1c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable06Sub1GetRecord(void);
int FUN_002b46f8(int, int, unsigned int, int, unsigned char *);
int FUN_002b9024(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char LAB_002c6f08; /* 0x2c6f08 */

/* Supplied declaration required: dataTable06Sub1GetRecord. */
/* Supplied declaration required: FUN_002b46f8. */
/* Supplied declaration required: FUN_002b9024. */


unsigned int FUN_003c9754(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned short temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  
  FUN_002b9024();
  if (*(char *)(param_1 + 0x120) != '\0') {
    temp_v2 = param_1 + 0x122;
    FUN_002b46f8(temp_v2,param_1 + 0x146,*(unsigned int *)(param_1 + 0x178),2,&LAB_002c6f08);
    temp_v6 = temp_v5;
    if (temp_v2 == 0) {
      return 0;
    }
  }
  else {
    temp_v6 = temp_v4;
    if (*(char *)(param_1 + 0x143) != '\0') {
      temp_v2 = 0;
      while( 1 ) {
        temp_v7 = (unsigned int)*(unsigned short *)(param_1 + temp_v2 * 2 + 0x146);
        if (temp_v7 == 0) {
          return 0;
        }
        dataTable06Sub1GetRecord();
        temp_v6 = (unsigned int)*(unsigned short *)(param_1 + 0x144);
        if (*(unsigned char *)(temp_v7 + 2) == temp_v6) break;
        temp_v2 = temp_v2 + 1;
        if (temp_v2 >= 0x18) {
          return 0;
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x132) != '\0') {
    temp_v7 = (unsigned int)*(unsigned short *)(param_1 + 0x134);
    temp_v1 = *(unsigned short *)(param_4 + (temp_v7 & 0xffff03ff) * 2 + 0x6c);
    temp_v8 = (temp_v1 & 0xfc00) != 0;
    if (temp_v8) {
      temp_v6 = 2;
    }
    if (!temp_v8 || temp_v6 == temp_v1 >> 10) {
      temp_v1 = 0;
      temp_v3 = 0;
      if ((*(unsigned short *)(param_1 + 0x134) & 0x3ff) == 0) {
        temp_v1 = 0x191;
        temp_v3 = 0x194;
      }
      if ((temp_v7 & 0x3ff) == 1) {
        temp_v1 = 0x195;
        temp_v3 = 0x198;
      }
      if ((temp_v7 & 0x3ff) == 2) {
        temp_v1 = 0x199;
        temp_v3 = 0x19c;
      }
      if ((temp_v7 & 0x3ff) == 3) {
        temp_v1 = 0x19d;
        temp_v3 = 0x1a0;
      }
      if ((temp_v7 & 0x3ff) == 4) {
        temp_v1 = 0x1a1;
        temp_v3 = 0x1a4;
      }
      if ((temp_v7 & 0x3ff) == 5) {
        temp_v1 = 0x1a5;
        temp_v3 = 0x1a8;
      }
      if ((temp_v7 & 0x3ff) == 6) {
        temp_v1 = 0x1ab;
        temp_v3 = 0x1ac;
      }
      temp_v8 = (temp_v7 & 0x3ff) == 7;
      if (temp_v8) {
        temp_v1 = 0x1a9;
      }
      temp_v2 = 0x2c00000;
      if (temp_v8) {
        temp_v3 = temp_v1 + 1;
      }
      temp_v8 = (temp_v7 & 0x3ff) != 0xb;
      if (temp_v8) {
        temp_v2 = 0x3800000;
      }
      temp_v9 = temp_v2 != temp_v7 * 0x400000;
      if (temp_v8 && temp_v9) {
        temp_v2 = 0x3c00000;
      }
      temp_v10 = temp_v2 == temp_v7 * 0x400000;
      if ((!temp_v8 || !temp_v9) || temp_v10) {
        temp_v1 = 0x1ae;
      }
      temp_v2 = 0x3000000;
      if ((!temp_v8 || !temp_v9) || temp_v10) {
        temp_v3 = temp_v1;
      }
      temp_v8 = (temp_v7 & 0x3ff) != 0xc;
      if (temp_v8) {
        temp_v2 = 0x3400000;
      }
      temp_v9 = temp_v2 == temp_v7 * 0x400000;
      if (!temp_v8 || temp_v9) {
        temp_v1 = 0x1ad;
      }
      temp_v2 = 0;
      if (!temp_v8 || temp_v9) {
        temp_v3 = temp_v1;
      }
      while( 1 ) {
        temp_v0 = *(unsigned short *)(param_1 + temp_v2 * 2 + 0x146);
        if (temp_v0 == 0) {
          return 0;
        }
        if ((temp_v1 <= temp_v0) && (temp_v0 <= temp_v3)) break;
        temp_v2 = temp_v2 + 1;
        if (temp_v2 >= 0x18) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 1;
}

} /* extern "C" */
