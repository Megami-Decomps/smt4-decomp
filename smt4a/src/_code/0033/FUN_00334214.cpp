/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00334214` (_code @ 0x334214, 0x1a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(...);
int FUN_0026fd50(...);
int FUN_0034dae0(...);

typedef struct fn_00334214_arg0 fn_00334214_arg0;
struct fn_00334214_arg0 {
    unsigned char pad_0x0[0x34];
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
    undefined4 field_0x40; /* +0x40 */
    unsigned char pad_0x44[0x1e];
    ushort field_0x62; /* +0x62 */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern unsigned char DAT_00588fd0; /* 0x588fd0 */

extern int btlMainIsRunning(void);
/* Supplied declaration required: FUN_0019cac4. */
extern int FUN_002626e0(void);
/* Supplied declaration required: FUN_0026fd50. */
extern int FUN_00291e14(void);
extern int FUN_002b4dcc(fn_00334214_arg0 *);
/* Supplied declaration required: FUN_0034dae0. */


void FUN_00334214(fn_00334214_arg0 *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  fn_00334214_arg0 *pfVar7;
  unsigned int temp_v6;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00588fd0 + 0x4));
  temp_v5 = 1;
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x2010) = 1;
  pfVar7 = param_1;
  temp_v3 = param_2;
  temp_v6 = param_4;
  if (param_2 != 0) {
    *(unsigned char *)(temp_v0 + 0x2017) = 7;
    temp_v2 = FUN_002626e0();
    if (temp_v2 != 0) {
      *(unsigned char *)(temp_v0 + 0x2017) = 0x10;
      param_1->field_0x34 = 0;
      param_1->field_0x38 = 0;
      param_1->field_0x3c = 0;
      param_1->field_0x40 = 0;
    }
  }
  else {
    temp_v2 = btlMainIsRunning();
    if ((temp_v2 == 0) || (temp_v2 = FUN_00291e14(), temp_v2 == 0)) {
      temp_v1 = 2;
    }
    else {
      temp_v1 = 0x11;
    }
    *(unsigned char *)(temp_v0 + 0x2017) = temp_v1;
  }
  FUN_0026fd50(temp_v0 + 0x1390,param_1,0,param_4,pfVar7,temp_v3,param_3,temp_v6);
  temp_v1 = (unsigned char)param_3;
  if (param_2 != 0) {
    temp_v3 = FUN_002626e0();
    if (temp_v3 != 0) {
      FUN_0034dae0(temp_v0 + 0x1390,param_1->field_0x62);
    }
    else {
      temp_v4 = (unsigned int)param_1->field_0x62;
      FUN_0019cac4();
      if (temp_v4 != 0) {
        *(unsigned int *)(temp_v0 + 0x1398) = *(unsigned int *)(temp_v4 + 4);
        *(unsigned int *)(temp_v0 + 0x139c) = *(unsigned int *)(temp_v4 + 8);
        temp_v3 = FUN_002b4dcc(param_1);
        *(int *)(temp_v0 + 0x13a0) = temp_v3;
        *(unsigned int *)(temp_v0 + 0x13a4) = *(unsigned int *)(temp_v4 + 8);
        if (temp_v3 < 0) {
          *(unsigned int *)(temp_v0 + 0x13a0) = *(unsigned int *)(temp_v4 + 4);
        }
      }
    }
  }
  *(unsigned char *)(temp_v0 + 0x2024) = temp_v1;
  *(unsigned char *)(temp_v0 + 0x20b0) = 1;
  *(unsigned char *)(temp_v0 + 0x2025) = 0;
  if (-1 < (short)param_1->field_0x62) {
    temp_v4 = (unsigned int)param_1->field_0x62;
    FUN_0019cac4();
    if (temp_v4 == 0) {
      temp_v5 = 0;
    }
    else {
      temp_v5 = (*(unsigned short *)(temp_v4 + 0x16) & 0x400) == 0;
      if (((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) != 0) && (*(char *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x2017) == '\x11')) {
        temp_v5 = 0;
      }
    }
  }
  *(unsigned char *)(temp_v0 + 0x2032) = temp_v5;
  if ((!temp_v5) && (*(char *)(temp_v0 + 0x137d) != '\0')) {
    *(unsigned char *)(temp_v0 + 0x137d) = 0;
  }
  return;
}

} /* extern "C" */
