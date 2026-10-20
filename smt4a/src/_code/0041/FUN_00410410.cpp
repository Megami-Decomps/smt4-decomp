/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00410410` (_code @ 0x410410, 0x214 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e7ef0(int);
int FUN_003ebc08(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned int DAT_00571348; /* 0x571348 */
extern unsigned int DAT_0057134c; /* 0x57134c */
extern unsigned int DAT_00571350; /* 0x571350 */
extern unsigned int DAT_00571354; /* 0x571354 */
extern unsigned int DAT_00571370; /* 0x571370 */
extern unsigned int DAT_00571374; /* 0x571374 */
extern unsigned int DAT_00571388; /* 0x571388 */
extern unsigned int DAT_0057138c; /* 0x57138c */
extern unsigned int DAT_00571390; /* 0x571390 */
extern unsigned int DAT_00571394; /* 0x571394 */
extern unsigned int DAT_00571398; /* 0x571398 */
extern unsigned int DAT_0057139c; /* 0x57139c */
extern unsigned int DAT_005713b0; /* 0x5713b0 */
extern unsigned int DAT_005713b4; /* 0x5713b4 */

/* Supplied declaration required: FUN_003e7ef0. */
/* Supplied declaration required: FUN_003ebc08. */


void FUN_00410410(int *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  short temp_v5;
  unsigned int temp_v6;
  int *piVar8;
  unsigned char temp_v7;
  
  temp_v1 = *param_1;
  if ((DAT_005713b0 & *(unsigned int *)(temp_v1 + 0x45a8)) == 0 &&
      (*(unsigned int *)(temp_v1 + 0x45ac) & DAT_005713b4) == 0) {
    temp_v3 = (*(unsigned int *)(temp_v1 + 0x45a4) & DAT_0057139c) | (DAT_00571398 & *(unsigned int *)(temp_v1 + 0x45a0));
    temp_v7 = temp_v3 == 0;
    if (temp_v7) {
      temp_v3 = (unsigned int)*(unsigned char *)(param_2 + 4);
    }
    if (temp_v7 && temp_v3 == 0x27) {
      temp_v2 = (int)*(short *)(param_2 + 0x24) + (int)*(short *)(temp_v1 + 0x4c70);
      if (temp_v2 < 0) {
        temp_v2 = 0;
      }
      *(short *)(temp_v1 + 0x4c70) = (short)temp_v2;
      temp_v1 = (int)*(short *)(param_2 + 0x26) + (int)*(short *)(*param_1 + 0x4c72);
      if (temp_v1 < 0) {
        temp_v1 = 0;
      }
      *(short *)(*param_1 + 0x4c72) = (short)temp_v1;
      if (*(int *)(param_2 + 0x28) != 0) {
        FUN_003ebc08(*param_1,0);
      }
      temp_v1 = *param_1;
      piVar8 = (int *)(temp_v1 + 0x4d6c);
      if (0 < *piVar8) {
        temp_v3 = *(unsigned int *)(temp_v1 + 0x45a0);
        temp_v4 = *(unsigned int *)(temp_v1 + 0x45a4);
        if (((DAT_00571350 & temp_v3) == 0 && (DAT_00571354 & temp_v4) == 0) &&
           ((DAT_00571370 & temp_v3) == 0 && (DAT_00571374 & temp_v4) == 0)) {
          if (!((temp_v3 & DAT_00571390) == 0 && (temp_v4 & DAT_00571394) == 0)) {
            *piVar8 = 0;
          }
          else {
            temp_v6 = temp_v1 + 0x4c00;
            temp_v7 = *(short *)(temp_v1 + 0x4c70) == 0;
            if (temp_v7) {
              temp_v6 = (unsigned int)*(unsigned short *)(temp_v1 + 0x4c72);
            }
            if (!(temp_v7 && temp_v6 == 0)) {
              temp_v1 = (int)*(short *)(param_2 + 0x24);
              if ((int)*(short *)(param_2 + 0x26) <= (int)*(short *)(param_2 + 0x24)) {
                temp_v1 = (int)*(short *)(param_2 + 0x26);
              }
              temp_v1 = temp_v1 + *piVar8;
              *piVar8 = temp_v1;
              temp_v3 = DAT_00571388;
              temp_v2 = *param_1;
              if (0 < temp_v1) {
                return;
              }
              *(unsigned int *)(temp_v2 + 0x45a4) = *(unsigned int *)(temp_v2 + 0x45a4) | DAT_0057138c;
              *(unsigned int *)(temp_v2 + 0x45a0) = temp_v3 | *(unsigned int *)(temp_v2 + 0x45a0);
            }
            else {
              temp_v5 = *(short *)(param_2 + 0x24);
              if (-4 < temp_v5) {
                temp_v5 = *(short *)(param_2 + 0x26);
              }
              temp_v6 = DAT_0057138c;
              temp_v0 = DAT_00571388;
              if (temp_v5 < -3) {
                temp_v6 = DAT_00571394;
                temp_v0 = DAT_00571390;
              }
              *(unsigned int *)(temp_v1 + 0x45a0) = temp_v3 | temp_v0;
              *(unsigned int *)(temp_v1 + 0x45a4) = temp_v4 | temp_v6;
            }
            *(unsigned int *)(*param_1 + 0x4d6c) = 0;
          }
          temp_v1 = *(int *)(*param_1 + 0x1ffc);
          temp_v3 = DAT_0057134c | *(unsigned int *)(temp_v1 + 0xd9b4);
          *(unsigned int *)(temp_v1 + 0xd9b0) = DAT_00571348 | *(unsigned int *)(temp_v1 + 0xd9b0);
          *(unsigned int *)(temp_v1 + 0xd9b4) = temp_v3;
          FUN_003e7ef0(*param_1);
          return;
        }
      }
    }
  }
  return;
}

} /* extern "C" */
