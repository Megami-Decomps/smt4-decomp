/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b0434` (_code @ 0x2b0434, 0x19c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned char LAB_002b060c; /* 0x2b060c */
extern unsigned int *DAT_0046500c; /* 0x46500c */
extern unsigned int DAT_00465010; /* 0x465010 */

/* Unsupported intrinsic, declaration required: while (INT_ADD). */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bf86c. */
extern unsigned int FUN_002c3290(int);
/* Supplied declaration required: FUN_002c42fc. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5450. */
/* Supplied declaration required: FUN_002c5468. */


unsigned int * FUN_002b0434(int param_1,unsigned char param_2)

{
/* irregular: 5 unstructured edge(s); 2 goto(s); 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar7;
  int temp_v2;
  int temp_v3;
  unsigned int uStack_2c;
  int uStack_28;
  unsigned char temp_v4 [8];
  
  puVar7 = (unsigned int *)&temp_v3;
  uStack_28 = DAT_00465010;
  temp_v3 = 0xffffffff;
  uStack_2c = 0xffffffff;
  puVar2 = temp_v4;
  FUN_002c42fc(puVar2,&uStack_28,1,0);
  if ((int)puVar2 < 0) {
    FUN_002c5468();
  }
  temp_v3 = 1;
  puVar3 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x144);
  FUN_002c4b30(puVar3,0x144);
  puVar1 = DAT_0046500c;
  puVar4 = puVar3;
  if (DAT_0046500c != (unsigned int *)0x0) {
    do {
      puVar4 = puVar1;
      puVar1 = (unsigned int *)puVar4[0x4f];
    } while ((unsigned int *)puVar4[0x4f] != (unsigned int *)0x0);
    puVar4[0x4f] = (unsigned int)puVar3;
    puVar3[0x50] = (unsigned int)puVar4;
    puVar4 = DAT_0046500c;
  }
  DAT_0046500c = puVar4;
  temp_v0 = FUN_002c3290(param_1);
  if ((int)temp_v0 >= 9) {
    temp_v0 = 8;
  }
  if (0 >= (int)temp_v0) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = temp_v0 & 1;
    temp_v2 = 0;
    if (temp_v1 != 0) {
      do {
        if (*(char *)(param_1 + temp_v2) == ':') goto LAB_002b05b8;
        temp_v2 = temp_v2 + 1;
        if (temp_v2 >= (int)temp_v1) break;
      } while( 1 );
    }
  }
  do {
    if ((int)temp_v1 >= (int)temp_v0) {
      FUN_002be7fc(puVar3 + 0xb,&LAB_002b060c,param_1);
LAB_002b0564:
      *puVar3 = 0;
      *(unsigned char *)(puVar3 + 8) = param_2;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[10] = 0x80;
      puVar3[0x4b] = 0;
      puVar3[1] = 1;
      puVar3[2] = 0;
      FUN_002c5450(&temp_v3,DAT_00465010);
      if ((int)puVar7 < 0) {
        FUN_002c5468();
      }
      return puVar3;
    }
    if ((*(char *)(param_1 + temp_v1) == ':') || (*(char *)(param_1 + temp_v1 + 1) == ':')) {
LAB_002b05b8:
      FUN_002bf86c(puVar3 + 0xb,param_1);
      goto LAB_002b0564;
    }
    temp_v1 = temp_v1 + 2;
  } while( 1 );
}
