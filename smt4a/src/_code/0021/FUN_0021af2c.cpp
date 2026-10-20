/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021af2c` (_code @ 0x21af2c, 0x274 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c7ce8(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_00588fd4; /* 0x588fd4 */

/* Supplied declaration required: FUN_002c7ce8. */


void FUN_0021af2c(void)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  temp_v2 = DAT_00588fd4;
  *(unsigned int *)(DAT_00588fd4 + 0x14) = 0;
  *(unsigned char *)(temp_v2 + 0x2014) = 1;
  temp_v3 = DAT_00588fd4;
  temp_v0 = *(char *)(temp_v2 + 0x2017);
  if (temp_v0 == '\0') {
    if (*(int *)(DAT_00588fd4 + 0x1374) == 0) {
      FUN_002c7ce8(0);
    }
    if (*(int *)(temp_v3 + 0x1374) == 1) {
      FUN_002c7ce8(1);
    }
    temp_v4 = (unsigned int)*(unsigned char *)(temp_v2 + 0x1381);
    temp_v5 = temp_v4 == 0;
    if (temp_v5) {
      temp_v4 = *(unsigned int *)(temp_v3 + 0x1374);
    }
    if (!temp_v5 || temp_v4 != 2) {
      return;
    }
    FUN_002c7ce8(2);
    return;
  }
  if (temp_v0 != '\a') {
    if ((!(temp_v0 == '\t' || temp_v0 == '\n')) &&
       (!((temp_v0 == '\v' || temp_v0 == '\f') || temp_v0 == '\b'))) {
      if (temp_v0 == '\x0f') {
        if (*(int *)(DAT_00588fd4 + 0x1374) != 0) {
          return;
        }
        FUN_002c7ce8(0);
        return;
      }
      if (temp_v0 != '\x0e') {
        temp_v1 = *(char *)(temp_v2 + 0x2018);
        if (temp_v0 != '\x04') {
          if (temp_v1 != '\x06') {
            if (temp_v1 != '\r') {
              if (*(char *)(temp_v2 + 0x2010) == '\0') {
                if (*(int *)(DAT_00588fd4 + 0x1374) == 0) {
                  FUN_002c7ce8(0);
                }
                if (*(int *)(temp_v3 + 0x1374) != 1) {
                  return;
                }
                FUN_002c7ce8(1);
                return;
              }
              if (*(int *)(DAT_00588fd4 + 0x1374) == 0) {
                FUN_002c7ce8(0);
              }
              if (*(int *)(temp_v3 + 0x1374) == 1) {
                FUN_002c7ce8(1);
              }
              temp_v4 = (unsigned int)*(unsigned char *)(temp_v2 + 0x1381);
              temp_v5 = temp_v4 == 0;
              if (temp_v5) {
                temp_v4 = *(unsigned int *)(temp_v3 + 0x1374);
              }
              if (!temp_v5 || temp_v4 != 2) {
                return;
              }
            }
            else {
              if (*(int *)(DAT_00588fd4 + 0x1374) == 0) {
                FUN_002c7ce8(1);
              }
              if (*(int *)(temp_v3 + 0x1374) != 1) {
                return;
              }
            }
            FUN_002c7ce8(5);
            return;
          }
          if (*(int *)(DAT_00588fd4 + 0x1374) != 0) {
            return;
          }
        }
        else if (!(temp_v1 == '\a' || temp_v1 == '\f')) {
          if (*(int *)(DAT_00588fd4 + 0x1374) == 0) {
            FUN_002c7ce8(0);
          }
          if (*(int *)(temp_v3 + 0x1374) != 1) {
            return;
          }
        }
        else if (*(int *)(DAT_00588fd4 + 0x1374) != 0) {
          return;
        }
        FUN_002c7ce8(1);
        return;
      }
      if (*(int *)(DAT_00588fd4 + 0x1374) == 0) {
        FUN_002c7ce8(0);
      }
      if (*(int *)(temp_v3 + 0x1374) == 1) {
        FUN_002c7ce8(1);
      }
      temp_v4 = (unsigned int)*(unsigned char *)(temp_v2 + 0x1381);
      temp_v5 = temp_v4 == 0;
      if (temp_v5) {
        temp_v4 = *(unsigned int *)(temp_v3 + 0x1374);
      }
      if (!temp_v5 || temp_v4 != 2) {
        return;
      }
    }
    else {
      if (*(int *)(DAT_00588fd4 + 0x1374) == 0) {
        FUN_002c7ce8(1);
      }
      if (*(int *)(temp_v3 + 0x1374) != 1) {
        return;
      }
    }
  }
  else {
    if (*(char *)(temp_v2 + 0x2010) == '\0') {
      if (*(int *)(DAT_00588fd4 + 0x1374) == 0) {
        FUN_002c7ce8(0);
      }
      if (*(int *)(temp_v3 + 0x1374) != 1) {
        return;
      }
      FUN_002c7ce8(1);
      return;
    }
    if (*(int *)(DAT_00588fd4 + 0x1374) == 0) {
      FUN_002c7ce8(0);
    }
    if (*(int *)(temp_v3 + 0x1374) == 1) {
      FUN_002c7ce8(1);
    }
    if (*(int *)(temp_v3 + 0x1374) != 2) {
      return;
    }
  }
  FUN_002c7ce8(5);
  return;
}

} /* extern "C" */
