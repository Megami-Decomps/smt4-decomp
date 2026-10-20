/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c9948` (_code @ 0x3c9948, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029eaa4(int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_0029eaa4. */


unsigned short FUN_003c9948(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  
  temp_v6 = 0xff;
  temp_v0 = 0;
  if (*(char *)(param_1 + param_2) != '\0') {
    temp_v4 = param_1 + param_2 * 4;
    temp_v3 = 0;
    temp_v2 = (unsigned int)*(unsigned short *)(*(int *)(temp_v4 + 0x38) + 2);
    if (temp_v2 < param_3) {
      param_3 = temp_v2 & 0xff;
    }
    if (*(char *)(param_1 + param_2) != '\0') {
      do {
        temp_v5 = temp_v3 * 4 + 2;
        temp_v2 = (unsigned int)*(unsigned short *)(*(int *)(temp_v4 + 0x38) + temp_v5);
        if (((param_3 <= temp_v2) && ((int)(temp_v2 - param_3) < (int)temp_v6)) &&
           (temp_v1 = param_1,
           FUN_0029eaa4(param_1,*(unsigned short *)(*(int *)(temp_v4 + 0x38) + temp_v3 * 4)), temp_v1 != 0)) {
          temp_v0 = *(unsigned short *)(*(int *)(temp_v4 + 0x38) + temp_v3 * 4);
          temp_v6 = *(unsigned short *)(*(int *)(temp_v4 + 0x38) + temp_v5) - param_3;
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < (int)(unsigned int)*(unsigned char *)(param_1 + param_2));
    }
  }
  return temp_v0;
}

} /* extern "C" */
