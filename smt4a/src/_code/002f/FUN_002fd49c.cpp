/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd49c` (_code @ 0x2fd49c, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00113b7c(int, int, unsigned int, unsigned int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_00113b7c. */
extern int FUN_002eb5f4(void);
extern int FUN_002ee774(unsigned int **, unsigned int *);
extern int FUN_002ee978(unsigned int *);


void FUN_002fd49c(int param_1,unsigned int param_2)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *temp_v3;
  unsigned int temp_v4 [2];
  int iStack_1c;
  unsigned int temp_v5;
  
  iStack_1c = param_1;
  temp_v5 = param_2;
  temp_v0 = FUN_002eb5f4();
  if (((temp_v0 != 0) && (temp_v0 = FUN_002eb5f4(), *(int *)(temp_v0 + 0xd0) != 0)) &&
     (*(char *)(param_1 + 0x1b0) == '\0')) {
    temp_v0 = FUN_002eb5f4();
    temp_v2 = 0;
    temp_v0 = *(int *)(temp_v0 + 0xd0);
    temp_v3 = *(unsigned int **)(param_1 + 0x1a0);
    do {
      temp_v3 = (unsigned int *)*temp_v3;
      temp_v4[0] = *(unsigned int *)(param_1 + 0x1a0);
      temp_v1 = FUN_002ee774(&temp_v3,temp_v4);
      if (temp_v1 == 0) goto LAB_002fd500;
      temp_v1 = FUN_002ee978(temp_v3 + 2);
    } while (temp_v1 == 0);
    temp_v2 = FUN_002ee978(temp_v3 + 2);
LAB_002fd500:
    if ((temp_v0 != 0) && (temp_v2 != 0)) {
      FUN_00113b7c(temp_v0,temp_v2,temp_v5,*(unsigned int *)(param_1 + 0x1b8));
    }
  }
  return;
}

} /* extern "C" */
