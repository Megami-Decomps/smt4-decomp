/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f15f8` (_code @ 0x2f15f8, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001681cc(int);
int FUN_00184758(int, int);
int FUN_00184c00(int, int, int);
int FUN_002a4964(int, int);
int FUN_002a7438(void);
int FUN_003d2150(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int DAT_0057f28c; /* 0x57f28c */

/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */
extern unsigned char FUN_001bd100(unsigned int);
/* Supplied declaration required: FUN_002a4964. */
/* Supplied declaration required: FUN_002a7438. */
extern int FUN_002c2c68(int);
/* Supplied declaration required: FUN_003d2150. */


void FUN_002f15f8(unsigned int param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = DAT_0057f28c;
  *(short *)(DAT_0057f28c + 0xcca) = (short)param_1;
  temp_v1 = FUN_001bd100(param_1);
  *(unsigned char *)(temp_v0 + 0x90c) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x938) = 0x3e55cfab;
  FUN_00184758(temp_v0 + 0x408,0);
  FUN_00184c00(temp_v0 + 0x408,8,0);
  if (param_2 == 0) {
    *(unsigned char *)(temp_v0 + 0x93c) = 0;
  }
  else {
    *(unsigned char *)(temp_v0 + 0x93c) = 1;
    temp_v4 = 0;
    if (*(char *)(temp_v0 + 0x90c) != '\0') {
      temp_v6 = temp_v0 + 0x948;
      temp_v5 = temp_v0 + 0xa10;
    }
    else {
      temp_v6 = temp_v0 + 0x9ac;
      temp_v5 = temp_v0 + 0xad6;
    }
    temp_v2 = FUN_002c2c68(temp_v6);
    if (0 < temp_v2) {
      do {
        if (*(unsigned short *)(temp_v5 + temp_v4 * 2) == param_1) {
          FUN_002a4964(temp_v6,temp_v4);
          break;
        }
        temp_v4 = temp_v4 + 1;
        temp_v2 = FUN_002c2c68(temp_v6);
      } while (temp_v4 < temp_v2);
    }
    FUN_00184758(temp_v0 + 0x34,0);
    FUN_00184c00(temp_v0 + 0x34,8,0);
  }
  FUN_002a7438();
  temp_v0 = DAT_0057f28c;
  temp_v3 = *(unsigned int *)(DAT_0057f28c + 4);
  *(unsigned int *)(DAT_0057f28c + 4) = 0x14;
  *(unsigned int *)(temp_v0 + 8) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  FUN_001681cc(0x1a);
  FUN_003d2150(0x10000cb);
  return;
}

} /* extern "C" */
