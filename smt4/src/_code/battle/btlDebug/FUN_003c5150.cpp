/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c5150` (_code @ 0x3c5150, 0x210 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdListBoxSetItemMode3(...);
int asdListBoxSetItemMode2(...);
int asdListBoxSetByteValue(unsigned int, int);
int asdListBoxAddItems(void);
int asdListBoxCreateDefault(unsigned int, int, int);
int jobSetText(unsigned int, unsigned char *);
int dataTableGetEntries(void);
int dataTable22GetCount(void);
int dataTable03Sub0GetCount(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_003c5364; /* 0x3c5364 */
extern unsigned char DAT_00434388; /* 0x434388 */
extern unsigned int DAT_0043438c; /* 0x43438c */
extern unsigned int DAT_00435dc0; /* 0x435dc0 */
extern unsigned int DAT_00435dd8; /* 0x435dd8 */

/* Supplied declaration required: asdListBoxSetItemMode3. */
/* Supplied declaration required: asdListBoxSetItemMode2. */
/* Supplied declaration required: asdListBoxSetByteValue. */
/* Supplied declaration required: asdListBoxAddItems. */
/* Supplied declaration required: asdListBoxCreateDefault. */
/* Supplied declaration required: jobSetText. */
extern unsigned int dataTableGetCount(unsigned int);
/* Supplied declaration required: dataTableGetEntries. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: dataTable22GetCount. */
/* Supplied declaration required: dataTable03Sub0GetCount. */


void FUN_003c5150(int param_1,int param_2)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  
  temp_v0 = *(unsigned int *)(param_2 + 0x5c);
  asdListBoxCreateDefault(temp_v0,0x73,0);
  *(unsigned int *)(param_1 + 0x10) = temp_v0;
  asdListBoxAddItems();
  asdListBoxSetByteValue(*(unsigned int *)(param_1 + 0x10),1);
  jobSetText(*(unsigned int *)(param_1 + 0x10),&LAB_003c5364);
  temp_v1 = (unsigned int)DAT_00434388;
  if (temp_v1 != 0) {
    dataTable03Sub0GetCount();
    asdListBoxSetItemMode3(*(unsigned int *)(param_1 + 0x10),0,DAT_0043438c,0,temp_v1 - 1,0);
    asdListBoxSetItemMode2(*(unsigned int *)(param_1 + 0x10),1,(int)(char)DAT_00434388);
  }
  else {
    dataTable22GetCount();
    asdListBoxSetItemMode3(*(unsigned int *)(param_1 + 0x10),0,DAT_0043438c,0,temp_v1 - 1,0);
    asdListBoxSetItemMode2(*(unsigned int *)(param_1 + 0x10),1,(int)(char)DAT_00434388);
  }
  asdListBoxSetItemMode3(*(unsigned int *)(param_1 + 0x10),2,DAT_00435dc0,0,0x4b1,0);
  asdListBoxSetItemMode3(*(unsigned int *)(param_1 + 0x10),3,DAT_00435dd8,0,1000,0);
  puVar3 = (unsigned int *)(param_2 + 0x44a8);
  asdListBoxSetItemMode2(*(unsigned int *)(param_1 + 0x10),4,(*puVar3 & 0x4000) >> 0xe);
  asdListBoxSetItemMode2(*(unsigned int *)(param_1 + 0x10),5,(*puVar3 & 0x8000) >> 0xf);
  asdListBoxSetItemMode2(*(unsigned int *)(param_1 + 0x10),6,(*puVar3 & 0x10000) >> 0x10);
  asdListBoxSetItemMode2(*(unsigned int *)(param_1 + 0x10),0xb,(*puVar3 & 0x20000000) >> 0x1d);
  asdListBoxSetItemMode2(*(unsigned int *)(param_1 + 0x10),0xc);
  asdListBoxSetItemMode2(*(unsigned int *)(param_1 + 0x10),0xd,(*puVar3 & 0x100000) >> 0x14);
  asdListBoxSetItemMode2(*(unsigned int *)(param_1 + 0x10),0xe,*puVar3 >> 0x1f);
  temp_v0 = dataTableGet(0x1c,2);
  dataTableGetEntries();
  temp_v0 = dataTableGetCount(temp_v0);
  asdListBoxSetItemMode3(*(unsigned int *)(param_1 + 0x10),10,0,0,temp_v0,0);
  return;
}

} /* extern "C" */
