/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00433b58` (_code @ 0x433b58, 0x1a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int branchNodeFollowEnabledEdges(...);

/* Supplied declaration required: branchNodeFollowEnabledEdges. */
extern int FUN_0052285c(int, unsigned short);


int FUN_00433b58(int *param_1,int param_2,unsigned short *param_3)

{
/* irregular: 2 goto(s); 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  
  temp_v6 = 1;
  *param_1 = *(int *)(param_2 + 4);
  branchNodeFollowEnabledEdges(param_1,0x11);
  temp_v0 = *param_3;
  if (temp_v0 == 0) {
    temp_v3 = 8;
    branchNodeFollowEnabledEdges(param_1,temp_v3 | 0x62);
    return (int)*(char *)(*param_1 + 0x2c);
  }
  do {
    temp_v5 = temp_v6;
    if (temp_v0 != 0x85) {
      if (temp_v0 < 0x86) {
        if (temp_v0 != 10) {
          if (temp_v0 != 0xd) goto LAB_00433bb4;
          if (param_3[1] != 10) {
            temp_v7 = 1;
          }
          else {
            temp_v7 = 2;
          }
        }
        else {
          temp_v7 = 1;
        }
        branchNodeFollowEnabledEdges(param_1,2);
      }
      else if (!(temp_v0 == 0x2028 || temp_v0 == 0x2029)) {
LAB_00433bb4:
        temp_v7 = -1;
      }
      else {
        temp_v7 = 1;
        branchNodeFollowEnabledEdges(param_1,2);
      }
    }
    else {
      temp_v7 = 1;
      branchNodeFollowEnabledEdges(param_1,2);
    }
    do {
      temp_v3 = (unsigned int)*param_3;
      if (temp_v3 != 0x20) {
        if (0x20 >= temp_v3) {
          if (temp_v3 - 9 < 5) {
            temp_v6 = 1;
          }
          else {
LAB_00433c30:
            temp_v6 = 0;
          }
        }
        else {
          temp_v8 = temp_v3 == 0x85;
          if (!temp_v8) {
            temp_v3 = temp_v3 - 0x2028;
            temp_v8 = temp_v3 == 0;
          }
          if (!temp_v8) {
            temp_v8 = temp_v3 != 1;
            if (temp_v8) {
              temp_v3 = temp_v3 - 0xc00;
            }
            if (temp_v8 && temp_v3 != 0x3d8) goto LAB_00433c30;
          }
          temp_v6 = 1;
        }
      }
      else {
        temp_v6 = 1;
      }
      if (temp_v6 == temp_v5) {
        temp_v4 = 8;
      }
      else {
        temp_v4 = 4;
      }
      branchNodeFollowEnabledEdges(param_1,temp_v4);
      temp_v1 = *param_1;
      temp_v0 = *param_3;
      temp_v5 = *(int *)(temp_v1 + 0xc);
      while( 1 ) {
        if (temp_v5 == temp_v1 + 8) {
          return 0;
        }
        temp_v2 = FUN_0052285c(temp_v5 + 8,temp_v0);
        if (temp_v2 != 0) break;
        temp_v5 = *(int *)(temp_v5 + 4);
      }
      *param_1 = *(int *)(temp_v5 + 8);
      if ((temp_v7 != -1) && (temp_v7 = temp_v7 - 1, temp_v7 == 0)) {
        branchNodeFollowEnabledEdges(param_1,1);
      }
      param_3 = param_3 + 1;
      temp_v0 = *param_3;
      if (temp_v0 == 0) {
        if (temp_v6 != 0) {
          temp_v3 = 8;
          branchNodeFollowEnabledEdges(param_1,temp_v3 | 0x62);
          return (int)*(char *)(*param_1 + 0x2c);
        }
        temp_v3 = 4;
        branchNodeFollowEnabledEdges(param_1,temp_v3 | 0x62);
        return (int)*(char *)(*param_1 + 0x2c);
      }
      temp_v5 = temp_v6;
    } while (0 < temp_v7);
  } while( 1 );
}

} /* extern "C" */
