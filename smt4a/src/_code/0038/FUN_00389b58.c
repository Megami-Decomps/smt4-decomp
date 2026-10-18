/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00389b58` (_code @ 0x389b58, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp204; /* 0x204: local_204 */
    unsigned int sp274; /* 0x274: local_274 */
} param_1_stack;

extern int DAT_005702f8; /* 0x5702f8 */

/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_00389b58(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  short temp_v1;
  unsigned int *puVar3;
  short temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10 [836];
  char temp_v11;
  
  if (-1 < (DAT_005702f8 - param_1) - 1) {
    temp_v5 = 2;
    param_1 = param_1 * 0x148;
    temp_v8 = *(int *)(param_1 + 0x5c6024);
    temp_v6 = 0;
    if (*(unsigned int *)(param_1 + 0x5c6030) != 0) {
      temp_v6 = *(unsigned int *)(param_1 + 0x5c6030);
    }
    temp_v3 = *(unsigned int *)(param_1 + 0x5c6048);
    puVar3 = (unsigned int *)(param_1 + 0x5c6030);
    do {
      temp_v4 = puVar3[0xc];
      if (temp_v6 < temp_v3) {
        temp_v6 = temp_v3;
      }
      temp_v3 = puVar3[0x12];
      if (temp_v6 < temp_v4) {
        temp_v6 = temp_v4;
      }
      temp_v5 = temp_v5 - 1;
      puVar3 = puVar3 + 0xc;
    } while (temp_v5 != 0);
    temp_v9 = *(int *)(param_1 + 0x5c6028);
    temp_v5 = 0;
    if (temp_v6 < *(unsigned int *)(param_1 + 0x5c60a8)) {
      temp_v6 = *(unsigned int *)(param_1 + 0x5c60a8);
    }
    if (0 < temp_v9) {
      temp_v7 = *(int *)(param_1 + 0x5c613c);
      do {
        rt_memcpy_w(temp_v10,temp_v8 + *(int *)(temp_v7 + temp_v5 * 0x14) * 0x348,0x348);
        temp_v1 = *(short *)(temp_v7 + temp_v5 * 0x14 + 6);
        temp_v0 = temp_v5 * 0x14;
        temp_v2 = 0;
        if (temp_v1 < 1) {
          temp_v1 = 1;
        }
        if (temp_v11 == '\0') {
          temp_v2 = (short)(*(unsigned int *)((unsigned char *)&temp_v10 + 252));
        }
        else if ((temp_v11 == '\x01' || temp_v11 == '\x02') || temp_v11 == '\x03') {
          temp_v2 = (short)(*(unsigned int *)((unsigned char *)&temp_v10 + 364));
        }
        temp_v5 = temp_v5 + 1;
        temp_v3 = (int)temp_v1 * (int)temp_v2 + (int)*(short *)(temp_v7 + temp_v0 + 4);
        if ((int)temp_v6 < (int)temp_v3) {
          temp_v6 = temp_v3;
        }
      } while (temp_v5 < temp_v9);
    }
    return temp_v6;
  }
  return 0;
}
