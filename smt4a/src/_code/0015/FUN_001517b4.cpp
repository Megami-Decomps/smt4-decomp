/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001517b4` (_code @ 0x1517b4, 0x1f8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163fd4(...);
int FUN_00164af0(...);
int FUN_001656a0(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int DAT_0057f0c8; /* 0x57f0c8 */

/* Supplied declaration required: FUN_00163fd4. */
/* Supplied declaration required: FUN_00164af0. */
extern int FUN_00164e18(char);
/* Supplied declaration required: FUN_001656a0. */
extern int FUN_00166fa0(char);


/* WARNING: Type propagation algorithm not settling */

int FUN_001517b4(int param_1,int param_2)

{
/* irregular: 5 goto(s); 4 native warning(s); review required */
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
        temp_v1 = FUN_00163fd4(param_1);
        if (temp_v1 != 0) {
          return temp_v1;
        }
      }
    }
    else {
      temp_v1 = FUN_001656a0(param_1);
      if (temp_v1 != 0) {
        return temp_v1;
      }
    }
  }
  else {
    temp_v1 = FUN_00164af0(param_1);
    if (temp_v1 != 0) {
      return temp_v1;
    }
  }
  temp_v1 = 0;
  if (param_1 != 5) {
    if (param_1 != 6) {
      if (param_1 == 4) {
        temp_v2 = 0xd;
        goto joined_r0x001518cc;
      }
      if (param_1 == 3) {
        temp_v2 = 0xc;
        goto joined_r0x001518cc;
      }
    }
    else {
      temp_v2 = 0xf;
joined_r0x001518cc:
      if (param_2 != 0) {
joined_r0x001518b4:
        if (param_2 != 1) {
          if (param_2 != 2) goto LAB_00151940;
          temp_v1 = FUN_00163fd4(temp_v2);
        }
        else {
          temp_v1 = FUN_001656a0(temp_v2);
        }
      }
      else {
        temp_v1 = FUN_00164af0(temp_v2);
      }
    }
  }
  else {
    temp_v2 = 0xe;
    if (param_2 != 0) goto joined_r0x001518b4;
    temp_v1 = FUN_00164af0(temp_v2);
  }
  if (temp_v1 != 0) {
    return temp_v1;
  }
LAB_00151940:
  if (temp_v3 != '\0') {
    if (param_2 == 0) {
      temp_v1 = FUN_00166fa0(temp_v3);
      return temp_v1;
    }
    if (param_2 == 1) {
      temp_v1 = FUN_00164e18(temp_v3);
      return temp_v1;
    }
    if (param_2 == 2) {
      if (DAT_0057f0c8 != 0) {
        temp_v1 = 0;
        do {
          temp_v0 = *(char *)(DAT_0057f0c8 + temp_v1 * 4 + 0x5ac);
          if ((temp_v0 == temp_v3) && (*(char *)(DAT_0057f0c8 + temp_v1 + 0x5d4) != '\0')) {
            return 1;
          }
          if (temp_v0 != '\b') {
            if (temp_v0 != '\t') {
              if (temp_v0 != '\x14') {
                if (temp_v0 == '\x15') {
                  if (temp_v3 != '\x05') {
                    if (temp_v3 == '\x06') {
                      temp_v0 = *(char *)(DAT_0057f0c8 + temp_v1 + 0x5d5);
                      if (temp_v0 != '\0') {
                        return 1;
                      }
                    }
                  }
                  else {
                    temp_v0 = *(char *)(DAT_0057f0c8 + temp_v1 + 0x5d4);
                    if (temp_v0 != '\0') {
                      return 1;
                    }
                  }
                }
              }
              else if (temp_v3 != '\x01') {
                if (temp_v3 == '\x02') {
                  temp_v0 = *(char *)(DAT_0057f0c8 + temp_v1 + 0x5d5);
                  if (temp_v0 != '\0') {
                    return 1;
                  }
                }
              }
              else {
                temp_v0 = *(char *)(DAT_0057f0c8 + temp_v1 + 0x5d4);
                if (temp_v0 != '\0') {
                  return 1;
                }
              }
            }
            else {
              if (temp_v3 != '\x03') goto code_r0x00164e00;
              temp_v0 = *(char *)(DAT_0057f0c8 + temp_v1 + 0x5d4);
              if (temp_v0 != '\0') {
                return 1;
              }
            }
          }
          else if (temp_v3 == '\x04') {
            temp_v0 = *(char *)(DAT_0057f0c8 + temp_v1 + 0x5d4);
            if (temp_v0 != '\0') {
              return 1;
            }
          }
code_r0x00164e00:
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 6);
      }
      return 0;
    }
  }
  return 0;
}

} /* extern "C" */
