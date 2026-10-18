/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d3b10` (_code @ 0x1d3b10, 0x148 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int FUN_001d9538(); /* 0x1d9538 */
extern unsigned char LAB_001fe15c; /* 0x1fe15c */
extern unsigned char LAB_0021f1ec; /* 0x21f1ec */
extern unsigned char LAB_0021f204; /* 0x21f204 */
extern unsigned int *DAT_0044e050; /* 0x44e050 */

extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c583c. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_001d3b10(unsigned int *param_1,int param_2)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  unsigned int *puVar1;
  char *pcVar2;
  unsigned int temp_v0;
  
  FUN_002c583c(0);
  puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x1c,1);
  DAT_0044e050 = puVar1;
  *(unsigned char *)((int)puVar1 + 5) = 0;
  *(unsigned char *)(puVar1 + 1) = 0;
  *(unsigned char *)((int)puVar1 + 6) = 0;
  puVar1[6] = 0;
  *(unsigned char *)(puVar1 + 5) = 0;
  *(unsigned char *)(puVar1 + 3) = 0;
  if (param_1 != (unsigned int *)0x0) {
    if (param_2 != 8) {
      if (param_2 != 4) goto LAB_001d3b94;
      temp_v0 = *param_1;
    }
    else {
      *(char *)((int)puVar1 + 6) = (char)*param_1;
      temp_v0 = param_1[1];
    }
    puVar1[2] = temp_v0;
  }
  else {
LAB_001d3b94:
    puVar1[2] = 1;
  }
  pcVar2 = "ShopMainProc";
  FUN_002c5978("ShopMainProc",2,0,0,FUN_001d9538,&LAB_0021f1ec,puVar1);
  *puVar1 = (unsigned int)pcVar2;
  FUN_002c4c00("ShopMainDrawUp",0x65,1,0,&LAB_001fe15c,0,DAT_0044e050,pcVar2);
  FUN_002c4c00("ShopMainDrawUp",0xcc,1,0,&LAB_001fe15c,0,DAT_0044e050,*puVar1);
  FUN_002c4c00("ShopMainDrawDown",0xe7,1,0,&LAB_0021f204,0,DAT_0044e050,*puVar1);
  return;
}
