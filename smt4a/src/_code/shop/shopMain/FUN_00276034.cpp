/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00276034` (_code @ 0x276034, 0x148 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e38c(...);
int FUN_0015155c(...);
int FUN_00163060(...);
int FUN_00180008(...);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int FUN_0027dda4(...); /* 0x27dda4 */
extern unsigned char LAB_002bd4bc; /* 0x2bd4bc */
extern unsigned char LAB_00316148; /* 0x316148 */
extern unsigned char LAB_00316160; /* 0x316160 */
extern unsigned int *DAT_00588f98; /* 0x588f98 */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_00180008. */


void FUN_00276034(unsigned int *param_1,int param_2)

{
/* irregular: 1 goto(s); 5 native warning(s); review required */
  unsigned int *puVar1;
  char *pcVar2;
  unsigned int temp_v0;
  
  FUN_00180008(0);
  puVar1 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,0x1c,1);
  DAT_00588f98 = puVar1;
  *(unsigned char *)((int)puVar1 + 5) = 0;
  *(unsigned char *)(puVar1 + 1) = 0;
  *(unsigned char *)((int)puVar1 + 6) = 0;
  puVar1[6] = 0;
  *(unsigned char *)(puVar1 + 5) = 0;
  *(unsigned char *)(puVar1 + 3) = 0;
  if (param_1 != (unsigned int *)0x0) {
    if (param_2 != 8) {
      if (param_2 != 4) goto LAB_002760b8;
      temp_v0 = *param_1;
    }
    else {
      *(char *)((int)puVar1 + 6) = (char)*param_1;
      temp_v0 = param_1[1];
    }
    puVar1[2] = temp_v0;
  }
  else {
LAB_002760b8:
    puVar1[2] = 1;
  }
  pcVar2 = "ShopMainProc";
  FUN_0014e38c("ShopMainProc",4,0,0,FUN_0027dda4,&LAB_00316148,puVar1);
  *puVar1 = (unsigned int)pcVar2;
  FUN_0015155c("ShopMainDrawUp",0x65,1,0,&LAB_002bd4bc,0,DAT_00588f98,pcVar2);
  FUN_0015155c("ShopMainDrawUp",0xcc,1,0,&LAB_002bd4bc,0,DAT_00588f98,*puVar1);
  FUN_0015155c("ShopMainDrawDown",0xeb,1,0,&LAB_00316160,0,DAT_00588f98,*puVar1);
  return;
}

} /* extern "C" */
