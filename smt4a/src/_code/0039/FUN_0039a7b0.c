/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039a7b0` (_code @ 0x39a7b0, 0x20c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00162858(void);
extern int FUN_00162880(void);
extern int FUN_00167e54(void);
extern int FUN_0018719c(unsigned int);
extern int FUN_00270a70(void);
extern int FUN_00284d94(void);
extern int FUN_00298000(void);
extern int FUN_00298088(void);
extern int FUN_00298158(void);
extern int FUN_002bd8b4(void);
extern int FUN_002ef9f0(void);
extern int FUN_00314c18(void);
extern int QuestCenterMode_IsBusy(void);


unsigned int FUN_0039a7b0(int param_1)

{
/* irregular: 3 goto(s) */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  float temp_v4;
  
  temp_v2 = *(int *)(param_1 + 0xc);
  temp_v0 = *(char *)(temp_v2 + 5);
  if (temp_v0 != '\0') {
    if (temp_v0 != '\x01') {
      if (temp_v0 == '\x02') {
        temp_v4 = *(float *)(temp_v2 + 0x14) + 0.1f;
        *(float *)(temp_v2 + 0x14) = temp_v4;
        if (*(float *)(temp_v2 + 0x18) <= temp_v4) {
          *(float *)(temp_v2 + 0x14) = *(float *)(temp_v2 + 0x18);
          *(unsigned char *)(temp_v2 + 5) = 3;
        }
      }
    }
    else {
      temp_v4 = *(float *)(temp_v2 + 0x14) - 0.1f;
      *(float *)(temp_v2 + 0x14) = temp_v4;
      if (temp_v4 <= 0.0f) {
        *(unsigned int *)(temp_v2 + 0x14) = 0;
        *(unsigned char *)(temp_v2 + 5) = 0;
      }
    }
  }
  if (*(char *)(temp_v2 + 0x1c) == '\0') {
    temp_v1 = FUN_0018719c(0x51);
    if ((temp_v1 != 0) &&
       (((temp_v1 = FUN_0018719c(0xc), temp_v1 == 0 || (temp_v1 = FUN_0018719c(0x10), temp_v1 != 0)) &&
        (temp_v1 = FUN_0018719c(0x11), temp_v1 == 0)))) {
      temp_v1 = FUN_00167e54();
      if (temp_v1 != 0) {
        temp_v1 = FUN_00162880();
joined_r0x0039a964:
        if (temp_v1 == 0) goto LAB_0039a970;
      }
      else {
        temp_v1 = FUN_002ef9f0();
        if (temp_v1 == 0) {
          temp_v1 = FUN_00162858();
          if (temp_v1 != 0) goto LAB_0039a970;
          temp_v1 = FUN_00314c18();
          if (((((temp_v1 == 0) || (temp_v1 = FUN_00162858(), temp_v1 != 0)) ||
               (temp_v1 = FUN_00298000(), temp_v1 != 0)) &&
              ((temp_v1 = FUN_002bd8b4(), temp_v1 == 0 && (temp_v1 = FUN_00284d94(), temp_v1 == 0)))) &&
             ((temp_v1 = QuestCenterMode_IsBusy(), temp_v1 == 0 &&
              ((temp_v1 = FUN_00298158(), temp_v1 == 0 && (temp_v1 = FUN_00298088(), temp_v1 == 0)))))) {
            temp_v1 = FUN_00270a70();
            goto joined_r0x0039a964;
          }
        }
      }
    }
    temp_v0 = '\0';
  }
  else {
LAB_0039a970:
    temp_v0 = '\x01';
  }
  if (*(char *)(temp_v2 + 4) != temp_v0) {
    *(char *)(temp_v2 + 4) = temp_v0;
    if (temp_v0 == '\0') {
      *(unsigned char *)(temp_v2 + 5) = 1;
      *(unsigned int *)(temp_v2 + 8) = 0;
    }
    else {
      *(unsigned char *)(temp_v2 + 5) = 2;
      *(unsigned int *)(temp_v2 + 8) = 0;
      temp_v1 = FUN_00298000();
      if (temp_v1 == 0) {
        temp_v3 = 0x3f4ccccd;
      }
      else {
        temp_v3 = 0x3f0ccccd;
      }
      *(unsigned int *)(temp_v2 + 0x18) = temp_v3;
    }
  }
  return 0;
}
