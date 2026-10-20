/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227b14` (_code @ 0x227b14, 0x114 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00206270(int);
int FUN_0028be40(int);
int FUN_0028be50(int);
int FUN_0028be84(void);
int FUN_00297f1c(int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00206270. */
/* Supplied declaration required: FUN_0028be40. */
/* Supplied declaration required: FUN_0028be50. */
/* Supplied declaration required: FUN_0028be84. */
extern int FUN_0028bebc(int);
/* Supplied declaration required: FUN_00297f1c. */


void FUN_00227b14(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = DAT_00439ca8;
  temp_v2 = 0xffffffff;
  *(unsigned int *)(DAT_00439ca8 + 0x7e38) = 7;
  switch(param_3) {
  case 1:
  case 2:
  case 3:
    temp_v2 = 1;
    break;
  case 4:
    temp_v2 = 9;
    break;
  case 5:
    temp_v2 = 8;
    break;
  case 6:
    temp_v2 = 5;
    break;
  case 7:
    temp_v2 = 3;
    break;
  case 8:
    temp_v2 = 7;
    break;
  case 0xe:
    temp_v2 = 0xb;
    temp_v1 = FUN_0028bebc(temp_v0 + 8);
    if (temp_v1 != 0) {
      temp_v1 = temp_v0 + 0x2200;
      FUN_0028be84();
      if (temp_v1 != 0) {
        FUN_0028be50(temp_v0 + 8);
        FUN_0028be40(temp_v0 + 0x2200);
      }
    }
    FUN_00206270(temp_v0 + 0x2460);
    *(unsigned int *)(temp_v0 + 0x7e38) = 0xb;
  }
  FUN_00297f1c(temp_v0 + 0x2460,param_2,temp_v2,param_4);
  return;
}

} /* extern "C" */
