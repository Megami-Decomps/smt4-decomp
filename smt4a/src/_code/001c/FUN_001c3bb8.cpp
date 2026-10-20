/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c3bb8` (_code @ 0x1c3bb8, 0x168 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern int FUN_0019a37c(unsigned int, int, int, unsigned int, int *, char *);
extern int FUN_002e3390(unsigned int);


unsigned char FUN_001c3bb8(int *param_1,char *param_2,unsigned int param_3,unsigned int param_4)

{
  char temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int temp_v6;
  int temp_v7;
  char *pcVar10;
  
  if (*param_2 == '\x01') {
    temp_v3 = param_1[1];
  }
  else {
    temp_v3 = *param_1;
  }
  temp_v5 = param_1[temp_v3 + 4];
  temp_v4 = *(int *)(temp_v5 + 0x30);
  temp_v7 = *(int *)(temp_v5 + 0x38) + temp_v5;
  pcVar10 = param_2;
  temp_v3 = FUN_002e3390(param_3);
  temp_v6 = 0;
  if (*(int *)(temp_v5 + 0x34) != 0) {
    do {
      piVar7 = (int *)(temp_v4 + temp_v5 + temp_v6 * 8);
      temp_v2 = FUN_0019a37c(param_3,*piVar7 + temp_v7,temp_v3,param_4,param_1,pcVar10);
      if ((temp_v2 == 0) &&
         ((temp_v0 = *(char *)(*piVar7 + temp_v7 + temp_v3), temp_v0 == '\0' || (temp_v0 == '.')))) {
        *(int *)(param_2 + 4) = *piVar7 + temp_v7;
        temp_v6 = piVar7[1] & 0xff;
        temp_v0 = (char)piVar7[1];
        param_2[2] = temp_v0;
        temp_v1 = (char)((unsigned int)piVar7[1] >> 0x10);
        param_2[3] = temp_v1;
        if (temp_v6 >= 0x88) {
          return 0;
        }
        if (temp_v6 >= 0x78) {
          param_2[2] = temp_v0 - 'x';
          param_2[3] = temp_v1 - 'x';
          if (param_2[1] != '\x04') {
            return 0;
          }
        }
        else if (temp_v6 >= 0x70) {
          param_2[2] = temp_v0 - 'p';
          param_2[3] = temp_v1 - 'p';
          if (param_2[1] != '\x03') {
            return 0;
          }
        }
        else if (temp_v6 >= 0x10) {
          param_2[2] = temp_v0 - '\x10';
          param_2[3] = temp_v1 - '\x10';
          if (param_2[1] != '\x02') {
            return 0;
          }
        }
        else if (param_2[1] != '\x01') {
          return 0;
        }
        return 1;
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < *(unsigned int *)(temp_v5 + 0x34));
  }
  return 0;
}

} /* extern "C" */
