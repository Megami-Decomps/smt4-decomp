/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035b154` (_code @ 0x35b154, 0x264 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00238aac(int *, int);

typedef struct fn_0035b154_arg1 fn_0035b154_arg1;
struct fn_0035b154_arg1 {
    void *field_0x0; /* +0x0 */
    undefined4 field_0x4; /* +0x4 */
    undefined1 field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x1];
    undefined2 field_0xa; /* +0xa */
};

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_00238aac. */
extern int FUN_0035b9b4(int *, int **);


int FUN_0035b154(int *param_1,fn_0035b154_arg1 *param_2,int param_3,int *param_4)

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
        goto LAB_0035b23c;
      }
      if ((temp_v2 == param_1[5] - 1) || (*(short *)(param_1[3] + temp_v2 * 2) != 0x5c)) {
        temp_v0 = *(short *)(param_1[3] + temp_v2 * 2);
        if (temp_v0 == 0x20 || temp_v0 == 0x3000) goto LAB_0035b350;
      }
      else if (*(short *)(param_1[3] + temp_v2 * 2 + 2) == 0x45) {
        return 2;
      }
      piVar4 = (int *)param_1[2];
      FUN_00238aac(piVar4,1);
      if (piVar4 == (int *)0x0) break;
      *piVar4 = *param_1;
      piVar4[1] = (int)param_1;
      *param_1 = (int)piVar4;
      *(int **)(*piVar4 + 4) = piVar4;
      temp_v3 = (unsigned int)*(unsigned short *)(param_1[3] + param_1[4] * 2);
      temp_v5 = piVar4;
      if (temp_v3 - 0x20 < 0x5f) {
        temp_v2 = temp_v3 * 8;
        pcVar6 = (romwright_code *)(temp_v2 + 0x472c80);
        temp_v4 = (*(unsigned int *)(temp_v2 + 0x472b84) & 1) == 0;
        if (temp_v4) {
          pcVar6 = *(romwright_code **)(temp_v2 + 0x472b80);
        }
        if (!temp_v4) {
          pcVar6 = *(romwright_code **)(*(int *)((int)param_1 + ((int)*(unsigned int *)(temp_v2 + 0x472b84) >> 1)) +
                             *(int *)((unsigned char *)pcVar6 + -0x100));
        }
        temp_v2 = (*pcVar6)();
      }
      else {
        temp_v2 = FUN_0035b9b4(param_1,&temp_v5);
      }
      if (temp_v2 != 0) {
        return temp_v2;
      }
      while( 1 ) {
        temp_v2 = param_1[4];
        if (temp_v2 == param_1[5]) goto LAB_0035b374;
        if (!temp_v1) break;
        if ((temp_v2 == param_1[5] - 1) || (*(short *)(param_1[3] + temp_v2 * 2) != 0x5c)) {
          temp_v0 = *(short *)(param_1[3] + temp_v2 * 2);
          if (temp_v0 != 0x20 && temp_v0 != 0x3000) goto LAB_0035b1e8;
LAB_0035b350:
          temp_v2 = temp_v2 + 1;
LAB_0035b23c:
          param_1[4] = temp_v2;
        }
        else {
          if (*(short *)(param_1[3] + temp_v2 * 2 + 2) == 0x45) {
            temp_v2 = temp_v2 + 2;
            temp_v1 = 0;
            param_1[4] = temp_v2;
            continue;
          }
LAB_0035b1e8:
          piVar4 = (int *)param_1[2];
          FUN_00238aac(piVar4,1);
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
LAB_0035b374:
    piVar4 = (int *)param_1[2];
    FUN_00238aac(piVar4,1);
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

} /* extern "C" */
