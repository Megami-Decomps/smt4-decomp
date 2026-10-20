/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001bf200` (_code @ 0x1bf200, 0x1c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001cb490(int);
int nnnstdMemCpy(...);

typedef struct fn_001bf200_arg0 fn_001bf200_arg0;
typedef struct fn_001bf200_arg1 fn_001bf200_arg1;
struct fn_001bf200_arg0 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x3];
    undefined1 field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3];
    uint field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x14];
    uint field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x14];
    int field_0x44; /* +0x44 */
};
struct fn_001bf200_arg1 {
    unsigned char pad_0x0[0x8];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x3];
    int field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x17];
    unsigned char field_0x2c; /* +0x2c */
    unsigned char pad_0x2d[0x17];
    unsigned char field_0x44; /* +0x44 */
    unsigned char pad_0x45[0x37];
    unsigned char field_0x7c; /* +0x7c */
    unsigned char pad_0x7d[0x3];
    uint field_0x80; /* +0x80 */
    int field_0x84; /* +0x84 */
};

extern int g_commandBufferCursor; /* 0x5b40e0 */

/* Supplied declaration required: FUN_001cb490. */
/* Supplied declaration required: nnnstdMemCpy. */


void FUN_001bf200(fn_001bf200_arg0 *param_1,fn_001bf200_arg1 *param_2)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  void *pvVar3;
  short *psVar4;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int unaff_r7;
  unsigned int temp_v6;
  unsigned char temp_v7;
  
  temp_v0 = 0;
  temp_v2 = param_2->field_0x84;
  if (temp_v2 != 0) {
    unaff_r7 = temp_v2 + (int)&param_2->field_0x84;
  }
  pvVar3 = param_1->field_0x8;
  if (temp_v2 == 0) {
    unaff_r7 = 0;
  }
  temp_v7 = 0;
  temp_v2 = (param_2->field_0x10 >> 0x1f) + 1;
  if (pvVar3 != (void *)0x0) {
    temp_v4 = *(int *)((int)pvVar3 + 0x84);
    if (temp_v4 != 0) {
      temp_v0 = temp_v4 + (int)pvVar3 + 0x84;
    }
    temp_v7 = unaff_r7 == temp_v0;
    if (temp_v2 == (*(int *)((int)pvVar3 + 0x10) >> 0x1f) + 1) goto LAB_001bf288;
  }
  FUN_001cb490(temp_v2);
  if (temp_v2 == 0) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 2;
  }
  param_1->field_0x10 = temp_v1;
  param_1->field_0x44 = temp_v2;
LAB_001bf288:
  if (!temp_v7) {
    temp_v6 = *(unsigned int *)(unaff_r7 + 0x3c);
    nnnstdMemCpy(g_commandBufferCursor,*(unsigned int *)(unaff_r7 + 0x38),temp_v6);
    g_commandBufferCursor = g_commandBufferCursor + (temp_v6 & 0xfffffffc);
  }
  temp_v6 = param_2->field_0x80;
  nnnstdMemCpy(g_commandBufferCursor,*(unsigned int *)&param_2->field_0x7c);
  temp_v3 = 0;
  g_commandBufferCursor = g_commandBufferCursor + (temp_v6 & 0xfffffffc);
  temp_v5 = *(int *)(unaff_r7 + 0x40);
  temp_v0 = *(int *)(temp_v5 + param_2->field_0xc * 4 + 8);
  temp_v4 = 0;
  if (temp_v4 < *(int *)(temp_v0 + 0x1c)) {
    do {
      psVar4 = (short *)(*(int *)(temp_v0 + 0x18) + temp_v0 + temp_v4 * 0x14);
      if (*psVar4 == 0) {
        temp_v3 = temp_v3 | ((*(unsigned int *)(psVar4 + 2) & 1) << ((unsigned short)psVar4[1] & 0xff));
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *(int *)(temp_v0 + 0x1c));
  }
  param_1->field_0x14 = param_1->field_0x14 | temp_v3;
  if (temp_v2 != 0) {
    temp_v6 = 0;
    temp_v0 = *(int *)(temp_v5 + param_2->field_0x10 * 4 + 8);
    temp_v2 = 0;
    if (temp_v2 < *(int *)(temp_v0 + 0x1c)) {
      do {
        psVar4 = (short *)(*(int *)(temp_v0 + 0x18) + temp_v0 + temp_v2 * 0x14);
        if (*psVar4 == 0) {
          temp_v6 = temp_v6 | ((*(unsigned int *)(psVar4 + 2) & 1) << ((unsigned short)psVar4[1] & 0xff));
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < *(int *)(temp_v0 + 0x1c));
    }
    param_1->field_0x2c = param_1->field_0x2c | temp_v6;
  }
  param_1->field_0x8 = param_2;
  return;
}

} /* extern "C" */
