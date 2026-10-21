/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029da34` (_code @ 0x29da34, 0x1e0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001f4568(...);
int FUN_0024bc98(...);
int FUN_0024bda8(...);
int FUN_002907c4(...);
int FUN_00295660(...);
int asdTextDrawDirectoryEntry(...);
int FUN_0029ede8(...);
int devilGetRecord(...);
int textFormatBuffer(...);

typedef struct fn_0029da34_arg2 fn_0029da34_arg2;
struct fn_0029da34_arg2 {
    unsigned char pad_0x0[0x8];
    ushort field_0x8; /* +0x8 */
    byte field_0xa; /* +0xa */
    unsigned char pad_0xb[0x1];
    byte field_0xc; /* +0xc */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spB0; /* 0xb0: local_b0 */
} param_4_stack;

extern unsigned char LAB_0029dc18; /* 0x29dc18 */
extern unsigned char LAB_0029dc20; /* 0x29dc20 */
extern unsigned char LAB_0029dc2c; /* 0x29dc2c */
extern unsigned char LAB_0029dc34; /* 0x29dc34 */
extern unsigned char LAB_0029dc44; /* 0x29dc44 */
extern unsigned char LAB_0029dc50; /* 0x29dc50 */
extern unsigned char LAB_0029dc5c; /* 0x29dc5c */
extern unsigned char LAB_0029dc68; /* 0x29dc68 */
extern int DAT_0043da2c; /* 0x43da2c */
extern int DAT_0043da30; /* 0x43da30 */

/* Supplied declaration required: FUN_001f4568. */
/* Supplied declaration required: FUN_0024bc98. */
/* Supplied declaration required: FUN_0024bda8. */
/* Supplied declaration required: FUN_002907c4. */
/* Supplied declaration required: FUN_00295660. */
/* Supplied declaration required: asdTextDrawDirectoryEntry. */
/* Supplied declaration required: FUN_0029ede8. */
/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: textFormatBuffer. */


void FUN_0029da34(int param_1,unsigned int param_2,fn_0029da34_arg2 *param_3,unsigned int param_4)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  fn_0029da34_arg2 *pfVar3;
  int temp_v2;
  int iStack_ac;
  unsigned int temp_v3 [2];
  unsigned char temp_v4 [128];
  
  temp_v1 = DAT_0043da2c;
  pfVar3 = param_3;
  devilGetRecord();
  if (pfVar3 == (fn_0029da34_arg2 *)0x0) {
    *(unsigned char *)(temp_v1 + 0x4cb) = 0;
  }
  else {
    *(unsigned char *)(temp_v1 + 0x55c) = 1;
    *(unsigned char *)(temp_v1 + 0x4cb) = 1;
    temp_v0 = (pfVar3->field_0x8 & 0xff) >> 5;
    if (temp_v0 == (pfVar3->field_0x8 & 0x7ff) >> 8) {
      FUN_0029ede8(0x25,temp_v0,0xffffffff,0);
    }
    else {
      FUN_002907c4(&temp_v2);
      FUN_002907c4(temp_v3,(pfVar3->field_0x8 & 0x7ff) >> 8);
      textFormatBuffer(temp_v4,&LAB_0029dc18,&temp_v2,temp_v3);
      FUN_00295660(0x25,temp_v4);
    }
    FUN_0024bda8(temp_v4,pfVar3->field_0xa);
    FUN_00295660(0x26,temp_v4);
    FUN_0024bc98(temp_v4,(pfVar3->field_0x8 & 0x1f) >> 1);
    FUN_00295660(0x27,temp_v4);
    if (pfVar3->field_0xc == 0) {
      textFormatBuffer(temp_v4,&LAB_0029dc20);
    }
    if (pfVar3->field_0xc == 1) {
      textFormatBuffer(temp_v4,&LAB_0029dc2c);
    }
    if (pfVar3->field_0xc == 5) {
      textFormatBuffer(temp_v4,&LAB_0029dc34);
    }
    if (pfVar3->field_0xc == 6) {
      textFormatBuffer(temp_v4,&LAB_0029dc44);
    }
    if (pfVar3->field_0xc == 7) {
      textFormatBuffer(temp_v4,&LAB_0029dc50);
    }
    if (pfVar3->field_0xc == 8) {
      textFormatBuffer(temp_v4,&LAB_0029dc5c);
    }
    if (pfVar3->field_0xc == 9) {
      textFormatBuffer(temp_v4,&LAB_0029dc68);
    }
    FUN_00295660(0x28,temp_v4);
    FUN_001f4568(0,param_4,param_3,temp_v4);
    FUN_00295660(0x29,temp_v4);
    if (param_1 == 0) {
      param_1 = DAT_0043da30;
    }
    temp_v2 = 3;
    iStack_ac = param_1;
    temp_v3[0] = param_2;
    asdTextDrawDirectoryEntry(*(unsigned int *)(temp_v1 + 0x558),3,0xffffffff,0);
  }
  return;
}

} /* extern "C" */
