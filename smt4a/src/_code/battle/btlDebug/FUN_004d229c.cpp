/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d229c` (_code @ 0x4d229c, 0x348 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int FUN_00280328(unsigned int, int, int);
int FUN_002ea508(unsigned int, unsigned char *);
int FUN_00317464(...);
int FUN_00317508(unsigned int, int);
int asdListBoxAddItems(void);
int FUN_0032c450(unsigned int, int, int);
int FUN_00340edc(...);
int FUN_003592dc(unsigned int);

typedef struct fn_004d229c_arg1 fn_004d229c_arg1;
struct fn_004d229c_arg1 {
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

extern unsigned char LAB_004d25e8; /* 0x4d25e8 */
extern unsigned int DAT_00571770; /* 0x571770 */
extern unsigned int DAT_00571774; /* 0x571774 */
extern short DAT_0057a664; /* 0x57a664 */
extern short DAT_0057a666; /* 0x57a666 */
extern short DAT_0057a668; /* 0x57a668 */
extern short DAT_0057a66a; /* 0x57a66a */
extern short DAT_0057a66c; /* 0x57a66c */
extern short DAT_0057a66e; /* 0x57a66e */
extern short DAT_0057a670; /* 0x57a670 */
extern short DAT_0057a672; /* 0x57a672 */
extern short DAT_0057a674; /* 0x57a674 */
extern short DAT_0057a676; /* 0x57a676 */
extern short DAT_0057a678; /* 0x57a678 */
extern short DAT_0057a67a; /* 0x57a67a */
extern unsigned char DAT_0057aa00; /* 0x57aa00 */
extern unsigned char DAT_0057aa01; /* 0x57aa01 */
extern unsigned char DAT_0057aa02; /* 0x57aa02 */
extern unsigned char DAT_0057aa03; /* 0x57aa03 */
extern unsigned int DAT_0057aa0c; /* 0x57aa0c */
extern unsigned int DAT_0057aa14; /* 0x57aa14 */
extern unsigned int DAT_0057aa1c; /* 0x57aa1c */

/* Supplied declaration required: jobStop. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: FUN_00280328. */
/* Supplied declaration required: FUN_002ea508. */
/* Supplied declaration required: FUN_00317464. */
/* Supplied declaration required: FUN_00317508. */
/* Supplied declaration required: asdListBoxAddItems. */
/* Supplied declaration required: FUN_0032c450. */
/* Supplied declaration required: FUN_00340edc. */
/* Supplied declaration required: FUN_003592dc. */


void FUN_004d229c(int param_1,fn_004d229c_arg1 *param_2)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = jobIsValid(*(unsigned int *)(param_1 + 0x10));
  if (temp_v0 != 0) {
    FUN_003592dc(*(unsigned int *)(param_1 + 0x10));
    jobStop(*(unsigned int *)(param_1 + 0x10),0);
  }
  temp_v1 = param_2->field_0x80;
  FUN_00280328(temp_v1,0x75,0);
  *(unsigned int *)(param_1 + 0x10) = temp_v1;
  asdListBoxAddItems();
  FUN_00317508(*(unsigned int *)(param_1 + 0x10),1);
  FUN_002ea508(*(unsigned int *)(param_1 + 0x10),&LAB_004d25e8);
  FUN_00340edc(*(unsigned int *)(param_1 + 0x10),0,0xffffff01,0xff);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),1,
               (param_2->field_0x45a8 & DAT_00571770) != 0 ||
               (param_2->field_0x45ac & DAT_00571774) != 0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),2,DAT_0057aa0c,0xffffffff,2,0);
  temp_v3 = DAT_0057aa1c & 0xff0000;
  temp_v2 = DAT_0057aa1c & 0xff00;
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),3,DAT_0057aa1c >> 0x18,0,0xff,0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),4,temp_v3 >> 0x10,0,0xff,0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),5,temp_v2 >> 8,0,0xff,0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),6,DAT_0057aa00,0,0xff,0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),7,DAT_0057aa01,0,0xff,0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),8,DAT_0057aa02,0,0xff,0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),9,DAT_0057aa03,0,0xff,0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),10,DAT_0057aa14,0,0x78,0);
  FUN_00340edc(*(unsigned int *)(param_1 + 0x10),0xb,0,1);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),0xc,(int)DAT_0057a664,0xfffffa24,0x5dc,0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),0xd,(int)DAT_0057a668,0xfffffa24,0x5dc,0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),0xe,(int)DAT_0057a666,0xfffffa24,0x5dc,0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),0xf,(int)DAT_0057a66a,0xfffffa24,0x5dc,0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),0x10,(int)DAT_0057a66c,0xfffffa24,0x5dc,0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),0x11,(int)DAT_0057a670,0xfffffa24,0x5dc,0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),0x12,(int)DAT_0057a66e,0xfffffa24,0x5dc,0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),0x13,(int)DAT_0057a672,0xfffffa24,0x5dc,0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),0x14,(int)DAT_0057a674,0xfffffa24,0x5dc,0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),0x15,(int)DAT_0057a678,0xfffffa24,0x5dc,0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),0x16,(int)DAT_0057a676,0xfffffa24,0x5dc,0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),0x17,(int)DAT_0057a67a,0xfffffa24,0x5dc,0);
  return;
}

} /* extern "C" */
