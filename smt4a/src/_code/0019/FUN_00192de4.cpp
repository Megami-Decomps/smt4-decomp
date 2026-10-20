/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00192de4` (_code @ 0x192de4, 0x1ac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_3_stack;


unsigned int * FUN_00192de4(int *param_1,unsigned int *param_2,int param_3)

{
/* irregular: 2 goto(s) */
  char temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  char *pcVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  puVar3 = param_2;
  if (param_3 != 0) {
    *param_2 = 1;
    param_2[1] = 0xf0111;
    puVar3 = param_2 + 4;
    param_2[2] = 1;
    param_2[3] = 0xf0110;
  }
  pcVar4 = (char *)*param_1;
  if (pcVar4[0x18] != '\0') {
    *puVar3 = 0xf;
    puVar3[1] = 0x10112;
    puVar3[2] = 0xf;
    puVar3[3] = 0x10113;
    puVar3[4] = 0;
    puVar3[5] = 0x10114;
    puVar3[6] = 0;
    puVar3[7] = 0x10115;
    return puVar3 + 8;
  }
  if (pcVar4[0x50] != '\0') {
    if (pcVar4[0x50] == '\x0f') {
      if (*pcVar4 != '\0') {
        temp_v0 = pcVar4[5];
        temp_v5 = temp_v0 == '\0';
        if (temp_v5) {
          temp_v0 = pcVar4[6];
        }
        if (((temp_v5 && temp_v0 == '\0') && (temp_v0 = pcVar4[3], temp_v0 != '\x04' && temp_v0 != '\x05')) &&
           (temp_v0 != '\b' && temp_v0 != '\t')) {
          temp_v5 = temp_v0 != '\x0e';
          if (temp_v5) {
            temp_v0 = pcVar4[4];
          }
          if (((temp_v5 && temp_v0 != '\x04') && (temp_v0 != '\x05' && temp_v0 != '\b')) &&
             (temp_v0 != '\t' && temp_v0 != '\x0e')) goto LAB_00192ec0;
        }
      }
      else {
LAB_00192ec0:
        if (((pcVar4[0x10] == '\0') || (temp_v0 = pcVar4[0x11], temp_v0 == '\0' || temp_v0 == '\x03')) ||
           (temp_v0 == '\x04' || temp_v0 == '\x05')) goto LAB_00192ef0;
      }
    }
    temp_v2 = 0xf;
  }
  else {
LAB_00192ef0:
    temp_v2 = 0;
  }
  *puVar3 = temp_v2;
  puVar3[1] = 0x10112;
  temp_v2 = 0;
  if (*(char *)(*param_1 + 0x50) != '\0') {
    temp_v2 = 0xf;
  }
  puVar3[2] = temp_v2;
  temp_v3 = 0;
  puVar3[3] = 0x10113;
  temp_v1 = *param_1;
  temp_v4 = 0;
  if (*(char *)(temp_v1 + 0x54) != '\0') {
    if (*(char *)(temp_v1 + 0x55) != '\0') {
      temp_v3 = 2;
      temp_v4 = temp_v3;
    }
    else if (*(char *)(temp_v1 + 0x50) != '\0') {
      temp_v3 = 2;
    }
  }
  if (*(char *)(temp_v1 + 0x38) != '\0') {
    if (*(char *)(temp_v1 + 0x39) != '\0') {
      temp_v3 = temp_v3 | 1;
      temp_v4 = temp_v4 | 1;
    }
    else if (*(char *)(temp_v1 + 0x50) != '\0') {
      temp_v3 = temp_v3 | 1;
    }
  }
  puVar3[4] = temp_v3;
  puVar3[5] = 0x10114;
  puVar3[6] = temp_v4;
  puVar3[7] = 0x10115;
  return puVar3 + 8;
}

} /* extern "C" */
