/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00466478` (_code @ 0x466478, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00191548(...);
int FUN_001b2040(...);
int FUN_001cbf64(...);
int FUN_004669c8(...);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int FUN_001b1fb8(...); /* 0x1b1fb8 */

/* Supplied declaration required: FUN_00191548. */
/* Supplied declaration required: FUN_001b2040. */
extern int FUN_001c2484(void);
/* Supplied declaration required: FUN_001cbf64. */
extern int FUN_004626dc(void);
/* Supplied declaration required: FUN_004669c8. */


int FUN_00466478(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  FUN_00191548();
  temp_v0 = FUN_004626dc();
  if (temp_v0 != 0) {
    *(unsigned char *)(temp_v0 + 0x13a) = 1;
    temp_v1 = FUN_001c2484();
    FUN_001cbf64(temp_v1,param_1,param_2,FUN_001b1fb8,temp_v0);
    if (temp_v1 == 0) {
      temp_v2 = FUN_00191548();
      FUN_001b2040(temp_v2,temp_v0);
      return 0;
    }
    *(int *)(temp_v0 + 0x1a8) = temp_v1;
    FUN_004669c8(temp_v0,param_3,param_4);
  }
  return temp_v0;
}

} /* extern "C" */
