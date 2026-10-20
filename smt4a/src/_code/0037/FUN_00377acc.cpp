/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00377acc` (_code @ 0x377acc, 0x18c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(void);
int FUN_001aea28(unsigned int);

typedef struct fn_00377acc_arg0 fn_00377acc_arg0;
struct fn_00377acc_arg0 {
    undefined1 field_0x0; /* +0x0 */
    unsigned char pad_0x1[0x2f];
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    unsigned char field_0x38; /* +0x38 */
    unsigned char pad_0x39[0x37];
    int field_0x70; /* +0x70 */
    uint field_0x74; /* +0x74 */
    unsigned char pad_0x78[0xc4];
    undefined1 field_0x13c; /* +0x13c */
    undefined1 field_0x13d; /* +0x13d */
    unsigned char pad_0x13e[0x1];
    undefined1 field_0x13f; /* +0x13f */
    undefined1 field_0x140; /* +0x140 */
    unsigned char pad_0x141[0x33];
    ushort field_0x174; /* +0x174 */
    unsigned char pad_0x176[0x5];
    undefined1 field_0x17b; /* +0x17b */
    int field_0x17c; /* +0x17c */
    undefined4 *field_0x180; /* +0x180 */
    byte field_0x184; /* +0x184 */
    byte field_0x185; /* +0x185 */
};

typedef int romwright_code(...);
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_005806d4; /* 0x5806d4 */

/* Supplied declaration required: FUN_0019cac4. */
/* Supplied declaration required: FUN_001aea28. */
extern int FUN_004bb870(int);


void FUN_00377acc(fn_00377acc_arg0 *param_1,int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  int *unaff_r4;
  
  temp_v1 = DAT_005806d4;
  temp_v2 = 0;
  do {
    if (param_3 != 1) {
      if (param_3 == 2) {
        unaff_r4 = (int *)(DAT_005806d4 + temp_v2 * 0x10 + 0x4b7c);
      }
      else if (param_3 != 3) {
        if (param_3 == 4) {
          unaff_r4 = (int *)(DAT_005806d4 + temp_v2 * 0x10 + 0x4c80);
        }
      }
      else {
        unaff_r4 = (int *)(DAT_005806d4 + temp_v2 * 0x10 + 0x4a78);
      }
    }
    else {
      unaff_r4 = (int *)(DAT_005806d4 + temp_v2 * 0x10 + 0x4a78);
    }
    if (*unaff_r4 == param_2) {
      puVar3 = param_1->field_0x180;
      if (puVar3 != (unsigned int *)0x0) {
        param_3 = (unsigned int)param_1->field_0x184;
      }
      if (puVar3 != (unsigned int *)0x0 && param_3 != 0) {
        if (param_1->field_0x185 != 0) {
          if (puVar3[1] != 0) {
            FUN_001aea28(DAT_0056fcc0);
          }
          param_1->field_0x184 = 0;
        }
        else {
          *(unsigned int *)(puVar3[1] + 4) = *(unsigned int *)(puVar3[1] + 4) | 3;
          param_1->field_0x184 = 0;
          *(unsigned char *)(temp_v1 + param_1->field_0x17c * 8 + 0x3d91) = 0;
        }
      }
      temp_v1 = DAT_005806d4;
      if (param_1->field_0x180 != (undefined4 *)0x0) {
        if (param_1->field_0x185 != 0) {
          (**(romwright_code **)(*param_1->field_0x180 + 4))();
          param_1->field_0x180 = (unsigned int *)0x0;
        }
        param_1->field_0x180 = (unsigned int *)0x0;
        param_1->field_0x0 = 0;
        param_1->field_0x30 = 0;
        param_1->field_0x34 = 0xffffffff;
        *(unsigned int *)&param_1->field_0x38 = 1;
        param_1->field_0x13c = 0;
        param_1->field_0x13d = 0;
        param_1->field_0x13f = 0;
        param_1->field_0x140 = 0;
        *(int *)(temp_v1 + 0x3d78) = *(int *)(temp_v1 + 0x3d78) - 1;
      }
      param_1->field_0x70 = unaff_r4[1];
      temp_v0 = unaff_r4[2];
      param_1->field_0x74 = temp_v0;
      temp_v0 = temp_v0 & 0xffff;
      FUN_0019cac4();
      param_1->field_0x174 = *(unsigned short *)(temp_v0 + 2) & 0x7fff;
      temp_v1 = FUN_004bb870(param_1->field_0x70);
      if (temp_v1 != 0) {
        param_1->field_0x17b = (char)temp_v1;
      }
      param_1->field_0x17c = unaff_r4[3];
      return;
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x10) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
