/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ea884` (_code @ 0x3ea884, 0x18c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00573980; /* 0x573980 */
extern unsigned int DAT_00573984; /* 0x573984 */
extern unsigned int DAT_00573988; /* 0x573988 */
extern unsigned int DAT_0057398c; /* 0x57398c */
extern unsigned int DAT_00573990; /* 0x573990 */
extern unsigned int DAT_00573994; /* 0x573994 */
extern unsigned int DAT_00573998; /* 0x573998 */
extern unsigned int DAT_0057399c; /* 0x57399c */


void FUN_003ea884(int param_1,unsigned int *param_2,int param_3)

{
/* irregular: 2 goto(s) */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  
  temp_v0 = DAT_00573980;
  temp_v5 = 0;
  temp_v2 = param_2[1];
  temp_v3 = *param_2;
  do {
    temp_v1 = param_1 + temp_v5 * 0xc;
    puVar3 = (unsigned int *)(temp_v1 + 0x45c0);
    if (!((temp_v3 & DAT_00573980) == 0 && (temp_v2 & DAT_00573984) == 0)) {
      if (*(short *)(temp_v1 + 0x45c4) == -1) {
LAB_003ea930:
        if (puVar3 != (unsigned int *)0x0) goto LAB_003ea9e8;
        break;
      }
    }
    else if (((((DAT_00573988 & temp_v3) != 0 || (DAT_0057398c & temp_v2) != 0) ||
              ((DAT_00573990 & temp_v3) != 0 || (DAT_00573994 & temp_v2) != 0)) ||
             ((DAT_00573998 & temp_v3) != 0 || (DAT_0057399c & temp_v2) != 0)) &&
            ((int)*(short *)(temp_v1 + 0x45c4) == (unsigned int)*(unsigned short *)((int)param_2 + 0x166)))
    goto LAB_003ea930;
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0x80);
  temp_v5 = 0;
  while( 1 ) {
    temp_v1 = param_1 + temp_v5 * 0xc;
    puVar3 = (unsigned int *)(temp_v1 + 0x45c0);
    temp_v4 = (unsigned int)*(short *)(temp_v1 + 0x45c4);
    temp_v6 = temp_v4 == 0;
    if (temp_v6) {
      temp_v4 = *puVar3;
    }
    if (temp_v6 && temp_v4 == 0) break;
    temp_v5 = temp_v5 + 1;
    if (temp_v5 >= 0x80) {
      return;
    }
  }
  if (!((temp_v3 & DAT_00573980) == 0 && (temp_v2 & DAT_00573984) == 0)) {
    *(unsigned short *)(temp_v1 + 0x45c4) = 0xffff;
    *puVar3 = temp_v0;
  }
  else {
    *(unsigned short *)(temp_v1 + 0x45c4) = *(unsigned short *)((int)param_2 + 0x166);
    temp_v0 = *param_2;
    temp_v2 = param_2[1];
    if (!((temp_v0 & DAT_00573988) == 0 && (DAT_0057398c & temp_v2) == 0)) {
      *puVar3 = DAT_00573988;
    }
    else {
      temp_v3 = DAT_00573990;
      if (((DAT_00573994 & temp_v2) != 0 || (temp_v0 & DAT_00573990) != 0) ||
         (temp_v3 = DAT_00573998, (temp_v0 & DAT_00573998) != 0 || (temp_v2 & DAT_0057399c) != 0)) {
        *puVar3 = temp_v3;
      }
    }
  }
  if (puVar3 == (unsigned int *)0x0) {
    return;
  }
LAB_003ea9e8:
  if (param_3 == 1) {
    *(unsigned char *)((int)puVar3 + 6) = 1;
    return;
  }
  if (param_3 == 2) {
    *(unsigned char *)((int)puVar3 + 7) = 1;
    return;
  }
  if (param_3 == 3) {
    *(unsigned char *)(puVar3 + 2) = 1;
  }
  return;
}

} /* extern "C" */
