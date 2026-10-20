/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043ad40` (_code @ 0x43ad40, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int wstrlen(...);
int FUN_0043b24c(int, int, int, unsigned int, int);
int software_interrupt(int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern signed char DAT_00647634; /* 0x647634 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern int FUN_0016f988(int, char *, unsigned int, unsigned int);
/* Supplied declaration required: wstrlen. */
extern int FUN_0043b1ec(void);
/* Supplied declaration required: FUN_0043b24c. */
extern int FUN_0043b45c(int, unsigned int);


int FUN_0043ad40(int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  if (param_2 == 0) {
    temp_v0 = -0x271f5ffe;
  }
  else if (*(int *)(param_1 + 4) >= 1) {
    temp_v0 = -0x275f5f9b;
  }
  else if (DAT_00647634 == '\0') {
    temp_v0 = -0x275f5c08;
  }
  else {
    temp_v0 = 0x64765c;
    temp_v1 = wstrlen(param_2);
    FUN_0043b24c(0x64765c,param_2,temp_v1 + 1,param_3,param_1 + 4);
    if (-1 < temp_v0) {
      temp_v2 = wstrlen("http:C");
      temp_v0 = FUN_0016f988(param_1 + 8,"http:C",temp_v2,0);
      if (-1 < temp_v0) {
        *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 8);
        temp_v1 = FUN_0043b45c(param_1 + 0xc,*(unsigned int *)(param_1 + 4));
        if (temp_v1 < 0) {
          software_interrupt(0x23);
          temp_v0 = temp_v1;
        }
      }
      if (-1 < temp_v0) {
        if (param_4 == 0) {
          return 0;
        }
        if (*(int *)(param_1 + 4) < 1) {
          temp_v0 = -0x275f5f9c;
        }
        else {
          temp_v0 = FUN_0043b1ec();
        }
        if (-1 < temp_v0) {
          return 0;
        }
      }
    }
    *(unsigned int *)(param_1 + 4) = 0;
  }
  return temp_v0;
}

} /* extern "C" */
