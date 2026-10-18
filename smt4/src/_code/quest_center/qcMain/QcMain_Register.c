/* NON_MATCHING: romwright 0.5.0 decompilation of `QcMain_Register` (_code @ 0x1a97a4, 0x1f0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned char LAB_001a99dc; /* 0x1a99dc */
extern unsigned char LAB_001a99f4; /* 0x1a99f4 */
extern unsigned char LAB_001a9a10; /* 0x1a9a10 */
extern int QuestCenterMainProcUpdate(); /* 0x1a9a74 */
extern unsigned char LAB_001d960c; /* 0x1d960c */
extern unsigned char LAB_001fe158; /* 0x1fe158 */
extern unsigned char LAB_001fe19c; /* 0x1fe19c */
extern unsigned char LAB_001fe1d8; /* 0x1fe1d8 */
extern unsigned int *DAT_0044db8c; /* 0x44db8c */
extern int DAT_0044db90; /* 0x44db90 */
extern int DAT_0044db94; /* 0x44db94 */
extern int DAT_0044db98; /* 0x44db98 */

/* Supplied declaration required: FUN_0028975c. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c564c. */
/* Supplied declaration required: FUN_002c5788. */
/* Supplied declaration required: QcMain_SetFlag. */


void QcMain_Register(int *param_1,int param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  
  FUN_002c564c(0);
  puVar1 = (unsigned int *)0x100;
  FUN_002c498c(0x100,0x100,0,0x20,1);
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
    QcMain_SetFlag(DAT_0044db90,1);
  }
  else {
    DAT_0044db94 = 0;
    DAT_0044db98 = 1;
    FUN_0028975c(0x50,1);
    FUN_0028975c(0x20,1);
    FUN_0028975c(0x5f,1);
    FUN_0028975c(0x143,1);
    FUN_0028975c(0x157,1);
  }
  puVar2 = &LAB_001a99dc;
  FUN_002c5788(&LAB_001a99dc,2,0,0,QuestCenterMainProcUpdate,&LAB_001fe158,DAT_0044db8c);
  *puVar1 = (unsigned int)puVar2;
  puVar3 = &LAB_001a99f4;
  FUN_002c4a08(&LAB_001a99f4,0x6f,1,0,&LAB_001fe1d8,0,DAT_0044db8c,puVar2);
  puVar1[1] = (unsigned int)puVar3;
  FUN_002c4a08(&LAB_001a99f4,0x7d,1,0,&LAB_001d960c,0,DAT_0044db8c,*puVar1);
  FUN_002c4a08(&LAB_001a99f4,0xdb,1,0,&LAB_001d960c,0,DAT_0044db8c,*puVar1);
  puVar2 = &LAB_001a9a10;
  FUN_002c4a08(&LAB_001a9a10,0xe7,1,0,&LAB_001fe19c,0,DAT_0044db8c,*puVar1);
  puVar1[3] = (unsigned int)puVar2;
  return;
}
