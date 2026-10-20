/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d13d4` (_code @ 0x3d13d4, 0x368 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002296f4(...);
int FUN_00246454(int, unsigned int *, unsigned int *);
int FUN_0024b888(...);

/* stack frame of param_7: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_7_stack;

/* Supplied declaration required: FUN_002296f4. */
/* Supplied declaration required: FUN_00246454. */
/* Supplied declaration required: FUN_0024b888. */
extern int gameGetSlotTable(void);
extern int FUN_00337b64(int);


unsigned int
FUN_003d13d4(int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,
            int param_6,int param_7)

{
/* irregular: 2 goto(s); 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  unsigned char temp_v7;
  unsigned int temp_v8;
  unsigned long long temp_v9;
  int temp_v10;
  unsigned int *temp_v11;
  
  temp_v2 = 0;
  temp_v5 = 0;
  temp_v4 = 0xffffffff;
  temp_v9 = (unsigned long long)param_5;
  temp_v7 = (*(unsigned int *)param_2[8] & 0x10) != 0;
  temp_v10 = 7;
  if ((*param_2 & 0x4000) == 0) {
    temp_v10 = 0;
  }
  temp_v1 = 0;
  if (!temp_v7) {
    if ((*param_2 & 0x4000) != 0) {
      if (param_7 < 3) {
        temp_v2 = param_7;
        do {
          if (-1 < *(char *)(*param_1 + temp_v2 + 0x1fe0)) {
            temp_v4 = (unsigned int)*(char *)(*param_1 + temp_v2 + 0x1fe0);
            if (0 < (int)temp_v4) {
              temp_v4 = temp_v4 - 1;
            }
            break;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 3);
      }
    }
    else {
      do {
        temp_v0 = 1 << (temp_v1 & 0xff);
        if ((temp_v0 & *(unsigned int *)(*param_1 + 0x1fd0)) != 0 ||
            (((int)temp_v0 >> 0x1f) & *(unsigned int *)(*param_1 + 0x1fd4)) != 0) {
          if (param_7 <= temp_v2) {
            temp_v4 = temp_v1;
            if (0 < (int)temp_v1) {
              temp_v4 = temp_v1 - 1;
            }
            break;
          }
          temp_v2 = (int)(char)((char)temp_v2 + '\x01');
        }
        temp_v1 = temp_v1 + 1;
      } while ((int)temp_v1 < 0x40);
    }
  }
  temp_v6 = 0;
  temp_v3 = 0;
  temp_v2 = param_6 + 5;
  temp_v11 = (unsigned int *)0x0;
  do {
    temp_v8 = (unsigned int)temp_v9;
    if (*(char *)((int)param_2 + temp_v3 + 0x38) != '\0') {
      if ((*param_2 & 0x4000) != 0) {
        puVar8 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v3 * 0x288);
        if (((puVar8 != (unsigned int *)0x0) && ((*puVar8 & 1) != 0)) && ((*puVar8 & 0x1000000) == 0)) {
          temp_v5 = 5;
          FUN_00246454(temp_v10 * temp_v6 + temp_v2,param_2,puVar8);
          temp_v6 = (int)(char)((char)temp_v6 + '\x01');
          *puVar8 = *puVar8 | 0x1000000;
        }
      }
      else {
        if (param_7 <= temp_v6) {
          puVar8 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v3 * 0x288);
          if ((puVar8 == (unsigned int *)0x0) || ((*puVar8 & 1) == 0)) goto LAB_003d15ac;
          temp_v5 = 5;
          FUN_00246454(temp_v10 * param_7 + temp_v2,param_2,puVar8);
          temp_v11 = puVar8;
          break;
        }
        temp_v6 = (int)(char)((char)temp_v6 + '\x01');
      }
    }
    temp_v8 = (unsigned int)temp_v9;
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x6d);
  if (((*param_2 & 0x4000) != 0) && (temp_v2 = FUN_00337b64(*param_1), 0 < temp_v2)) {
    temp_v5 = 5;
  }
LAB_003d15ac:
  if (temp_v11 != (unsigned int *)0x0) {
    if (!temp_v7) {
      if ((-1 < (short)temp_v11[0x35]) &&
         (((int)temp_v4 < 0 ||
          (((*param_2 & 0x4000) == 0 &&
           (temp_v2 = gameGetSlotTable(),
           (int)*(char *)(temp_v2 + temp_v4 + 0x90f0) == (int)(short)temp_v11[0x35])))))) {
        FUN_002296f4(param_1,param_2,(int)*(short *)(param_2[9] + 0x62),param_6,0xf,0x14);
        return 1;
      }
LAB_003d16e4:
      if (-1 < (int)temp_v4) {
        if (temp_v5 != 0) {
          if ((*param_2 & 0x4000) != 0) {
            temp_v5 = temp_v5 + 0x28;
          }
          else {
            temp_v5 = temp_v5 + 0x14;
          }
        }
        FUN_0024b888(temp_v10 * param_7 + param_6 + temp_v5,param_2,0,temp_v4,temp_v8,0);
        *param_2 = *param_2 | 0x2000000;
      }
      FUN_002296f4(param_1,param_2,(int)*(short *)(param_2[9] + 0x62),param_6,0xf,0x14);
      return 1;
    }
  }
  else if (!temp_v7) goto LAB_003d16e4;
  FUN_0024b888(temp_v10 * param_7 + param_6 + temp_v5,param_2,temp_v7,0,temp_v8,0);
  *param_2 = *param_2 | 0x2000000;
  FUN_002296f4(param_1,param_2,(int)*(short *)(param_2[9] + 0x62),param_6,0xf,0x14);
  return 1;
}

} /* extern "C" */
