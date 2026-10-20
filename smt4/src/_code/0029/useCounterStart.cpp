/* NON_MATCHING: romwright 0.5.0 decompilation of `useCounterStart` (_code @ 0x29e1ec, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00295214(int);
int FUN_0029eb5c(int);
int uiSpriteSetImageKeyframe(int, int);
int buttonHelpSetPreset(int);
int FUN_002be624(int, unsigned char *, unsigned int, unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_0029e320; /* 0x29e320 */
extern unsigned char g_useCounter; /* 0x43dd20 */

extern int FUN_00220d0c(void);
extern int FUN_0028d594(void);
/* Supplied declaration required: FUN_00295214. */
/* Supplied declaration required: FUN_0029eb5c. */
extern unsigned int FUN_002a0d0c(void);
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: FUN_002be624. */
extern unsigned int FUN_002cc2a4(unsigned int);


void useCounterStart(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char *pbVar7;
  
  temp_v0 = (*(int *)((unsigned char *)&g_useCounter + 0x4));
  temp_v5 = 0;
  do {
    uiSpriteSetImageKeyframe(temp_v0 + temp_v5 * 0x8c + 0x28,0);
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0xd);
  *(unsigned int *)(temp_v0 + 0x744) = 1;
  *(unsigned int *)(temp_v0 + 0x748) = 0;
  if (-1 < *(int *)(temp_v0 + 0x750)) {
    temp_v1 = FUN_002a0d0c();
    temp_v5 = *(int *)(temp_v0 + 0x754);
    pbVar7 = (unsigned char *)(temp_v1 + *(int *)(temp_v0 + 0x750));
    if (0 < temp_v5) {
      temp_v1 = (unsigned int)*pbVar7;
    }
    temp_v4 = 0;
    if (temp_v4 < temp_v5) {
      do {
        if ((unsigned int)*(unsigned char *)(temp_v0 + temp_v4 + 0x758) == (temp_v1 & 0x7f)) {
          FUN_0029eb5c(temp_v0 + 0x788);
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
  temp_v5 = FUN_0028d594();
  *(char *)(temp_v0 + 0x7f4) = (char)temp_v5;
  if (temp_v5 != 0) {
    temp_v5 = FUN_00220d0c();
    *(char *)(temp_v0 + 0x7f5) = (char)temp_v5;
    if (temp_v5 == 0) {
      temp_v2 = FUN_002cc2a4(0);
      temp_v3 = FUN_002cc2a4(1);
      FUN_002be624(temp_v0 + 0x7f6,&LAB_0029e320,temp_v2,temp_v3);
    }
    FUN_00295214(0);
  }
  buttonHelpSetPreset(5);
  return;
}

} /* extern "C" */
