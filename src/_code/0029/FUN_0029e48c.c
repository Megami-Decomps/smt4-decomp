/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029e48c` (_code @ 0x29e48c, 0x130 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_0029e5c0; /* 0x29e5c0 */
extern int DAT_0043dd24; /* 0x43dd24 */

extern int FUN_00220c10(void);
extern int FUN_0028d838(void);
/* Supplied declaration required: FUN_002954b8. */
/* Supplied declaration required: FUN_0029edfc. */
extern unsigned int FUN_002a0fac(void);
/* Supplied declaration required: FUN_002af854. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002be7fc. */
extern unsigned int FUN_002cc1f4(unsigned int);


void FUN_0029e48c(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char *pbVar7;
  
  temp_v0 = DAT_0043dd24;
  temp_v5 = 0;
  do {
    FUN_002af854(temp_v0 + temp_v5 * 0x8c + 0x28,0);
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0xd);
  *(unsigned int *)(temp_v0 + 0x744) = 1;
  *(unsigned int *)(temp_v0 + 0x748) = 0;
  if (-1 < *(int *)(temp_v0 + 0x750)) {
    temp_v1 = FUN_002a0fac();
    temp_v5 = *(int *)(temp_v0 + 0x754);
    pbVar7 = (unsigned char *)(temp_v1 + *(int *)(temp_v0 + 0x750));
    if (0 < temp_v5) {
      temp_v1 = (unsigned int)*pbVar7;
    }
    temp_v4 = 0;
    if (temp_v4 < temp_v5) {
      do {
        if ((unsigned int)*(unsigned char *)(temp_v0 + temp_v4 + 0x758) == (temp_v1 & 0x7f)) {
          FUN_0029edfc(temp_v0 + 0x788);
          break;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < temp_v5);
    }
    *(unsigned char *)(temp_v0 + 0x74d) = *pbVar7 >> 7;
  }
  if (*(char *)(temp_v0 + 0x74e) == '\x02') {
    return;
  }
  temp_v5 = FUN_0028d838();
  *(char *)(temp_v0 + 0x7f4) = (char)temp_v5;
  if (temp_v5 != 0) {
    temp_v5 = FUN_00220c10();
    *(char *)(temp_v0 + 0x7f5) = (char)temp_v5;
    if (temp_v5 == 0) {
      temp_v2 = FUN_002cc1f4(0);
      temp_v3 = FUN_002cc1f4(1);
      FUN_002be7fc(temp_v0 + 0x7f6,&LAB_0029e5c0,temp_v2,temp_v3);
    }
    FUN_002954b8(0);
  }
  FUN_002b8b78(5);
  return;
}
