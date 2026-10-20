/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00330dc8` (_code @ 0x330dc8, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int gameFlagIsSet(unsigned int);
extern int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_00330dc8(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4 [7];
  
  temp_v3 = 0;
  temp_v4[0] = *param_1;
  temp_v4[1] = param_1[1];
  temp_v4[2] = param_1[2];
  temp_v4[3] = param_1[3];
  temp_v4[4] = param_1[4];
  temp_v4[5] = param_1[5];
  temp_v4[6] = param_1[6];
  temp_v0 = scrGetArg(0);
  temp_v2 = 0;
  do {
    if (temp_v0 != temp_v2) {
      if (temp_v2 == 0) {
        temp_v3 = temp_v3 + 1;
        temp_v2 = 1;
        continue;
      }
      temp_v1 = gameFlagIsSet(temp_v4[temp_v2]);
      if (temp_v1 != 0) {
        temp_v3 = temp_v3 + 1;
      }
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 7) {
      scrSetResult(temp_v3);
      return 1;
    }
  } while( 1 );
}

} /* extern "C" */
