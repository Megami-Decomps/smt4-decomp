/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c0f74` (_code @ 0x4c0f74, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);
int FUN_001aba54(void);
int FUN_0034a290(void);
int FUN_003e8bb0(unsigned char [2], unsigned int, unsigned int *);
int FUN_003f0e20(int, int);
int FUN_004c39b0(unsigned int *, unsigned int [5]);
int FUN_004c3ac0(int, unsigned int [5]);

/* stack frame of param_2: 8 slot(s), 25 byte(s) */
typedef struct {
    unsigned char sp29; /* 0x29: local_29 */
    unsigned short sp3E; /* 0x3e: local_3e */
    unsigned short sp52; /* 0x52: local_52 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_2_stack;

extern unsigned int DAT_00571408; /* 0x571408 */
extern unsigned int DAT_0057140c; /* 0x57140c */

/* Supplied declaration required: FUN_0014aa78. */
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_0034a290. */
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_003f0e20. */
extern int FUN_004bd098(unsigned int, int);
/* Supplied declaration required: FUN_004c39b0. */
/* Supplied declaration required: FUN_004c3ac0. */


unsigned int FUN_004c0f74(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5 [5];
  unsigned char temp_v6 [2];
  unsigned short temp_v7;
  short temp_v8;
  char temp_v9;
  
  temp_v0 = FUN_0014aa78();
  FUN_003e8bb0(temp_v6,temp_v0,param_1);
  temp_v1 = (int)temp_v8;
  if (temp_v1 != 0) {
    FUN_001aba54();
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = (unsigned int)*(unsigned char *)(temp_v1 + 0x44);
    }
    if ((temp_v1 != 0 && temp_v2 != 0) && (temp_v2 - 1 == param_2)) {
      return 1;
    }
  }
  temp_v5[0] = 0;
  temp_v5[1] = 0;
  temp_v5[2] = 0;
  temp_v5[3] = 0;
  temp_v5[4] = 0;
  FUN_004c39b0(param_1,temp_v5);
  temp_v1 = 0;
  do {
    temp_v2 = (unsigned int)*(unsigned short *)((int)temp_v5 + temp_v1 * 2);
    if (temp_v2 != 0) {
      FUN_0034a290();
      temp_v3 = 0;
      if (temp_v2 != 0) {
        temp_v3 = (unsigned int)*(unsigned char *)(temp_v2 + 0x32);
      }
      if (temp_v2 != 0 && temp_v3 != 0) {
        if (temp_v3 != 0x1a) {
          if (temp_v3 != 0x1b) {
            if (temp_v3 - 1 == param_2) {
              return 1;
            }
          }
          else if (param_2 - 2 < 6) {
            return 1;
          }
        }
        else if (param_2 < 8) {
          return 1;
        }
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 9);
  if ((((temp_v9 == '\0') || ((param_1[0x9d] & 0x10) == 0)) ||
      (((*param_1 & DAT_00571408) != 0 || (DAT_0057140c & param_1[1]) != 0 &&
       (temp_v1 = FUN_004bd098(param_1[0xff],(int)temp_v8), temp_v1 < 0)))) ||
     (FUN_004c3ac0(temp_v7,temp_v5), param_2 != temp_v5[0])) {
    temp_v2 = param_1[2];
    temp_v4 = FUN_0014aa78();
    FUN_003f0e20(temp_v4,(int)(short)temp_v2);
    temp_v1 = 0;
    if (temp_v4 != 0) {
      temp_v1 = *(int *)(temp_v4 + 0x11c);
    }
    if ((temp_v4 == 0 || temp_v1 == 0) || temp_v1 < 0) {
      return 0;
    }
    if ((param_2 != 2 && param_2 != 3) && param_2 != 0x14) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
