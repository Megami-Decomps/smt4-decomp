/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d3950` (_code @ 0x4d3950, 0x31c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int FUN_00280328(unsigned int, int, int);
int FUN_002ea508(unsigned int, unsigned char *);
int asdListBoxSetIntItem(...);
int FUN_00317508(unsigned int, int);
int asdListBoxAddItems(void);
int FUN_00340edc(...);
int FUN_003592dc(unsigned int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char LAB_004d3c70; /* 0x4d3c70 */
extern int DAT_0056fcc0; /* 0x56fcc0 */
extern int g_btlStageModel; /* 0x57a4f8 */

/* Supplied declaration required: jobStop. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: FUN_00280328. */
/* Supplied declaration required: FUN_002ea508. */
/* Supplied declaration required: asdListBoxSetIntItem. */
/* Supplied declaration required: FUN_00317508. */
/* Supplied declaration required: asdListBoxAddItems. */
/* Supplied declaration required: FUN_00340edc. */
/* Supplied declaration required: FUN_003592dc. */
extern int FUN_00400d68(int);


void FUN_004d3950(int param_1,int param_2)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = jobIsValid(*(unsigned int *)(param_1 + 0x10));
  if (temp_v0 != 0) {
    FUN_003592dc(*(unsigned int *)(param_1 + 0x10));
    jobStop(*(unsigned int *)(param_1 + 0x10),0);
  }
  temp_v1 = *(unsigned int *)(param_2 + 0x80);
  FUN_00280328(temp_v1,0x75,0);
  *(unsigned int *)(param_1 + 0x10) = temp_v1;
  asdListBoxAddItems();
  FUN_00317508(*(unsigned int *)(param_1 + 0x10),1);
  FUN_002ea508(*(unsigned int *)(param_1 + 0x10),&LAB_004d3c70);
  FUN_00340edc(*(unsigned int *)(param_1 + 0x10),0,0xfffffc19,999);
  FUN_00340edc(*(unsigned int *)(param_1 + 0x10),1,0xfffffc19,999);
  FUN_00340edc(*(unsigned int *)(param_1 + 0x10),2,0xfffffc19,999);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),3,*(unsigned int *)(g_btlStageModel + 0x58),0,2,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),4,*(unsigned int *)(g_btlStageModel + 0x5c),0,0xff,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),5,*(unsigned int *)(g_btlStageModel + 0x60),0,0xff,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),6,*(unsigned int *)(g_btlStageModel + 100),0,0xff,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),7,*(unsigned int *)(g_btlStageModel + 0x68),0,10000,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),8,*(unsigned int *)(g_btlStageModel + 0x6c),0,10000,0);
  FUN_00340edc(*(unsigned int *)(param_1 + 0x10),9,0,10);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),10,
               (*(unsigned int *)(*(int *)(DAT_0056fcc0 + 4) + 0xcc) & 0x80000000) != 0,0,1,0);
  FUN_00340edc(*(unsigned int *)(param_1 + 0x10),0xb,0xffff3cb0,50000);
  FUN_00340edc(*(unsigned int *)(param_1 + 0x10),0xc,0xffff3cb0,50000);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0xd,*(unsigned int *)(g_btlStageModel + 0x7c),0,0xff,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0xe,*(unsigned int *)(g_btlStageModel + 0x80),0,0xff,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0xf,*(unsigned int *)(g_btlStageModel + 0x84),0,0xff,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x10,*(unsigned int *)(g_btlStageModel + 0x88),0,0xff,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x11,*(unsigned int *)(g_btlStageModel + 0x8c),0,0xff,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x12,*(unsigned int *)(g_btlStageModel + 0x90),0,0xff,0);
  temp_v0 = FUN_00400d68(g_btlStageModel);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x13,0,0,temp_v0 - 1,0);
  return;
}

} /* extern "C" */
