/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dfe88` (_code @ 0x2dfe88, 0x134 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char DAT_0040450c; /* 0x40450c */
extern unsigned int *DAT_00447a98; /* 0x447a98 */
extern int DAT_0049f91c; /* 0x49f91c */
extern unsigned char DAT_004b7608; /* 0x4b7608 */

/* Supplied declaration required: FUN_00282c44. */
extern int FUN_002931cc(unsigned int);
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bfdfc. */
extern unsigned int FUN_002bff9c(void);
extern unsigned int FUN_002bffac(void);
extern int FUN_002c0ba8(unsigned int);
extern int FUN_002c2b1c(void);


void FUN_002dfe88(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v2 = FUN_002bffac();
  temp_v7 = 1;
  temp_v0 = 0;
  do {
    temp_v3 = FUN_002c2b1c();
    temp_v5 = (int)(temp_v7 + ((unsigned int)((int)temp_v7 >> 0x1f) >> 0x1d)) >> 3;
    temp_v4 = 1 << (((int)temp_v7 % 8) & 0xffU);
    if ((*(unsigned char *)(temp_v3 + temp_v5 + 0xd9c) & temp_v4) == 0) {
      temp_v3 = FUN_002931cc(temp_v7);
      temp_v1 = (unsigned char)temp_v4;
      if (temp_v3 != 0) {
        temp_v3 = FUN_002c2b1c();
        *(unsigned char *)(temp_v3 + temp_v5 + 0xd9c) = *(unsigned char *)(temp_v3 + temp_v5 + 0xd9c) | temp_v1;
      }
      else {
        temp_v4 = temp_v7;
        FUN_00282c44();
        if (temp_v4 != 2) {
          temp_v3 = FUN_002c2b1c();
          temp_v0 = 1;
          *(unsigned char *)(temp_v3 + temp_v5 + 0xd9c) = *(unsigned char *)(temp_v3 + temp_v5 + 0xd9c) | temp_v1;
        }
      }
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 0x8d);
  if ((((param_1 == 0) && (temp_v0)) && (DAT_0049f91c != 0x24)) &&
     (temp_v5 = FUN_002c0ba8(0x408), temp_v5 != 0)) {
    DAT_004b7608 = 0;
    FUN_002be7fc(&DAT_004b7608,&DAT_0040450c);
    puVar3 = DAT_00447a98;
    DAT_00447a98[5] = (unsigned int)&DAT_004b7608;
    *puVar3 = 3;
    puVar3[1] = 0;
    temp_v6 = FUN_002bff9c();
    FUN_002bfdfc(1,0x61a84,temp_v6,temp_v2 | 4);
    return;
  }
  return;
}
