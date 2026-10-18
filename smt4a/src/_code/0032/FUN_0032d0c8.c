/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032d0c8` (_code @ 0x32d0c8, 0x228 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0032d0c8_arg2 fn_0032d0c8_arg2;
struct fn_0032d0c8_arg2 {
    unsigned char pad_0x0[0xa];
    ushort field_0xa; /* +0xa */
    byte field_0xc; /* +0xc */
    unsigned char pad_0xd[0x1];
    byte field_0xe; /* +0xe */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spB0; /* 0xb0: local_b0 */
} param_4_stack;

extern unsigned char LAB_0032d2f4; /* 0x32d2f4 */
extern unsigned char LAB_0032d2fc; /* 0x32d2fc */
extern unsigned char LAB_0032d308; /* 0x32d308 */
extern unsigned char LAB_0032d324; /* 0x32d324 */
extern unsigned char LAB_0032d334; /* 0x32d334 */
extern unsigned char LAB_0032d340; /* 0x32d340 */
extern unsigned char LAB_0032d34c; /* 0x32d34c */
extern unsigned char LAB_0032d358; /* 0x32d358 */
extern unsigned char LAB_0032d364; /* 0x32d364 */
extern unsigned char LAB_0032d370; /* 0x32d370 */
extern unsigned char LAB_0032d37c; /* 0x32d37c */
extern int DAT_0057f0c8; /* 0x57f0c8 */
extern int DAT_0057f0cc; /* 0x57f0cc */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_0020d164. */
/* Supplied declaration required: FUN_00230c1c. */
/* Supplied declaration required: FUN_002a1f60. */
/* Supplied declaration required: FUN_002ad414. */
/* Supplied declaration required: FUN_002c0940. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_00359974. */


void FUN_0032d0c8(int param_1,unsigned int param_2,fn_0032d0c8_arg2 *param_3,unsigned int param_4)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  fn_0032d0c8_arg2 *pfVar3;
  int temp_v2;
  int iStack_ac;
  unsigned int temp_v3 [2];
  unsigned char temp_v4 [128];
  
  temp_v1 = DAT_0057f0c8;
  pfVar3 = param_3;
  FUN_00184310();
  if (pfVar3 == (fn_0032d0c8_arg2 *)0x0) {
    *(unsigned char *)(temp_v1 + 0x5ea) = 0;
  }
  else {
    *(unsigned char *)(temp_v1 + 0x67c) = 1;
    *(unsigned char *)(temp_v1 + 0x5ea) = 1;
    temp_v0 = (pfVar3->field_0xa & 0xff) >> 5;
    if (temp_v0 == (pfVar3->field_0xa & 0x7ff) >> 8) {
      FUN_00359974(0x25,temp_v0,0xffffffff,0);
    }
    else {
      FUN_002c0940(&temp_v2);
      FUN_002c0940(temp_v3,(pfVar3->field_0xa & 0x7ff) >> 8);
      FUN_00100388(temp_v4,&LAB_0032d2f4,&temp_v2,temp_v3);
      FUN_003180c4(0x25,temp_v4);
    }
    FUN_0020d164(temp_v4,pfVar3->field_0xc);
    FUN_003180c4(0x26,temp_v4);
    FUN_00230c1c(temp_v4,(pfVar3->field_0xa & 0x1f) >> 1);
    FUN_003180c4(0x27,temp_v4);
    if (pfVar3->field_0xe == 0) {
      FUN_00100388(temp_v4,&LAB_0032d2fc);
    }
    if (pfVar3->field_0xe == 1) {
      FUN_00100388(temp_v4,&LAB_0032d308);
    }
    if (pfVar3->field_0xe == 5) {
      FUN_00100388(temp_v4,&LAB_0032d324);
    }
    if (pfVar3->field_0xe == 6) {
      FUN_00100388(temp_v4,&LAB_0032d334);
    }
    if (pfVar3->field_0xe == 7) {
      FUN_00100388(temp_v4,&LAB_0032d340);
    }
    if (pfVar3->field_0xe == 8) {
      FUN_00100388(temp_v4,&LAB_0032d34c);
    }
    if (pfVar3->field_0xe == 9) {
      FUN_00100388(temp_v4,&LAB_0032d358);
    }
    if (pfVar3->field_0xe == 0xb) {
      FUN_00100388(temp_v4,&LAB_0032d364);
    }
    if (pfVar3->field_0xe == 0xc) {
      FUN_00100388(temp_v4,&LAB_0032d370);
    }
    if (pfVar3->field_0xe == 0xd) {
      FUN_00100388(temp_v4,&LAB_0032d37c);
    }
    FUN_003180c4(0x28,temp_v4);
    FUN_002ad414(0,param_4,param_3,temp_v4);
    FUN_003180c4(0x29,temp_v4);
    if (param_1 == 0) {
      param_1 = DAT_0057f0cc;
    }
    temp_v2 = 3;
    iStack_ac = param_1;
    temp_v3[0] = param_2;
    FUN_002a1f60(*(unsigned int *)(temp_v1 + 0x678),2,0xffffffff,0);
  }
  return;
}
