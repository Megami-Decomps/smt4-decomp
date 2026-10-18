/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a3a9c` (_code @ 0x3a3a9c, 0x1d8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_0019e0c0. */
/* Supplied declaration required: FUN_0022e648. */
/* Supplied declaration required: FUN_0022fa2c. */
/* Supplied declaration required: FUN_0022fb64. */
extern int FUN_0022fbc0(int);
extern int FUN_00230c1c(unsigned short, unsigned int);
/* Supplied declaration required: FUN_00230df0. */
extern unsigned int FUN_00230e04(unsigned short *);
/* Supplied declaration required: FUN_00232848. */
/* Supplied declaration required: FUN_002328b4. */
/* Supplied declaration required: FUN_00233240. */
extern int FUN_0023360c(int);
/* Supplied declaration required: FUN_00233818. */
/* Supplied declaration required: FUN_00233854. */
extern int FUN_00256510(void);
extern int FUN_002762e0(void);
extern int FUN_0027ee9c(void);
/* Supplied declaration required: FUN_00296e90. */
/* Supplied declaration required: FUN_0029e620. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_002b8cc8. */


void FUN_003a3a9c(int param_1)

{
/* irregular: 14 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned short *puVar5;
  
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) != 1) {
      return;
    }
    temp_v0 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0x168));
    if (temp_v0 != 2) {
      return;
    }
    FUN_0029ee6c(0,0x323232ff);
    *(unsigned int *)(param_1 + 4) = 3;
    *(unsigned int *)(param_1 + 8) = 0;
    return;
  }
  FUN_0019e0c0(*(unsigned int *)(param_1 + 0x168));
  FUN_0029e620(0);
  temp_v0 = FUN_0022fbc0(param_1);
  FUN_0022fb64(param_1);
  if ((0 < *(int *)(param_1 + *(int *)(param_1 + 0x860) * 0x74 + 0x888)) &&
     (temp_v1 = FUN_0027ee9c(), temp_v1 != 0)) {
    temp_v0 = 1;
  }
  temp_v1 = *(int *)(param_1 + 0x860);
  temp_v2 = FUN_0023360c(param_1 + temp_v1 * 0x74 + 0x880);
  puVar5 = (unsigned short *)(param_1 + temp_v1 * 0x1002 + 0xc94 + temp_v2 * 4);
  if (*(int *)(param_1 + 0x860) != 8) {
    temp_v3 = FUN_00230e04(puVar5);
    temp_v1 = FUN_00230c1c(*puVar5,temp_v3);
    if (temp_v1 != 0) {
      if (temp_v0 != 0) {
        FUN_002328b4();
        FUN_0022e648(param_1,10);
        return;
      }
    }
  }
  else if (temp_v0 != 0) {
    FUN_002328b4();
    FUN_0022e648(param_1,10);
    return;
  }
  temp_v0 = FUN_002762e0();
  if (temp_v0 != 0) {
    *(unsigned int *)(param_1 + 0x15d60) = 0;
    FUN_00230df0(0);
    FUN_00232848();
    FUN_00233240(param_1 + 0x3a8,1);
    FUN_00296e90();
    FUN_00233854(*(unsigned int *)(param_1 + 0x85c));
    FUN_00233818(param_1 + 0x828);
    temp_v0 = 0;
    if (temp_v0 < *(short *)(param_1 + 0x15d50)) {
      do {
        FUN_002b8cc8();
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(short *)(param_1 + 0x15d50));
    }
    *(unsigned int *)(param_1 + 8) = 1;
    return;
  }
  temp_v0 = FUN_00256510();
  if (temp_v0 == 0) {
    return;
  }
  FUN_002328b4();
  FUN_0022fa2c(param_1);
  return;
}
