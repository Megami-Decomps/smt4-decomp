/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00400284` (_code @ 0x400284, 0x2e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b4e7c(void);
int FUN_003ff524(unsigned int *, int);

typedef struct fn_00400284_arg2 fn_00400284_arg2;
struct fn_00400284_arg2 {
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
    unsigned short sp28; /* 0x28: local_28 */
} param_4_stack;

extern int FUN_001801a4(void);
extern int FUN_001ab854(int);
extern int FUN_00228ab0(void);
extern int FUN_002919a4(void);
extern int FUN_00291e14(void);
extern int FUN_002b4dcc(int);
/* Supplied declaration required: FUN_002b4e7c. */
/* Supplied declaration required: FUN_003ff524. */


unsigned int FUN_00400284(int param_1,int param_2,fn_00400284_arg2 *param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v5 = 0;
  temp_v4 = 0;
  temp_v2 = 0;
  if (param_4 != 0) {
    temp_v4 = param_3->field_0x38 != 0 || param_3->field_0x34 != 0;
    if (param_3->field_0x36 != 0) {
      temp_v4 = temp_v4 | 2;
    }
    if (param_3->field_0x39 != 0) {
      temp_v4 = temp_v4 | 2;
    }
    if ((param_3->field_0x3a & 0x7f) != 0) {
      temp_v4 = temp_v4 | 4;
    }
  }
  if ((param_3->field_0x68 & 4) != 0) {
    temp_v4 = 7;
  }
  if ((param_3->field_0x3a & 0x7f) == 1) {
    temp_v4 = temp_v4 | 4;
  }
  temp_v6 = param_4;
  if ((param_1 >= 0) || (temp_v0 = FUN_00291e14(), temp_v0 != 0)) {
    if ((param_1 < 0) && (temp_v0 = FUN_00291e14(), temp_v0 != 0)) {
      temp_v0 = FUN_002919a4();
    }
    else if (param_2 != 0) {
      temp_v0 = FUN_00228ab0();
    }
    else {
      temp_v0 = FUN_001ab854(param_1);
    }
    if (temp_v0 == 0) {
      return 3;
    }
    if ((((temp_v4 & 1) != 0) && ((*(unsigned short *)(temp_v0 + 0x60) & 0x402) == 0)) &&
       (temp_v1 = FUN_002b4dcc(temp_v0), temp_v1 != *(short *)(temp_v0 + 0x2a))) {
      temp_v2 = 1;
    }
    if ((((temp_v4 & 2) != 0) && ((*(unsigned short *)(temp_v0 + 0x60) & 0x402) == 0)) &&
       (*(short *)(temp_v0 + 0x2c) != *(short *)(temp_v0 + 0x10))) {
      temp_v2 = temp_v2 | 2;
    }
    temp_v3 = temp_v2;
    if (((temp_v4 & 1) != 0 && (temp_v4 & 2) != 0) &&
       ((((temp_v2 & 1) == 0 || (((temp_v2 & 2) == 0 && (temp_v3 = temp_v2 | 2, (temp_v2 & 1) == 0)))) &&
        ((temp_v3 & 2) != 0)))) {
      temp_v3 = temp_v3 | 1;
    }
    if ((temp_v4 & 4) == 0) {
      if ((param_3->field_0x68 & 4) != 0 && temp_v3 != 0) {
        temp_v3 = 7;
      }
      if (temp_v4 != temp_v3) {
        temp_v5 = 3;
      }
      return temp_v5;
    }
    temp_v6 = temp_v6 & 0xffff0000;
    if ((param_3->field_0x68 & 4) != 0) {
      FUN_003ff524(&temp_v6,0x25);
      (*(unsigned short *)((unsigned char *)&temp_v6 + 0)) = (unsigned short)temp_v6 & *(unsigned short *)(temp_v0 + 0x60);
    }
    else {
      FUN_003ff524(&temp_v6,param_3->field_0x3a & 0x7f);
      (*(unsigned short *)((unsigned char *)&temp_v6 + 0)) = (unsigned short)temp_v6 & *(unsigned short *)(temp_v0 + 0x60);
    }
    if ((unsigned short)temp_v6 != 0) {
      temp_v3 = temp_v3 | 4;
    }
  }
  else {
    temp_v0 = FUN_001801a4();
    if ((((temp_v4 & 1) != 0) && ((*(unsigned short *)(temp_v0 + 0x5e) & 2) == 0)) &&
       (temp_v1 = temp_v0, FUN_002b4e7c(), temp_v1 != *(short *)(temp_v0 + 0x2a))) {
      temp_v2 = 1;
    }
    if ((((temp_v4 & 2) != 0) && ((*(unsigned short *)(temp_v0 + 0x5e) & 2) == 0)) &&
       (*(short *)(temp_v0 + 0x2c) != *(short *)(temp_v0 + 0x1e))) {
      temp_v2 = temp_v2 | 2;
    }
    temp_v3 = temp_v2;
    if ((((temp_v4 & 1) != 0 && (temp_v4 & 2) != 0) &&
        (((temp_v2 & 1) == 0 || (((temp_v2 & 2) == 0 && (temp_v3 = temp_v2 | 2, (temp_v2 & 1) == 0)))))) &&
       ((temp_v3 & 2) != 0)) {
      temp_v3 = temp_v3 | 1;
    }
    if ((temp_v4 & 4) != 0) {
      temp_v6 = temp_v6 & 0xffff0000;
      if ((param_3->field_0x68 & 4) != 0) {
        FUN_003ff524(&temp_v6,0x25);
        (*(unsigned short *)((unsigned char *)&temp_v6 + 0)) = (unsigned short)temp_v6 & *(unsigned short *)(temp_v0 + 0x5e);
      }
      else {
        FUN_003ff524(&temp_v6,param_3->field_0x3a & 0x7f);
        (*(unsigned short *)((unsigned char *)&temp_v6 + 0)) = (unsigned short)temp_v6 & *(unsigned short *)(temp_v0 + 0x5e);
      }
      if ((unsigned short)temp_v6 != 0) {
        temp_v3 = temp_v3 | 4;
      }
    }
  }
  if ((param_3->field_0x68 & 4) != 0 && temp_v3 != 0) {
    temp_v3 = 7;
  }
  if (temp_v4 != temp_v3) {
    temp_v5 = 3;
  }
  return temp_v5;
}

} /* extern "C" */
