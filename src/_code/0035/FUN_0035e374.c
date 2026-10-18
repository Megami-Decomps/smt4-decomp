/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035e374` (_code @ 0x35e374, 0x1d4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: while (COPY). */
/* Supplied declaration required: FUN_00237b34. */
/* Supplied declaration required: FUN_00237bb8. */
/* Supplied declaration required: FUN_00238308. */
/* Supplied declaration required: FUN_00238c44. */
extern int FUN_002c1a48(int, unsigned int, int);
/* Supplied declaration required: FUN_002c5ff4. */
/* Supplied declaration required: FUN_0035d9f8. */
/* Supplied declaration required: FUN_003f734c. */
/* Supplied declaration required: FUN_003f7394. */


unsigned int FUN_0035e374(int *param_1,int *param_2)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int temp_v4;
  int temp_v5;
  
  temp_v1 = *param_2;
  piVar7 = *(int **)(temp_v1 + 0x18);
  do {
    if (piVar7 == (int *)(temp_v1 + 0x14)) {
      return 1;
    }
    temp_v0 = (param_1[4] + 0xfU) >> 4;
    temp_v2 = *param_1;
    FUN_00238c44(temp_v2,temp_v0);
    if (temp_v2 == 0) {
      return 0;
    }
    FUN_002c5ff4(temp_v2,*(unsigned int *)(*param_2 + 0x24),param_1[4]);
    *(unsigned char *)(temp_v2 + *(int *)(piVar7[2] + 0x14)) = 1;
    piVar5 = *(int **)(temp_v1 + 0x18);
    while (piVar5 != (int *)(temp_v1 + 0x14)) {
      if (piVar5 == piVar7) {
        piVar5 = (int *)piVar5[1];
      }
      else if (*(char *)((int)piVar7 + 0xe) != *(char *)((int)piVar5 + 0xe)) {
        piVar5 = (int *)piVar5[1];
      }
      else {
        *(unsigned char *)(temp_v2 + *(int *)(piVar5[2] + 0x14)) = 1;
        piVar6 = (int *)piVar5[1];
        *(int **)(*piVar5 + 4) = piVar6;
        *(int *)piVar5[1] = *piVar5;
        FUN_00237bb8(piVar5 + 2);
        FUN_00238308(*(unsigned int *)(temp_v1 + 0x1c),piVar5,2);
        piVar5 = piVar6;
      }
    }
    FUN_00237b34(param_1,temp_v2);
    temp_v3 = FUN_002c1a48(temp_v2,*(unsigned int *)(*param_2 + 0x24),param_1[4]);
    if (temp_v3 != 0) {
      FUN_0035d9f8(&temp_v4,param_1,temp_v2);
      if (temp_v4 == 0) {
        return 0;
      }
      piVar6 = (int *)(*param_2 + 8);
      piVar5 = *(int **)(*param_2 + 0x10);
      FUN_00238c44(piVar5,2);
      if (piVar5 == (int *)0x0) {
        return 0;
      }
      if (piVar5 != (int *)0xfffffff8) {
        FUN_003f7394();
      }
      *piVar5 = *piVar6;
      piVar5[1] = (int)piVar6;
      *piVar6 = (int)piVar5;
      *(int **)(*piVar5 + 4) = piVar5;
      temp_v5 = temp_v4;
      FUN_003f734c(piVar5 + 2,&temp_v5,*(unsigned char *)((int)piVar7 + 0xe));
    }
    FUN_00238308(*param_1,temp_v2,temp_v0);
    piVar5 = (int *)piVar7[1];
    *(int **)(*piVar7 + 4) = piVar5;
    *(int *)piVar7[1] = *piVar7;
    FUN_00237bb8(piVar7 + 2);
    FUN_00238308(*(unsigned int *)(temp_v1 + 0x1c),piVar7,2);
    piVar7 = piVar5;
  } while( 1 );
}
