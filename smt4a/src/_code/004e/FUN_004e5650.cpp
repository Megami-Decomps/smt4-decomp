/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e5650` (_code @ 0x4e5650, 0x1d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192550(void);
int FUN_001aba54(void);
int FUN_003e8bb0(...);
int FUN_004f7724(unsigned int, unsigned int, int, int);
int FUN_004f7ea8(unsigned int, unsigned int, int, int);
int FUN_004f9024(unsigned int, unsigned int, int, int);

typedef struct fn_004e5650_arg1 fn_004e5650_arg1;
struct fn_004e5650_arg1 {
    unsigned char pad_0x0[0x20];
    void *field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x4];
    short *field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x571];
    char field_0x59d; /* +0x59d */
};

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

extern unsigned int DAT_00571150; /* 0x571150 */
extern unsigned int DAT_00571154; /* 0x571154 */
extern unsigned int DAT_00571160; /* 0x571160 */
extern unsigned int DAT_00571164; /* 0x571164 */
extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */
extern unsigned int DAT_00571170; /* 0x571170 */
extern unsigned int DAT_00571174; /* 0x571174 */
extern unsigned int DAT_00573808; /* 0x573808 */

/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_004f7724. */
/* Supplied declaration required: FUN_004f7ea8. */
/* Supplied declaration required: FUN_004f9024. */


void FUN_004e5650(unsigned int *param_1,fn_004e5650_arg1 *param_2)

{
/* irregular: 6 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7 [5];
  unsigned int temp_v8;
  
  temp_v6 = (int)param_2->field_0x59d;
  temp_v5 = (unsigned int)param_2->field_0x28[0xe0];
  param_2->field_0x59d = '\0';
  temp_v0 = param_2->field_0x28[0xdf];
  if (temp_v0 == 1) {
    temp_v2 = *(unsigned int *)param_2->field_0x20;
    temp_v3 = *(unsigned int *)((int)param_2->field_0x20 + 4);
    temp_v5 = DAT_00571150 | DAT_00571160 | DAT_00571170;
    temp_v1 = DAT_00571154 | DAT_00571164 | DAT_00571174;
    FUN_003e8bb0(temp_v7,*param_1);
    FUN_003e8bb0(temp_v7,*param_1,param_2->field_0x20);
    temp_v7[0] = temp_v7[0] & 0xffff;
    FUN_004f9024(DAT_00573808,(temp_v8 & 0xffff) >> 8,(temp_v5 & temp_v2) == 0 && (temp_v1 & temp_v3) == 0,
                 temp_v6);
    return;
  }
  temp_v1 = temp_v5;
  if (temp_v0 != 2 && temp_v0 != 3) {
    if (temp_v0 != 8) {
      return;
    }
    FUN_00192550();
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v1 + 0x32);
    if (temp_v1 == 0) {
      FUN_004f7724(DAT_00573808,temp_v5,
                   (*(unsigned int *)((int)param_2->field_0x20 + 4) & DAT_0057116c) == 0 &&
                   (DAT_00571168 & *(unsigned int *)param_2->field_0x20) == 0,temp_v6);
      return;
    }
  }
  temp_v5 = temp_v1;
  FUN_001aba54();
  temp_v5 = (*(unsigned int *)(temp_v5 + 0x28) & 0x1ff) >> 5;
  temp_v3 = *(unsigned int *)param_2->field_0x20;
  temp_v2 = *(unsigned int *)((int)param_2->field_0x20 + 4);
  if (!(((DAT_00571150 | DAT_00571160 | DAT_00571170) & temp_v3) == 0 &&
       ((DAT_00571154 | DAT_00571164 | DAT_00571174) & temp_v2) == 0)) {
    temp_v4 = (temp_v5 == 2 || temp_v5 == 3) || temp_v5 == 4;
  }
  else {
    temp_v4 = 1;
    if ((temp_v2 & DAT_0057116c) != 0 || (temp_v3 & DAT_00571168) != 0) {
      temp_v4 = (temp_v5 != 2 && temp_v5 != 3) && temp_v5 != 4;
    }
  }
  FUN_004f7ea8(DAT_00573808,temp_v1,temp_v4,temp_v6);
  return;
}

} /* extern "C" */
