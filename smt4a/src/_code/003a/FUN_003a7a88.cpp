/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a7a88` (_code @ 0x3a7a88, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018206c(unsigned int, unsigned int);
int FUN_00184310(int, unsigned int);
int FUN_0019cac4(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_0018206c. */
/* Supplied declaration required: FUN_00184310. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0019cac4. */


void FUN_003a7a88(unsigned int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0xf;
  if (param_2 != 0) {
    if ((int)param_1 < 0) {
      temp_v0 = FUN_0018719c(0x11);
      if (temp_v0 == 0) {
        param_1 = 0x25e;
      }
      else {
        param_1 = 0;
      }
    }
    else {
      temp_v1 = param_1;
      FUN_00184310(temp_v1,param_1);
      if (temp_v1 == 0) {
        return;
      }
      param_1 = param_1 & 0xffff;
      FUN_0019cac4();
      if ((*(unsigned short *)(param_1 + 2) & 0x8000) != 0) {
        param_1 = (unsigned int)*(short *)(param_1 + 0x8c);
        temp_v2 = 0x19;
        if ((int)param_1 >= 0x9a) {
          return;
        }
      }
      else {
        param_1 = *(unsigned short *)(temp_v1 + 0x9c) + 1;
        if (param_1 >= 0x277) {
          return;
        }
      }
    }
  }
  FUN_0018206c(temp_v2,param_1);
  return;
}

} /* extern "C" */
