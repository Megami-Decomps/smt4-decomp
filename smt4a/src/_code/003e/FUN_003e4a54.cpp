/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e4a54` (_code @ 0x3e4a54, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aba54(void);
int FUN_0035e458(void);
int FUN_004cd0c8(int, int, unsigned short [16]);
int FUN_004cd4b8(int, int);
int SBORROW4(unsigned int, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_001aba54. */
extern int FUN_0035d89c(unsigned int);
/* Supplied declaration required: FUN_0035e458. */
/* Supplied declaration required: FUN_004cd0c8. */
/* Supplied declaration required: FUN_004cd4b8. */


unsigned int FUN_003e4a54(unsigned int param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  unsigned short temp_v10 [16];
  
  temp_v4 = 0;
  while( 1 ) {
    if ((temp_v4 & 0xffff) >= 0xc) {
      temp_v7 = 0;
    }
    else {
      temp_v7 = FUN_001ab888();
      temp_v7 = temp_v7 + (temp_v4 & 0xffff) * 0x134 + 0x1ddc;
    }
    if (*(unsigned short *)(temp_v7 + 300) == param_1) break;
    temp_v4 = temp_v4 + 1;
    if ((int)temp_v4 >= 0xc) {
      return 0;
    }
  }
  if (temp_v7 == 0) {
    return 0;
  }
  temp_v4 = 0;
  while( 1 ) {
    if ((temp_v4 & 0xffff) >= 0xc) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = FUN_001ab888();
      temp_v0 = temp_v0 + (temp_v4 & 0xffff) * 0x134 + 0x1ddc;
    }
    if (*(unsigned short *)(temp_v0 + 300) == param_2) break;
    temp_v4 = temp_v4 + 1;
    if ((int)temp_v4 >= 0xc) {
      return 0;
    }
  }
  if (temp_v0 == 0) {
    return 0;
  }
  temp_v4 = (unsigned int)*(unsigned short *)(temp_v7 + 100);
  temp_v7 = temp_v4 - *(unsigned short *)(temp_v0 + 100);
  if (temp_v7 < 0) {
    return 0;
  }
  temp_v5 = 0;
  while( 1 ) {
    if ((temp_v5 & 0xffff) >= 0xc) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = FUN_001ab888();
      temp_v0 = temp_v0 + (temp_v5 & 0xffff) * 0x134 + 0x1ddc;
    }
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 300);
    if (temp_v1 == param_2) break;
    temp_v5 = temp_v5 + 1;
    if ((int)temp_v5 >= 0xc) {
      return 0;
    }
  }
  temp_v9 = temp_v0 != 0;
  temp_v2 = 0;
  if (temp_v9) {
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 100);
    temp_v2 = temp_v4 - temp_v1;
  }
  if ((!temp_v9 || temp_v4 == temp_v1) || temp_v2 < 0 != (temp_v9 && SBORROW4(temp_v4,temp_v1))) {
    return 0;
  }
  temp_v2 = temp_v4 - temp_v1;
  if (temp_v7 < (int)(temp_v4 - temp_v1)) {
    temp_v2 = temp_v7;
  }
  temp_v10[0] = 0;
  temp_v10[1] = 0;
  temp_v10[2] = 0;
  temp_v10[3] = 0;
  temp_v10[4] = 0;
  temp_v10[5] = 0;
  temp_v10[6] = 0;
  temp_v10[7] = 0;
  FUN_004cd0c8(temp_v0,(int)(short)temp_v2,temp_v10);
  temp_v6 = 0;
  temp_v7 = 0;
  do {
    if (*(short *)(temp_v0 + temp_v7 * 2 + 0x34) == 0) break;
    temp_v7 = temp_v7 + 1;
    temp_v6 = temp_v6 + 1;
  } while (temp_v7 < 8);
  temp_v7 = 0;
  do {
    temp_v4 = (unsigned int)temp_v10[temp_v7];
    if (temp_v4 == 0) break;
    if ((temp_v0 != 0) && (temp_v6 < 8)) {
      *(unsigned short *)(temp_v0 + temp_v6 * 2 + 0x34) = temp_v10[temp_v7];
      temp_v5 = temp_v4;
      FUN_001aba54();
      temp_v8 = 0;
      if ((temp_v5 != 0) && (*(unsigned short *)(temp_v5 + 0x26) < 0x12)) {
        temp_v8 = (int)*(char *)((unsigned int)*(unsigned short *)(temp_v5 + 0x26) + temp_v0 + 0x4c);
      }
      temp_v5 = temp_v4;
      FUN_0035e458();
      temp_v3 = FUN_0035d89c(temp_v4);
      if ((int)temp_v5 < temp_v8) {
        temp_v8 = (int)(char)temp_v5;
      }
      else if (temp_v8 < temp_v3) {
        temp_v8 = (int)(char)temp_v3;
      }
      *(char *)(temp_v0 + temp_v6 + 0x44) = (char)temp_v8;
    }
    temp_v7 = temp_v7 + 1;
    temp_v6 = temp_v6 + 1;
  } while (temp_v7 < 8);
  FUN_004cd4b8(temp_v0,(int)(short)temp_v2);
  return 1;
}

} /* extern "C" */
