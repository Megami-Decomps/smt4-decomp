/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00228b04` (_code @ 0x228b04, 0x5fc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int eventQueueAddUniqueIfValid(int);
int FUN_002be8d0(void);
int scrollListSetSelection(int, int);
int FUN_00340f2c(int, int, int);
int labelsReset(void);
int __aeabi_idivmod(...);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern int FUN_00163fd4(void);
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
extern int padButtonIsPressed(unsigned char);
/* Supplied declaration required: FUN_002be8d0. */
/* Supplied declaration required: scrollListSetSelection. */
/* Supplied declaration required: FUN_00340f2c. */
/* Supplied declaration required: labelsReset. */
/* Supplied declaration required: __aeabi_idivmod. */


unsigned char FUN_00228b04(int param_1,int param_2)

{
/* irregular: 7 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned short *puVar12;
  unsigned int temp_v11;
  int temp_v12;
  unsigned short temp_v13;
  int temp_v14;
  unsigned char temp_v15;
  
  if (*(char *)(param_1 + 0x62) != '\0') {
    temp_v3 = 0;
  }
  else {
    temp_v4 = *(int *)(param_1 + 0x20);
    temp_v5 = *(int *)(param_1 + 0x48);
    temp_v1 = 0;
    temp_v2 = 0;
    FUN_00340f2c(0x14,0x14,0x14);
    if (*(int *)(param_1 + 0x18) >= 2) {
      temp_v6 = param_1;
      FUN_002be8d0();
      if (temp_v6 == 0) {
        temp_v1 = 0;
      }
      else {
        temp_v1 = 1;
      }
    }
    temp_v6 = *(int *)(param_1 + 0x24);
    temp_v7 = *(int *)(param_1 + 0x20);
    temp_v8 = *(int *)(param_1 + 0x38);
    temp_v9 = __aeabi_idivmod(*(unsigned int *)(param_1 + 0x50),temp_v8);
    if (temp_v9 <= temp_v7) {
      scrollListSetSelection(param_1,temp_v9);
    }
    if ((!temp_v1) && (temp_v4 != temp_v7)) {
      temp_v1 = 1;
    }
    if (*(int *)(param_1 + 0x40) >= 2) {
      temp_v4 = param_1 + 0x28;
      FUN_002be8d0();
      if (temp_v4 == 0) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = 1;
      }
    }
    labelsReset();
    temp_v4 = *(int *)(param_1 + 0x48);
    temp_v9 = *(int *)(param_1 + 0x50);
    __aeabi_idivmod(temp_v9,temp_v8);
    if ((temp_v14 != 0) && (temp_v9 <= (temp_v6 + temp_v7) * temp_v8 + temp_v4)) {
      if ((temp_v4 == temp_v5 + 1) &&
         (((temp_v4 = padButtonIsPressed(*(unsigned char *)(param_1 + 0x2c)), temp_v4 != 0 ||
           (temp_v4 = padButtonIsPressed(*(unsigned char *)(param_1 + 0x30)), temp_v4 != 0)) &&
          ((*(unsigned int *)(param_1 + 0x28) & 4) != 0)))) {
        scrollListSetSelection(param_1 + 0x28,0);
      }
      else {
        scrollListSetSelection(param_1 + 0x28,temp_v14 - 1);
      }
    }
    temp_v4 = 0;
    do {
      temp_v9 = param_1 + temp_v4;
      temp_v15 = 0;
      if ((*(char *)(temp_v9 + 4) != ' ') && (temp_v10 = FUN_00163fd4(), temp_v10 != 0)) {
        temp_v15 = 1;
      }
      if (((*(char *)(temp_v9 + 8) != ' ') && (temp_v10 = FUN_00163fd4(), temp_v10 != 0)) || (temp_v15)) {
        temp_v0 = *(char *)(temp_v9 + 4);
        puVar12 = (unsigned short *)(param_1 + 0x5c);
        if (temp_v0 == '\x05') {
          temp_v13 = *puVar12 | 1;
          *(unsigned short *)(param_1 + 0x5c) = temp_v13;
        }
        else if (temp_v0 == '\x06') {
          temp_v13 = *puVar12 | 2;
          *(unsigned short *)(param_1 + 0x5c) = temp_v13;
        }
        else if (temp_v0 == '\x04') {
          temp_v13 = *puVar12 | 4;
          *(unsigned short *)(param_1 + 0x5c) = temp_v13;
        }
        else if (temp_v0 == '\x03') {
          temp_v13 = *puVar12 | 8;
          *(unsigned short *)(param_1 + 0x5c) = temp_v13;
        }
      }
      else {
        temp_v0 = *(char *)(temp_v9 + 4);
        puVar12 = (unsigned short *)(param_1 + 0x5c);
        if (temp_v0 == '\x05') {
          temp_v13 = *puVar12 & 0xfffe;
          *(unsigned short *)(param_1 + 0x5c) = temp_v13;
        }
        else if (temp_v0 == '\x06') {
          temp_v13 = *puVar12 & 0xfffd;
          *(unsigned short *)(param_1 + 0x5c) = temp_v13;
        }
        else if (temp_v0 == '\x04') {
          temp_v13 = *puVar12 & 0xfffb;
          *(unsigned short *)(param_1 + 0x5c) = temp_v13;
        }
        else if (temp_v0 == '\x03') {
          temp_v13 = *puVar12 & 0xfff7;
          *(unsigned short *)(param_1 + 0x5c) = temp_v13;
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
    temp_v4 = 0;
    do {
      temp_v9 = param_1 + temp_v4;
      temp_v15 = 0;
      if ((*(char *)(temp_v9 + 0x2c) != ' ') && (temp_v10 = FUN_00163fd4(), temp_v10 != 0)) {
        temp_v15 = 1;
      }
      if (((*(char *)(temp_v9 + 0x30) != ' ') && (temp_v10 = FUN_00163fd4(), temp_v10 != 0)) || (temp_v15))
      {
        temp_v0 = *(char *)(temp_v9 + 0x2c);
        puVar12 = (unsigned short *)(param_1 + 0x5e);
        if (temp_v0 == '\x05') {
          temp_v13 = *puVar12 | 1;
          *(unsigned short *)(param_1 + 0x5e) = temp_v13;
        }
        else if (temp_v0 == '\x06') {
          temp_v13 = *puVar12 | 2;
          *(unsigned short *)(param_1 + 0x5e) = temp_v13;
        }
        else if (temp_v0 == '\x04') {
          temp_v13 = *puVar12 | 4;
          *(unsigned short *)(param_1 + 0x5e) = temp_v13;
        }
        else if (temp_v0 == '\x03') {
          temp_v13 = *puVar12 | 8;
          *(unsigned short *)(param_1 + 0x5e) = temp_v13;
        }
      }
      else {
        temp_v0 = *(char *)(temp_v9 + 0x2c);
        puVar12 = (unsigned short *)(param_1 + 0x5e);
        if (temp_v0 == '\x05') {
          temp_v13 = *puVar12 & 0xfffe;
          *(unsigned short *)(param_1 + 0x5e) = temp_v13;
        }
        else if (temp_v0 == '\x06') {
          temp_v13 = *puVar12 & 0xfffd;
          *(unsigned short *)(param_1 + 0x5e) = temp_v13;
        }
        else if (temp_v0 == '\x04') {
          temp_v13 = *puVar12 & 0xfffb;
          *(unsigned short *)(param_1 + 0x5e) = temp_v13;
        }
        else if (temp_v0 == '\x03') {
          temp_v13 = *puVar12 & 0xfff7;
          *(unsigned short *)(param_1 + 0x5e) = temp_v13;
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
    if (*(char *)(param_1 + 0x62) != '\0') {
      temp_v4 = 0;
    }
    else {
      temp_v4 = *(int *)(param_1 + 0x24);
    }
    if (*(char *)(param_1 + 0x62) != '\0') {
      temp_v9 = 0;
    }
    else {
      temp_v9 = *(int *)(param_1 + 0x20);
    }
    temp_v4 = temp_v4 + temp_v9;
    *(unsigned char *)(param_1 + 0x60) = 0;
    temp_v13 = *(unsigned short *)(param_1 + 0x5c);
    if (temp_v13 != 0) {
      if (((temp_v13 & 1) != 0) || ((int)((unsigned int)temp_v13 << 0x1d) < 0)) {
        temp_v15 = *(int *)(param_1 + 0x20) == 0;
        if (*(int *)(param_1 + 0x20) < 1) {
          temp_v15 = *(int *)(param_1 + 0x54) == temp_v4;
        }
        if (!temp_v15) {
          *(unsigned char *)(param_1 + 0x60) = 1;
        }
      }
      temp_v11 = (unsigned int)*(unsigned short *)(param_1 + 0x5c);
      temp_v15 = -1 < (int)(temp_v11 * 0x40000000);
      if (temp_v15) {
        temp_v11 = temp_v11 << 0x1c;
      }
      if (!temp_v15 || (int)temp_v11 < 0) {
        if (*(char *)(param_1 + 0x62) != '\0') {
          temp_v9 = 0;
        }
        else {
          temp_v9 = *(int *)(param_1 + 0x24);
        }
        if (*(char *)(param_1 + 0x62) != '\0') {
          temp_v10 = 0;
        }
        else {
          temp_v10 = *(int *)(param_1 + 0x20);
        }
        if (*(char *)(param_1 + 0x62) != '\0') {
          temp_v12 = 0;
        }
        else {
          temp_v12 = *(int *)(param_1 + 0x1c);
        }
        temp_v15 = temp_v12 - 1 == temp_v9 + temp_v10;
        if (temp_v12 - 1 <= temp_v9 + temp_v10) {
          temp_v15 = *(int *)(param_1 + 0x54) == temp_v4;
        }
        if (!temp_v15) {
          *(unsigned char *)(param_1 + 0x60) = 1;
        }
      }
    }
    *(int *)(param_1 + 0x54) = temp_v4;
    if (*(char *)(param_1 + 0x62) != '\0') {
      temp_v4 = 0;
    }
    else {
      temp_v4 = *(int *)(param_1 + 0x4c);
    }
    if (*(char *)(param_1 + 0x62) != '\0') {
      temp_v9 = 0;
    }
    else {
      temp_v9 = *(int *)(param_1 + 0x48);
    }
    temp_v13 = *(unsigned short *)(param_1 + 0x5e);
    temp_v4 = temp_v4 + temp_v9;
    *(unsigned char *)(param_1 + 0x61) = 0;
    if (temp_v13 != 0) {
      if (((temp_v13 & 1) != 0) || ((int)((unsigned int)temp_v13 << 0x1d) < 0)) {
        temp_v15 = *(int *)(param_1 + 0x48) == 0;
        if (*(int *)(param_1 + 0x48) < 1) {
          temp_v15 = *(int *)(param_1 + 0x58) == temp_v4;
        }
        if (!temp_v15) {
          *(unsigned char *)(param_1 + 0x61) = 1;
        }
      }
      temp_v11 = (unsigned int)*(unsigned short *)(param_1 + 0x5e);
      temp_v15 = -1 < (int)(temp_v11 * 0x40000000);
      if (temp_v15) {
        temp_v11 = temp_v11 << 0x1c;
      }
      if (!temp_v15 || (int)temp_v11 < 0) {
        if (*(char *)(param_1 + 0x62) != '\0') {
          temp_v9 = 0;
        }
        else {
          temp_v9 = *(int *)(param_1 + 0x4c);
        }
        if (*(char *)(param_1 + 0x62) != '\0') {
          temp_v10 = 0;
        }
        else {
          temp_v10 = *(int *)(param_1 + 0x48);
        }
        if (*(char *)(param_1 + 0x62) != '\0') {
          temp_v12 = 0;
        }
        else {
          temp_v12 = *(int *)(param_1 + 0x44);
        }
        temp_v15 = temp_v12 - 1 == temp_v9 + temp_v10;
        if (temp_v12 - 1 <= temp_v9 + temp_v10) {
          temp_v15 = *(int *)(param_1 + 0x58) == temp_v4;
        }
        if (!temp_v15) {
          *(unsigned char *)(param_1 + 0x61) = 1;
        }
        if (temp_v14 != 0) {
          if (*(char *)(param_1 + 0x62) != '\0') {
            temp_v9 = 0;
          }
          else {
            temp_v9 = *(int *)(param_1 + 0x48);
          }
          if (((temp_v6 + temp_v7) * temp_v8 + temp_v9) - *(int *)(param_1 + 0x50) == -1) {
            if (*(char *)(param_1 + 0x62) != '\0') {
              temp_v6 = 0;
            }
            else {
              temp_v6 = *(int *)(param_1 + 0x48);
            }
            if (temp_v6 == temp_v5) {
              *(unsigned char *)(param_1 + 0x61) = 0;
            }
          }
        }
      }
    }
    *(int *)(param_1 + 0x58) = temp_v4;
    temp_v3 = 0;
    if ((unsigned char)(temp_v1 | temp_v2)) {
      if (param_2 != 0) {
        eventQueueAddUniqueIfValid(0x100020d);
      }
      temp_v3 = 1;
    }
  }
  return temp_v3;
}

} /* extern "C" */
