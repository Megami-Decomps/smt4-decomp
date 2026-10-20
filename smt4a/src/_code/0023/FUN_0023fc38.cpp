/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023fc38` (_code @ 0x23fc38, 0x2c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001681cc(unsigned int);
int FUN_00183f58(int, int, int, int);
int FUN_002c7e24(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0057f268; /* 0x57f268 */

/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_00183f58. */
extern int FUN_0018719c(unsigned int);
extern int FUN_0022e714(void);
extern int FUN_00237608(void);
/* Supplied declaration required: FUN_002c7e24. */
extern int FUN_002cab18(void);
extern int FUN_002cad18(void);
extern int FUN_002f1964(void);
extern int FUN_003aeaf0(unsigned int);


void FUN_0023fc38(void)

{
/* irregular: 2 goto(s); 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v5 = DAT_0057f268;
  FUN_002c7e24();
  temp_v0 = *(unsigned char *)(temp_v5 + 0x9b4);
  temp_v1 = 1;
  if ((temp_v0 < 2) || ((temp_v0 == 0xc || temp_v0 == 0xd) || temp_v0 == 0xe)) {
    temp_v1 = 0;
  }
  temp_v2 = FUN_002cad18();
  temp_v3 = FUN_002cab18();
  if (temp_v2 != 0) {
    if (temp_v1) {
      if (*(char *)(temp_v5 + 0x9b4) != '\x10') {
        if (*(char *)(temp_v5 + 0x42) == '\0') {
          temp_v4 = 0x1d;
        }
        else {
          temp_v4 = 0x1e;
        }
      }
      else if (*(char *)(temp_v5 + 0x42) == '\0') {
        temp_v4 = 0xb9;
      }
      else {
        temp_v4 = 0xba;
      }
    }
    else if ((*(char *)(temp_v5 + 0x9b4) == '\f') && (temp_v2 = FUN_0018719c(0x401), temp_v2 != 0)) {
      if (*(char *)(temp_v5 + 0x42) == '\0') {
        temp_v4 = 0xc0;
      }
      else {
        temp_v4 = 0xc1;
      }
    }
    else {
      temp_v2 = *(int *)(temp_v5 + 0x1218);
      if (*(char *)(temp_v5 + 0x42) != '\0') {
        if (temp_v2 == 0) {
          temp_v4 = 0x1c;
        }
        else {
          if (temp_v2 != 1) goto LAB_0023fea8;
          temp_v4 = 0x28;
        }
      }
      else if (temp_v2 == 0) {
        temp_v4 = 0x1b;
      }
      else {
        if (temp_v2 != 1) goto LAB_0023fea8;
        temp_v4 = 0x27;
      }
    }
    FUN_001681cc(temp_v4);
  }
  else if (temp_v3 < 0) {
    if (temp_v1) {
      if (*(char *)(temp_v5 + 0x9b4) != '\x10') {
        if (*(char *)(temp_v5 + 0x42) == '\0') {
          temp_v4 = 0x25;
        }
        else {
          temp_v4 = 0x26;
        }
      }
      else if (*(char *)(temp_v5 + 0x42) == '\0') {
        temp_v4 = 0xbc;
      }
      else {
        temp_v4 = 0xbd;
      }
    }
    else if ((*(char *)(temp_v5 + 0x9b4) == '\f') && (temp_v2 = FUN_0018719c(0x401), temp_v2 != 0)) {
      if (*(char *)(temp_v5 + 0x42) == '\0') {
        temp_v4 = 0xc4;
      }
      else {
        temp_v4 = 0xc5;
      }
    }
    else if (*(char *)(temp_v5 + 0x42) != '\0') {
      temp_v4 = 0x26;
    }
    else {
      temp_v4 = 0x25;
    }
    FUN_001681cc(temp_v4);
  }
  else if (temp_v1) {
    if ((*(int *)(temp_v5 + 0x1c) != 0x19) || (temp_v2 = FUN_002f1964(), temp_v2 == 0)) {
      if (*(char *)(temp_v5 + 0x42) == '\0') {
        temp_v4 = 0x23;
      }
      else {
        temp_v4 = 0x24;
      }
      FUN_001681cc(temp_v4);
    }
  }
  else {
    if (*(char *)(temp_v5 + 0x9b4) != '\f') {
      temp_v2 = *(int *)(temp_v5 + 0x1218);
      if (*(char *)(temp_v5 + 0x42) != '\0') {
        if (temp_v2 == 0) {
          temp_v4 = 0x22;
          FUN_001681cc(temp_v4);
        }
        else if (temp_v2 == 1) {
          temp_v4 = 0x28;
          FUN_001681cc(temp_v4);
        }
      }
      else if (temp_v2 == 0) {
        temp_v4 = 0x21;
        FUN_001681cc(temp_v4);
      }
      else if (temp_v2 == 1) {
        temp_v4 = 0x27;
        FUN_001681cc(temp_v4);
      }
    }
    else {
      if (*(char *)(temp_v5 + 0x42) == '\0') {
        temp_v4 = 0xc2;
      }
      else {
        temp_v4 = 0xc3;
      }
      FUN_001681cc(temp_v4);
    }
    temp_v2 = FUN_0022e714();
    if ((temp_v2 != 0) && (temp_v2 = FUN_00237608(), temp_v2 != 0)) {
      if (*(char *)(temp_v5 + 0x42) == '\0') {
        temp_v4 = 0xe5;
      }
      else {
        temp_v4 = 0xce;
      }
      FUN_001681cc(temp_v4);
    }
  }
LAB_0023fea8:
  if (*(char *)(temp_v5 + 0x1210) != '\0') {
    FUN_00183f58(3,0x12,0,1);
    return;
  }
  temp_v5 = FUN_003aeaf0(3);
  if (temp_v5 != 0) {
    return;
  }
  FUN_00183f58(3,3,0xb,1);
  return;
}

} /* extern "C" */
