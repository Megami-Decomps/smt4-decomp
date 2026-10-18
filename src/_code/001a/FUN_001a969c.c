/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a969c` (_code @ 0x1a969c, 0x1f0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned char LAB_001a98d8; /* 0x1a98d8 */
extern unsigned char LAB_001a98f0; /* 0x1a98f0 */
extern unsigned char LAB_001a990c; /* 0x1a990c */
extern int FUN_001a9970(); /* 0x1a9970 */
extern unsigned char LAB_001d9510; /* 0x1d9510 */
extern unsigned char LAB_001fe0b4; /* 0x1fe0b4 */
extern unsigned char LAB_001fe0f8; /* 0x1fe0f8 */
extern unsigned char LAB_001fe134; /* 0x1fe134 */
extern unsigned int *DAT_0044db8c; /* 0x44db8c */
extern int DAT_0044db90; /* 0x44db90 */
extern int DAT_0044db94; /* 0x44db94 */
extern int DAT_0044db98; /* 0x44db98 */

/* Supplied declaration required: FUN_002899c4. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c583c. */
/* Supplied declaration required: FUN_002c5978. */
/* Supplied declaration required: FUN_00343d94. */


void FUN_001a969c(int *param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  
  FUN_002c583c(0);
  puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x20,1);
  DAT_0044db8c = puVar1;
  *(unsigned char *)(puVar1 + 6) = 0;
  puVar1[7] = 0;
  *(unsigned char *)((int)puVar1 + 0x19) = 0;
  if (param_1 != (int *)0x0) {
    if (param_2 != 0xc) {
      if (param_2 == 4) {
        DAT_0044db90 = *param_1;
        DAT_0044db94 = 0;
        DAT_0044db98 = 0;
      }
    }
    else {
      if (*param_1 != -1) {
        DAT_0044db90 = *param_1;
      }
      DAT_0044db94 = param_1[1];
      DAT_0044db98 = param_1[2];
    }
    FUN_00343d94(DAT_0044db90,1);
  }
  else {
    DAT_0044db94 = 0;
    DAT_0044db98 = 1;
    FUN_002899c4(0x50,1);
    FUN_002899c4(0x20,1);
    FUN_002899c4(0x5f,1);
    FUN_002899c4(0x143,1);
    FUN_002899c4(0x157,1);
  }
  puVar2 = &LAB_001a98d8;
  FUN_002c5978(&LAB_001a98d8,2,0,0,FUN_001a9970,&LAB_001fe0b4,DAT_0044db8c);
  *puVar1 = (unsigned int)puVar2;
  puVar3 = &LAB_001a98f0;
  FUN_002c4c00(&LAB_001a98f0,0x6f,1,0,&LAB_001fe134,0,DAT_0044db8c,puVar2);
  puVar1[1] = (unsigned int)puVar3;
  FUN_002c4c00(&LAB_001a98f0,0x7d,1,0,&LAB_001d9510,0,DAT_0044db8c,*puVar1);
  FUN_002c4c00(&LAB_001a98f0,0xdb,1,0,&LAB_001d9510,0,DAT_0044db8c,*puVar1);
  puVar2 = &LAB_001a990c;
  FUN_002c4c00(&LAB_001a990c,0xe7,1,0,&LAB_001fe0f8,0,DAT_0044db8c,*puVar1);
  puVar1[3] = (unsigned int)puVar2;
  return;
}
