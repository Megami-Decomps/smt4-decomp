/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106e9c` (_code @ 0x106e9c, 0x86 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ee5b8(int, unsigned int *);
int FUN_002ee64c(int, unsigned int *);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int FUN_002eb5f4(void);
/* Supplied declaration required: FUN_002ee5b8. */
extern unsigned int FUN_002ee5c4(int, unsigned int *);
extern int FUN_002ee5fe(int, unsigned int *, int);
/* Supplied declaration required: FUN_002ee64c. */
extern int FUN_002ee774(unsigned int **, unsigned int *);


void FUN_00106e9c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *temp_v4 [2];
  unsigned int temp_v5 [3];
  
  temp_v1 = FUN_002eb5f4();
  temp_v1 = *(int *)(temp_v1 + 0xd0);
  temp_v0 = 1;
  temp_v4[0] = (unsigned int *)**(unsigned int **)(param_1 + 0x1c);
  while( 1 ) {
    temp_v5[0] = *(unsigned int *)(param_1 + 0x1c);
    temp_v3 = FUN_002ee774(temp_v4,temp_v5);
    if (temp_v3 == 0) break;
    temp_v2 = FUN_002ee5c4(temp_v1,temp_v4[0] + 2);
    if ((temp_v2 != 0xffffffff) && (temp_v2 < *(unsigned int *)(param_1 + 0x8c))) {
      *(unsigned int *)(param_1 + 0x8c) = temp_v2;
      temp_v3 = FUN_002ee5fe(temp_v1,temp_v4[0] + 2,param_1 + 0x24);
      if (temp_v3 == 0) {
        FUN_002ee5b8(param_1 + 0x24,temp_v4[0] + 2);
      }
    }
    temp_v3 = temp_v1;
    FUN_002ee64c(temp_v1,temp_v4[0] + 2);
    if (temp_v3 == 0) {
      temp_v0 = 0;
    }
    temp_v4[0] = (unsigned int *)*temp_v4[0];
  }
  if (temp_v0) {
    *(unsigned char *)(param_1 + 0x94) = 1;
  }
  return;
}

} /* extern "C" */
