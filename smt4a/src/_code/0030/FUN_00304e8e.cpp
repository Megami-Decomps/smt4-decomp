/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00304e8e` (_code @ 0x304e8e, 0x6e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011ee1e(int, unsigned char [32]);
int FUN_0013389c(int, int, unsigned char [32]);
int FUN_0013395c(int, unsigned int);
int FUN_0030d19e(int, int);
int FUN_0030d1ac(unsigned char [32]);
int FUN_0030d1bc(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_0011ee1e. */
/* Supplied declaration required: FUN_0013389c. */
/* Supplied declaration required: FUN_0013395c. */
extern int streamReadU32(int, unsigned int *);
/* Supplied declaration required: FUN_0030d19e. */
/* Supplied declaration required: FUN_0030d1ac. */
/* Supplied declaration required: FUN_0030d1bc. */


void FUN_00304e8e(int param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [32];
  unsigned int temp_v3 [2];
  
  FUN_0030d1bc(param_2);
  temp_v0 = streamReadU32(param_1,temp_v3);
  if (temp_v0 != 0) {
    FUN_0013395c(param_2,temp_v3[0]);
    temp_v1 = 0;
    while( 1 ) {
      if (temp_v3[0] <= temp_v1) {
        return;
      }
      if (*(char *)(param_1 + 4) != '\0') {
        return;
      }
      FUN_0030d1ac(temp_v2);
      FUN_0011ee1e(param_1,temp_v2);
      if (*(char *)(param_1 + 4) != '\0') break;
      temp_v0 = *(int *)(param_2 + 4);
      if (temp_v0 != *(int *)(param_2 + 8)) {
        *(int *)(param_2 + 4) = temp_v0 + 0x20;
        FUN_0030d19e(param_2,temp_v0);
      }
      else {
        FUN_0013389c(param_2,temp_v0,temp_v2);
      }
      temp_v1 = temp_v1 + 1;
    }
    FUN_0030d1bc();
  }
  return;
}

} /* extern "C" */
