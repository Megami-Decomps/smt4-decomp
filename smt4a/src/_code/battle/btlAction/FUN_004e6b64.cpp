/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e6b64` (_code @ 0x4e6b64, 0x364 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable04FindById(...);
int FUN_003e8bb0(...);
int FUN_004de7a0(...);

typedef struct fn_004e6b64_arg1 fn_004e6b64_arg1;
struct fn_004e6b64_arg1 {
    unsigned char pad_0x0[0x20];
    void *field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x14];
    byte field_0x38; /* +0x38 */
    unsigned char pad_0x39[0x537];
    int field_0x570; /* +0x570 */
};

/* stack frame of param_3: 7 slot(s), 18 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned char sp258; /* 0x258: local_258 */
    unsigned char sp259; /* 0x259: local_259 */
    unsigned short sp262; /* 0x262: local_262 */
    unsigned short sp278; /* 0x278: local_278 */
} param_3_stack;

extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */
extern unsigned int DAT_00571178; /* 0x571178 */
extern unsigned int DAT_0057117c; /* 0x57117c */
extern unsigned int DAT_00571188; /* 0x571188 */
extern unsigned int DAT_0057118c; /* 0x57118c */
extern unsigned int DAT_00571260; /* 0x571260 */
extern unsigned int DAT_00571264; /* 0x571264 */

extern unsigned int btlGetMainState(void);
extern int lcgRandomRange(unsigned int);
/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_004de7a0. */
extern int FUN_004e83ac(int *, fn_004e6b64_arg1 *, int);


void FUN_004e6b64(int *param_1,fn_004e6b64_arg1 *param_2,short *param_3)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  short temp_v3;
  unsigned int temp_v4;
  short *psVar6;
  int *piVar7;
  short *psVar8;
  unsigned int *puVar9;
  unsigned char *pbVar10;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  short temp_v10 [11];
  short temp_v11;
  char temp_v12;
  char temp_v13;
  short asStack_244 [266];
  int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  
  temp_v4 = btlGetMainState();
  FUN_003e8bb0(temp_v10,temp_v4,param_2->field_0x20);
  psVar8 = asStack_244;
  temp_v6 = 0x85;
  psVar6 = param_3;
  do {
    *psVar6 = -1;
    psVar6[1] = 0;
    *psVar8 = -1;
    psVar8[1] = 0;
    temp_v6 = temp_v6 - 1;
    psVar6 = psVar6 + 2;
    psVar8 = psVar8 + 2;
  } while (temp_v6 != 0);
  if (param_2->field_0x570 == 0) {
    temp_v6 = (int)temp_v11;
    temp_v14 = 0;
    temp_v15 = 0;
    temp_v16 = 0;
    if ((((temp_v6 != 0) && (dataTable04FindById(), temp_v6 != 0)) && (*(char *)(temp_v6 + 0x23) == '\x04'))
       && (*(char *)(temp_v6 + 0x2f) == '\0')) {
      temp_v16 = 1;
    }
    temp_v8 = (int)temp_v12;
    temp_v6 = (int)temp_v13;
    if (temp_v10[0] == 6) {
      temp_v14 = 1;
    }
    else if (temp_v10[0] == 1) {
      temp_v15 = 1;
    }
    temp_v7 = 0;
    temp_v9 = temp_v6;
    if (((*(unsigned int *)(*param_1 + 0x45a0) & DAT_00571260) == 0 &&
         (*(unsigned int *)(*param_1 + 0x45a4) & DAT_00571264) == 0) && (temp_v9 = temp_v8, temp_v8 < temp_v6))
    {
      temp_v6 = lcgRandomRange((temp_v6 - temp_v8) & 0xffff);
      temp_v9 = temp_v8 + temp_v6;
    }
    do {
      if (((&param_2->field_0x38)[temp_v7] != 0) &&
         ((puVar9 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v7 * 0x408),
          (DAT_0057117c & puVar9[1]) != 0 || (DAT_00571178 & *puVar9) != 0 ||
          (temp_v6 = FUN_004e83ac(param_1,param_2,temp_v7), temp_v6 != 0)))) {
        (&param_2->field_0x38)[temp_v7] = 0;
      }
      temp_v2 = DAT_0057118c;
      temp_v1 = DAT_00571188;
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 0x6d);
    temp_v0 = (char)temp_v9;
    if (temp_v14 == 0) {
      temp_v8 = 0;
      temp_v6 = 0;
      do {
        if ((&param_2->field_0x38)[temp_v6] != 0) {
          temp_v5 = 0;
          temp_v7 = (int)*(short *)(*(int *)(*param_1 + 0x1ed4) + temp_v6 * 0x1d0 + 0x68);
          if (((-1 < temp_v7) &&
              (puVar9 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v7 * 0x408),
              puVar9 != (unsigned int *)0x0)) && ((*puVar9 & temp_v1) != 0 || (puVar9[1] & temp_v2) != 0)) {
            temp_v5 = 1;
          }
          param_3[temp_v8 * 2] = (short)temp_v6;
          (param_3 + temp_v8 * 2)[1] = (short)temp_v9;
          if ((temp_v5 & temp_v15 & ~temp_v16) != 0) {
            if (*(char *)(*param_1 + 0xa0) < '\0') {
              *(char *)(*param_1 + 0xa0) = temp_v0 * '\x03';
            }
            if (*(char *)(*param_1 + 0xa1) < '\0') {
              *(char *)(*param_1 + 0xa1) = temp_v0 * '\x03';
            }
          }
          temp_v8 = temp_v8 + 1;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0x85);
      return;
    }
    temp_v3 = 0;
    temp_v8 = 0x85;
    pbVar10 = &param_2->field_0x38;
    temp_v6 = 0;
    do {
      temp_v7 = temp_v6;
      if (*pbVar10 != 0) {
        temp_v7 = temp_v6 + 1;
        asStack_244[temp_v6 * 2] = temp_v3;
        asStack_244[temp_v6 * 2 + 1] = 0;
      }
      temp_v8 = temp_v8 - 1;
      temp_v3 = temp_v3 + 1;
      pbVar10 = pbVar10 + 1;
      temp_v6 = temp_v7;
    } while (temp_v8 != 0);
    if (temp_v7 != 0) {
      if ((!((*(unsigned int *)((int)param_2->field_0x20 + 4) & DAT_0057116c) == 0 &&
            (DAT_00571168 & *(unsigned int *)param_2->field_0x20) == 0)) && (temp_v7 >= 2)) {
        piVar7 = param_1;
        FUN_004de7a0(param_1,param_2,asStack_244,temp_v7);
        temp_v3 = (short)(int)piVar7;
      }
      else {
        temp_v6 = lcgRandomRange((temp_v7 - 1U) & 0xffff);
        temp_v3 = asStack_244[temp_v6 * 2];
        asStack_244[temp_v6 * 2 + 1] = asStack_244[temp_v6 * 2 + 1] + 1;
      }
      param_3[1] = 1;
      *param_3 = temp_v3;
      if (*(char *)(*param_1 + 0xa0) < '\0') {
        *(char *)(*param_1 + 0xa0) = temp_v0;
      }
      if (*(char *)(*param_1 + 0xa1) < '\0') {
        *(char *)(*param_1 + 0xa1) = temp_v0;
      }
    }
  }
  return;
}

} /* extern "C" */
