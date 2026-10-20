/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001070ac` (_code @ 0x1070ac, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00121ee8(...);
int FUN_002c222c(...);
int FUN_002c526c(...);
int FUN_002c52dc(...);
int FUN_002c5788(...);
int FUN_002c5d5c(...);

typedef int romwright_code(...);
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_00111004(...); /* 0x111004 */
extern int FUN_002a301c(...); /* 0x2a301c */
extern int DAT_00433130; /* 0x433130 */

/* Supplied declaration required: FUN_00121ee8. */
extern int FUN_00121fa0(int);
/* Supplied declaration required: FUN_002c222c. */
/* Supplied declaration required: FUN_002c526c. */
/* Supplied declaration required: FUN_002c52dc. */
/* Supplied declaration required: FUN_002c5788. */
/* Supplied declaration required: FUN_002c5d5c. */


void FUN_001070ac(void)

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
    FUN_002c222c();
    if (temp_v0 == 0) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = temp_v0 + 0xc;
      FUN_002c5d5c(temp_v0,FUN_002a301c,0xb8,0x60);
      *(unsigned char *)(temp_v0 + 0x4500) = 0;
      temp_v1 = FUN_00121fa0(temp_v0 + 0x4504);
      temp_v0 = temp_v1 - 0x4510;
      *(unsigned int *)(temp_v1 + 0x10) = 0;
      FUN_00121ee8(temp_v1,0x4000);
      temp_v2 = FUN_00111004;
      uStack_1c = 0;
      pcVar3 = "Aoc fileload Calc";
      temp_v3 = temp_v0;
      FUN_002c5788("Aoc fileload Calc",2,0);
      *(char **)(temp_v1 + 0x14) = pcVar3;
      temp_v2 = (romwright_code *)0x0;
      FUN_002c52dc(&temp_v2,1,1);
      if (-1 < (int)ppcVar4) {
        ppcVar4 = (romwright_code **)0x0;
        *(romwright_code **)(temp_v1 + 0x10) = temp_v2;
      }
      if ((int)ppcVar4 < 0) {
        FUN_002c526c();
      }
    }
  }
  DAT_00433130 = temp_v0;
  return;
}

} /* extern "C" */
