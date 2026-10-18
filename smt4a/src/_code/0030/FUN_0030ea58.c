/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ea58` (_code @ 0x30ea58, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


unsigned int FUN_0030ea58(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned char *pbVar3;
  unsigned int *puVar4;
  unsigned char *pbVar5;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  
  if (((unsigned int)param_1 & 3) != 0 || ((unsigned int)param_2 & 3) != 0) {
    do {
      pbVar3 = (unsigned char *)((int)param_1 + 1);
      temp_v1 = (unsigned int)(unsigned char)*param_1;
      pbVar5 = (unsigned char *)((int)param_2 + 1);
      temp_v2 = (unsigned int)(unsigned char)*param_2;
      temp_v6 = temp_v1 == 1;
      if (temp_v1 != 0) {
        temp_v6 = temp_v1 == temp_v2;
      }
      if (!temp_v6) break;
      param_1 = (unsigned int *)((int)param_1 + 2);
      temp_v1 = (unsigned int)*pbVar3;
      param_2 = (unsigned int *)((int)param_2 + 2);
      temp_v2 = (unsigned int)*pbVar5;
      temp_v6 = temp_v1 == 1;
      if (temp_v1 != 0) {
        temp_v6 = temp_v1 == temp_v2;
      }
    } while (temp_v6);
    return temp_v1 - temp_v2;
  }
  do {
    puVar1 = param_1 + 1;
    temp_v1 = *param_1;
    puVar4 = param_2 + 1;
    temp_v2 = *param_2;
    temp_v3 = (temp_v1 + 0xfefefeff) & ~temp_v1 & 0x80808080;
    if (temp_v3 != 0 || temp_v1 != temp_v2) break;
    param_1 = param_1 + 2;
    temp_v1 = *puVar1;
    param_2 = param_2 + 2;
    temp_v2 = *puVar4;
    temp_v3 = (temp_v1 + 0xfefefeff) & ~temp_v1 & 0x80808080;
  } while (temp_v3 == 0 && temp_v1 == temp_v2);
  temp_v0 = temp_v2 * 0x1000000 + temp_v1 * -0x1000000;
  temp_v4 = temp_v0 == 0;
  temp_v7 = !temp_v4 && temp_v1 * 0x1000000 <= temp_v2 * 0x1000000;
  temp_v5 = (temp_v3 & 0xff0) == 0;
  temp_v6 = temp_v4 && temp_v5;
  if (temp_v4 && temp_v5) {
    temp_v0 = temp_v2 * 0x10000 + temp_v1 * -0x10000;
    temp_v4 = temp_v0 == 0;
    temp_v7 = !temp_v4 && temp_v1 * 0x10000 <= temp_v2 * 0x10000;
    temp_v5 = (temp_v3 & 0xff00) == 0;
    temp_v6 = temp_v4 && temp_v5;
    if (temp_v4 && temp_v5) {
      temp_v0 = temp_v2 * 0x100 + temp_v1 * -0x100;
      temp_v4 = temp_v0 == 0;
      temp_v7 = !temp_v4 && temp_v1 * 0x100 <= temp_v2 * 0x100;
      temp_v5 = (temp_v3 & 0xff0000) == 0;
      temp_v6 = temp_v4 && temp_v5;
      if (temp_v4 && temp_v5) {
        temp_v7 = temp_v1 <= temp_v2;
        temp_v0 = temp_v2 - temp_v1;
        temp_v6 = temp_v0 == 0;
      }
    }
  }
  if (!temp_v6) {
    temp_v0 = ((unsigned int)temp_v7 << 0x1f) | (temp_v0 >> 1);
  }
  return temp_v0;
}
