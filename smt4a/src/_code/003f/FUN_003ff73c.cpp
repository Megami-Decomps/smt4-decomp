/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ff73c` (_code @ 0x3ff73c, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003ff524(unsigned int *, int);

typedef struct fn_003ff73c_arg0 fn_003ff73c_arg0;
typedef struct fn_003ff73c_arg1 fn_003ff73c_arg1;
struct fn_003ff73c_arg0 {
    unsigned char pad_0x0[0x34];
    unsigned char field_0x34; /* +0x34 */
    unsigned char pad_0x35[0x1];
    unsigned char field_0x36; /* +0x36 */
    unsigned char pad_0x37[0x1];
    unsigned char field_0x38; /* +0x38 */
    unsigned char field_0x39; /* +0x39 */
    unsigned char field_0x3a; /* +0x3a */
    unsigned char pad_0x3b[0x2d];
    unsigned char field_0x68; /* +0x68 */
    unsigned char pad_0x69[0x1ef];
    int field_0x258; /* +0x258 */
    int field_0x25c; /* +0x25c */
    int field_0x260; /* +0x260 */
    int field_0x264; /* +0x264 */
    unsigned char pad_0x268[0xc];
    ushort field_0x274; /* +0x274 */
};
struct fn_003ff73c_arg1 {
    unsigned char pad_0x0[0x34];
    ushort field_0x34; /* +0x34 */
    ushort field_0x36; /* +0x36 */
    byte field_0x38; /* +0x38 */
    byte field_0x39; /* +0x39 */
    byte field_0x3a; /* +0x3a */
    unsigned char pad_0x3b[0x2d];
    uint field_0x68; /* +0x68 */
};

/* stack frame of param_4: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp1C; /* 0x1c: local_1c */
} param_4_stack;

/* Supplied declaration required: FUN_003ff524. */


unsigned int
FUN_003ff73c(fn_003ff73c_arg0 *param_1,fn_003ff73c_arg1 *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v3 = 0;
  temp_v0 = 0;
  temp_v2 = param_2->field_0x38 != 0 || param_2->field_0x34 != 0;
  if (param_2->field_0x36 != 0) {
    temp_v2 = temp_v2 | 2;
  }
  if (param_2->field_0x39 != 0) {
    temp_v2 = temp_v2 | 2;
  }
  if ((param_2->field_0x3a & 0x7f) != 0) {
    temp_v2 = temp_v2 | 4;
  }
  if ((param_2->field_0x68 & 4) != 0) {
    temp_v2 = 7;
  }
  if ((((temp_v2 & 1) != 0) && ((param_1->field_0x274 & 2) == 0)) &&
     (param_1->field_0x258 != param_1->field_0x25c)) {
    temp_v0 = 1;
  }
  if (((temp_v2 & 2) != 0) && (param_1->field_0x260 != param_1->field_0x264)) {
    temp_v0 = temp_v0 | 2;
  }
  temp_v1 = temp_v0;
  if (((temp_v2 & 1) != 0 && (temp_v2 & 2) != 0) &&
     ((((temp_v0 & 1) == 0 || (((temp_v0 & 2) == 0 && (temp_v1 = temp_v0 | 2, (temp_v0 & 1) == 0)))) &&
      ((temp_v1 & 2) != 0)))) {
    temp_v1 = temp_v1 | 1;
  }
  if ((temp_v2 & 4) != 0) {
    temp_v4 = param_4 & 0xffff0000;
    if ((param_2->field_0x68 & 4) == 0) {
      FUN_003ff524(&temp_v4,param_2->field_0x3a & 0x7f);
      (*(unsigned short *)((unsigned char *)&temp_v4 + 0)) = (unsigned short)temp_v4 & param_1->field_0x274;
    }
    else {
      FUN_003ff524(&temp_v4,0x25);
      (*(unsigned short *)((unsigned char *)&temp_v4 + 0)) = (unsigned short)temp_v4 & param_1->field_0x274;
    }
    if ((unsigned short)temp_v4 != 0) {
      temp_v1 = temp_v1 | 4;
    }
  }
  if ((param_2->field_0x68 & 4) != 0 && temp_v1 != 0) {
    temp_v1 = 7;
  }
  if (temp_v2 != temp_v1) {
    temp_v3 = 3;
  }
  return temp_v3;
}

} /* extern "C" */
