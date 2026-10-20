/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00342494` (_code @ 0x342494, 0x190 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001527d8(...);
int FUN_00164b5c(int, int, int, int, int, int);
int FUN_00183bb0(void);
int drawSetColorFromRGBA8(unsigned int);
int FUN_0025cc78(...);
int FUN_002e1b64(unsigned int, int, int, int);

typedef struct fn_00342494_arg0 fn_00342494_arg0;
struct fn_00342494_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x8];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    void *field_0x14; /* +0x14 */
    float field_0x18; /* +0x18 */
    float field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x18];
    undefined4 field_0x38; /* +0x38 */
    unsigned char pad_0x3c[0xa];
    undefined2 field_0x46; /* +0x46 */
    ushort field_0x48; /* +0x48 */
    unsigned char pad_0x4a[0x2];
    undefined4 field_0x4c; /* +0x4c */
    unsigned char pad_0x50[0x8];
    float field_0x58; /* +0x58 */
    undefined1 field_0x5c; /* +0x5c */
    unsigned char pad_0x5d[0x43];
    undefined4 field_0xa0; /* +0xa0 */
    void *field_0xa4; /* +0xa4 */
    float field_0xa8; /* +0xa8 */
    unsigned char pad_0xac[0x4];
    undefined4 field_0xb0; /* +0xb0 */
};

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: FUN_00164b5c. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_0025cc78. */
/* Supplied declaration required: FUN_002e1b64. */


void FUN_00342494(fn_00342494_arg0 *param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 6 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  void *pvVar3;
  int temp_v2;
  
  if ((param_2 == 0) || (*(short *)(param_2 + 0x34) != 0)) {
    temp_v1 = *(int *)(param_3 + 8) + param_5;
    temp_v2 = *(int *)(param_3 + 4) + param_4;
    if (*(char *)(param_2 + 0x21) != '\0') {
      FUN_00164b5c(2,0x2e,0x19,temp_v2,temp_v1,0x65);
    }
    else {
      FUN_00164b5c(2,0x2e,0x18,temp_v2,temp_v1,0x65);
    }
  }
  else {
    FUN_00164b5c(2,0x2e,0x25,*(int *)(param_3 + 4) + param_4,*(int *)(param_3 + 8) + param_5,0x65);
  }
  drawSetColorFromRGBA8(0x82fff500);
  temp_v1 = FUN_001834a4(0x2e,0x53);
  FUN_002e1b64(*(unsigned int *)(param_2 + 0x30),
               *(int *)(param_3 + 4) + (int)*(short *)(temp_v1 + 8) + param_4,
               (int)*(short *)(temp_v1 + 10) + *(int *)(param_3 + 8) + param_5,0x65);
  FUN_00183bb0();
  FUN_00164b5c(2,0x2e,0xe,*(int *)(param_3 + 4) + param_4,*(int *)(param_3 + 8) + param_5,0x65);
  temp_v1 = FUN_001834a4(0x2e,0x9e);
  pvVar3 = param_1->field_0x14;
  temp_v0 = **(short **)(temp_v1 + 0xc);
  FUN_001527d8(param_1->field_0x10,0xffffff00);
  FUN_0025cc78(param_1->field_0x10,
               (int)*(short *)(temp_v1 + 8) + *(int *)(param_3 + 4) +
               param_4 + ((int)temp_v0 - (int)pvVar3) / 2 + 6,
               *(int *)(param_3 + 8) + (int)*(short *)(temp_v1 + 10) + param_5,0x66);
  return;
}

} /* extern "C" */
