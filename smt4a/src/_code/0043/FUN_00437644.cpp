/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00437644` (_code @ 0x437644, 0x1e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00436c10(int *, int *, int);
int FUN_00436d04(int *, int);
int FUN_004387bc(...);
int FUN_004387f0(...);
int FUN_00515384(int *, int *, int);
int FUN_005153cc(void);
int FUN_005155bc(int *);
int rt_memcpy(int, unsigned int, int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int rt_memcmp(int, unsigned int, int);
/* Supplied declaration required: FUN_00436c10. */
/* Supplied declaration required: FUN_00436d04. */
/* Supplied declaration required: FUN_004387bc. */
/* Supplied declaration required: FUN_004387f0. */
/* Supplied declaration required: FUN_00515384. */
/* Supplied declaration required: FUN_005153cc. */
/* Supplied declaration required: FUN_005155bc. */
/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_00437644(int *param_1,int *param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int temp_v4;
  int temp_v5;
  int *temp_v6;
  
  temp_v1 = *param_2;
  piVar8 = (int *)(temp_v1 + 0x14);
  piVar7 = *(int **)(temp_v1 + 0x18);
  temp_v6 = piVar8;
  if (*(int **)(temp_v1 + 0x18) != piVar8) {
    do {
      temp_v0 = (param_1[4] + 0xfU) >> 4;
      temp_v2 = *param_1;
      FUN_004387f0(temp_v2,temp_v0);
      if (temp_v2 == 0) {
        return 0;
      }
      rt_memcpy(temp_v2,*(unsigned int *)(*param_2 + 0x24),param_1[4]);
      *(unsigned char *)(temp_v2 + *(int *)(piVar7[2] + 0x14)) = 1;
      piVar5 = *(int **)(temp_v1 + 0x18);
      while (piVar5 != piVar8) {
        if ((piVar5 != piVar7) && (*(char *)((int)piVar7 + 0xe) == *(char *)((int)piVar5 + 0xe))) {
          *(unsigned char *)(temp_v2 + *(int *)(piVar5[2] + 0x14)) = 1;
          piVar6 = (int *)piVar5[1];
          *(int **)(*piVar5 + 4) = piVar6;
          *(int *)piVar5[1] = *piVar5;
          FUN_005155bc(piVar5 + 2);
          FUN_004387bc(*(unsigned int *)(temp_v1 + 0x1c),piVar5,2);
          piVar5 = piVar6;
        }
        else {
          piVar5 = (int *)piVar5[1];
        }
      }
      FUN_00436d04(param_1,temp_v2);
      temp_v3 = rt_memcmp(temp_v2,*(unsigned int *)(*param_2 + 0x24),param_1[4]);
      if (temp_v3 != 0) {
        FUN_00436c10(&temp_v4,param_1,temp_v2);
        if (temp_v4 == 0) {
          return 0;
        }
        piVar6 = (int *)(*param_2 + 8);
        piVar5 = *(int **)(*param_2 + 0x10);
        FUN_004387f0(piVar5,2);
        if (piVar5 == (int *)0x0) {
          return 0;
        }
        if (piVar5 != (int *)0xfffffff8) {
          FUN_005153cc();
        }
        *piVar5 = *piVar6;
        piVar5[1] = (int)piVar6;
        *piVar6 = (int)piVar5;
        *(int **)(*piVar5 + 4) = piVar5;
        temp_v5 = temp_v4;
        FUN_00515384(piVar5 + 2,&temp_v5,*(unsigned char *)((int)piVar7 + 0xe));
      }
      FUN_004387bc(*param_1,temp_v2,temp_v0);
      piVar5 = (int *)piVar7[1];
      *(int **)(*piVar7 + 4) = piVar5;
      *(int *)piVar7[1] = *piVar7;
      FUN_005155bc(piVar7 + 2);
      FUN_004387bc(*(unsigned int *)(temp_v1 + 0x1c),piVar7,2);
      piVar7 = piVar5;
    } while (piVar5 != temp_v6);
  }
  return 1;
}

} /* extern "C" */
