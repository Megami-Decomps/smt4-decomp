/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026adcc` (_code @ 0x26adcc, 0x24c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_8: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_8_stack;

extern short FUN_001c3588(void);
extern short FUN_001c35a0(void);
extern int FUN_0029d8fc(int);
/* Supplied declaration required: FUN_0029eb58. */
extern int FUN_0029eba8(unsigned int);
/* Supplied declaration required: FUN_0029ebdc. */
extern int FUN_0029ebf8(unsigned int);
/* Supplied declaration required: FUN_0029edfc. */
extern int FUN_0029f0f4(unsigned int);
extern int FUN_0029f248(unsigned int);
extern int FUN_0029f260(unsigned int);
/* Supplied declaration required: FUN_002b91c4. */
extern short FUN_002c615c(int);


unsigned int
FUN_0026adcc(unsigned int param_1,unsigned int param_2,int param_3,short param_4,short param_5,
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
  
  temp_v1 = FUN_0029d8fc((int)param_5);
  temp_v2 = FUN_0029d8fc((int)param_6);
  temp_v3 = FUN_0029d8fc((int)param_4);
  if (!(temp_v1 == 6 || temp_v1 == 2)) {
    if (temp_v2 != 6 && temp_v2 != 2) {
      if (temp_v3 == 0) {
        return 0;
      }
      temp_v1 = FUN_0029f0f4(param_1);
      temp_v0 = FUN_001c35a0();
      temp_v2 = (int)(short)(temp_v0 - (short)((unsigned int)param_2 >> 0x10));
      if (param_7 != 0) {
        temp_v2 = FUN_0029ebf8(param_1);
        temp_v0 = FUN_001c3588();
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
        temp_v0 = FUN_002c615c(temp_v3 * temp_v2);
        FUN_0029eb58(param_1,(int)temp_v0);
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
      temp_v0 = FUN_002c615c(temp_v2 * temp_v1);
      temp_v1 = FUN_0029f248(param_1);
      temp_v2 = FUN_0029f260(param_1);
      if (temp_v2 + temp_v1 != (int)temp_v0 && param_8 != 0) {
        FUN_002b91c4(0x100016c);
      }
      FUN_0029edfc(param_1,(int)temp_v0);
      return 1;
    }
    temp_v1 = FUN_0029f260(param_1);
    temp_v2 = FUN_0029f248(param_1);
    temp_v1 = temp_v2 + temp_v1 + 1;
    if (param_7 != 0) {
      temp_v1 = FUN_0029ebdc();
      temp_v2 = FUN_0029eba8(param_1);
      temp_v2 = temp_v2 + temp_v1 + 1;
      temp_v1 = FUN_0029ebf8(param_1);
      if (temp_v1 <= temp_v2) {
        return 1;
      }
      FUN_0029eb58(param_1,temp_v2);
    }
    else {
      temp_v2 = FUN_0029f0f4(param_1);
      if (temp_v2 <= temp_v1) {
        return 1;
      }
      FUN_0029edfc(param_1,temp_v1);
    }
  }
  else {
    temp_v1 = FUN_0029f260(param_1);
    temp_v2 = FUN_0029f248(param_1);
    temp_v2 = temp_v2 + temp_v1;
    if (param_7 != 0) {
      temp_v1 = FUN_0029ebdc(param_1);
      temp_v2 = FUN_0029eba8(param_1);
      temp_v2 = temp_v2 + temp_v1;
    }
    if (temp_v2 - 1 < 0) {
      return 1;
    }
    if (param_7 != 0) {
      FUN_0029eb58();
    }
    else {
      FUN_0029edfc(param_1);
    }
  }
  if (param_8 != 0) {
    FUN_002b91c4(0x100016c);
  }
  return 1;
}
