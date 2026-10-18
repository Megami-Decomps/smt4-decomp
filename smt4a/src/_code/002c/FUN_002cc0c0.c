/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cc0c0` (_code @ 0x2cc0c0, 0x15c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_0057f268; /* 0x57f268 */

extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_003344b4. */
/* Supplied declaration required: FUN_003f525c. */
/* Supplied declaration required: FUN_0047fbf0. */


void FUN_002cc0c0(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5 [2];
  
  temp_v0 = DAT_0057f268;
  temp_v1 = FUN_001ab888();
  temp_v4 = 0;
  temp_v5[0] = 0;
  if (*(char *)(temp_v0 + 0x9c0) != '\0') {
    FUN_0047fbf0(0xffffffff,*(unsigned short *)(temp_v0 + 0x36),&temp_v4,temp_v5);
    FUN_003f525c(*(unsigned int *)(temp_v0 + 0xa10),temp_v4,temp_v5[0]);
  }
  temp_v3 = 0;
  do {
    temp_v2 = (int)*(char *)(temp_v1 + temp_v3 + 0x1ca0);
    if (-1 < temp_v2) {
      FUN_0047fbf0(temp_v2,*(unsigned short *)(temp_v0 + 0x36),&temp_v4,temp_v5);
      FUN_003f525c(*(unsigned int *)(temp_v0 + temp_v3 * 4 + 0xa14),temp_v4,temp_v5[0]);
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 3);
  temp_v1 = 0;
  do {
    temp_v3 = *(int *)(temp_v0 + temp_v1 * 8 + 0xa80);
    if (-1 < temp_v3) {
      FUN_0047fbf0(temp_v3,*(unsigned short *)(temp_v0 + 0x36),&temp_v4,temp_v5);
      FUN_003f525c(*(unsigned int *)(temp_v0 + temp_v1 * 4 + 0xa20),temp_v4,temp_v5[0]);
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  if (*(short *)(temp_v0 + 0x38) < 0) {
    FUN_003344b4(*(unsigned int *)(*(int *)(temp_v0 + 0xa10) + 0x40),
                 *(unsigned int *)(*(int *)(temp_v0 + 0xa10) + 0x44));
    return;
  }
  temp_v1 = 0;
  do {
    if (*(int *)(temp_v0 + temp_v1 * 8 + 0xa80) == (int)*(short *)(temp_v0 + 0x38)) {
      temp_v3 = temp_v0 + temp_v1 * 4;
      FUN_003344b4(*(unsigned int *)(*(int *)(temp_v3 + 0xa20) + 0x40),
                   *(unsigned int *)(*(int *)(temp_v3 + 0xa20) + 0x44));
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  return;
}
