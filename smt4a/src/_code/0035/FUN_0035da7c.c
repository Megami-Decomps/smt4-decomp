/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035da7c` (_code @ 0x35da7c, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int DAT_00588fe8; /* 0x588fe8 */

/* Supplied declaration required: FUN_002f01e0. */


void FUN_0035da7c(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  temp_v2 = DAT_00588fe8;
  temp_v5 = *(unsigned int *)(DAT_00588fe8 + 0x59c);
  uStack_24 = *(unsigned int *)(DAT_00588fe8 + 0x5a0);
  uStack_20 = *(unsigned int *)(DAT_00588fe8 + 0x5a4);
  uStack_1c = *(unsigned int *)(DAT_00588fe8 + 0x5a8);
  FUN_002f01e0(param_1,param_2);
  temp_v4 = 0;
  if (temp_v4 < param_2) {
    do {
      temp_v0 = *(short *)(temp_v2 + temp_v4 * 2 + 0x59c);
      if (temp_v0 != 0) {
        temp_v3 = 0;
        do {
          temp_v1 = *(short *)((int)&temp_v5 + temp_v3 * 2);
          if ((temp_v1 != 0) && (temp_v1 == temp_v0)) break;
          temp_v1 = *(short *)((int)&temp_v5 + temp_v3 * 2 + 2);
          if ((temp_v1 != 0) && (temp_v1 == temp_v0)) {
            temp_v3 = temp_v3 + 1;
            break;
          }
          temp_v3 = temp_v3 + 2;
        } while (temp_v3 < 8);
        if (temp_v3 >= 8) {
          *(unsigned char *)(temp_v2 + temp_v4 + 0x5dc) = 1;
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < param_2);
  }
  return;
}
