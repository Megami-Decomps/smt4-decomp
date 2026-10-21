/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d4ba4` (_code @ 0x4d4ba4, 0x390 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdListBoxCreateDefaultFlags(unsigned int, int, int);
int jobSetText(unsigned int, unsigned char *);
int asdListBoxSetIntItem(...);
int asdListBoxSetByteValue(unsigned int, int);
int asdListBoxAddItems(void);
int asdListBoxSetToggleItem(...);
int FUN_003592dc(unsigned int);

typedef struct fn_004d4ba4_arg1 fn_004d4ba4_arg1;
struct fn_004d4ba4_arg1 {
    unsigned char pad_0x0[0x8];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x3];
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x73];
    undefined4 field_0x80; /* +0x80 */
    unsigned char pad_0x84[0x2320];
    undefined4 field_0x23a4; /* +0x23a4 */
    undefined4 field_0x23a8; /* +0x23a8 */
    undefined4 field_0x23ac; /* +0x23ac */
    unsigned char field_0x23b0; /* +0x23b0 */
    unsigned char pad_0x23b1[0x3];
    unsigned char field_0x23b4; /* +0x23b4 */
    unsigned char pad_0x23b5[0x3];
    undefined4 field_0x23b8; /* +0x23b8 */
    undefined4 field_0x23bc; /* +0x23bc */
    undefined4 field_0x23c0; /* +0x23c0 */
    unsigned char field_0x23c4; /* +0x23c4 */
    unsigned char pad_0x23c5[0x3];
    unsigned char field_0x23c8; /* +0x23c8 */
    unsigned char pad_0x23c9[0x3];
    unsigned char field_0x23cc; /* +0x23cc */
    unsigned char pad_0x23cd[0x3];
    unsigned char field_0x23d0; /* +0x23d0 */
    unsigned char pad_0x23d1[0x3];
    unsigned char field_0x23d4; /* +0x23d4 */
    unsigned char pad_0x23d5[0x3];
    undefined4 field_0x23d8; /* +0x23d8 */
    undefined4 field_0x23dc; /* +0x23dc */
    unsigned char field_0x23e0; /* +0x23e0 */
    unsigned char pad_0x23e1[0x3];
    unsigned char field_0x23e4; /* +0x23e4 */
    unsigned char pad_0x23e5[0x3];
    undefined4 field_0x23e8; /* +0x23e8 */
    unsigned char field_0x23ec; /* +0x23ec */
    unsigned char pad_0x23ed[0x3];
    unsigned char field_0x23f0; /* +0x23f0 */
    unsigned char pad_0x23f1[0x3];
    undefined4 field_0x23f4; /* +0x23f4 */
    undefined4 field_0x23f8; /* +0x23f8 */
    undefined4 field_0x23fc; /* +0x23fc */
};

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char LAB_004d4f38; /* 0x4d4f38 */

/* Supplied declaration required: jobStop. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: asdListBoxCreateDefaultFlags. */
/* Supplied declaration required: jobSetText. */
/* Supplied declaration required: asdListBoxSetIntItem. */
/* Supplied declaration required: asdListBoxSetByteValue. */
/* Supplied declaration required: asdListBoxAddItems. */
/* Supplied declaration required: asdListBoxSetToggleItem. */
/* Supplied declaration required: FUN_003592dc. */


void FUN_004d4ba4(int param_1,fn_004d4ba4_arg1 *param_2)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = jobIsValid(*(unsigned int *)(param_1 + 0x10));
  if (temp_v0 != 0) {
    FUN_003592dc(*(unsigned int *)(param_1 + 0x10));
    jobStop(*(unsigned int *)(param_1 + 0x10),0);
  }
  temp_v1 = param_2->field_0x80;
  asdListBoxCreateDefaultFlags(temp_v1,0x75,0);
  *(unsigned int *)(param_1 + 0x10) = temp_v1;
  asdListBoxAddItems();
  asdListBoxSetByteValue(*(unsigned int *)(param_1 + 0x10),1);
  jobSetText(*(unsigned int *)(param_1 + 0x10),&LAB_004d4f38);
  asdListBoxSetToggleItem(*(unsigned int *)(param_1 + 0x10),0);
  asdListBoxSetToggleItem(*(unsigned int *)(param_1 + 0x10),1);
  asdListBoxSetToggleItem(*(unsigned int *)(param_1 + 0x10),2);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),3,*(unsigned int *)&param_2->field_0x23b0,0,9,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),4,*(unsigned int *)&param_2->field_0x23b4,0,2,0);
  asdListBoxSetToggleItem(*(unsigned int *)(param_1 + 0x10),5);
  asdListBoxSetToggleItem(*(unsigned int *)(param_1 + 0x10),6);
  asdListBoxSetToggleItem(*(unsigned int *)(param_1 + 0x10),7);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),8,*(unsigned int *)&param_2->field_0x23c4,0,999,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),9,*(unsigned int *)&param_2->field_0x23c8,0,4,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),10,*(unsigned int *)&param_2->field_0x23cc,0,0x3f,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0xb,*(unsigned int *)&param_2->field_0x23d0,0,2,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0xc,*(unsigned int *)&param_2->field_0x23d4,0,8,0);
  asdListBoxSetToggleItem(*(unsigned int *)(param_1 + 0x10),0xd);
  asdListBoxSetToggleItem(*(unsigned int *)(param_1 + 0x10),0xe);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0xf,*(unsigned int *)&param_2->field_0x23e0,0,2,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x10,*(unsigned int *)&param_2->field_0x23e4,0,2,0);
  asdListBoxSetToggleItem(*(unsigned int *)(param_1 + 0x10),0x11);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x12,*(unsigned int *)&param_2->field_0x23ec,0,3,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x13,*(unsigned int *)&param_2->field_0x23f0,0,2,0);
  asdListBoxSetToggleItem(*(unsigned int *)(param_1 + 0x10),0x14);
  asdListBoxSetToggleItem(*(unsigned int *)(param_1 + 0x10),0x15);
  asdListBoxSetToggleItem(*(unsigned int *)(param_1 + 0x10),0x16);
  asdListBoxSetToggleItem(*(unsigned int *)(param_1 + 0x10),0x17);
  asdListBoxSetToggleItem(*(unsigned int *)(param_1 + 0x10),0x18);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x19,*(unsigned int *)&param_2[1].field_0x8,0,9,0);
  asdListBoxSetIntItem(*(unsigned int *)(param_1 + 0x10),0x1a,*(unsigned int *)&param_2[1].field_0xc,0,2,0);
  return;
}

} /* extern "C" */
