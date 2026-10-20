/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dbee4` (_code @ 0x3dbee4, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002be624(...);
int memClear(...);

extern int btlGetMainState(void);
extern unsigned int asdMdlManagerCreateSecondList(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: memClear. */


void FUN_003dbee4(int param_1,unsigned int param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_r12; 2 native warning(s); review required */
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
  unsigned char temp_v10 [128];
  
  *(unsigned int *)(param_1 + 0x302c) = param_2;
  memClear(temp_v10,0x80);
  FUN_002be624(temp_v10,"battle/dead_effect/dead_effect%02d.bam",param_2);
  temp_v0 = btlGetMainState();
  temp_v8 = 0;
  do {
    temp_v9 = temp_v0 + temp_v8 * 0x1c;
    temp_v7 = *(int *)(temp_v9 + 0x2318);
    if (-1 < temp_v7) {
      in_r12 = *(int *)(temp_v9 + 0x231c);
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
        if ((-1 < temp_v5 && -1 < temp_v4) && (temp_v5 == temp_v7 && temp_v4 == in_r12)) goto LAB_003dbfb0;
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x32);
      temp_v7 = 0;
      do {
        temp_v1 = param_1 + temp_v7 * 0x28;
        if ((*(unsigned int *)(temp_v1 + 0x1b4) & 2) == 0 && (*(unsigned int *)(temp_v1 + 0x1b4) & 4) == 0) {
          temp_v2 = asdMdlManagerCreateSecondList(temp_v10,7);
          *(unsigned int *)(temp_v1 + 400) = temp_v2;
          *(int *)(temp_v1 + 0x194) = *(int *)(temp_v9 + 0x2318);
          *(unsigned int *)(temp_v1 + 0x198) = *(unsigned int *)(temp_v9 + 0x231c);
          *(unsigned int *)(temp_v1 + 0x19c) = *(unsigned int *)(temp_v9 + 0x2320);
          temp_v2 = *(unsigned int *)(temp_v9 + 9000);
          temp_v6 = *(unsigned int *)(temp_v9 + 0x232c);
          *(unsigned int *)(temp_v1 + 0x1a0) = *(unsigned int *)(temp_v9 + 0x2324);
          *(unsigned int *)(temp_v1 + 0x1a4) = temp_v2;
          *(unsigned int *)(temp_v1 + 0x1a8) = temp_v6;
          *(unsigned int *)(temp_v1 + 0x1ac) = *(unsigned int *)(temp_v9 + 0x2330);
          *(unsigned int *)(temp_v1 + 0x1b4) = *(unsigned int *)(temp_v1 + 0x1b4) | 2;
          break;
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 0x32);
    }
LAB_003dbfb0:
    temp_v8 = temp_v8 + 1;
    if (temp_v8 >= 0x6d) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
