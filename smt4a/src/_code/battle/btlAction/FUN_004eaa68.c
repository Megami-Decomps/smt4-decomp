/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004eaa68` (_code @ 0x4eaa68, 0x3c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_7_stack;

extern unsigned int DAT_00571148; /* 0x571148 */
extern unsigned int DAT_0057114c; /* 0x57114c */
extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */
extern unsigned int DAT_005711b8; /* 0x5711b8 */
extern unsigned int DAT_005711bc; /* 0x5711bc */

extern int FUN_001ab888(void);
extern int FUN_003eade4(int);
/* Supplied declaration required: FUN_004e0114. */
/* Supplied declaration required: FUN_004fcde0. */
/* Supplied declaration required: FUN_004fcf0c. */


unsigned int
FUN_004eaa68(int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,
            int param_6,int param_7)

{
/* irregular: 2 goto(s); 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int *puVar10;
  unsigned int temp_v9;
  unsigned long long temp_v10;
  int temp_v11;
  unsigned int *temp_v12;
  
  temp_v7 = 0;
  temp_v6 = 0xffffffff;
  temp_v10 = (unsigned long long)param_5;
  temp_v1 = (*(unsigned int *)param_2[8] & DAT_00571168) != 0;
  temp_v2 = (((unsigned int *)param_2[8])[1] & DAT_0057116c) != 0;
  temp_v11 = 4;
  if ((*param_2 & 0x4000) == 0) {
    temp_v11 = 0;
  }
  temp_v4 = 0;
  temp_v3 = 0;
  if (!temp_v1 && !temp_v2) {
    if ((*param_2 & 0x4000) != 0) {
      if (param_7 < 3) {
        temp_v4 = param_7;
        do {
          if (-1 < *(char *)(*param_1 + temp_v4 + 0x2018)) {
            temp_v6 = (unsigned int)*(char *)(*param_1 + temp_v4 + 0x2018);
            if (0 < (int)temp_v6) {
              temp_v6 = temp_v6 - 1;
            }
            break;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 3);
      }
    }
    else {
      do {
        temp_v0 = 1 << (temp_v3 & 0xff);
        if ((temp_v0 & *(unsigned int *)(*param_1 + 0x2008)) != 0 ||
            (((int)temp_v0 >> 0x1f) & *(unsigned int *)(*param_1 + 0x200c)) != 0) {
          if (param_7 <= temp_v4) {
            temp_v6 = temp_v3;
            if (0 < (int)temp_v3) {
              temp_v6 = temp_v3 - 1;
            }
            break;
          }
          temp_v4 = (int)(char)((char)temp_v4 + '\x01');
        }
        temp_v3 = temp_v3 + 1;
      } while ((int)temp_v3 < 0x40);
    }
  }
  temp_v8 = 0;
  temp_v5 = 0;
  temp_v4 = param_6 + 5;
  temp_v12 = (unsigned int *)0x0;
  do {
    temp_v9 = (unsigned int)temp_v10;
    if (*(char *)((int)param_2 + temp_v5 + 0x38) != '\0') {
      if ((*param_2 & 0x4000) != 0) {
        puVar10 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v5 * 0x408);
        if (puVar10 != (unsigned int *)0x0) {
          if (((DAT_00571148 & *puVar10) != 0 || (DAT_0057114c & puVar10[1]) != 0) &&
             ((puVar10[1] & DAT_005711bc) == 0 && (*puVar10 & DAT_005711b8) == 0)) {
            temp_v7 = 5;
            FUN_004fcde0(temp_v11 * temp_v8 + temp_v4,param_2,puVar10);
            temp_v8 = (int)(char)((char)temp_v8 + '\x01');
            temp_v3 = puVar10[1] | DAT_005711bc;
            *puVar10 = *puVar10 | DAT_005711b8;
            puVar10[1] = temp_v3;
          }
        }
      }
      else {
        if (param_7 <= temp_v8) {
          puVar10 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v5 * 0x408);
          if ((puVar10 == (unsigned int *)0x0) ||
             ((*puVar10 & DAT_00571148) == 0 && (puVar10[1] & DAT_0057114c) == 0))
          goto LAB_004eac84;
          temp_v7 = 5;
          FUN_004fcde0(temp_v11 * param_7 + temp_v4,param_2,puVar10);
          temp_v12 = puVar10;
          break;
        }
        temp_v8 = (int)(char)((char)temp_v8 + '\x01');
      }
    }
    temp_v9 = (unsigned int)temp_v10;
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0x6d);
  if (((*param_2 & 0x4000) != 0) && (temp_v4 = FUN_003eade4(*param_1), 0 < temp_v4)) {
    temp_v7 = 5;
  }
LAB_004eac84:
  if (temp_v12 != (unsigned int *)0x0) {
    if (!temp_v1 && !temp_v2) {
      if ((-1 < (short)temp_v12[0x5b]) &&
         (((int)temp_v6 < 0 ||
          (((*param_2 & 0x4000) == 0 &&
           (temp_v4 = FUN_001ab888(),
           (int)*(char *)(temp_v4 + temp_v6 + 0x1c88) == (int)(short)temp_v12[0x5b])))))) {
        FUN_004e0114(param_1,param_2,(int)*(short *)(param_2[9] + 0x6a),param_6,0xf,0x14);
        return 1;
      }
LAB_004eadd0:
      if (-1 < (int)temp_v6) {
        if (temp_v7 != 0) {
          if ((*param_2 & 0x4000) != 0) {
            temp_v7 = temp_v7 + 0x28;
          }
          else {
            temp_v7 = temp_v7 + 0x14;
          }
        }
        FUN_004fcf0c(temp_v11 * param_7 + param_6 + temp_v7,param_2,0,temp_v6,temp_v9,0);
        *param_2 = *param_2 | 0x2000000;
      }
      FUN_004e0114(param_1,param_2,(int)*(short *)(param_2[9] + 0x6a),param_6,0xf,0x14);
      return 1;
    }
  }
  else if (!temp_v1 && !temp_v2) goto LAB_004eadd0;
  FUN_004fcf0c(temp_v11 * param_7 + param_6 + temp_v7,param_2,temp_v1 || temp_v2,0,temp_v9,0);
  *param_2 = *param_2 | 0x2000000;
  FUN_004e0114(param_1,param_2,(int)*(short *)(param_2[9] + 0x6a),param_6,0xf,0x14);
  return 1;
}
