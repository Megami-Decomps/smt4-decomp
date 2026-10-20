/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d5578` (_code @ 0x4d5578, 0x4f0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int FUN_00280328(unsigned int, int, int);
int FUN_002ea508(unsigned int, unsigned char *);
int asdListBoxSetIntItem(...);
int asdListBoxSetByteValue(unsigned int, int);
int asdListBoxAddItems(void);
int asdListBoxSetToggleItem(...);
int FUN_00340edc(...);
int FUN_003592dc(unsigned int);

typedef struct fn_004d5578_arg1 fn_004d5578_arg1;
struct fn_004d5578_arg1 {
    unsigned char pad_0x0[0x80];
    undefined4 field_0x80; /* +0x80 */
    unsigned char pad_0x84[0x4524];
    uint field_0x45a8; /* +0x45a8 */
    uint field_0x45ac; /* +0x45ac */
};

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_004d5988; /* 0x4d5988 */
extern int g_btlCamera; /* 0x571508 */
extern unsigned int DAT_00571514; /* 0x571514 */
extern unsigned int DAT_00571518; /* 0x571518 */
extern unsigned int DAT_00571520; /* 0x571520 */
extern unsigned int DAT_00571524; /* 0x571524 */
extern unsigned int DAT_00571528; /* 0x571528 */
extern unsigned int DAT_0057152c; /* 0x57152c */
extern unsigned int DAT_00571530; /* 0x571530 */
extern unsigned int DAT_0057157c; /* 0x57157c */
extern unsigned int DAT_00571584; /* 0x571584 */
extern unsigned int DAT_00571588; /* 0x571588 */
extern unsigned int DAT_00571590; /* 0x571590 */
extern unsigned int DAT_00571594; /* 0x571594 */
extern unsigned int DAT_00571598; /* 0x571598 */
extern unsigned int DAT_0057159c; /* 0x57159c */
extern unsigned int DAT_005715a0; /* 0x5715a0 */
extern unsigned int DAT_005715a4; /* 0x5715a4 */
extern unsigned int DAT_005715a8; /* 0x5715a8 */
extern unsigned int DAT_005715ac; /* 0x5715ac */
extern unsigned int DAT_005715b0; /* 0x5715b0 */
extern unsigned int DAT_005715b4; /* 0x5715b4 */
extern unsigned int DAT_00571718; /* 0x571718 */
extern unsigned int DAT_0057171c; /* 0x57171c */
extern unsigned int DAT_0057aa10; /* 0x57aa10 */

/* Supplied declaration required: jobStop. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: FUN_00280328. */
/* Supplied declaration required: FUN_002ea508. */
/* Supplied declaration required: asdListBoxSetIntItem. */
/* Supplied declaration required: asdListBoxSetByteValue. */
/* Supplied declaration required: asdListBoxAddItems. */
/* Supplied declaration required: asdListBoxSetToggleItem. */
/* Supplied declaration required: FUN_00340edc. */
/* Supplied declaration required: FUN_003592dc. */


void FUN_004d5578(int param_1,fn_004d5578_arg1 *param_2)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = jobIsValid(*(unsigned int *)(param_1 + 0x10));
  if (temp_v0 != 0) {
    FUN_003592dc(*(unsigned int *)(param_1 + 0x10));
    jobStop(*(unsigned int *)(param_1 + 0x10),0);
  }
  temp_v1 = param_2->field_0x80;
  FUN_00280328(temp_v1,0x75,0);
  *(unsigned int *)(param_1 + 0x10) = temp_v1;
  asdListBoxAddItems();
  asdListBoxSetByteValue(*(unsigned int *)(param_1 + 0x10),1);
  FUN_002ea508(*(unsigned int *)(param_1 + 0x10),&LAB_004d5988);
  asdListBoxSetToggleItem(*(unsigned int *)(param_1 + 0x10),0,(*(unsigned int *)(g_btlCamera + 0x64c) & 0x100) >> 8);
  FUN_00340edc(*(unsigned int *)(param_1 + 0x10),1,0xfffffff6,10);
  asdListBoxSetToggleItem(*(unsigned int *)(param_1 + 0x10),2,
               (param_2->field_0x45ac & DAT_0057171c) != 0 ||
               (param_2->field_0x45a8 & DAT_00571718) != 0);
  FUN_00340edc(*(unsigned int *)(param_1 + 0x10),3,0xffffff9c,100);
  FUN_00340edc(*(unsigned int *)(param_1 + 0x10),4,0xffffff9c,100);
  FUN_00340edc(*(unsigned int *)(param_1 + 0x10),5,0xffffff9c,100);
  FUN_00340edc(*(unsigned int *)(param_1 + 0x10),6,0xffffff9c,100);
  FUN_00340edc(*(unsigned int *)(param_1 + 0x10),7,0xffffffce,200);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),8,DAT_0057157c,0xffffffff,100,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),9,DAT_00571514,0xffffffff,100,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),10,DAT_00571518,0,2,0);
  FUN_00340edc(*(unsigned int *)(param_1 + 0x10),0xb,0xffffffa6,0x5a);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0xc,DAT_00571584,0xffffffff,100,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0xd,DAT_00571520,0xffffffff,100,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0xe,DAT_00571588,0,2,0);
  FUN_00340edc(*(unsigned int *)(param_1 + 0x10),0xf,0xffffffa6,0x5a);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x10,DAT_00571590,0xffffffff,100,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x11,DAT_00571524,0xffffffff,100,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x12,DAT_00571594,0,2,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x13,DAT_00571598,0xffffffff,100,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x14,DAT_00571528,0xffffffff,100,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x15,DAT_0057159c,0,2,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x16,DAT_005715a0,0xffffffff,100,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x17,DAT_0057152c,0xffffffff,100,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x18,DAT_005715a4,0,2,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x19,DAT_005715a8,0xffffffff,100,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x1a,DAT_005715ac,0xffffffff,100,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x1b,DAT_005715b0,0,2,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x1c,DAT_005715b4,0,999,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x1d,DAT_0057aa10,0,99,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x1e,DAT_00571530,0,99,0);
  return;
}

} /* extern "C" */
