/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d352c` (_code @ 0x4d352c, 0x280 bytes) from smt4a.cxi.
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
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned char LAB_004d37b0; /* 0x4d37b0 */
extern unsigned int DAT_00571140; /* 0x571140 */

/* Supplied declaration required: jobStop. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: FUN_00280328. */
/* Supplied declaration required: FUN_002ea508. */
/* Supplied declaration required: asdListBoxSetIntItem. */
/* Supplied declaration required: FUN_00317508. */
/* Supplied declaration required: asdListBoxAddItems. */
/* Supplied declaration required: FUN_00340edc. */
/* Supplied declaration required: FUN_003592dc. */
extern int FUN_003eccd0(int);
extern int FUN_004d8688(unsigned int);


void FUN_004d352c(int param_1,int param_2)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
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
  FUN_002ea508(*(unsigned int *)(param_1 + 0x10),&LAB_004d37b0);
  temp_v0 = FUN_003eccd0(param_2);
  if (temp_v0 != 0) {
    FUN_00340edc(*(unsigned int *)(param_1 + 0x10),2,0xfffffc19,999);
    FUN_00340edc(*(unsigned int *)(param_1 + 0x10),3,0xfffffc19,999);
    FUN_00340edc(*(unsigned int *)(param_1 + 0x10),4,0xfffffc19,999);
    FUN_00340edc(*(unsigned int *)(param_1 + 0x10),5,0,100);
    FUN_00340edc(*(unsigned int *)(param_1 + 0x10),6,0xfffffffd,3);
    temp_v2 = FUN_004d8688(*(unsigned int *)(temp_v0 + 0x1bc));
    asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0,*(unsigned int *)(temp_v0 + 0x1c0),0,temp_v2 - 1,0);
    asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),1,0,0,0x2a,0);
  }
  else {
    FUN_00340edc(*(unsigned int *)(param_1 + 0x10),2,0xfffffc19,999);
    FUN_00340edc(*(unsigned int *)(param_1 + 0x10),3,0xfffffc19,999);
    FUN_00340edc(*(unsigned int *)(param_1 + 0x10),4,0xfffffc19,999);
    FUN_00340edc(*(unsigned int *)(param_1 + 0x10),5,0,100);
    FUN_00340edc(*(unsigned int *)(param_1 + 0x10),6,0xfffffff6,10);
    asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0,0,0,0x20,0);
    asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),1,0,0,0x2a,0);
  }
  FUN_00340edc(*(unsigned int *)(param_1 + 0x10),7,0,100);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),8,DAT_00571140,0,0xff,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),9,0,0,1,0);
  return;
}

} /* extern "C" */
