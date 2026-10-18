/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a2c48` (_code @ 0x3a2c48, 0x31c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_003a2f64; /* 0x3a2f64 */
extern unsigned char LAB_003a2f78; /* 0x3a2f78 */

/* Supplied declaration required: FUN_0019e0c0. */
/* Supplied declaration required: FUN_00230954. */
/* Supplied declaration required: FUN_00231240. */
/* Supplied declaration required: FUN_002328b4. */
/* Supplied declaration required: FUN_00233240. */
/* Supplied declaration required: FUN_00233344. */
/* Supplied declaration required: FUN_00233410. */
extern int FUN_0023360c(int);
/* Supplied declaration required: FUN_00233818. */
/* Supplied declaration required: FUN_00233854. */
extern int FUN_0027ee9c(void);
extern unsigned int FUN_00290d74(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_0029212c. */
/* Supplied declaration required: FUN_00296e90. */
/* Supplied declaration required: FUN_00296f4c. */
extern int FUN_0029c3ec(void);
/* Supplied declaration required: FUN_0029c43c. */
/* Supplied declaration required: FUN_0029e620. */
extern int FUN_002a0ce8(void);
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_002b8cc8. */
/* Supplied declaration required: FUN_002b8ee0. */
extern unsigned int FUN_002bed98(int);
extern unsigned int FUN_002beda4(int);
/* Supplied declaration required: FUN_003a1378. */


void FUN_003a2c48(int param_1)

{
/* irregular: 18 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  switch(*(unsigned int *)(param_1 + 8)) {
  case 0:
    temp_v0 = FUN_00290d74(*(unsigned int *)(param_1 + 0x160),&LAB_003a2f64);
    FUN_00296f4c(*(unsigned int *)(param_1 + 0x168),temp_v0);
    FUN_0019e0c0(*(unsigned int *)(param_1 + 0x168));
    *(unsigned int *)(param_1 + 0xc) = 0;
    *(unsigned int *)(param_1 + 0x15d58) = 0;
    *(unsigned int *)(param_1 + 0x15d5c) = 0;
    *(unsigned int *)(param_1 + 0x15d60) = 0;
    *(unsigned char *)(param_1 + 0x15d64) = 0;
    *(unsigned char *)(param_1 + 0x15d65) = 0;
    *(unsigned int *)(param_1 + 0x15d68) = 0xffffffff;
    *(unsigned int *)(param_1 + 8) = 1;
    return;
  case 1:
    FUN_0019e0c0(*(unsigned int *)(param_1 + 0x168));
    temp_v2 = *(int *)(param_1 + 0xc) + 1;
    *(int *)(param_1 + 0xc) = temp_v2;
    if ((temp_v2 >= 10) &&
       ((temp_v2 = FUN_0027ee9c(), temp_v2 != 0 ||
        (temp_v2 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0x168)), temp_v2 == 2)))) {
      FUN_002328b4();
      FUN_00296e90();
      *(unsigned int *)(param_1 + 8) = 2;
      *(unsigned int *)(param_1 + 0xc) = 0;
      return;
    }
    break;
  case 2:
    temp_v2 = FUN_002a0ce8();
    if (temp_v2 != 0) {
      temp_v0 = FUN_00290d74(*(unsigned int *)(param_1 + 0x160),&LAB_003a2f78);
      FUN_00296f4c(*(unsigned int *)(param_1 + 0x168),temp_v0);
      FUN_0019e0c0(*(unsigned int *)(param_1 + 0x168));
      FUN_00233240(param_1 + 0x3a8,0);
      FUN_002b8838(0x77);
      *(unsigned int *)(param_1 + 8) = 3;
      return;
    }
    break;
  case 3:
    temp_v2 = param_1 + 0x3c8;
    FUN_002b8ee0(temp_v2,0);
    temp_v0 = FUN_002bed98(temp_v2);
    temp_v1 = FUN_002beda4(temp_v2);
    FUN_00231240(param_1 + 0x380,temp_v1,temp_v0);
    FUN_0019e0c0(*(unsigned int *)(param_1 + 0x168));
    if (*(char *)(param_1 + 0x452) != '\0') {
      FUN_0029e620(*(unsigned int *)(param_1 + 0x15d20),0);
      *(unsigned int *)(param_1 + 8) = 4;
      return;
    }
    break;
  case 4:
    FUN_0019e0c0(*(unsigned int *)(param_1 + 0x168));
    temp_v2 = param_1 + 0x9ca8;
    FUN_00230954(param_1 + 0x828);
    (**(romwright_code **)(**(int **)(param_1 + 0x85c) + 0xc))(*(int **)(param_1 + 0x85c),temp_v2);
    FUN_00233410(temp_v2);
    FUN_00233344(param_1 + 0x3a8,2);
    FUN_00233344(param_1 + 0x3a8,3);
    temp_v2 = FUN_0023360c(temp_v2);
    FUN_0029212c(*(unsigned short *)(param_1 + temp_v2 * 6 + 0x9d1e));
    temp_v2 = FUN_0027ee9c();
    if (temp_v2 != 0) {
      FUN_002328b4();
      FUN_00296e90();
      *(unsigned int *)(param_1 + 8) = 5;
      *(unsigned int *)(param_1 + 0xc) = 0;
      FUN_0029c43c(*(unsigned int *)(param_1 + 0x15d20),0);
      return;
    }
    break;
  case 5:
    temp_v2 = FUN_002a0ce8();
    if ((temp_v2 != 0) && (temp_v2 = FUN_0029c3ec(), temp_v2 == 1)) {
      FUN_003a1378(param_1);
      FUN_00233854(*(unsigned int *)(param_1 + 0x85c));
      FUN_00233818(param_1 + 0x828);
      temp_v2 = 0;
      if (temp_v2 < *(short *)(param_1 + 0x15d50)) {
        do {
          FUN_002b8cc8();
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < *(short *)(param_1 + 0x15d50));
      }
      *(unsigned int *)(param_1 + 4) = 3;
      *(unsigned int *)(param_1 + 8) = 0;
      return;
    }
  }
  return;
}
