/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d3c0c` (_code @ 0x1d3c0c, 0x148 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemAlloc(...);
int taskCreateDraw(...);
int jyoucyuGetTableEntry(...);
int asdProcessCreateSimple(...);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int FUN_001d9634(...); /* 0x1d9634 */
extern unsigned char LAB_001fe200; /* 0x1fe200 */
extern unsigned char LAB_0021f2e8; /* 0x21f2e8 */
extern unsigned char LAB_0021f300; /* 0x21f300 */
extern unsigned int *g_shop; /* 0x44e050 */

/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: jyoucyuGetTableEntry. */
/* Supplied declaration required: asdProcessCreateSimple. */


void FUN_001d3c0c(unsigned int *param_1,int param_2)

{
/* irregular: 1 goto(s); 5 native warning(s); review required */
  unsigned int *puVar1;
  char *pcVar2;
  unsigned int temp_v0;
  
  jyoucyuGetTableEntry(0);
  puVar1 = (unsigned int *)0x100;
  asdMemAlloc(0x100,0x100,0,0x1c,1);
  g_shop = puVar1;
  *(unsigned char *)((int)puVar1 + 5) = 0;
  *(unsigned char *)(puVar1 + 1) = 0;
  *(unsigned char *)((int)puVar1 + 6) = 0;
  puVar1[6] = 0;
  *(unsigned char *)(puVar1 + 5) = 0;
  *(unsigned char *)(puVar1 + 3) = 0;
  if (param_1 != (unsigned int *)0x0) {
    if (param_2 != 8) {
      if (param_2 != 4) goto LAB_001d3c90;
      temp_v0 = *param_1;
    }
    else {
      *(char *)((int)puVar1 + 6) = (char)*param_1;
      temp_v0 = param_1[1];
    }
    puVar1[2] = temp_v0;
  }
  else {
LAB_001d3c90:
    puVar1[2] = 1;
  }
  pcVar2 = "ShopMainProc";
  asdProcessCreateSimple("ShopMainProc",2,0,0,FUN_001d9634,&LAB_0021f2e8,puVar1);
  *puVar1 = (unsigned int)pcVar2;
  taskCreateDraw("ShopMainDrawUp",0x65,1,0,&LAB_001fe200,0,g_shop,pcVar2);
  taskCreateDraw("ShopMainDrawUp",0xcc,1,0,&LAB_001fe200,0,g_shop,*puVar1);
  taskCreateDraw("ShopMainDrawDown",0xe7,1,0,&LAB_0021f300,0,g_shop,*puVar1);
  return;
}

} /* extern "C" */
