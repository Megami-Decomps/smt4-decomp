/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00312f78` (_code @ 0x312f78, 0x1b0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 8 byte(s) */
typedef struct {
    unsigned short sp22; /* 0x22: local_22 */
    unsigned short sp24; /* 0x24: local_24 */
    unsigned short sp26; /* 0x26: local_26 */
    unsigned short sp28; /* 0x28: local_28 */
} void_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00245318. */
/* Supplied declaration required: FUN_0028df54. */
extern unsigned int FUN_00293c98(void);
/* Supplied declaration required: FUN_00296f60. */
/* Supplied declaration required: FUN_002adb40. */
extern int FUN_002c0bcc(unsigned int);
/* Supplied declaration required: FUN_002c0e4c. */
extern int FUN_002c0e9c(void);
extern int FUN_002c615c(int, unsigned int);


unsigned int FUN_00312f78(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  short *psVar6;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  unsigned short temp_v13;
  unsigned short temp_v14;
  unsigned short temp_v15;
  unsigned short temp_v16;
  
  temp_v1 = FUN_00296f60(0);
  FUN_00296f60(1);
  temp_v2 = FUN_00293c98();
  temp_v2 = FUN_00245318(temp_v2,6);
  temp_v3 = FUN_002c0e9c();
  FUN_002c0e4c(temp_v2);
  temp_v2 = FUN_00293c98();
  FUN_00245318(temp_v2,7);
  temp_v4 = FUN_002c0e9c();
  FUN_002adb40(&temp_v13,temp_v4 + temp_v1 * 8);
  psVar6 = (short *)(temp_v3 + temp_v1 * 8);
  temp_v7 = 0;
  if (*psVar6 == 0) {
    temp_v13 = 0;
  }
  if (*psVar6 != 0) {
    temp_v7 = (unsigned int)temp_v13;
  }
  if (psVar6[1] != 0) {
    temp_v7 = temp_v7 + temp_v14;
  }
  else {
    temp_v14 = 0;
  }
  if (psVar6[2] != 0) {
    temp_v6 = (unsigned int)temp_v15;
  }
  else {
    temp_v15 = 0;
    temp_v6 = 0;
  }
  if (psVar6[2] != 0) {
    temp_v7 = temp_v7 + temp_v6;
  }
  if (psVar6[3] != 0) {
    temp_v7 = temp_v7 + temp_v16;
  }
  else {
    temp_v16 = 0;
  }
  if (temp_v13 == 0) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = FUN_002c615c((unsigned int)temp_v13 * 100,temp_v7);
  }
  if (temp_v14 == 0) {
    temp_v3 = 0;
  }
  else {
    temp_v3 = FUN_002c615c((unsigned int)temp_v14 * 100,temp_v7);
  }
  if (temp_v15 == 0) {
    temp_v4 = 0;
  }
  else {
    temp_v4 = FUN_002c615c((unsigned int)temp_v15 * 100,temp_v7);
  }
  if (temp_v16 == 0) {
    temp_v8 = 0;
  }
  else {
    temp_v8 = FUN_002c615c((unsigned int)temp_v16 * 100,temp_v7);
  }
  temp_v9 = temp_v3 + temp_v1;
  temp_v10 = temp_v4 + temp_v9;
  temp_v11 = temp_v8 + temp_v10;
  temp_v5 = FUN_002c0bcc((temp_v11 - 1U) & 0xffff);
  temp_v12 = temp_v1 == 0;
  temp_v0 = temp_v1;
  if (0 < temp_v1) {
    temp_v0 = temp_v1 - temp_v5;
    temp_v12 = temp_v1 == temp_v5;
  }
  temp_v2 = 0xffffffff;
  if (!(temp_v12 || temp_v0 < 0 != (0 < temp_v1 && SBORROW4(temp_v1,temp_v5)))) {
    temp_v2 = 1;
  }
  else {
    temp_v12 = temp_v3 == 0;
    temp_v1 = temp_v3;
    if (0 < temp_v3) {
      temp_v1 = temp_v9 - temp_v5;
      temp_v12 = temp_v9 == temp_v5;
    }
    if (!(temp_v12 || temp_v1 < 0 != (0 < temp_v3 && SBORROW4(temp_v9,temp_v5)))) {
      temp_v2 = 2;
    }
    else {
      temp_v12 = temp_v4 == 0;
      temp_v1 = temp_v4;
      if (0 < temp_v4) {
        temp_v1 = temp_v10 - temp_v5;
        temp_v12 = temp_v10 == temp_v5;
      }
      if (!(temp_v12 || temp_v1 < 0 != (0 < temp_v4 && SBORROW4(temp_v10,temp_v5)))) {
        temp_v2 = 3;
      }
      else {
        temp_v12 = temp_v8 == 0;
        temp_v1 = temp_v8;
        if (0 < temp_v8) {
          temp_v1 = temp_v11 - temp_v5;
          temp_v12 = temp_v11 == temp_v5;
        }
        if (!temp_v12 && temp_v1 < 0 == (0 < temp_v8 && SBORROW4(temp_v11,temp_v5))) {
          temp_v2 = 4;
        }
      }
    }
  }
  FUN_0028df54(temp_v2);
  return 1;
}
