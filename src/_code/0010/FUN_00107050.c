/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00107050` (_code @ 0x107050, 0xd8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_00110f10(); /* 0x110f10 */
extern int FUN_002a32bc(); /* 0x2a32bc */
extern int DAT_00433130; /* 0x433130 */

/* Supplied declaration required: FUN_00121e08. */
extern int FUN_00121ec4(int);
/* Supplied declaration required: FUN_002c23f8. */
/* Supplied declaration required: FUN_002c5468. */
/* Supplied declaration required: FUN_002c54d8. */
/* Supplied declaration required: FUN_002c5978. */
/* Supplied declaration required: FUN_002c5f58. */


void FUN_00107050(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  char *pcVar3;
  romwright_code **ppcVar4;
  romwright_code *temp_v2;
  unsigned int uStack_1c;
  int temp_v3;
  
  ppcVar4 = &temp_v2;
  temp_v0 = DAT_00433130;
  if (DAT_00433130 == 0) {
    temp_v0 = 0x4528;
    FUN_002c23f8();
    if (temp_v0 == 0) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = temp_v0 + 0xc;
      FUN_002c5f58(temp_v0,FUN_002a32bc,0xb8,0x60);
      *(unsigned char *)(temp_v0 + 0x4500) = 0;
      temp_v1 = FUN_00121ec4(temp_v0 + 0x4504);
      temp_v0 = temp_v1 - 0x4510;
      *(unsigned int *)(temp_v1 + 0x10) = 0;
      FUN_00121e08(temp_v1,0x4000);
      temp_v2 = FUN_00110f10;
      uStack_1c = 0;
      pcVar3 = "Aoc fileload Calc";
      temp_v3 = temp_v0;
      FUN_002c5978("Aoc fileload Calc",2,0);
      *(char **)(temp_v1 + 0x14) = pcVar3;
      temp_v2 = (romwright_code *)0x0;
      FUN_002c54d8(&temp_v2,1,1);
      if (-1 < (int)ppcVar4) {
        ppcVar4 = (romwright_code **)0x0;
        *(romwright_code **)(temp_v1 + 0x10) = temp_v2;
      }
      if ((int)ppcVar4 < 0) {
        FUN_002c5468();
      }
    }
  }
  DAT_00433130 = temp_v0;
  return;
}
