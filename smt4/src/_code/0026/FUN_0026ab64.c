/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026ab64` (_code @ 0x26ab64, 0x24c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_8: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_8_stack;

extern short FUN_001c3688(void);
extern short FUN_001c36a0(void);
extern int FUN_0029d65c(int);
/* Supplied declaration required: FUN_0029e8b8. */
extern int FUN_0029e908(unsigned int);
/* Supplied declaration required: FUN_0029e93c. */
extern int FUN_0029e958(unsigned int);
/* Supplied declaration required: FUN_0029eb5c. */
extern int FUN_0029ee54(unsigned int);
extern int FUN_0029efa8(unsigned int);
extern int FUN_0029efc0(unsigned int);
/* Supplied declaration required: FUN_002b8e84. */
extern short aeabi_idivmod(int);


unsigned int
FUN_0026ab64(unsigned int param_1,unsigned int param_2,int param_3,short param_4,short param_5,
            short param_6,int param_7,int param_8)

{
/* irregular: 6 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  
  temp_v1 = FUN_0029d65c((int)param_5);
  temp_v2 = FUN_0029d65c((int)param_6);
  temp_v3 = FUN_0029d65c((int)param_4);
  if (!(temp_v1 == 6 || temp_v1 == 2)) {
    if (temp_v2 != 6 && temp_v2 != 2) {
      if (temp_v3 == 0) {
        return 0;
      }
      temp_v1 = FUN_0029ee54(param_1);
      temp_v0 = FUN_001c36a0();
      temp_v2 = (int)(short)(temp_v0 - (short)((unsigned int)param_2 >> 0x10));
      if (param_7 != 0) {
        temp_v2 = FUN_0029e958(param_1);
        temp_v0 = FUN_001c3688();
        temp_v3 = (int)(short)(temp_v0 - (short)param_2);
        temp_v6 = temp_v3 == 0;
        temp_v1 = temp_v5;
        if (-1 < temp_v3) {
          temp_v1 = (int)(short)param_3;
          temp_v6 = temp_v1 == temp_v3;
        }
        if (temp_v6 || (-1 >= temp_v3 || temp_v1 < temp_v3)) {
          return 1;
        }
        temp_v0 = aeabi_idivmod(temp_v3 * temp_v2);
        FUN_0029e8b8(param_1,(int)temp_v0);
        return 1;
      }
      temp_v6 = temp_v2 == 0;
      temp_v3 = temp_v4;
      if (-1 < temp_v2) {
        temp_v3 = param_3 >> 0x10;
        temp_v6 = temp_v3 == temp_v2;
      }
      if (temp_v6 || (-1 >= temp_v2 || temp_v3 < temp_v2)) {
        return 1;
      }
      temp_v0 = aeabi_idivmod(temp_v2 * temp_v1);
      temp_v1 = FUN_0029efa8(param_1);
      temp_v2 = FUN_0029efc0(param_1);
      if (temp_v2 + temp_v1 != (int)temp_v0 && param_8 != 0) {
        FUN_002b8e84(0x100016c);
      }
      FUN_0029eb5c(param_1,(int)temp_v0);
      return 1;
    }
    temp_v1 = FUN_0029efc0(param_1);
    temp_v2 = FUN_0029efa8(param_1);
    temp_v1 = temp_v2 + temp_v1 + 1;
    if (param_7 != 0) {
      temp_v1 = FUN_0029e93c();
      temp_v2 = FUN_0029e908(param_1);
      temp_v2 = temp_v2 + temp_v1 + 1;
      temp_v1 = FUN_0029e958(param_1);
      if (temp_v1 <= temp_v2) {
        return 1;
      }
      FUN_0029e8b8(param_1,temp_v2);
    }
    else {
      temp_v2 = FUN_0029ee54(param_1);
      if (temp_v2 <= temp_v1) {
        return 1;
      }
      FUN_0029eb5c(param_1,temp_v1);
    }
  }
  else {
    temp_v1 = FUN_0029efc0(param_1);
    temp_v2 = FUN_0029efa8(param_1);
    temp_v2 = temp_v2 + temp_v1;
    if (param_7 != 0) {
      temp_v1 = FUN_0029e93c(param_1);
      temp_v2 = FUN_0029e908(param_1);
      temp_v2 = temp_v2 + temp_v1;
    }
    if (temp_v2 - 1 < 0) {
      return 1;
    }
    if (param_7 != 0) {
      FUN_0029e8b8();
    }
    else {
      FUN_0029eb5c(param_1);
    }
  }
  if (param_8 != 0) {
    FUN_002b8e84(0x100016c);
  }
  return 1;
}
