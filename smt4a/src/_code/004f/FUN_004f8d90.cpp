/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f8d90` (_code @ 0x4f8d90, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00178b04(...);
int FUN_001cd3ec(...);
int sysMemClear(...);

/* Supplied declaration required: FUN_00100388. */
extern int btlGetMainState(void);
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_001cd3ec. */
/* Supplied declaration required: sysMemClear. */
extern unsigned int FUN_0040ac08(void);


void FUN_004f8d90(int param_1,int param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_r12; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int in_r12;
  unsigned char temp_v10 [132];
  
  if (param_2 == 0 || param_2 == 0x16) {
    return;
  }
  *(int *)(param_1 + 0x33a0) = param_2;
  sysMemClear(temp_v10,0x80);
  FUN_00100388(temp_v10,"battle/dead_effect/dead_effect%02d.bam",param_2);
  temp_v0 = btlGetMainState();
  temp_v8 = 0;
  do {
    temp_v9 = temp_v0 + temp_v8 * 0x1c;
    temp_v7 = *(int *)(temp_v9 + 0x2418);
    if (-1 < temp_v7) {
      in_r12 = *(int *)(temp_v9 + 0x241c);
    }
    if (-1 < temp_v7 && -1 < in_r12) {
      temp_v1 = 0;
      do {
        temp_v3 = param_1 + temp_v1 * 0x28;
        temp_v4 = temp_v3 + 400;
        temp_v5 = *(int *)(temp_v3 + 0x194);
        if (-1 < temp_v5) {
          temp_v4 = *(int *)(temp_v3 + 0x198);
        }
        if ((-1 < temp_v5 && -1 < temp_v4) && (temp_v5 == temp_v7 && temp_v4 == in_r12)) goto LAB_004f8e6c;
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x32);
      temp_v7 = 0;
      do {
        temp_v1 = param_1 + temp_v7 * 0x28;
        if ((*(unsigned int *)(temp_v1 + 0x1b4) & 2) == 0 && (*(unsigned int *)(temp_v1 + 0x1b4) & 4) == 0) {
          temp_v7 = 0x20;
          FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlEffect.cpp",0x4ab);
          temp_v2 = 0;
          if (temp_v7 != 0) {
            temp_v2 = FUN_0040ac08();
          }
          *(unsigned int *)(temp_v1 + 400) = temp_v2;
          FUN_001cd3ec();
          *(int *)(temp_v1 + 0x194) = *(int *)(temp_v9 + 0x2418);
          *(unsigned int *)(temp_v1 + 0x198) = *(unsigned int *)(temp_v9 + 0x241c);
          *(unsigned int *)(temp_v1 + 0x19c) = *(unsigned int *)(temp_v9 + 0x2420);
          temp_v2 = *(unsigned int *)(temp_v9 + 0x2428);
          temp_v6 = *(unsigned int *)(temp_v9 + 0x242c);
          *(unsigned int *)(temp_v1 + 0x1a0) = *(unsigned int *)(temp_v9 + 0x2424);
          *(unsigned int *)(temp_v1 + 0x1a4) = temp_v2;
          *(unsigned int *)(temp_v1 + 0x1a8) = temp_v6;
          *(unsigned int *)(temp_v1 + 0x1ac) = *(unsigned int *)(temp_v9 + 0x2430);
          *(unsigned int *)(temp_v1 + 0x1b4) = *(unsigned int *)(temp_v1 + 0x1b4) | 2;
          break;
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 0x32);
    }
LAB_004f8e6c:
    temp_v8 = temp_v8 + 1;
    if (temp_v8 >= 0x6d) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
