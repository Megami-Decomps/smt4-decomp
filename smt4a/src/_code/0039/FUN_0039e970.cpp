/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039e970` (_code @ 0x39e970, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0039e970_arg0 fn_0039e970_arg0;
struct fn_0039e970_arg0 {
    unsigned char pad_0x0[0x3874];
    unsigned char field_0x3874; /* +0x3874 */
    unsigned char pad_0x3875[0x129a];
    undefined1 field_0x4b0f; /* +0x4b0f */
    unsigned char field_0x4b10; /* +0x4b10 */
    unsigned char pad_0x4b11[0x3];
    ushort field_0x4b14; /* +0x4b14 */
    undefined2 field_0x4b16; /* +0x4b16 */
    unsigned char pad_0x4b18[0x1];
    unsigned char field_0x4b19; /* +0x4b19 */
    unsigned char field_0x4b1a; /* +0x4b1a */
    unsigned char field_0x4b1b; /* +0x4b1b */
    undefined1 field_0x4b1c; /* +0x4b1c */
    unsigned char pad_0x4b1d[0x3];
    unsigned char field_0x4b20; /* +0x4b20 */
    unsigned char pad_0x4b21[0x3];
    unsigned char field_0x4b24; /* +0x4b24 */
    unsigned char pad_0x4b25[0x3];
    undefined4 field_0x4b28; /* +0x4b28 */
};

extern int FUN_0018719c(unsigned int);
extern int FUN_003f25e8(unsigned int);


void FUN_0039e970(fn_0039e970_arg0 *param_1,unsigned short param_2,int param_3)

{
  int temp_v0;
  
  param_1->field_0x4b0f = 1;
  *(unsigned int *)&param_1->field_0x4b10 = 0;
  param_1->field_0x4b16 = param_1->field_0x4b14;
  param_1->field_0x4b14 = param_2;
  param_1->field_0x4b19 = (char)param_3;
  param_1->field_0x4b1a = 0;
  param_1->field_0x4b1b = 0;
  param_1->field_0x4b1c = 0;
  param_1->field_0x4b20 = 0;
  *(unsigned int *)&param_1->field_0x4b24 = 0;
  temp_v0 = FUN_003f25e8(*(unsigned int *)&param_1->field_0x3874);
  if (((temp_v0 != 0) && (temp_v0 = FUN_0018719c(0x4c9), temp_v0 == 0)) && (param_3 != 0)) {
    param_1->field_0x4b1c = 1;
    param_1->field_0x4b28 = 1;
  }
  else {
    param_1->field_0x4b28 = 0;
  }
  return;
}

} /* extern "C" */
