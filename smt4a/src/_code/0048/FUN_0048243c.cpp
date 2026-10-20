/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048243c` (_code @ 0x48243c, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014bef4(int);

typedef struct fn_0048243c_arg0 fn_0048243c_arg0;
typedef struct fn_0048243c_arg1 fn_0048243c_arg1;
struct fn_0048243c_arg0 {
    unsigned char pad_0x0[0x5c];
    uint field_0x5c; /* +0x5c */
    unsigned char pad_0x60[0x20];
    uint field_0x80; /* +0x80 */
    ushort field_0x84; /* +0x84 */
    short field_0x86; /* +0x86 */
    unsigned char pad_0x88[0x3];
    char field_0x8b; /* +0x8b */
    ushort field_0x8c; /* +0x8c */
    char field_0x8e; /* +0x8e */
    undefined1 field_0x8f; /* +0x8f */
    undefined1 field_0x90; /* +0x90 */
};
struct fn_0048243c_arg1 {
    ushort field_0x0; /* +0x0 */
    ushort field_0x2; /* +0x2 */
    ushort field_0x4; /* +0x4 */
    ushort field_0x6; /* +0x6 */
    ushort field_0x8; /* +0x8 */
    byte field_0xa; /* +0xa */
    unsigned char pad_0xb[0x1];
    short field_0xc; /* +0xc */
    byte field_0xe; /* +0xe */
    byte field_0xf; /* +0xf */
};

/* Supplied declaration required: FUN_0014bef4. */
extern int FUN_0018719c(int);
extern unsigned short *FUN_00379734(fn_0048243c_arg1 *);


unsigned char FUN_0048243c(fn_0048243c_arg0 *param_1,fn_0048243c_arg1 *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v4 = 0;
  puVar4 = (unsigned short *)FUN_00379734(param_2);
  temp_v2 = FUN_0014bef4(puVar4[2]);
  param_1->field_0x84 = temp_v2 + puVar4[1];
  temp_v3 = FUN_0014bef4(puVar4[4]);
  temp_v0 = puVar4[3];
  param_1->field_0x86 = (short)(temp_v3 + (unsigned int)temp_v0);
  param_1->field_0x5c = temp_v3 + (unsigned int)temp_v0;
  param_1->field_0x80 = (unsigned int)*puVar4;
  temp_v1 = puVar4[5];
  param_1->field_0x8b = (char)temp_v1;
  temp_v0 = puVar4[6];
  param_1->field_0x8c = temp_v0;
  param_1->field_0x8f = *(unsigned char *)((int)puVar4 + 0xf);
  param_1->field_0x8e = (char)puVar4[7];
  param_1->field_0x90 = 0;
  if ((char)temp_v1 == '\x03') {
    temp_v3 = FUN_0018719c((int)(short)temp_v0);
    temp_v4 = temp_v3 != 0;
    if (temp_v4) {
      param_1->field_0x90 = 0;
    }
    else {
      temp_v3 = FUN_0014bef4(99);
      if (temp_v3 <= param_1->field_0x8e) {
        temp_v4 = 1;
        param_1->field_0x90 = 1;
      }
    }
  }
  return temp_v4;
}

} /* extern "C" */
