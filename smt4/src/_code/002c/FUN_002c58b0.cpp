/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c58b0` (_code @ 0x2c58b0, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b9178(void);
int FUN_002bd540(void);
int FUN_002c4c2c(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

/* Supplied declaration required: FUN_002b9178. */
extern int FUN_002b93b0(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bd540. */
/* Supplied declaration required: FUN_002c4c2c. */


int FUN_002c58b0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r4;
  
  FUN_002c4c2c();
  temp_v0 = FUN_002b93b0(0x24,0,param_3,param_4,unaff_r4);
  if (temp_v0 != 0) {
    FUN_002b9178();
    if (*(int *)(temp_v0 + 8) != 0) {
      *(unsigned int *)(*(int *)(temp_v0 + 8) + 8) = 0x10000;
      if (*(int *)(temp_v0 + 8) != 0) {
        FUN_002bd540();
        *(unsigned int *)(temp_v0 + 0x10) = *(unsigned int *)(temp_v0 + 0x10) | 4;
      }
    }
  }
  return temp_v0;
}

} /* extern "C" */
