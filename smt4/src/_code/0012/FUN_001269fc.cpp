/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001269fc` (_code @ 0x1269fc, 0x30c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00138954(...);
int FUN_002adca0(...);
int FUN_002adde8(int, unsigned int, int *);
int FUN_002adf00(int, unsigned int);

/* stack frame of void: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} void_stack;

extern int DAT_0043dfc0; /* 0x43dfc0 */

/* Supplied declaration required: FUN_00138954. */
/* Supplied declaration required: FUN_002adca0. */
/* Supplied declaration required: FUN_002adde8. */
extern int FUN_002adee0(void);
/* Supplied declaration required: FUN_002adf00. */
extern int FUN_002bf244(void);


unsigned int FUN_001269fc(void)

{
/* irregular: 2 goto(s); 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  float temp_v7;
  int temp_v8;
  int iStack_54;
  float temp_v9;
  int temp_v10;
  int iStack_34;
  float temp_v11;
  
  temp_v0 = DAT_0043dfc0;
  if (DAT_0043dfc0 == 0) {
    return 1;
  }
  temp_v1 = *(int *)(DAT_0043dfc0 + 0x5ec);
  if (temp_v1 != 5) {
    if (temp_v1 == 2 || temp_v1 == 3) {
      return 1;
    }
  }
  else {
    FUN_002adf00(DAT_0043dfc0 + 0x594,*(unsigned int *)(DAT_0043dfc0 + 0x5e8));
    temp_v1 = 0;
LAB_00126a54:
    do {
      temp_v6 = temp_v0 + temp_v1 * 4;
      if (*(int *)(temp_v6 + 0x630) != 0) {
        temp_v2 = FUN_002bf244();
        temp_v4 = DAT_0043dfc0;
        if (temp_v2 != 0) {
          if (DAT_0043dfc0 != 0) {
            if ((*(int *)(DAT_0043dfc0 + 0x5e4) != 0) && (temp_v2 = FUN_002adee0(), temp_v2 != 0)) {
              temp_v2 = *(int *)(*(int *)(temp_v4 + 0x5e4) + 8);
              FUN_002adde8(temp_v2,*(unsigned int *)(temp_v1 * 4 + 0x43e048),&temp_v8);
              if (temp_v1 == 0) {
                temp_v9 = temp_v9 + *(float *)(temp_v4 + 0x640);
              }
              if (temp_v2 == 0) goto LAB_00126c88;
            }
            temp_v10 = temp_v8;
            iStack_34 = iStack_54;
            if (temp_v1 != 0) {
              temp_v4 = *(int *)(temp_v0 + 0x5f8);
              if ((*(int *)(temp_v0 + 0x5f4) == temp_v4) || (*(int *)(temp_v0 + 0x5f4) != 1)) {
                temp_v11 = temp_v9 + *(float *)(temp_v0 + 0x650);
                temp_v9 = temp_v9 + *(float *)(temp_v0 + 0x654);
              }
              else {
                temp_v11 = temp_v9 + *(float *)(temp_v0 + 0x654);
                temp_v9 = temp_v9 + *(float *)(temp_v0 + 0x654);
              }
            }
            else {
              temp_v11 = temp_v9 + *(float *)(temp_v0 + 0x644);
              temp_v4 = iStack_54;
              temp_v9 = temp_v9 + *(float *)(temp_v0 + 0x648);
            }
            temp_v2 = *(int *)(temp_v0 + 0x600);
            if (temp_v2 != 200) {
              temp_v4 = *(int *)(temp_v0 + 0x5fc);
            }
            if (temp_v2 == 200 || temp_v4 == 200) {
              if (temp_v1 == 0) {
                if (temp_v2 != 200) {
                  if (*(int *)(temp_v0 + 0x5fc) == 200) {
                    FUN_002adca0(*(unsigned int *)(temp_v0 + 0x630),&temp_v8,&temp_v10,
                                 *(unsigned int *)(temp_v0 + 0x5e0),(int)*(float *)(temp_v0 + 0x5d8),7);
                  }
                }
                else {
                  FUN_002adca0(*(unsigned int *)(temp_v0 + 0x630),&temp_v8,&temp_v10,
                               *(unsigned int *)(temp_v0 + 0x5e0),(int)*(float *)(temp_v0 + 0x5d8),1);
                }
                temp_v1 = 1;
                goto LAB_00126a54;
              }
              if (*(int *)(temp_v0 + 0x5fc) != 200) {
                FUN_002adca0(*(unsigned int *)(temp_v6 + 0x630),&temp_v8,&temp_v10,
                             *(unsigned int *)(temp_v0 + 0x5e0),(int)*(float *)(temp_v0 + 0x5d8),0);
              }
              else {
                FUN_002adca0(*(unsigned int *)(temp_v6 + 0x630),&temp_v8,&temp_v10,
                             *(unsigned int *)(temp_v0 + 0x5e0),(int)*(float *)(temp_v0 + 0x5d8),7);
              }
            }
            else {
              FUN_002adca0(*(unsigned int *)(temp_v6 + 0x630),&temp_v8,&temp_v10,
                           *(unsigned int *)(temp_v0 + 0x5e0),(int)*(float *)(temp_v0 + 0x5d8),0);
            }
          }
          else {
LAB_00126c88:
            if (temp_v1 != 0) {
              temp_v7 = *(float *)(temp_v0 + 0x5d8);
              temp_v5 = *(unsigned int *)(temp_v0 + 0x5e0);
              temp_v3 = *(unsigned int *)(temp_v6 + 0x630);
            }
            else {
              temp_v7 = *(float *)(temp_v0 + 0x5d8);
              temp_v3 = *(unsigned int *)(temp_v0 + 0x630);
              temp_v5 = *(unsigned int *)(temp_v0 + 0x5e0);
            }
            FUN_00138954(temp_v3,temp_v5,(int)temp_v7);
            *(unsigned int *)(temp_v6 + 0x630) = 0;
          }
        }
        else {
          *(unsigned int *)(temp_v6 + 0x630) = 0;
        }
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 4);
    *(unsigned int *)(temp_v0 + 0x5ec) = 6;
  }
  return 0;
}

} /* extern "C" */
