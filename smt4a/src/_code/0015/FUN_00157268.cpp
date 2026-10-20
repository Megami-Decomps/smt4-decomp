/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00157268` (_code @ 0x157268, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016b078(int *, int);
int FUN_0016b8a8(int *, int);
int vectorClear(int *);
int FUN_0016bb74(int *, int);
int FUN_0016d1f4(unsigned char [24]);
int FUN_00177abc(unsigned int *, unsigned char *);
int FUN_00177cdc(unsigned char *, int, int);

/* stack frame of param_1: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned char sp88; /* 0x88: local_88 */
} param_1_stack;

/* Supplied declaration required: FUN_0016b078. */
/* Supplied declaration required: FUN_0016b8a8. */
/* Supplied declaration required: vectorClear. */
/* Supplied declaration required: FUN_0016bb74. */
/* Supplied declaration required: FUN_0016d1f4. */
/* Supplied declaration required: FUN_00177abc. */
/* Supplied declaration required: FUN_00177cdc. */


void FUN_00157268(int *param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int *puVar2;
  int *piVar3;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [24];
  unsigned char temp_v4 [76];
  unsigned int temp_v5 [8];
  
  *(unsigned char *)(param_1 + 0x2d) = 0;
  piVar3 = (int *)param_1[3];
  FUN_0016d1f4(temp_v3);
  temp_v4[0] = 0;
  temp_v5[0] = 0;
  puVar1 = temp_v4;
  FUN_00177cdc(puVar1,*piVar3,1);
  *piVar3 = (int)puVar1;
  puVar2 = temp_v5;
  FUN_00177abc(puVar2,puVar1);
  temp_v2 = 0;
  *piVar3 = (int)puVar2;
  do {
    FUN_0016bb74(param_1,temp_v2);
    piVar3 = param_1 + 8;
    if (temp_v2 == 0) {
      *(unsigned char *)piVar3 = 0;
    }
    else if (temp_v2 != 1) {
      if (temp_v2 != 2) {
        if (temp_v2 == 3) {
          *(unsigned char *)piVar3 = 1;
          *(unsigned char *)((int)param_1 + 0x21) = 0;
          *(unsigned char *)((int)param_1 + 0x23) = 6;
          *(unsigned char *)((int)param_1 + 0x25) = 1;
        }
      }
      else {
        *(unsigned char *)piVar3 = 1;
        *(unsigned char *)((int)param_1 + 0x21) = 2;
        *(unsigned char *)((int)param_1 + 0x23) = 6;
        *(unsigned char *)((int)param_1 + 0x25) = 1;
      }
    }
    else {
      *(unsigned char *)piVar3 = 1;
      *(unsigned char *)((int)param_1 + 0x21) = 0;
      *(unsigned char *)((int)param_1 + 0x23) = 6;
      *(unsigned char *)((int)param_1 + 0x25) = 7;
    }
    FUN_0016b8a8(param_1,temp_v2);
    temp_v1 = param_1[1];
    for (temp_v0 = *param_1; temp_v0 != temp_v1; temp_v0 = temp_v0 + 0x30) {
      FUN_0016b078(param_1,temp_v0);
    }
    vectorClear(param_1);
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 4);
  return;
}

} /* extern "C" */
