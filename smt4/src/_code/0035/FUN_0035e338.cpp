/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035e338` (_code @ 0x35e338, 0x24c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023799c(int *, int);
int FUN_00238aac(...);
int FUN_0035c0e8(void);
int FUN_0035d8dc(int *, int **);
int FUN_0035dde0(int *, int **);
int FUN_0035e164(int *, int **);

typedef struct fn_0035e338_arg1 fn_0035e338_arg1;
struct fn_0035e338_arg1 {
    void *field_0x0; /* +0x0 */
    undefined4 field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x10];
    undefined4 field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x8];
    undefined1 *field_0x24; /* +0x24 */
};

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_0023799c. */
/* Supplied declaration required: FUN_00238aac. */
extern int FUN_0035c050(int *, int, int, unsigned int);
/* Supplied declaration required: FUN_0035c0e8. */
/* Supplied declaration required: FUN_0035d8dc. */
/* Supplied declaration required: FUN_0035dde0. */
extern int FUN_0035e090(int *, int **);
/* Supplied declaration required: FUN_0035e164. */


unsigned int FUN_0035e338(int *param_1,fn_0035e338_arg1 *param_2,int param_3,int *param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  int *piVar7;
  int *temp_v5;
  int *temp_v6;
  
  *param_1 = (int)param_2;
  temp_v1 = 0;
  for (temp_v3 = *(int *)(param_3 + 4); temp_v3 != param_3; temp_v3 = *(int *)(temp_v3 + 4)) {
    temp_v1 = temp_v1 + 1;
  }
  param_1[4] = temp_v1;
  FUN_00238aac(param_2,(temp_v1 * 4 + 0xfU) >> 4);
  param_1[5] = (int)param_2;
  if (param_2 != (fn_0035e338_arg1 *)0x0) {
    temp_v1 = 0;
    for (temp_v3 = *(int *)(param_3 + 4); temp_v3 != param_3; temp_v3 = *(int *)(temp_v3 + 4)) {
      temp_v0 = temp_v1 * 4;
      temp_v1 = temp_v1 + 1;
      *(int *)(param_1[5] + temp_v0) = temp_v3;
    }
    piVar3 = (int *)*param_1;
    piVar7 = param_1 + 1;
    param_1[3] = (int)piVar3;
    FUN_00238aac(piVar3,3);
    if (piVar3 != (int *)0x0) {
      if (piVar3 != (int *)0xfffffff8) {
        FUN_0035c0e8();
      }
      *piVar3 = *piVar7;
      piVar3[1] = (int)piVar7;
      *piVar7 = (int)piVar3;
      *(int **)(*piVar3 + 4) = piVar3;
      temp_v3 = FUN_0035c050(piVar3 + 2,*param_1,param_1[4],1);
      if (temp_v3 != 0) {
        *(unsigned char *)piVar3[9] = 1;
        FUN_0023799c(param_1,piVar3[9]);
        temp_v6 = piVar3;
        temp_v3 = FUN_0035e090(param_1,&temp_v6);
        if (temp_v3 != 0) {
          for (piVar3 = (int *)param_1[2]; piVar3 != param_1 + 1; piVar3 = (int *)piVar3[1]) {
            if ((int *)piVar3[6] != piVar3 + 5) {
              piVar7 = param_1;
              temp_v5 = piVar3;
              FUN_0035dde0(param_1,&temp_v5);
              if (piVar7 == (int *)0x0) {
                return 0;
              }
              if ((int *)piVar3[6] != piVar3 + 5) {
                piVar7 = param_1;
                temp_v5 = piVar3;
                FUN_0035d8dc(param_1,&temp_v5);
                if (piVar7 == (int *)0x0) {
                  return 0;
                }
                if (((int *)piVar3[6] != piVar3 + 5) &&
                   (piVar7 = param_1, temp_v5 = piVar3, FUN_0035e164(param_1,&temp_v5),
                   piVar7 == (int *)0x0)) {
                  return 0;
                }
              }
            }
          }
          piVar7 = (int *)param_1[2];
          for (piVar3 = piVar7; piVar3 != param_1 + 1; piVar3 = (int *)piVar3[1]) {
          }
          temp_v3 = *param_4;
          do {
            if (piVar7 == param_1 + 1) {
              return 1;
            }
            temp_v4 = 0;
            temp_v2 = 0;
            if (temp_v2 < (unsigned int)param_1[4]) {
              do {
                if ((*(char *)(piVar7[9] + temp_v2) != '\0') &&
                   (*(int *)(param_1[5] + temp_v2 * 4) == temp_v3)) {
                  temp_v4 = 1;
                  break;
                }
                temp_v2 = temp_v2 + 1;
              } while (temp_v2 < (unsigned int)param_1[4]);
            }
            *(unsigned char *)(piVar7 + 0xb) = temp_v4;
            piVar7 = (int *)piVar7[1];
          } while( 1 );
        }
      }
    }
  }
  return 0;
}

} /* extern "C" */
