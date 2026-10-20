/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004372bc` (_code @ 0x4372bc, 0x2b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00436c10(int *, unsigned int *, unsigned char *);
int FUN_00436d04(unsigned int *, unsigned char *);
int FUN_004387bc(...);
int FUN_004387f0(...);
int FUN_005153b4(int *, int *, int);
int FUN_005153cc(void);
int FUN_005155bc(int *);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

/* Supplied declaration required: FUN_00436c10. */
/* Supplied declaration required: FUN_00436d04. */
extern int FUN_00437bc0(int *, short);
/* Supplied declaration required: FUN_004387bc. */
/* Supplied declaration required: FUN_004387f0. */
/* Supplied declaration required: FUN_005153b4. */
/* Supplied declaration required: FUN_005153cc. */
/* Supplied declaration required: FUN_005155bc. */
extern int FUN_005228c8(int *, short);


unsigned int FUN_004372bc(unsigned int *param_1,int *param_2)

{
/* irregular: 7 native warning(s); review required */
  short temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  unsigned char *puVar5;
  unsigned char *puVar6;
  int temp_v3;
  int *piVar8;
  unsigned int temp_v4;
  int *piVar10;
  int temp_v5;
  int temp_v6;
  unsigned int *puStack_2c;
  int *temp_v7;
  
  temp_v1 = *param_2;
  piVar2 = *(int **)(temp_v1 + 0x18);
  temp_v7 = param_2;
  puStack_2c = param_1;
  do {
    while( 1 ) {
      if (piVar2 == (int *)(temp_v1 + 0x14)) {
        return 1;
      }
      if ((char)piVar2[3] == '\x02') break;
      piVar2 = (int *)piVar2[1];
    }
    temp_v2 = param_1[4];
    temp_v0 = *(short *)((int)piVar2 + 0xe);
    puVar5 = (unsigned char *)*param_1;
    FUN_004387f0();
    if (puVar5 == (unsigned char *)0x0) {
      return 0;
    }
    if (param_1[4] != 0) {
      puVar6 = puVar5 + -1;
      if ((param_1[4] & 1) != 0) {
        *puVar5 = 0;
        puVar6 = puVar5;
      }
      for (temp_v4 = (unsigned int)param_1[4] >> 1; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
        puVar6[1] = 0;
        puVar6 = puVar6 + 2;
        *puVar6 = 0;
      }
    }
    puVar5[*(int *)(piVar2[2] + 0x14)] = 1;
    piVar8 = *(int **)(temp_v1 + 0x18);
    while (piVar8 != (int *)(temp_v1 + 0x14)) {
      if (piVar8 != piVar2) {
        if ((char)piVar8[3] != '\x02') {
          if (((char)piVar8[3] != '\x03') || (temp_v3 = FUN_005228c8(piVar8 + 2,temp_v0), temp_v3 == 0)) {
            piVar8 = (int *)piVar8[1];
            continue;
          }
          temp_v3 = FUN_00437bc0(piVar8 + 4,temp_v0);
          if (temp_v3 == 0) {
            return 0;
          }
          puVar5[*(int *)(piVar8[2] + 0x14)] = 1;
          if ((int *)piVar8[5] != piVar8 + 4) {
            piVar8 = (int *)piVar8[1];
            continue;
          }
          piVar10 = (int *)piVar8[1];
          *(int **)(*piVar8 + 4) = piVar10;
          *(int *)piVar8[1] = *piVar8;
          FUN_005155bc(piVar8 + 2);
          FUN_004387bc(*(unsigned int *)(temp_v1 + 0x1c),piVar8,2);
          piVar8 = piVar10;
        }
        else {
          if (*(short *)((int)piVar8 + 0xe) != temp_v0) {
            piVar8 = (int *)piVar8[1];
            continue;
          }
          puVar5[*(int *)(piVar8[2] + 0x14)] = 1;
          piVar10 = (int *)piVar8[1];
          *(int **)(*piVar8 + 4) = piVar10;
          *(int *)piVar8[1] = *piVar8;
          FUN_005155bc(piVar8 + 2);
          FUN_004387bc(*(unsigned int *)(temp_v1 + 0x1c),piVar8,2);
          piVar8 = piVar10;
        }
      }
      else {
        piVar8 = (int *)piVar8[1];
      }
    }
    FUN_00436d04(param_1,puVar5);
    FUN_00436c10(&temp_v5,param_1,puVar5);
    if (temp_v5 == 0) {
      return 0;
    }
    FUN_004387bc(*param_1,puVar5,(temp_v2 + 0xfU) >> 4);
    piVar10 = (int *)(*temp_v7 + 8);
    piVar8 = *(int **)(*temp_v7 + 0x10);
    FUN_004387f0(piVar8,2);
    if (piVar8 == (int *)0x0) {
      return 0;
    }
    if (piVar8 != (int *)0xfffffff8) {
      FUN_005153cc();
    }
    *piVar8 = *piVar10;
    piVar8[1] = (int)piVar10;
    *piVar10 = (int)piVar8;
    *(int **)(*piVar8 + 4) = piVar8;
    temp_v6 = temp_v5;
    FUN_005153b4(piVar8 + 2,&temp_v6,temp_v0);
    piVar8 = (int *)piVar2[1];
    *(int **)(*piVar2 + 4) = piVar8;
    *(int *)piVar2[1] = *piVar2;
    FUN_005155bc(piVar2 + 2);
    FUN_004387bc(*(unsigned int *)(temp_v1 + 0x1c),piVar2);
    piVar2 = piVar8;
  } while( 1 );
}

} /* extern "C" */
