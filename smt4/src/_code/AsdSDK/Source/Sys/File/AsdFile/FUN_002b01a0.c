/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b01a0` (_code @ 0x2b01a0, 0x1fc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned char LAB_002b03f0; /* 0x2b03f0 */
extern unsigned char LAB_002b03f8; /* 0x2b03f8 */
extern unsigned int *DAT_00465010; /* 0x465010 */
extern unsigned int DAT_00465014; /* 0x465014 */

/* Unsupported intrinsic, declaration required: while (INT_ADD). */
/* Supplied declaration required: FUN_002aa568. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bf694. */
extern unsigned int FUN_002c30c4(int);
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c5254. */
/* Supplied declaration required: FUN_002c526c. */


unsigned int * FUN_002b01a0(int param_1,unsigned char param_2)

{
/* irregular: 5 unstructured edge(s); 3 goto(s); 9 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v0;
  unsigned int *puVar6;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int uStack_2c;
  int uStack_28;
  unsigned char temp_v4 [8];
  
  puVar6 = (unsigned int *)&temp_v3;
  uStack_28 = DAT_00465014;
  temp_v3 = 0xffffffff;
  uStack_2c = 0xffffffff;
  puVar2 = temp_v4;
  FUN_002c40f8(puVar2,&uStack_28,1,0);
  if ((int)puVar2 < 0) {
    FUN_002c526c();
  }
  puVar3 = (unsigned int *)0x100;
  temp_v3 = 1;
  FUN_002c498c(0x100,0x100,0,0x144);
  FUN_002c4938();
  puVar1 = DAT_00465010;
  puVar4 = puVar3;
  if (DAT_00465010 != (unsigned int *)0x0) {
    do {
      puVar4 = puVar1;
      puVar1 = (unsigned int *)puVar4[0x4f];
    } while ((unsigned int *)puVar4[0x4f] != (unsigned int *)0x0);
    puVar4[0x4f] = (unsigned int)puVar3;
    puVar3[0x50] = (unsigned int)puVar4;
    puVar4 = DAT_00465010;
  }
  DAT_00465010 = puVar4;
  temp_v0 = FUN_002c30c4(param_1);
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
        if (*(char *)(param_1 + temp_v2) == ':') goto LAB_002b0320;
        temp_v2 = temp_v2 + 1;
        if (temp_v2 >= (int)temp_v1) break;
      } while( 1 );
    }
  }
  do {
    if ((int)temp_v1 >= (int)temp_v0) break;
    if ((*(char *)(param_1 + temp_v1) == ':') || (*(char *)(param_1 + temp_v1 + 1) == ':')) {
LAB_002b0320:
      FUN_002bf694(puVar3 + 0xb,param_1);
      goto LAB_002b0348;
    }
    temp_v1 = temp_v1 + 2;
  } while( 1 );
  temp_v2 = param_1;
  FUN_002aa568(param_1,"battle/event/BtlEvent064/BtlEvent064.mbm");
  if (temp_v2 != 0) {
    temp_v2 = param_1;
    FUN_002aa568(param_1,"event/e007/e007.mbm");
    if (temp_v2 != 0) {
      temp_v2 = param_1;
      FUN_002aa568(param_1,"event/quest/quest122.mbm");
      if (temp_v2 != 0) {
        FUN_002be624(puVar3 + 0xb,&LAB_002b03f0,param_1);
        goto LAB_002b0348;
      }
    }
  }
  FUN_002be624(puVar3 + 0xb,&LAB_002b03f8,param_1);
LAB_002b0348:
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
  FUN_002c5254(&temp_v3,DAT_00465014);
  if ((int)puVar6 < 0) {
    FUN_002c526c();
  }
  return puVar3;
}
