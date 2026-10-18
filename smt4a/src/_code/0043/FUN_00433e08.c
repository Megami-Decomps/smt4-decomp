/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00433e08` (_code @ 0x433e08, 0x264 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00433e08_arg1 fn_00433e08_arg1;
struct fn_00433e08_arg1 {
    void *field_0x0; /* +0x0 */
    undefined4 field_0x4; /* +0x4 */
    undefined1 field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x1];
    undefined2 field_0xa; /* +0xa */
};

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int FUN_00434668(int *, int **);
/* Supplied declaration required: FUN_004387f0. */


int FUN_00433e08(int *param_1,fn_00433e08_arg1 *param_2,int param_3,int *param_4)

{
/* irregular: 4 goto(s); 1 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int *piVar4;
  unsigned int temp_v3;
  romwright_code *pcVar6;
  unsigned char temp_v4;
  int *temp_v5;
  
  param_1[2] = (int)param_2;
  param_1[3] = param_3;
  temp_v1 = 0;
  param_1[5] = (int)param_4;
  param_1[6] = 0;
  temp_v5 = param_4;
  if ((int *)param_1[4] != param_4) {
    while( 1 ) {
      temp_v2 = param_1[4];
      if (((temp_v2 != param_1[5] - 1) && (*(short *)(param_1[3] + temp_v2 * 2) == 0x5c)) &&
         (*(short *)(param_1[3] + temp_v2 * 2 + 2) == 0x51)) {
        temp_v2 = temp_v2 + 2;
        temp_v1 = 1;
        goto LAB_00433ef0;
      }
      if ((temp_v2 == param_1[5] - 1) || (*(short *)(param_1[3] + temp_v2 * 2) != 0x5c)) {
        temp_v0 = *(short *)(param_1[3] + temp_v2 * 2);
        if (temp_v0 == 0x20 || temp_v0 == 0x3000) goto LAB_00434004;
      }
      else if (*(short *)(param_1[3] + temp_v2 * 2 + 2) == 0x45) {
        return 2;
      }
      piVar4 = (int *)param_1[2];
      FUN_004387f0(piVar4,1);
      if (piVar4 == (int *)0x0) break;
      *piVar4 = *param_1;
      piVar4[1] = (int)param_1;
      *param_1 = (int)piVar4;
      *(int **)(*piVar4 + 4) = piVar4;
      temp_v3 = (unsigned int)*(unsigned short *)(param_1[3] + param_1[4] * 2);
      temp_v5 = piVar4;
      if (temp_v3 - 0x20 < 0x5f) {
        temp_v2 = temp_v3 * 8;
        pcVar6 = (romwright_code *)(temp_v2 + 0x5c15f4);
        temp_v4 = (*(unsigned int *)(temp_v2 + 0x5c14f8) & 1) == 0;
        if (temp_v4) {
          pcVar6 = *(romwright_code **)(temp_v2 + 0x5c14f4);
        }
        if (!temp_v4) {
          pcVar6 = *(romwright_code **)(*(int *)((int)param_1 + ((int)*(unsigned int *)(temp_v2 + 0x5c14f8) >> 1)) +
                             *(int *)(pcVar6 + -0x100));
        }
        temp_v2 = (*pcVar6)();
      }
      else {
        temp_v2 = FUN_00434668(param_1,&temp_v5);
      }
      if (temp_v2 != 0) {
        return temp_v2;
      }
      while( 1 ) {
        temp_v2 = param_1[4];
        if (temp_v2 == param_1[5]) goto LAB_00434028;
        if (!temp_v1) break;
        if ((temp_v2 == param_1[5] - 1) || (*(short *)(param_1[3] + temp_v2 * 2) != 0x5c)) {
          temp_v0 = *(short *)(param_1[3] + temp_v2 * 2);
          if (temp_v0 != 0x20 && temp_v0 != 0x3000) goto LAB_00433e9c;
LAB_00434004:
          temp_v2 = temp_v2 + 1;
LAB_00433ef0:
          param_1[4] = temp_v2;
        }
        else {
          if (*(short *)(param_1[3] + temp_v2 * 2 + 2) == 0x45) {
            temp_v2 = temp_v2 + 2;
            temp_v1 = 0;
            param_1[4] = temp_v2;
            continue;
          }
LAB_00433e9c:
          piVar4 = (int *)param_1[2];
          FUN_004387f0(piVar4,1);
          if (piVar4 == (int *)0x0) {
            return 1;
          }
          *piVar4 = *param_1;
          piVar4[1] = (int)param_1;
          *param_1 = (int)piVar4;
          *(int **)(*piVar4 + 4) = piVar4;
          *(unsigned char *)(piVar4 + 2) = 0;
          *(unsigned short *)((int)piVar4 + 10) = *(unsigned short *)(param_1[3] + param_1[4] * 2);
          param_1[4] = param_1[4] + 1;
        }
      }
    }
  }
  else {
LAB_00434028:
    piVar4 = (int *)param_1[2];
    FUN_004387f0(piVar4,1);
    if (piVar4 != (int *)0x0) {
      *piVar4 = *param_1;
      piVar4[1] = (int)param_1;
      *param_1 = (int)piVar4;
      *(int **)(*piVar4 + 4) = piVar4;
      *(unsigned char *)(piVar4 + 2) = 0x12;
      return 0;
    }
  }
  return 1;
}
