/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020592c` (_code @ 0x20592c, 0x160 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_0028cd9c. */
/* Supplied declaration required: FUN_00292e88. */
/* Supplied declaration required: FUN_00298fc4. */
extern int FUN_002a8a08(void);


void FUN_0020592c(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5 [2];
  
  temp_v0 = DAT_0043dcf0;
  temp_v1 = FUN_002a8a08();
  temp_v4 = 0;
  temp_v5[0] = 0;
  if (*(char *)(temp_v0 + 0x678) != '\0') {
    FUN_0028cd9c(0xffffffff,*(unsigned short *)(temp_v0 + 0x36),&temp_v4,temp_v5);
    FUN_00292e88(*(unsigned int *)(temp_v0 + 0x6c8),temp_v4,temp_v5[0]);
  }
  temp_v3 = 0;
  do {
    temp_v2 = (int)*(char *)(temp_v1 + temp_v3 + 0x9108);
    if (-1 < temp_v2) {
      FUN_0028cd9c(temp_v2,*(unsigned short *)(temp_v0 + 0x36),&temp_v4,temp_v5);
      FUN_00292e88(*(unsigned int *)(temp_v0 + temp_v3 * 4 + 0x6cc),temp_v4,temp_v5[0]);
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 3);
  temp_v1 = 0;
  do {
    temp_v3 = *(int *)(temp_v0 + temp_v1 * 8 + 0x738);
    if (-1 < temp_v3) {
      FUN_0028cd9c(temp_v3,*(unsigned short *)(temp_v0 + 0x36),&temp_v4,temp_v5);
      FUN_00292e88(*(unsigned int *)(temp_v0 + temp_v1 * 4 + 0x6d8),temp_v4,temp_v5[0]);
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  if (*(short *)(temp_v0 + 0x38) < 0) {
    FUN_00298fc4(*(unsigned int *)(*(int *)(temp_v0 + 0x6c8) + 0x40),
                 *(unsigned int *)(*(int *)(temp_v0 + 0x6c8) + 0x44));
    return;
  }
  temp_v1 = 0;
  do {
    if (*(int *)(temp_v0 + temp_v1 * 8 + 0x738) == (int)*(short *)(temp_v0 + 0x38)) {
      temp_v3 = temp_v0 + temp_v1 * 4;
      FUN_00298fc4(*(unsigned int *)(*(int *)(temp_v3 + 0x6d8) + 0x40),
                   *(unsigned int *)(*(int *)(temp_v3 + 0x6d8) + 0x44));
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  return;
}
