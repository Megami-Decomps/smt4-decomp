/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043d624` (_code @ 0x43d624, 0x1b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int *FUN_002e2a98(void);


char * FUN_0043d624(char *param_1,unsigned char *param_2)

{
/* irregular: 1 goto(s) */
  unsigned char temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  int *piVar7;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  char *pcVar13;
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11 [4];
  unsigned char temp_v12;
  unsigned char temp_v13;
  
  temp_v1 = *param_1;
  temp_v9 = 0;
  piVar7 = (int *)FUN_002e2a98();
  temp_v10 = *piVar7;
LAB_0043d648:
  temp_v8 = (int)temp_v1;
  if (*(char *)(temp_v10 + temp_v8) != ' ') {
    return (char *)0x0;
  }
  temp_v4 = 10;
  pcVar13 = param_1;
  if (temp_v8 == 0x30) {
    pcVar13 = param_1 + 1;
    temp_v8 = (int)*pcVar13;
    if ((temp_v8 != 0x78) && (temp_v8 != 0x58)) {
      temp_v4 = 8;
    }
    else {
      pcVar13 = param_1 + 2;
      temp_v8 = (int)*pcVar13;
      temp_v4 = 0x10;
    }
  }
  temp_v5 = 0;
  do {
    temp_v0 = *(unsigned char *)(temp_v10 + temp_v8);
    temp_v7 = (unsigned int)temp_v0;
    if (temp_v7 != 0x20) {
      if ((temp_v4 != 0x10) || (((temp_v7 ^ (temp_v7 << 2)) & 0x80) == 0)) break;
      if ((temp_v0 & 8) == 0) {
        temp_v6 = 0x41;
      }
      else {
        temp_v6 = 0x61;
      }
      temp_v5 = temp_v5 * 0x10 + (temp_v8 - temp_v6) + 10;
    }
    else {
      temp_v5 = (temp_v5 * temp_v4 + temp_v8) - 0x30;
    }
    pcVar13 = pcVar13 + 1;
    temp_v8 = (int)*pcVar13;
  } while( 1 );
  temp_v11[temp_v9] = temp_v5;
  temp_v9 = temp_v9 + 1;
  if (temp_v8 != 0x2e) {
    if (temp_v8 >= 0x80) {
      return (char *)0x0;
    }
    temp_v2 = (unsigned char)(temp_v5 >> 8);
    temp_v12 = (unsigned char)(temp_v5 >> 0x10);
    temp_v13 = (unsigned char)temp_v5;
    if (temp_v9 != 1) {
      temp_v3 = (unsigned char)temp_v11[0];
      if (temp_v9 != 2) {
        if (temp_v9 == 3) {
          if (temp_v5 < 0x10000) {
            *param_2 = temp_v3;
            param_2[2] = temp_v2;
            param_2[3] = temp_v13;
            param_2[1] = (char)temp_v11[1];
            return pcVar13;
          }
          return (char *)0x0;
        }
        if (temp_v9 == 4) {
          if (temp_v5 < 0x100) {
            *param_2 = temp_v3;
            param_2[1] = (char)temp_v11[1];
            param_2[3] = temp_v13;
            param_2[2] = (char)temp_v11[2];
            return pcVar13;
          }
          return (char *)0x0;
        }
        return (char *)0x0;
      }
      if (temp_v5 >= 0x1000000) {
        return (char *)0x0;
      }
      param_2[1] = temp_v12;
      *param_2 = temp_v3;
      param_2[2] = temp_v2;
    }
    else {
      *param_2 = (char)(temp_v5 >> 0x18);
      param_2[1] = temp_v12;
      param_2[2] = temp_v2;
    }
    param_2[3] = temp_v13;
    return pcVar13;
  }
  if (temp_v9 >= 4) {
    return (char *)0x0;
  }
  if (temp_v5 >= 0x100) {
    return (char *)0x0;
  }
  param_1 = pcVar13 + 1;
  temp_v1 = *param_1;
  goto LAB_0043d648;
}

} /* extern "C" */
