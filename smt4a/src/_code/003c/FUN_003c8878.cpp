/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8878` (_code @ 0x3c8878, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(unsigned char [104], unsigned char *, unsigned int);
int effBlockCopyDataB(unsigned int, int *, int);
int nodeListFree(unsigned int *);
int FUN_00350ee0(unsigned int *, unsigned char [104], int, unsigned int, int);
int FUN_00381874(unsigned int *);
int effMenuCreate(unsigned int *, unsigned int);
int handleHolderFree(unsigned int *);
int FUN_003c2df0(unsigned int, int, int);
int FUN_003ca0ec(...);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp158; /* 0x158: local_158 */
} param_1_stack;

extern unsigned char LAB_003c8a1c; /* 0x3c8a1c */
extern unsigned char LAB_00400002; /* 0x400002 */
extern unsigned int DAT_0059dbf4; /* 0x59dbf4 */
extern unsigned int DAT_0059dbfc; /* 0x59dbfc */
extern int DAT_0059dc04; /* 0x59dc04 */
extern unsigned int *DAT_0059dc1c; /* 0x59dc1c */
extern unsigned int *DAT_0059dc20; /* 0x59dc20 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: effBlockCopyDataB. */
extern int linkedFindItemByIndex(unsigned int, int);
/* Supplied declaration required: nodeListFree. */
/* Supplied declaration required: FUN_00350ee0. */
/* Supplied declaration required: FUN_00381874. */
/* Supplied declaration required: effMenuCreate. */
/* Supplied declaration required: handleHolderFree. */
extern int linkedObjGetValue(unsigned int *);
extern int formattedTextCopyLabel(unsigned int *, unsigned char *);
/* Supplied declaration required: FUN_003c2df0. */
/* Supplied declaration required: FUN_003ca0ec. */


unsigned char * FUN_003c8878(unsigned int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char *puVar4;
  unsigned char temp_v3 [200];
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7 [104];
  
  temp_v5 = 0;
  puVar4 = (unsigned char *)0x600001;
  if (DAT_0059dc1c != (unsigned int *)0x0) {
    FUN_00381874(DAT_0059dc20);
    temp_v5 = DAT_0059dc20[2];
    temp_v4 = formattedTextCopyLabel(DAT_0059dc20,temp_v3);
    temp_v6 = linkedObjGetValue(DAT_0059dc20);
    if (temp_v5 == 1) {
      handleHolderFree(DAT_0059dc20);
      DAT_0059dc20 = (unsigned int *)0x0;
      nodeListFree(DAT_0059dc1c);
      DAT_0059dc1c = (unsigned int *)0x0;
    }
  }
  else {
    DAT_0059dc1c = (unsigned int *)0x0;
    if ((param_1 & 8) != 0) {
      temp_v2 = 0;
      do {
        textFormatBuffer(temp_v7,&LAB_003c8a1c,temp_v2);
        FUN_00350ee0(DAT_0059dc1c,temp_v7,8,temp_v2,0);
        temp_v2 = temp_v2 + 1;
        param_1 = temp_v1;
      } while (temp_v2 < 0x16);
    }
    puVar1 = DAT_0059dc1c;
    effMenuCreate(DAT_0059dc1c,param_1);
    DAT_0059dc20 = puVar1;
    *puVar1 = 0xba;
    puVar1[1] = 0x1c;
  }
  if (temp_v5 == 2) {
    puVar4 = (unsigned char *)0x400000;
  }
  else if (temp_v5 == 1) {
    if (temp_v4 != 8) {
      temp_v0 = linkedFindItemByIndex(DAT_0059dbf4,-temp_v6);
      if (DAT_0059dc04 != temp_v0) {
        FUN_003ca0ec(DAT_0059dbf4);
        FUN_003c2df0(DAT_0059dbf4,DAT_0059dc04,temp_v0);
      }
    }
    else {
      FUN_003ca0ec(DAT_0059dbf4,DAT_0059dc04);
      effBlockCopyDataB(DAT_0059dbfc,&temp_v6,4);
    }
    puVar4 = &LAB_00400002;
  }
  return puVar4;
}

} /* extern "C" */
