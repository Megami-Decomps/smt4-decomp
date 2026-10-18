/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d0f48` (_code @ 0x3d0f48, 0x2ac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char LAB_0032b580; /* 0x32b580 */

/* Supplied declaration required: FUN_00250fb4. */
extern int FUN_0029ee4c(int, unsigned int);
extern int FUN_002a89e4(int);
extern int FUN_002a8a08(void);
/* Supplied declaration required: FUN_002b7f0a. */
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_002c4450. */
/* Supplied declaration required: FUN_002c684c. */


void FUN_003d0f48(int *param_1,int param_2)

{
/* irregular: 1 unstructured edge(s); 5 native warning(s); review required */
  int temp_v0;
  unsigned char *pbVar2;
  int temp_v1;
  int temp_v2;
  unsigned char *pbVar5;
  unsigned int temp_v3;
  unsigned char *pbVar7;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char *pbVar10;
  
  temp_v0 = 0;
  do {
    temp_v3 = *(unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v0 * 0x288);
    if (((temp_v3 & 2) == 0 && (temp_v3 & 0x20) == 0) && ((temp_v3 & 0x10) == 0)) {
      *(unsigned char *)(param_2 + temp_v0 + 0x38) = 1;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 4);
  FUN_002c4450(*param_1 + 0x1fe0,3,0xffffffff);
  temp_v0 = FUN_002a8a08();
  temp_v5 = (unsigned int)*(unsigned char *)(temp_v0 + 0x910b);
  pbVar2 = (unsigned char *)(temp_v5 << 2);
  FUN_002c684c();
  temp_v3 = 0;
  if (temp_v5 != 0) {
    pbVar10 = pbVar2;
    pbVar5 = pbVar2 + 1;
    pbVar7 = pbVar2 + 2;
    temp_v4 = temp_v5;
    do {
      *pbVar10 = 0xff;
      *pbVar5 = 0;
      temp_v4 = temp_v4 - 1;
      *pbVar7 = 0;
      pbVar10 = pbVar10 + 4;
      pbVar5 = pbVar5 + 4;
      pbVar7 = pbVar7 + 4;
    } while (temp_v4 != 0);
  }
  temp_v0 = 0;
  if (temp_v5 != 0) {
    do {
      temp_v1 = FUN_002a8a08();
      if (-1 < *(char *)(temp_v1 + temp_v0 + 0x90f0)) {
        temp_v1 = FUN_002a8a08();
        temp_v1 = FUN_002a89e4((int)*(char *)(temp_v1 + temp_v0 + 0x90f0));
        if ((((temp_v1 != 0) && (temp_v2 = FUN_0029ee4c(temp_v1,1), temp_v2 == 0)) &&
            (temp_v2 = FUN_0029ee4c(temp_v1,10), temp_v2 == 0)) &&
           (temp_v2 = FUN_0029ee4c(temp_v1,2), temp_v2 == 0)) {
          pbVar10 = pbVar2 + temp_v3 * 4;
          *pbVar10 = (unsigned char)temp_v0;
          pbVar10[1] = *(unsigned char *)(temp_v1 + 0x48);
          temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + 0x46);
          FUN_002b9364();
          temp_v3 = temp_v3 + 1;
          pbVar10[2] = *(unsigned char *)(temp_v4 + 2);
        }
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (int)temp_v5);
    if (temp_v3 != 0) {
      FUN_002b7f0a(pbVar2,temp_v3,4,&LAB_0032b580);
      if ((int)temp_v3 >= 4) {
        temp_v3 = 3;
      }
      if (0 >= (int)temp_v3) {
        temp_v5 = 0;
      }
      else {
        temp_v5 = temp_v3 & 1;
        if (temp_v5 == 1) {
          temp_v0 = *param_1;
          temp_v4 = 1 << ((*pbVar2 + 1) & 0xff);
          *(unsigned int *)(temp_v0 + 0x1fd4) = *(unsigned int *)(temp_v0 + 0x1fd4) | ((int)temp_v4 >> 0x1f);
          *(unsigned int *)(temp_v0 + 0x1fd0) = *(unsigned int *)(temp_v0 + 0x1fd0) | temp_v4;
          *(unsigned char *)(*param_1 + 0x1fe0) = *pbVar2 + 1;
        }
      }
      for (; (int)temp_v5 < (int)temp_v3; temp_v5 = temp_v5 + 2) {
        pbVar10 = pbVar2 + temp_v5 * 4;
        temp_v0 = *param_1;
        temp_v4 = 1 << ((*pbVar10 + 1) & 0xff);
        *(unsigned int *)(temp_v0 + 0x1fd0) = temp_v4 | *(unsigned int *)(temp_v0 + 0x1fd0);
        *(unsigned int *)(temp_v0 + 0x1fd4) = *(unsigned int *)(temp_v0 + 0x1fd4) | ((int)temp_v4 >> 0x1f);
        *(unsigned char *)(*param_1 + temp_v5 + 0x1fe0) = *pbVar10 + 1;
        temp_v0 = *param_1;
        temp_v4 = 1 << ((pbVar10[4] + 1) & 0xff);
        *(unsigned int *)(temp_v0 + 0x1fd0) = temp_v4 | *(unsigned int *)(temp_v0 + 0x1fd0);
        *(unsigned int *)(temp_v0 + 0x1fd4) = *(unsigned int *)(temp_v0 + 0x1fd4) | ((int)temp_v4 >> 0x1f);
        *(unsigned char *)(*param_1 + temp_v5 + 0x1fe1) = pbVar10[4] + 1;
      }
    }
  }
  FUN_00250fb4(pbVar2);
  return;
}
