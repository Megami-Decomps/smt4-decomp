/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003315c4` (_code @ 0x3315c4, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int sysPlaySe(int);
int FUN_0021c354(int);
int FUN_00270b00(void);
int FUN_0035b304(void);
int FUN_0037b450(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_00588c40; /* 0x588c40 */

/* Supplied declaration required: jobStop. */
extern int jobIsValid(unsigned int);
extern int lmapMainIsRunning(void);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_0021c354. */
extern int FUN_0023b880(void);
/* Supplied declaration required: FUN_00270b00. */
/* Supplied declaration required: FUN_0035b304. */
/* Supplied declaration required: FUN_0037b450. */
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
          FUN_00270b00();
        }
        else {
          FUN_0021c354(0x3c);
        }
      }
    }
    jobStop(*(unsigned int *)((*(int *)((unsigned char *)&DAT_00588c40 + 0x4)) + 0x7f30),0);
    FUN_0035b304();
    FUN_0037b450();
    return;
  }
  return;
}

} /* extern "C" */
