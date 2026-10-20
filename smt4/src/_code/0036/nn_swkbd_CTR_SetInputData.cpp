/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_swkbd_CTR_SetInputData` (_code @ 0x36133c, 0x1c0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memclr(int, int);
int rt_memcpy(...);

/* Supplied declaration required: rt_memclr. */
/* Supplied declaration required: rt_memcpy. */


unsigned int
nn_swkbd_CTR_SetInputData
          (int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v5 = 0;
  if (!(param_2 == 0 || param_3 == 0)) {
    if (*(int *)(param_1 + 0x10) == 0) {
      if (param_4 == 0) {
        *(unsigned int *)(param_1 + 0x120) = 0xffffffff;
        temp_v0 = 0;
      }
      else {
        temp_v4 = (unsigned int)*(unsigned short *)(param_1 + 0x20) * 2;
        temp_v3 = temp_v4 + 2;
        temp_v0 = temp_v4 + 5;
        temp_v5 = temp_v0 & 0xfffffffc;
        if (param_3 < temp_v5) {
          return 0;
        }
        if (param_4 < param_2) {
          temp_v0 = param_4 + temp_v3;
        }
        if (param_4 < param_2 && param_2 < temp_v0) {
          temp_v3 = param_2 - param_4;
        }
        rt_memcpy(param_2,param_4,temp_v3);
        *(unsigned int *)(param_1 + 0x120) = 0;
        temp_v0 = temp_v1;
      }
      if (param_5 == 0) {
        *(unsigned int *)(param_1 + 0x124) = 0xffffffff;
        temp_v6 = temp_v5;
      }
      else {
        temp_v6 = temp_v5 + (((unsigned int)*(unsigned short *)(param_1 + 0x22) * 0xa6 + 3) & 0xfffffffc);
        if (param_3 < temp_v6) {
          return 0;
        }
        rt_memcpy(param_2 + temp_v5,param_5);
        *(unsigned int *)(param_1 + 0x124) = temp_v5;
        temp_v0 = temp_v2;
      }
      if (param_6 == 0) {
        *(unsigned int *)(param_1 + 0x128) = 0xffffffff;
      }
      else {
        temp_v4 = 0x44;
        if (param_3 < temp_v6 + 0x44) {
          return 0;
        }
        temp_v5 = param_2 + temp_v6;
        if (param_6 < temp_v5) {
          temp_v0 = param_6 + 0x44;
        }
        if (param_6 < temp_v5 && temp_v5 < temp_v0) {
          temp_v4 = temp_v5 - param_6;
        }
        rt_memcpy(temp_v5,param_6,temp_v4);
        *(unsigned int *)(param_1 + 0x128) = temp_v6;
        temp_v6 = temp_v6 + 0x44;
      }
      if (param_7 == 0) {
        *(unsigned int *)(param_1 + 300) = 0xffffffff;
      }
      else {
        temp_v4 = 0xa46c;
        temp_v5 = temp_v6 + 0xa46c;
        if (param_3 < temp_v5) {
          return 0;
        }
        param_2 = param_2 + temp_v6;
        if (param_7 < param_2) {
          temp_v5 = param_7 + 0xa46c;
        }
        if (param_7 < param_2 && param_2 < temp_v5) {
          temp_v4 = param_2 - param_7;
        }
        rt_memcpy(param_2,param_7,temp_v4);
        *(unsigned int *)(param_1 + 300) = temp_v6;
      }
      *(unsigned short *)(param_1 + 0x11e) = 0;
      *(unsigned short *)(param_1 + 0x136) = 0;
      *(unsigned short *)(param_1 + 0x14a) = 0;
      *(unsigned short *)(param_1 + 0x352) = 0;
      rt_memclr(param_1 + 0x355,0xab);
      *(unsigned int *)(param_1 + 0x130) = param_3;
      *(unsigned short *)(param_1 + 0x134) = 5;
      return 1;
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  *(unsigned int *)(param_1 + 0x120) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x124) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x128) = 0xffffffff;
  *(unsigned int *)(param_1 + 300) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x130) = 0;
  *(unsigned short *)(param_1 + 0x134) = 5;
  return 1;
}

} /* extern "C" */
