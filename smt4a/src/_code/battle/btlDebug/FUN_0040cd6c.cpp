/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040cd6c` (_code @ 0x40cd6c, 0x508 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "battle/BtlMainAccess.h"
#include "romwright_types.h"

extern "C" {

int randBetween(int, int);
int FUN_003e7fa4(unsigned int *, int, int);
int FUN_003f0e20(unsigned int *, int);
int FUN_004a94a8(void);
int FUN_004a9588(...);
int FUN_004a9f00(...);
int VectorSignedToFloat(...);

typedef struct fn_0040cd6c_arg1 fn_0040cd6c_arg1;
struct fn_0040cd6c_arg1 {
    unsigned char pad_0x0[0x2];
    undefined2 field_0x2; /* +0x2 */
    unsigned char field_0x4; /* +0x4 */
    byte field_0x5; /* +0x5 */
    unsigned char pad_0x6[0xe];
    void *field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x4];
    unsigned char field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x3];
    char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x1];
    byte field_0x22; /* +0x22 */
    unsigned char pad_0x23[0x1];
    short field_0x24; /* +0x24 */
    short field_0x26; /* +0x26 */
    int field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x18];
    byte field_0x44; /* +0x44 */
};

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

extern unsigned int DAT_00571300; /* 0x571300 */
extern unsigned int DAT_00571304; /* 0x571304 */
extern unsigned int DAT_00571310; /* 0x571310 */
extern unsigned int DAT_00571314; /* 0x571314 */
extern unsigned int DAT_00571318; /* 0x571318 */
extern unsigned int DAT_0057131c; /* 0x57131c */
extern unsigned int DAT_00571320; /* 0x571320 */
extern unsigned int DAT_00571324; /* 0x571324 */
extern unsigned int DAT_00571330; /* 0x571330 */
extern unsigned int DAT_00571334; /* 0x571334 */
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
extern short DAT_0057a67c; /* 0x57a67c */
extern short DAT_0057a67e; /* 0x57a67e */
extern short DAT_0057a680; /* 0x57a680 */
extern short DAT_0057a682; /* 0x57a682 */
extern int g_btlUiBlock; /* 0x57a9c8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: randBetween. */
/* Supplied declaration required: FUN_003e7fa4. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004a94a8. */
/* Supplied declaration required: FUN_004a9588. */
/* Supplied declaration required: FUN_004a9f00. */


void FUN_0040cd6c(unsigned int param_1,fn_0040cd6c_arg1 *param_2)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int in_fpscr;
  float temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  
  puVar3 = (unsigned int *)reinterpret_cast<unsigned int *>(btlGetMainState());
  puVar4 = puVar3;
  FUN_003f0e20(puVar3,(int)*(short *)((int)param_2->field_0x14 + 0x6a));
  if (puVar4 == (unsigned int *)0x0) {
    param_2->field_0x2 = 0;
    return;
  }
  if (param_2->field_0x20 != '\0') {
    if ((param_2->field_0x20 == '\x01') &&
       ((param_2->field_0x26 < 0 || (temp_v4 = g_btlUiBlock, FUN_004a94a8(), temp_v4 == 0)))) {
      param_2->field_0x2 = 0;
      return;
    }
  }
  else {
    temp_v2 = *puVar4;
    temp_v6 = puVar4[1];
    if (!((DAT_00571318 & temp_v2) == 0 && (DAT_0057131c & temp_v6) == 0)) {
      FUN_003e7fa4(puVar3,(int)*(short *)((int)param_2->field_0x14 + 0x6a),0);
      if (0 < param_2->field_0x24) {
        temp_v10 = 0.01f;
        temp_v11 = 0;
        if (!((DAT_00571330 & *puVar4) == 0 && (DAT_00571334 & puVar4[1]) == 0)) {
          temp_v3 = randBetween((int)DAT_0057a66c,(int)DAT_0057a66e);
          temp_v9 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)((int)param_2->field_0x14 + 0x30) = temp_v9 * temp_v10;
          temp_v3 = randBetween((int)DAT_0057a670,(int)DAT_0057a672);
          temp_v9 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)((int)param_2->field_0x14 + 0x34) = temp_v9 * temp_v10;
          *(unsigned int *)((int)param_2->field_0x14 + 0x38) = temp_v11;
        }
        else {
          temp_v3 = randBetween((int)DAT_0057a664,(int)DAT_0057a666);
          temp_v9 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)((int)param_2->field_0x14 + 0x30) = temp_v9 * temp_v10;
          temp_v3 = randBetween((int)DAT_0057a668,(int)DAT_0057a66a);
          temp_v9 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)((int)param_2->field_0x14 + 0x34) = temp_v9 * temp_v10;
          *(unsigned int *)((int)param_2->field_0x14 + 0x38) = temp_v11;
        }
      }
      temp_v4 = param_2->field_0x28;
      if ((temp_v4 != 0) && (temp_v4 != 2)) {
        if ((temp_v4 != 1) && (temp_v4 != 3)) {
          if (temp_v4 == 4) {
            temp_v11 = 0;
          }
          else {
            if (temp_v4 != 5) {
              param_2->field_0x2 = 0;
              return;
            }
            temp_v11 = 1;
          }
          temp_v4 = g_btlUiBlock;
          FUN_004a9588(g_btlUiBlock,*(unsigned int *)&param_2[1].field_0x4,temp_v11,0,
                       param_2->field_0x44 != 0,1);
          param_2->field_0x26 = (short)temp_v4;
          temp_v4 = g_btlUiBlock;
          FUN_004a9588(g_btlUiBlock,*(unsigned int *)&param_2->field_0x1c,temp_v11,1,
                       param_2->field_0x44 != 0,1);
          param_2->field_0x26 = (short)temp_v4;
        }
        else {
          temp_v4 = g_btlUiBlock;
          FUN_004a9588(g_btlUiBlock,*(unsigned int *)&param_2[1].field_0x4);
          param_2->field_0x26 = (short)temp_v4;
        }
      }
      else {
        temp_v4 = g_btlUiBlock;
        FUN_004a9588(g_btlUiBlock,*(unsigned int *)&param_2[1].field_0x4);
        param_2->field_0x26 = (short)temp_v4;
      }
    }
    else {
      if (((DAT_00571300 | DAT_00571310 | DAT_00571320) & temp_v2) == 0 &&
          ((DAT_00571304 | DAT_00571314 | DAT_00571324) & temp_v6) == 0) {
        param_2->field_0x2 = 0;
        return;
      }
      temp_v4 = (int)*(short *)((int)puVar4 + 0x6e);
      if ((temp_v2 & DAT_00571320) != 0 || (temp_v6 & DAT_00571324) != 0) {
        temp_v4 = 4;
      }
      temp_v7 = 0;
      temp_v8 = 0;
      if (0 < param_2->field_0x24) {
        if (temp_v4 != 4) {
          temp_v0 = randBetween((int)DAT_0057a674,(int)DAT_0057a676);
          temp_v1 = randBetween((int)DAT_0057a678,(int)DAT_0057a67a);
        }
        else {
          temp_v0 = randBetween((int)DAT_0057a67c,(int)DAT_0057a67e);
          temp_v1 = randBetween((int)DAT_0057a680,(int)DAT_0057a682);
        }
        temp_v8 = (int)temp_v1;
        temp_v7 = (int)temp_v0;
        temp_v11 = VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v3 = VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)((int)param_2->field_0x14 + 0x30) = temp_v11;
        *(unsigned int *)((int)param_2->field_0x14 + 0x34) = temp_v3;
      }
      temp_v5 = param_2->field_0x28;
      if ((temp_v5 != 0) && (temp_v5 != 2)) {
        if ((temp_v5 != 1) && (temp_v5 != 3)) {
          if (temp_v5 == 4) {
            temp_v11 = 0;
          }
          else {
            if (temp_v5 != 5) {
              param_2->field_0x2 = 0;
              return;
            }
            temp_v11 = 1;
          }
          temp_v5 = g_btlUiBlock;
          FUN_004a9f00(g_btlUiBlock,temp_v4,*(unsigned int *)&param_2[1].field_0x4,temp_v11,0,
                       param_2->field_0x44 != 0,temp_v7,temp_v8);
          param_2->field_0x26 = (short)temp_v5;
          temp_v5 = g_btlUiBlock;
          FUN_004a9f00(g_btlUiBlock,temp_v4,*(unsigned int *)&param_2->field_0x1c,temp_v11,1,
                       param_2->field_0x44 != 0,temp_v7,temp_v8);
          param_2->field_0x26 = (short)temp_v5;
        }
        else {
          temp_v7 = g_btlUiBlock;
          FUN_004a9f00(g_btlUiBlock,temp_v4,*(unsigned int *)&param_2[1].field_0x4);
          param_2->field_0x26 = (short)temp_v7;
        }
      }
      else {
        temp_v7 = g_btlUiBlock;
        FUN_004a9f00(g_btlUiBlock,temp_v4,*(unsigned int *)&param_2[1].field_0x4);
        param_2->field_0x26 = (short)temp_v7;
      }
      if (param_2->field_0x22 == 0) {
        param_2->field_0x5 = param_2->field_0x5 | 4;
      }
    }
    param_2->field_0x20 = '\x01';
  }
  param_2->field_0x2 = 1;
  return;
}

} /* extern "C" */
