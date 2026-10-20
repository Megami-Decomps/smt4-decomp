/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004db65c` (_code @ 0x4db65c, 0x2b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010063a(int, unsigned int, int, unsigned char *);
int FUN_00184310(void);
int FUN_003a8370(...);
int FUN_003c3f1c(void);
int FUN_004daf18(int, unsigned int);
int FUN_004dbf60(int, unsigned int, unsigned int, unsigned int);

extern unsigned char LAB_00321d38; /* 0x321d38 */

/* Supplied declaration required: FUN_0010063a. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_003a8370. */
/* Supplied declaration required: FUN_003c3f1c. */
extern int FUN_004dab08(int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_004daf18. */
/* Supplied declaration required: FUN_004dbf60. */


int FUN_004db65c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
/* irregular: 6 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v4 = 0;
  if (param_2 < param_3) {
    temp_v3 = param_2;
    FUN_003a8370(param_2,param_3);
  }
  else {
    temp_v3 = param_3;
    FUN_003a8370();
  }
  if (temp_v3 != 0) {
    temp_v1 = param_4[1];
    *param_4 = ((param_3 & 0x7fff) << 0xf) |
               (((param_2 & 0xffff7fff) | (*param_4 & 0xffff8000)) & 0xc0007fff);
    param_4[1] = temp_v1;
    param_4[1] = (temp_v1 & 0xfffe0003) | ((*(unsigned int *)(temp_v3 + 4) & 0x7fff) << 2);
    if (((*(unsigned int *)(temp_v3 + 4) & 0xffff) != 0) &&
       (temp_v2 = param_1, FUN_004daf18(param_1,*(unsigned int *)(temp_v3 + 4) & 0xffff), temp_v2 != 0)) {
      temp_v2 = FUN_004dab08(param_1,param_2,param_3,*(unsigned int *)(temp_v3 + 4) & 0xffff);
      temp_v4 = 0;
      if (temp_v2 != 0) {
        param_4[1] = param_4[1] & 0x1ffff;
        temp_v3 = *(unsigned int *)(temp_v3 + 4) & 0xffff;
        FUN_00184310();
        temp_v4 = 0;
        do {
          temp_v0 = *(short *)(temp_v3 + 0x40 + temp_v4 * 2);
          if (temp_v0 != 0) {
            *(short *)(param_1 + *(int *)(param_1 + 0x1b0) * 2 + 0x17e) = temp_v0;
            *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 8);
        if (*(int *)(param_1 + 0x1b0) < 0x18) {
          *(unsigned short *)(param_1 + *(int *)(param_1 + 0x1b0) * 2 + 0x17e) = 0;
        }
        temp_v4 = 0;
        do {
          temp_v2 = param_1 + temp_v4 * 2;
          temp_v1 = (unsigned int)*(unsigned short *)(temp_v2 + 0x17e);
          if ((temp_v1 != 0) && (FUN_003c3f1c(), (*(unsigned char *)(temp_v1 + 3) & 0x20) == 0)) {
            *(unsigned short *)(temp_v2 + 0x17e) = 0;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 0x18);
        FUN_0010063a(param_1 + 0x17e,*(unsigned int *)(param_1 + 0x1b0),2,&LAB_00321d38);
        temp_v2 = *(int *)(param_1 + 0x1b0);
        temp_v4 = 0;
        *(unsigned int *)(param_1 + 0x1b0) = 0;
        if (0 < temp_v2) {
          do {
            if (*(short *)(param_1 + temp_v4 * 2 + 0x17e) == 0) break;
            temp_v4 = temp_v4 + 1;
            *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
          } while (temp_v4 < temp_v2);
        }
        if (*(char *)(param_1 + 0x1b5) != '\0') {
          temp_v2 = (unsigned int)*(unsigned short *)(temp_v3 + 0x1e) + (unsigned int)*(unsigned short *)(temp_v3 + 0x20) +
                  (unsigned int)*(unsigned short *)(temp_v3 + 0x22) + (unsigned int)*(unsigned short *)(temp_v3 + 6) * 0x14 +
                  (unsigned int)*(unsigned short *)(temp_v3 + 0x24) + (unsigned int)*(unsigned short *)(temp_v3 + 0x26);
          temp_v4 = 0;
          do {
            temp_v3 = (unsigned int)*(unsigned short *)(param_1 + temp_v4 * 2 + 0x17e);
            if (temp_v3 == 0) break;
            FUN_003c3f1c();
            temp_v4 = temp_v4 + 1;
            temp_v2 = temp_v2 + (*(unsigned char *)(temp_v3 + 3) & 0x1f) * 5;
          } while (temp_v4 < 0x18);
          param_4[1] = (param_4[1] & 0x1ffff) | (temp_v2 << 0x11);
        }
        FUN_004dbf60(param_1,param_2,param_3,(param_4[1] & 0x1ffff) >> 2);
        temp_v4 = param_1;
      }
    }
  }
  return temp_v4;
}

} /* extern "C" */
