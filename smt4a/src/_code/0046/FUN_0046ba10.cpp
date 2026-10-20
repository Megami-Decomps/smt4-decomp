/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046ba10` (_code @ 0x46ba10, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern int FUN_00468028(...); /* 0x468028 */
extern int FUN_0046805c(...); /* 0x46805c */
extern int FUN_00468574(...); /* 0x468574 */
extern int FUN_004688c8(...); /* 0x4688c8 */
extern int FUN_00468e98(...); /* 0x468e98 */
extern int FUN_00468fec(...); /* 0x468fec */
extern int jobStateObjWaitDone(...); /* 0x4693d4 */
extern int FUN_00469400(...); /* 0x469400 */
extern int FUN_00469d38(...); /* 0x469d38 */
extern int FUN_00469e1c(...); /* 0x469e1c */
extern int FUN_00469eb0(...); /* 0x469eb0 */
extern int jobStateObjWaitDone2(...); /* 0x46a0b8 */
extern int FUN_0046aab4(...); /* 0x46aab4 */
extern int FUN_0046ac00(...); /* 0x46ac00 */
extern int FUN_0046af60(...); /* 0x46af60 */
extern int FUN_0046b18c(...); /* 0x46b18c */


void FUN_0046ba10(int param_1)

{
/* irregular: 16 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 0;
  temp_v0 = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 8;
    *(unsigned int *)(temp_v2 + 0x2b8) = 0;
    *(unsigned int *)(temp_v2 + 700) = 0;
    temp_v2 = param_1 + (temp_v1 + 1) * 8;
    temp_v0 = temp_v0 + 2;
    *(unsigned int *)(temp_v2 + 0x2b8) = 0;
    *(unsigned int *)(temp_v2 + 700) = 0;
    temp_v1 = temp_v1 + 2;
  } while (temp_v0 < 0x14);
  *(romwright_code **)(param_1 + 0x2c0) = FUN_00469400;
  *(unsigned int *)(param_1 + 0x2c4) = 0;
  *(romwright_code **)(param_1 + 0x2c8) = FUN_00468574;
  *(unsigned int *)(param_1 + 0x2cc) = 0;
  *(romwright_code **)(param_1 + 0x2d0) = FUN_00468028;
  *(unsigned int *)(param_1 + 0x2d4) = 0;
  *(romwright_code **)(param_1 + 0x2d8) = FUN_0046ac00;
  *(unsigned int *)(param_1 + 0x2dc) = 0;
  *(romwright_code **)(param_1 + 0x2e0) = FUN_0046805c;
  *(unsigned int *)(param_1 + 0x2e4) = 0;
  *(romwright_code **)(param_1 + 0x2e8) = FUN_00468fec;
  *(unsigned int *)(param_1 + 0x2ec) = 0;
  *(unsigned int *)(param_1 + 0x2f0) = 0x468224;
  *(unsigned int *)(param_1 + 0x2f4) = 0;
  *(romwright_code **)(param_1 + 0x2f8) = FUN_0046b18c;
  *(unsigned int *)(param_1 + 0x2fc) = 0;
  *(romwright_code **)(param_1 + 0x308) = FUN_00469eb0;
  *(unsigned int *)(param_1 + 0x30c) = 0;
  *(romwright_code **)(param_1 + 0x300) = FUN_004688c8;
  *(unsigned int *)(param_1 + 0x304) = 0;
  *(romwright_code **)(param_1 + 0x310) = FUN_00468e98;
  *(unsigned int *)(param_1 + 0x314) = 0;
  *(romwright_code **)(param_1 + 0x318) = FUN_00469d38;
  *(unsigned int *)(param_1 + 0x31c) = 0;
  *(romwright_code **)(param_1 + 800) = jobStateObjWaitDone;
  *(unsigned int *)(param_1 + 0x324) = 0;
  *(romwright_code **)(param_1 + 0x328) = jobStateObjWaitDone2;
  *(unsigned int *)(param_1 + 0x32c) = 0;
  *(romwright_code **)(param_1 + 0x330) = FUN_00469e1c;
  *(unsigned int *)(param_1 + 0x334) = 0;
  *(romwright_code **)(param_1 + 0x340) = FUN_0046af60;
  *(unsigned int *)(param_1 + 0x344) = 0;
  *(unsigned int *)(param_1 + 0x348) = 0x469d1c;
  *(unsigned int *)(param_1 + 0x34c) = 0;
  *(romwright_code **)(param_1 + 0x338) = FUN_0046aab4;
  *(unsigned int *)(param_1 + 0x33c) = 0;
  *(unsigned int *)(param_1 + 4) = 1;
  *(unsigned int *)(param_1 + 8) = 0;
  return;
}

} /* extern "C" */
