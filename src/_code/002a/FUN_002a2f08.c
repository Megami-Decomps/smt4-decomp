/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a2f08` (_code @ 0x2a2f08, 0x114 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_002acaac. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c5254. */
/* Supplied declaration required: FUN_002c526c. */


int * FUN_002a2f08(int *param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  int *piVar5;
  int temp_v2;
  unsigned int uStack_2c;
  int iStack_28;
  unsigned char temp_v3 [8];
  
  iStack_28 = param_1[0x1148];
  puVar4 = (unsigned int *)&temp_v2;
  temp_v2 = 0xffffffff;
  uStack_2c = 0xffffffff;
  puVar1 = temp_v3;
  FUN_002c40f8(puVar1,&iStack_28,1,0);
  if ((int)puVar1 < 0) {
    FUN_002c526c();
  }
  temp_v0 = param_1[1];
  if (*param_1 == temp_v0) {
    piVar5 = param_1 + temp_v0 * 0x2e + 3;
    FUN_002acaac(piVar5,param_2,0xb8);
    temp_v0 = param_1[1];
    temp_v1 = temp_v0 + 1;
    param_1[1] = temp_v1;
    param_1[2] = temp_v0;
    if (temp_v1 >= 0x60) {
      param_1[1] = 0;
    }
  }
  else {
    temp_v1 = param_1[2];
    piVar5 = param_1 + temp_v0 * 0x2e + 3;
    FUN_002acaac(piVar5,param_2,0xb8);
    param_1[2] = param_1[1];
    temp_v0 = param_1[1] + 1;
    param_1[1] = temp_v0;
    if (temp_v0 >= 0x60) {
      param_1[1] = 0;
    }
    param_1[temp_v1 * 0x2e + 0x2f] = (int)piVar5;
  }
  FUN_002c5254(&temp_v2,param_1[0x1148],1);
  if ((int)puVar4 < 0) {
    FUN_002c526c();
  }
  return piVar5;
}
