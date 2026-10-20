/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1658` (_code @ 0x2c1658, 0x1f8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int padIsButtonRepeat(...);
int padIsButtonPressed(...);
int FUN_002c15fc(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int DAT_0043da2c; /* 0x43da2c */

extern int FUN_00125084(char);
extern int FUN_00125cec(char);
/* Supplied declaration required: padIsButtonRepeat. */
/* Supplied declaration required: padIsButtonPressed. */
/* Supplied declaration required: FUN_002c15fc. */


/* WARNING: Type propagation algorithm not settling */

int FUN_002c1658(int param_1,int param_2)

{
/* irregular: 4 goto(s); 4 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  char temp_v3;
  
  temp_v3 = '\0';
  switch(param_1) {
  case 0:
    temp_v3 = '\x01';
    break;
  case 1:
    temp_v3 = '\x02';
    break;
  case 7:
    temp_v3 = '\x06';
    break;
  case 8:
    temp_v3 = '\x05';
    break;
  case 9:
    temp_v3 = '\x03';
    break;
  case 10:
    temp_v3 = '\x04';
  }
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 == 2) {
        temp_v1 = FUN_002c15fc(param_1);
        if (temp_v1 != 0) {
          return temp_v1;
        }
      }
    }
    else {
      temp_v1 = padIsButtonPressed(param_1);
      if (temp_v1 != 0) {
        return temp_v1;
      }
    }
  }
  else {
    temp_v1 = padIsButtonRepeat(param_1);
    if (temp_v1 != 0) {
      return temp_v1;
    }
  }
  temp_v1 = 0;
  if (param_1 != 5) {
    if (param_1 != 6) {
      if (param_1 == 4) {
        temp_v2 = 0xd;
        goto joined_r0x002c1770;
      }
      if (param_1 == 3) {
        temp_v2 = 0xc;
        goto joined_r0x002c1770;
      }
    }
    else {
      temp_v2 = 0xf;
joined_r0x002c1770:
      if (param_2 != 0) {
joined_r0x002c1758:
        if (param_2 != 1) {
          if (param_2 != 2) goto LAB_002c17e4;
          temp_v1 = FUN_002c15fc(temp_v2);
        }
        else {
          temp_v1 = padIsButtonPressed(temp_v2);
        }
      }
      else {
        temp_v1 = padIsButtonRepeat(temp_v2);
      }
    }
  }
  else {
    temp_v2 = 0xe;
    if (param_2 != 0) goto joined_r0x002c1758;
    temp_v1 = padIsButtonRepeat(temp_v2);
  }
  if (temp_v1 != 0) {
    return temp_v1;
  }
LAB_002c17e4:
  if (temp_v3 != '\0') {
    if (param_2 == 0) {
      temp_v1 = FUN_00125cec(temp_v3);
      return temp_v1;
    }
    if (param_2 == 1) {
      temp_v1 = FUN_00125084(temp_v3);
      return temp_v1;
    }
    if (param_2 == 2) {
      if (DAT_0043da2c != 0) {
        temp_v1 = 0;
        do {
          temp_v0 = *(char *)(DAT_0043da2c + temp_v1 * 4 + 0x494);
          if ((temp_v0 == temp_v3) && (*(char *)(DAT_0043da2c + temp_v1 + 0x4b8) != '\0')) {
            return 1;
          }
          if (temp_v0 != '\b') {
            if ((temp_v0 == '\t') && (temp_v3 == '\x03')) {
              temp_v0 = *(char *)(DAT_0043da2c + temp_v1 + 0x4b8);
              if (temp_v0 != '\0') {
                return 1;
              }
            }
          }
          else if (temp_v3 == '\x04') {
            temp_v0 = *(char *)(DAT_0043da2c + temp_v1 + 0x4b8);
            if (temp_v0 != '\0') {
              return 1;
            }
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 6);
      }
      return 0;
    }
  }
  return 0;
}

} /* extern "C" */
