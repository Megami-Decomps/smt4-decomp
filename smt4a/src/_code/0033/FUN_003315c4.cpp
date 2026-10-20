/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003315c4` (_code @ 0x3315c4, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int sysPlaySe(int);
int bgmFadeOut(int);
int bgmReleaseStopped(void);
int campCommonBgRelease(void);
int campButtonHelpRelease(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_00588c40; /* 0x588c40 */

/* Supplied declaration required: jobStop. */
extern int jobIsValid(unsigned int);
extern int lmapMainIsRunning(void);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: bgmFadeOut. */
extern int FUN_0023b880(void);
/* Supplied declaration required: bgmReleaseStopped. */
/* Supplied declaration required: campCommonBgRelease. */
/* Supplied declaration required: campButtonHelpRelease. */
extern int mapMainIsBusy(void);


void FUN_003315c4(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = (*(int *)((unsigned char *)&DAT_00588c40 + 0x4));
  if (((*(int *)((unsigned char *)&DAT_00588c40 + 0x4)) != 0) &&
     (temp_v0 = jobIsValid(*(unsigned int *)((*(int *)((unsigned char *)&DAT_00588c40 + 0x4)) + 0x7f30)), temp_v0 != 0)) {
    if (*(char *)((*(int *)((unsigned char *)&DAT_00588c40 + 0x4)) + 0x4398) != '\x01') {
      if (*(char *)((*(int *)((unsigned char *)&DAT_00588c40 + 0x4)) + 0x4398) == '\x03') {
        sysPlaySe(*(unsigned short *)(temp_v1 + 0x439a));
      }
    }
    else {
      temp_v1 = FUN_0023b880();
      if (temp_v1 == 0) {
        temp_v1 = mapMainIsBusy();
        if ((temp_v1 != 0) || (temp_v1 = lmapMainIsRunning(), temp_v1 != 0)) {
          bgmReleaseStopped();
        }
        else {
          bgmFadeOut(0x3c);
        }
      }
    }
    jobStop(*(unsigned int *)((*(int *)((unsigned char *)&DAT_00588c40 + 0x4)) + 0x7f30),0);
    campCommonBgRelease();
    campButtonHelpRelease();
    return;
  }
  return;
}

} /* extern "C" */
