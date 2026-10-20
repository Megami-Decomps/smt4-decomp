/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035361c` (_code @ 0x35361c, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003df37c(int, unsigned int [2]);
int FUN_003df3b4(int, unsigned char [6], unsigned int, int);

/* stack frame of param_3: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp1A; /* 0x1a: local_1a */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_003df37c. */
/* Supplied declaration required: FUN_003df3b4. */


int FUN_0035361c(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2 [2];
  unsigned char temp_v3 [6];
  unsigned short temp_v4;
  
  temp_v0 = param_1;
  FUN_003df37c(param_1,temp_v2);
  if (temp_v0 < 0) {
    return temp_v0;
  }
  temp_v1 = 0;
  if (temp_v1 < temp_v2[0]) {
    do {
      temp_v0 = param_1;
      FUN_003df3b4(param_1,temp_v3,param_2,1);
      if (temp_v0 < 0) {
        return temp_v0;
      }
      if (temp_v4 != param_3) {
        return -0x36bec740;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v2[0]);
  }
  return 0;
}

} /* extern "C" */
