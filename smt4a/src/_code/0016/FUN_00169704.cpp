/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00169704` (_code @ 0x169704, 0x30c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00185830(...);
int FUN_00186ce4(...);
int FUN_00186e2c(int, unsigned int);
int FUN_001ad7cc(int, unsigned int, int *);

/* stack frame of void: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} void_stack;

extern int DAT_0057f4c4; /* 0x57f4c4 */

extern int FUN_00163e40(void);
/* Supplied declaration required: FUN_00185830. */
/* Supplied declaration required: FUN_00186ce4. */
/* Supplied declaration required: FUN_00186e2c. */
extern int FUN_001ab8c0(void);
/* Supplied declaration required: FUN_001ad7cc. */


unsigned int FUN_00169704(void)

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
  
  temp_v0 = DAT_0057f4c4;
  if (DAT_0057f4c4 == 0) {
    return 1;
  }
  temp_v1 = *(int *)(DAT_0057f4c4 + 0x5f0);
  if (temp_v1 != 5) {
    if (temp_v1 == 2 || temp_v1 == 3) {
      return 1;
    }
  }
  else {
    FUN_00186e2c(DAT_0057f4c4 + 0x598,*(unsigned int *)(DAT_0057f4c4 + 0x5ec));
    temp_v1 = 0;
LAB_0016975c:
    do {
      temp_v6 = temp_v0 + temp_v1 * 4;
      if (*(int *)(temp_v6 + 0x634) != 0) {
        temp_v2 = FUN_00163e40();
        temp_v4 = DAT_0057f4c4;
        if (temp_v2 != 0) {
          if (DAT_0057f4c4 != 0) {
            if ((*(int *)(DAT_0057f4c4 + 0x5e8) != 0) && (temp_v2 = FUN_001ab8c0(), temp_v2 != 0)) {
              temp_v2 = *(int *)(*(int *)(temp_v4 + 0x5e8) + 8);
              FUN_001ad7cc(temp_v2,*(unsigned int *)(temp_v1 * 4 + 0x57f538),&temp_v8);
              if (temp_v1 == 0) {
                temp_v9 = temp_v9 + *(float *)(temp_v4 + 0x644);
              }
              if (temp_v2 == 0) goto LAB_00169990;
            }
            temp_v10 = temp_v8;
            iStack_34 = iStack_54;
            if (temp_v1 != 0) {
              temp_v4 = *(int *)(temp_v0 + 0x5fc);
              if ((*(int *)(temp_v0 + 0x5f8) == temp_v4) || (*(int *)(temp_v0 + 0x5f8) != 1)) {
                temp_v11 = temp_v9 + *(float *)(temp_v0 + 0x654);
                temp_v9 = temp_v9 + *(float *)(temp_v0 + 0x658);
              }
              else {
                temp_v11 = temp_v9 + *(float *)(temp_v0 + 0x658);
                temp_v9 = temp_v9 + *(float *)(temp_v0 + 0x658);
              }
            }
            else {
              temp_v11 = temp_v9 + *(float *)(temp_v0 + 0x648);
              temp_v4 = iStack_54;
              temp_v9 = temp_v9 + *(float *)(temp_v0 + 0x64c);
            }
            temp_v2 = *(int *)(temp_v0 + 0x604);
            if (temp_v2 != 200) {
              temp_v4 = *(int *)(temp_v0 + 0x600);
            }
            if (temp_v2 == 200 || temp_v4 == 200) {
              if (temp_v1 == 0) {
                if (temp_v2 != 200) {
                  if (*(int *)(temp_v0 + 0x600) == 200) {
                    FUN_00186ce4(*(unsigned int *)(temp_v0 + 0x634),&temp_v8,&temp_v10,
                                 *(unsigned int *)(temp_v0 + 0x5e4),(int)*(float *)(temp_v0 + 0x5dc),7);
                  }
                }
                else {
                  FUN_00186ce4(*(unsigned int *)(temp_v0 + 0x634),&temp_v8,&temp_v10,
                               *(unsigned int *)(temp_v0 + 0x5e4),(int)*(float *)(temp_v0 + 0x5dc),1);
                }
                temp_v1 = 1;
                goto LAB_0016975c;
              }
              if (*(int *)(temp_v0 + 0x600) != 200) {
                FUN_00186ce4(*(unsigned int *)(temp_v6 + 0x634),&temp_v8,&temp_v10,
                             *(unsigned int *)(temp_v0 + 0x5e4),(int)*(float *)(temp_v0 + 0x5dc),0);
              }
              else {
                FUN_00186ce4(*(unsigned int *)(temp_v6 + 0x634),&temp_v8,&temp_v10,
                             *(unsigned int *)(temp_v0 + 0x5e4),(int)*(float *)(temp_v0 + 0x5dc),7);
              }
            }
            else {
              FUN_00186ce4(*(unsigned int *)(temp_v6 + 0x634),&temp_v8,&temp_v10,
                           *(unsigned int *)(temp_v0 + 0x5e4),(int)*(float *)(temp_v0 + 0x5dc),0);
            }
          }
          else {
LAB_00169990:
            if (temp_v1 != 0) {
              temp_v7 = *(float *)(temp_v0 + 0x5dc);
              temp_v5 = *(unsigned int *)(temp_v0 + 0x5e4);
              temp_v3 = *(unsigned int *)(temp_v6 + 0x634);
            }
            else {
              temp_v7 = *(float *)(temp_v0 + 0x5dc);
              temp_v3 = *(unsigned int *)(temp_v0 + 0x634);
              temp_v5 = *(unsigned int *)(temp_v0 + 0x5e4);
            }
            FUN_00185830(temp_v3,temp_v5,(int)temp_v7);
            *(unsigned int *)(temp_v6 + 0x634) = 0;
          }
        }
        else {
          *(unsigned int *)(temp_v6 + 0x634) = 0;
        }
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 4);
    *(unsigned int *)(temp_v0 + 0x5f0) = 6;
  }
  return 0;
}

} /* extern "C" */
