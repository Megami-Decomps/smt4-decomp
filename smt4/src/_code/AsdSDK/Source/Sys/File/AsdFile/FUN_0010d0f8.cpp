/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d0f8` (_code @ 0x10d0f8, 0xf0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bcc60(...);
int resultReportIfFailed(...);
int asdOperatorNew(...);
int memAlloc(...);
int FUN_002c526c(...);

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int asdFileThreadMain(...); /* 0x113e4c */
extern unsigned char LAB_00123c88; /* 0x123c88 */
extern unsigned char LAB_00123ca4; /* 0x123ca4 */
extern unsigned char LAB_00123cb4; /* 0x123cb4 */
extern unsigned char g_asdFile; /* 0x465000 */
extern unsigned int DAT_00465018; /* 0x465018 */
extern unsigned int *DAT_0046501c; /* 0x46501c */
extern unsigned int DAT_00465020; /* 0x465020 */

/* Supplied declaration required: FUN_002bcc60. */
/* Supplied declaration required: resultReportIfFailed. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: FUN_002c526c. */


void FUN_0010d0f8(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned char *temp_v2;
  unsigned char *temp_v3;
  unsigned char *temp_v4;
  unsigned char temp_v5;
  
  g_asdFile = 0;
  temp_v0 = 0x100;
  memAlloc(0x100,0x100,0,0x1000,0x1000,1);
  puVar2 = (unsigned int *)0x18;
  DAT_00465018 = temp_v0;
  asdOperatorNew();
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(unsigned char *)(puVar2 + 4) = 0;
  }
  DAT_0046501c = puVar2;
  resultReportIfFailed();
  temp_v1 = 4;
  temp_v2 = &LAB_00123c88;
  puVar2 = &DAT_00465020;
  temp_v3 = &LAB_00123cb4;
  temp_v4 = &LAB_00123ca4;
  FUN_002bcc60(&DAT_00465020,&temp_v1,asdFileThreadMain,&temp_v5,DAT_0046501c[3] + DAT_0046501c[2],0x12
               ,0xfffffffe,0);
  if (((unsigned int)puVar2 & 0x7e00000) != 0x600000 && (int)puVar2 < 0) {
    FUN_002c526c();
  }
  return;
}

} /* extern "C" */
