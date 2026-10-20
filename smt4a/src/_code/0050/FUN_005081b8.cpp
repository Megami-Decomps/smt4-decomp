/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005081b8` (_code @ 0x5081b8, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d1438(unsigned char *, int);
int rt_memcpy(unsigned char *, int, int);

/* Supplied declaration required: FUN_001d1438. */
extern int FUN_0050af5c(int);
extern unsigned int FUN_0050af68(int, int);
extern int FUN_0050af74(int, int);
/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_005081b8(int *param_1,unsigned char *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  if ((char)param_1[3] != '\0') {
    temp_v1 = 0;
  }
  else {
    temp_v4 = 0;
    temp_v0 = *(unsigned char *)param_1[1];
    if (temp_v0 >= 2) {
      temp_v0 = 3;
    }
    *param_2 = temp_v0;
    *(unsigned int *)(param_2 + 4) = *(unsigned int *)(param_1[1] + 0x14);
    *(unsigned int *)(param_2 + 8) = *(unsigned int *)(param_1[1] + 4);
    param_2[1] = *(char *)(param_1[1] + 1) == '\x01';
    *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_1[1] + 8);
    *(unsigned int *)(param_2 + 0x10) = *(unsigned int *)(param_1[1] + 0xc);
    if (*(unsigned int *)(*param_1 + 8) >= 0x2010100) {
      temp_v1 = *(unsigned int *)(param_1[1] + 0x10);
    }
    else {
      temp_v1 = *(unsigned int *)(param_1[1] + 8);
    }
    *(unsigned int *)(param_2 + 0x14) = temp_v1;
    for (; temp_v4 < *(int *)(param_1[1] + 0x14); temp_v4 = temp_v4 + 1) {
      if (temp_v4 < 2) {
        temp_v2 = FUN_0050af74(param_1[1],temp_v4);
        if (*(int *)(temp_v2 + 0xc) != 0) {
          temp_v3 = FUN_0050af5c(temp_v2);
          rt_memcpy(param_2 + temp_v4 * 0x30 + 0x1c,temp_v3,0x26);
          FUN_001d1438(param_2 + temp_v4 * 0x30 + 0x42,temp_v3 + 0x26);
        }
        temp_v1 = FUN_0050af68(temp_v2,param_1[2]);
        *(unsigned int *)(param_2 + temp_v4 * 0x30 + 0x18) = temp_v1;
      }
    }
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
