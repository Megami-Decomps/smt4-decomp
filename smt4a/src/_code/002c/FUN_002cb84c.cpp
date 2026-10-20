/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cb84c` (_code @ 0x2cb84c, 0x458 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c2c4c(...);
int FUN_002c2c68(...);
int FUN_0031d1b4(...);
int FUN_0031d1d8(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_0057f268; /* 0x57f268 */

extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_002c2c4c. */
/* Supplied declaration required: FUN_002c2c68. */
/* Supplied declaration required: FUN_0031d1b4. */
/* Supplied declaration required: FUN_0031d1d8. */


void FUN_002cb84c(void)

{
/* irregular: 7 goto(s); 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = DAT_0057f268;
  temp_v1 = *(int *)(DAT_0057f268 + 0x20);
  if (temp_v1 != 4) {
    if (temp_v1 != 6) {
      if (temp_v1 == 8) {
        temp_v1 = DAT_0057f268 + 0xdb4;
        temp_v3 = 0;
        temp_v2 = FUN_002c2c4c();
        if (0 < temp_v2) {
          do {
            if (*(char *)(temp_v0 + temp_v3 + 0x9c0) != '\0') {
              FUN_0031d1b4(temp_v0 + 0xd50,temp_v3);
              FUN_0031d1d8(temp_v0 + 0xd50,0);
              FUN_0031d1b4(temp_v1,temp_v3);
              temp_v3 = 0;
LAB_002cbb00:
              FUN_0031d1d8(temp_v1,temp_v3);
              goto LAB_002cbb58;
            }
            temp_v3 = temp_v3 + 1;
            temp_v2 = FUN_002c2c4c(temp_v1);
          } while (temp_v3 < temp_v2);
        }
        temp_v3 = 1;
        temp_v2 = FUN_002c2c68(temp_v1);
        if (temp_v2 >= 2) {
          do {
            temp_v4 = 0;
            temp_v2 = FUN_002c2c4c(temp_v1);
            if (0 < temp_v2) {
              do {
                temp_v2 = (temp_v4 + temp_v3 * 4) - 4;
                if (*(short *)(temp_v0 + temp_v2 * 8 + 0xa84) != 0) {
                  FUN_0031d1b4(temp_v1,temp_v4);
                  FUN_0031d1d8(temp_v1,temp_v3);
                  if (*(int *)(temp_v0 + 0x2c) != 0) {
                    if ((*(int *)(temp_v0 + 0x2c) != 1) || (temp_v2 < 0xc)) goto LAB_002cbb58;
                    FUN_0031d1b4(temp_v0 + 0xd50,temp_v4);
                    temp_v3 = temp_v3 - 3;
                  }
                  else {
                    if (temp_v2 >= 0xc) goto LAB_002cbb58;
                    FUN_0031d1b4(temp_v0 + 0xd50,temp_v4);
                  }
                  temp_v1 = temp_v0 + 0xd50;
                  goto LAB_002cbb00;
                }
                temp_v4 = temp_v4 + 1;
                temp_v2 = FUN_002c2c4c(temp_v1);
              } while (temp_v4 < temp_v2);
            }
            temp_v3 = temp_v3 + 1;
            temp_v2 = FUN_002c2c68(temp_v1);
          } while (temp_v3 < temp_v2);
        }
      }
    }
    else {
      temp_v1 = DAT_0057f268 + 0xcec;
      temp_v3 = 0;
      temp_v2 = FUN_002c2c68();
      if (0 < temp_v2) {
        do {
          temp_v4 = 0;
          temp_v2 = FUN_002c2c4c(temp_v1);
          if (0 < temp_v2) {
            do {
              temp_v2 = temp_v4 + temp_v3 * 4;
              if (*(short *)(temp_v0 + temp_v2 * 8 + 0xa84) != 0) {
                FUN_0031d1b4(temp_v1,temp_v4);
                FUN_0031d1d8(temp_v1,temp_v3);
                if (*(int *)(temp_v0 + 0x2c) == 0) {
                  if (temp_v2 < 0xc) {
                    FUN_0031d1b4(temp_v0 + 0xc88,temp_v4);
                    FUN_0031d1d8(temp_v0 + 0xc88,temp_v3);
                  }
                  goto LAB_002cbb58;
                }
                if ((*(int *)(temp_v0 + 0x2c) != 1) || (temp_v2 < 0xc)) goto LAB_002cbb58;
                temp_v1 = temp_v0 + 0xc88;
                FUN_0031d1b4(temp_v1,temp_v4);
                temp_v3 = temp_v3 - 4;
                goto LAB_002cbb00;
              }
              temp_v4 = temp_v4 + 1;
              temp_v2 = FUN_002c2c4c(temp_v1);
            } while (temp_v4 < temp_v2);
          }
          temp_v3 = temp_v3 + 1;
          temp_v2 = FUN_002c2c68(temp_v1);
        } while (temp_v3 < temp_v2);
      }
    }
  }
  else {
    temp_v1 = DAT_0057f268 + 0xc24;
    temp_v3 = 0;
    temp_v2 = FUN_002c2c4c();
    if (0 < temp_v2) {
      do {
        if (*(char *)(temp_v0 + temp_v3 + 0x9c0) != '\0') {
          FUN_0031d1b4(temp_v1,temp_v3);
          break;
        }
        temp_v3 = temp_v3 + 1;
        temp_v2 = FUN_002c2c4c(temp_v1);
      } while (temp_v3 < temp_v2);
    }
  }
LAB_002cbb58:
  if (*(char *)(temp_v0 + 0x9b4) == '\x10') {
    temp_v1 = FUN_001ab888();
    temp_v2 = 0;
    do {
      if ((-1 < *(char *)(temp_v1 + temp_v2 + 0x1ca0)) &&
         (temp_v3 = FUN_001ab854(), (*(unsigned short *)(temp_v3 + 0x60) & 4) != 0)) {
        FUN_0031d1b4(temp_v0 + 0xd50,temp_v2 + 1);
        FUN_0031d1d8(temp_v0 + 0xd50,0);
        FUN_0031d1b4(temp_v0 + 0xdb4,temp_v2 + 1);
        FUN_0031d1d8(temp_v0 + 0xdb4,0);
        return;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 3);
    temp_v1 = 0;
    do {
      if ((-1 < *(int *)(temp_v0 + temp_v1 * 8 + 0xa80)) &&
         (temp_v2 = FUN_001ab854(), (*(unsigned short *)(temp_v2 + 0x60) & 4) != 0)) {
        temp_v4 = temp_v1 % 4;
        temp_v2 = (int)(temp_v1 + ((unsigned int)(temp_v1 >> 0x1f) >> 0x1e)) >> 2;
        temp_v3 = temp_v2 + 1;
        FUN_0031d1b4(temp_v0 + 0xdb4,temp_v4);
        FUN_0031d1d8(temp_v0 + 0xdb4,temp_v3);
        if (*(int *)(temp_v0 + 0x2c) == 0) {
          if (temp_v1 >= 0xc) {
            return;
          }
          FUN_0031d1b4(temp_v0 + 0xd50,temp_v4);
          FUN_0031d1d8(temp_v0 + 0xd50,temp_v3);
          return;
        }
        if (*(int *)(temp_v0 + 0x2c) != 1) {
          return;
        }
        if (temp_v1 < 0xc) {
          return;
        }
        FUN_0031d1b4(temp_v0 + 0xd50,temp_v4);
        FUN_0031d1d8(temp_v0 + 0xd50,temp_v2 - 2);
        return;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x18);
  }
  return;
}

} /* extern "C" */
