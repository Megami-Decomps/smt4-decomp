/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035dde0` (_code @ 0x35dde0, 0x2b0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023799c(unsigned int *, unsigned char *);
int FUN_00237a20(int *);
int FUN_00238170(...);
int FUN_00238aac(...);
int FUN_0035d7e8(int *, unsigned int *, unsigned char *);
int FUN_003f7150(int *, int *, int);
int FUN_003f7168(void);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

/* Supplied declaration required: FUN_0023799c. */
/* Supplied declaration required: FUN_00237a20. */
/* Supplied declaration required: FUN_00238170. */
/* Supplied declaration required: FUN_00238aac. */
/* Supplied declaration required: FUN_0035d7e8. */
extern int FUN_0035e6c0(int *, short);
/* Supplied declaration required: FUN_003f7150. */
/* Supplied declaration required: FUN_003f7168. */
extern int FUN_003fc7dc(int *, short);


unsigned int FUN_0035dde0(unsigned int *param_1,int *param_2)

{
/* irregular: 7 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *puVar4;
  unsigned char *puVar5;
  int temp_v3;
  int *piVar7;
  unsigned int temp_v4;
  int *piVar9;
  int *piVar10;
  int temp_v5;
  int temp_v6;
  unsigned int *puStack_2c;
  int *temp_v7;
  
  temp_v1 = *param_2;
  piVar10 = *(int **)(temp_v1 + 0x18);
  puStack_2c = param_1;
  temp_v7 = param_2;
  do {
    while( 1 ) {
      if (piVar10 == (int *)(temp_v1 + 0x14)) {
        return 1;
      }
      if ((char)piVar10[3] == '\x02') break;
      piVar10 = (int *)piVar10[1];
    }
    temp_v2 = param_1[4];
    temp_v0 = *(short *)((int)piVar10 + 0xe);
    puVar4 = (unsigned char *)*param_1;
    FUN_00238aac();
    if (puVar4 == (unsigned char *)0x0) {
      return 0;
    }
    if (param_1[4] != 0) {
      puVar5 = puVar4 + -1;
      if ((param_1[4] & 1) != 0) {
        *puVar4 = 0;
        puVar5 = puVar4;
      }
      for (temp_v4 = (unsigned int)param_1[4] >> 1; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
        puVar5[1] = 0;
        puVar5 = puVar5 + 2;
        *puVar5 = 0;
      }
    }
    puVar4[*(int *)(piVar10[2] + 0x14)] = 1;
    piVar7 = *(int **)(temp_v1 + 0x18);
    while (piVar7 != (int *)(temp_v1 + 0x14)) {
      if (piVar7 == piVar10) {
        piVar7 = (int *)piVar7[1];
      }
      else if ((char)piVar7[3] != '\x02') {
        if (((char)piVar7[3] != '\x03') || (temp_v3 = FUN_003fc7dc(piVar7 + 2,temp_v0), temp_v3 == 0)) {
          piVar7 = (int *)piVar7[1];
          continue;
        }
        temp_v3 = FUN_0035e6c0(piVar7 + 4,temp_v0);
        if (temp_v3 == 0) {
          return 0;
        }
        puVar4[*(int *)(piVar7[2] + 0x14)] = 1;
        if ((int *)piVar7[5] != piVar7 + 4) {
          piVar7 = (int *)piVar7[1];
          continue;
        }
        piVar9 = (int *)piVar7[1];
        *(int **)(*piVar7 + 4) = piVar9;
        *(int *)piVar7[1] = *piVar7;
        FUN_00237a20(piVar7 + 2);
        FUN_00238170(*(unsigned int *)(temp_v1 + 0x1c),piVar7,2);
        piVar7 = piVar9;
      }
      else if (*(short *)((int)piVar7 + 0xe) == temp_v0) {
        puVar4[*(int *)(piVar7[2] + 0x14)] = 1;
        piVar9 = (int *)piVar7[1];
        *(int **)(*piVar7 + 4) = piVar9;
        *(int *)piVar7[1] = *piVar7;
        FUN_00237a20(piVar7 + 2);
        FUN_00238170(*(unsigned int *)(temp_v1 + 0x1c),piVar7,2);
        piVar7 = piVar9;
      }
      else {
        piVar7 = (int *)piVar7[1];
      }
    }
    FUN_0023799c(param_1,puVar4);
    FUN_0035d7e8(&temp_v5,param_1,puVar4);
    if (temp_v5 == 0) {
      return 0;
    }
    FUN_00238170(*param_1,puVar4,(temp_v2 + 0xfU) >> 4);
    piVar9 = (int *)(*temp_v7 + 8);
    piVar7 = *(int **)(*temp_v7 + 0x10);
    FUN_00238aac(piVar7,2);
    if (piVar7 == (int *)0x0) {
      return 0;
    }
    if (piVar7 != (int *)0xfffffff8) {
      FUN_003f7168();
    }
    *piVar7 = *piVar9;
    piVar7[1] = (int)piVar9;
    *piVar9 = (int)piVar7;
    *(int **)(*piVar7 + 4) = piVar7;
    temp_v6 = temp_v5;
    FUN_003f7150(piVar7 + 2,&temp_v6,temp_v0);
    piVar7 = (int *)piVar10[1];
    *(int **)(*piVar10 + 4) = piVar7;
    *(int *)piVar10[1] = *piVar10;
    FUN_00237a20(piVar10 + 2);
    FUN_00238170(*(unsigned int *)(temp_v1 + 0x1c),piVar10);
    piVar10 = piVar7;
  } while( 1 );
}

} /* extern "C" */
