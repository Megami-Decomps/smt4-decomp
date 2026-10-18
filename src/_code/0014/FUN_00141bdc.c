/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00141bdc` (_code @ 0x141bdc, 0x240 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_002a6a50. */


unsigned int FUN_00141bdc(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v1 = 0xffffffff;
  temp_v2 = param_4;
  switch(param_2 >> 0x18) {
  default:
    return temp_v1;
  case 1:
    if (param_2 >> 0x18 != 1) {
      return 0xffffffff;
    }
    puVar1 = (unsigned int *)(param_1 + *(int *)(param_1 + 4));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    if ((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] == 0) {
      return 0xffffffff;
    }
    temp_v0 = (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] + 0x14;
    FUN_002a6a50(temp_v0,&temp_v2,0);
    goto joined_r0x00141d5c;
  case 2:
    if (param_2 >> 0x18 != 2) {
      return 0xffffffff;
    }
    puVar1 = (unsigned int *)(param_1 + *(int *)(param_1 + 0xc));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    if ((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] == 0) {
      return 0xffffffff;
    }
    temp_v0 = (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] + 0x18;
    FUN_002a6a50(temp_v0,&temp_v2,0);
joined_r0x00141d5c:
    if (temp_v0 == 0) {
      return 0xffffffff;
    }
    temp_v1 = temp_v2;
    return temp_v1;
  case 3:
    if (param_2 >> 0x18 != 3) {
      return 0xffffffff;
    }
    puVar1 = (unsigned int *)(param_1 + *(int *)(param_1 + 0x14));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    if ((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] == 0) {
      return 0xffffffff;
    }
    temp_v0 = (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] + 0xc;
    FUN_002a6a50(temp_v0,&temp_v2,0);
    break;
  case 4:
    if (param_2 >> 0x18 != 4) {
      return 0xffffffff;
    }
    puVar1 = (unsigned int *)(param_1 + *(int *)(param_1 + 0x2c));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    if ((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] == 0) {
      return 0xffffffff;
    }
    temp_v0 = (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] + 4;
    FUN_002a6a50(temp_v0,&temp_v2,0);
    break;
  case 5:
    if (param_2 >> 0x18 != 5) {
      return 0xffffffff;
    }
    puVar1 = (unsigned int *)(param_1 + *(int *)(param_1 + 0x1c));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    if ((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] == 0) {
      return 0xffffffff;
    }
    temp_v0 = (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] + 8;
    FUN_002a6a50(temp_v0,&temp_v2,0);
    break;
  case 6:
    if (param_2 >> 0x18 != 6) {
      return 0xffffffff;
    }
    puVar1 = (unsigned int *)(param_1 + *(int *)(param_1 + 0x24));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    if ((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] == 0) {
      return 0xffffffff;
    }
    temp_v0 = (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2] + 4;
    FUN_002a6a50(temp_v0,&temp_v2,0);
  }
  temp_v1 = 0xffffffff;
  if (temp_v0 != 0) {
    temp_v1 = temp_v2;
  }
  return temp_v1;
}
