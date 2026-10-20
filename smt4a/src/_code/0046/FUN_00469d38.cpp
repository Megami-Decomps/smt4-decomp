/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00469d38` (_code @ 0x469d38, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int eventQueueAddUnique(int);
int FUN_001ad9b4(void);
int qcMainSetMode(int);
int FUN_00270c58(int);
int FUN_002e5924(int);
int FUN_0035c6ac(void);
int campButtonHelpRelease(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: eventQueueAddUnique. */
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_001bd118(void);
/* Supplied declaration required: qcMainSetMode. */
/* Supplied declaration required: FUN_00270c58. */
/* Supplied declaration required: FUN_002e5924. */
/* Supplied declaration required: FUN_0035c6ac. */
/* Supplied declaration required: campButtonHelpRelease. */
extern int FUN_004186e0(void);


void FUN_00469d38(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (((temp_v0 == 2) && (temp_v0 = FUN_004186e0(), temp_v0 != 0)) &&
         (temp_v1 = FUN_001bd118(), temp_v1 == 6)) {
        qcMainSetMode(1);
        FUN_001ad9b4();
        FUN_00270c58(*(unsigned short *)(temp_v0 + 0xd4));
        campButtonHelpRelease();
        return;
      }
    }
    else {
      if (*(int *)(param_1 + 0xc) == 0) {
        FUN_002e5924(1);
      }
      temp_v0 = *(int *)(param_1 + 0xc);
      temp_v1 = temp_v0 + 1;
      *(int *)(param_1 + 0xc) = temp_v1;
      if (temp_v1 >= 4) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 0xc) = temp_v0 + 2;
        return;
      }
    }
  }
  else {
    temp_v0 = *(int *)(param_1 + 0xc) + 1;
    *(int *)(param_1 + 0xc) = temp_v0;
    if (temp_v0 == 7) {
      eventQueueAddUnique(0x1000222);
      FUN_0035c6ac();
    }
    if (*(int *)(param_1 + 0xc) == 8) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      *(unsigned int *)(param_1 + 0xc) = 0;
    }
  }
  return;
}

} /* extern "C" */
