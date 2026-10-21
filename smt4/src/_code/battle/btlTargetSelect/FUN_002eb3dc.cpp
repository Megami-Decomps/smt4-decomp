/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb3dc` (_code @ 0x2eb3dc, 0x1cc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002630e0(...);
int dataTable00FindById(...);
int FUN_002bd06c(...);
int textFormatBuffer(...);

typedef struct fn_002eb3dc_arg1 fn_002eb3dc_arg1;
struct fn_002eb3dc_arg1 {
    unsigned char pad_0x0[0x2];
    byte field_0x2; /* +0x2 */
    unsigned char pad_0x3[0x21];
    ushort field_0x24; /* +0x24 */
    ushort field_0x26; /* +0x26 */
    ushort field_0x28; /* +0x28 */
    ushort field_0x2a; /* +0x2a */
    ushort field_0x2c; /* +0x2c */
    ushort field_0x2e; /* +0x2e */
    ushort field_0x30; /* +0x30 */
    ushort field_0x32; /* +0x32 */
};

/* stack frame of param_8: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp40; /* 0x40: local_40 */
} param_8_stack;

extern unsigned char LAB_002eb5ac; /* 0x2eb5ac */
extern int *g_btlTargetSelect; /* 0x439c60 */

/* Supplied declaration required: FUN_002630e0. */
extern unsigned int FUN_0027db08(unsigned int);
extern unsigned char FUN_0029e9cc(fn_002eb3dc_arg1 *);
/* Supplied declaration required: dataTable00FindById. */
extern unsigned int FUN_002bce30(fn_002eb3dc_arg1 *, unsigned int);
/* Supplied declaration required: FUN_002bd06c. */
/* Supplied declaration required: textFormatBuffer. */


void FUN_002eb3dc(unsigned int *param_1,fn_002eb3dc_arg1 *param_2,unsigned int param_3,
                 unsigned int param_4,unsigned char param_5,unsigned char param_6,unsigned char param_7,
                 unsigned char param_8)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  unsigned char temp_v0;
  fn_002eb3dc_arg1 *pfVar3;
  unsigned int temp_v1;
  int temp_v2;
  float temp_v3;
  unsigned int uStack_3c;
  unsigned int *puStack_34;
  fn_002eb3dc_arg1 *temp_v4;
  unsigned int uStack_2c;
  unsigned int temp_v5;
  
  piVar1 = g_btlTargetSelect;
  puStack_34 = param_1;
  temp_v4 = param_2;
  uStack_2c = param_3;
  temp_v5 = param_4;
  dataTable00FindById();
  pfVar3 = temp_v4;
  FUN_002bd06c(temp_v4);
  textFormatBuffer(*piVar1 + 4,&LAB_002eb5ac,pfVar3);
  temp_v1 = FUN_002bce30(temp_v4,0);
  textFormatBuffer(*piVar1 + 0x2c,&LAB_002eb5ac,temp_v1);
  temp_v0 = FUN_0029e9cc(temp_v4);
  *(unsigned char *)(*piVar1 + 0x24) = temp_v0;
  *(unsigned int *)(*piVar1 + 0x28) = (unsigned int)param_2->field_0x2;
  *(unsigned char *)(*piVar1 + 0x4c) = (unsigned char)(param_2->field_0x24 >> 10);
  *(unsigned char *)(*piVar1 + 0x4d) = (unsigned char)(param_2->field_0x26 >> 10);
  *(unsigned char *)(*piVar1 + 0x4e) = (unsigned char)(param_2->field_0x28 >> 10);
  *(unsigned char *)(*piVar1 + 0x4f) = (unsigned char)(param_2->field_0x2a >> 10);
  *(unsigned char *)(*piVar1 + 0x50) = (unsigned char)(param_2->field_0x2c >> 10);
  *(unsigned char *)(*piVar1 + 0x51) = (unsigned char)(param_2->field_0x2e >> 10);
  *(unsigned char *)(*piVar1 + 0x52) = (unsigned char)(param_2->field_0x30 >> 10);
  *(unsigned char *)(*piVar1 + 0x53) = (unsigned char)(param_2->field_0x32 >> 10);
  *(char *)(*piVar1 + 0x54) = (char)param_3;
  *(char *)(*piVar1 + 0x55) = (char)temp_v5;
  *(unsigned char *)(*piVar1 + 0x56) = param_5;
  *(unsigned char *)(*piVar1 + 0x57) = param_6;
  *(unsigned char *)(*piVar1 + 0x58) = param_7;
  *(unsigned char *)(*piVar1 + 0x59) = param_8;
  temp_v2 = *piVar1;
  *(unsigned int *)(temp_v2 + 0x5c) = *param_1;
  *(unsigned int *)(temp_v2 + 0x60) = param_1[1];
  *(unsigned int *)(temp_v2 + 100) = param_1[2];
  temp_v1 = FUN_0027db08(0);
  FUN_002630e0(&temp_v3,0,temp_v1,temp_v2 + 0x5c);
  *(float *)(temp_v2 + 0x68) = temp_v3;
  *(unsigned int *)(temp_v2 + 0x6c) = uStack_3c;
  if ((int)temp_v3 >= 0x43520001) {
    *(unsigned char *)(temp_v2 + 0xe4) = 0;
    temp_v3 = temp_v3 - *(float *)(temp_v2 + 0x78);
  }
  else {
    *(unsigned char *)(temp_v2 + 0xe4) = 1;
    temp_v3 = (*(float *)(temp_v2 + 0x70) + *(float *)(temp_v2 + 0xd8)) - temp_v3;
  }
  *(float *)(temp_v2 + 0xf4) = temp_v3;
  return;
}

} /* extern "C" */
