/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021b390` (_code @ 0x21b390, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_sprintf(...);
int textFormatBuffer(unsigned int, unsigned char *, unsigned char *);
int rt_memcpy_w(unsigned char *[4], unsigned char *, int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp60; /* 0x60: local_60 */
} param_4_stack;

extern unsigned char LAB_0021b4d4; /* 0x21b4d4 */
extern unsigned char DAT_0052f2b4; /* 0x52f2b4 */
extern unsigned char DAT_0055eabf; /* 0x55eabf */
extern unsigned char DAT_0055ed49; /* 0x55ed49 */
extern unsigned char DAT_0055eff4; /* 0x55eff4 */
extern unsigned char DAT_0055f51a; /* 0x55f51a */
extern unsigned char DAT_0055fa10; /* 0x55fa10 */
extern unsigned char DAT_0055fee5; /* 0x55fee5 */
extern unsigned char DAT_005603ab; /* 0x5603ab */
extern unsigned char DAT_00560458; /* 0x560458 */
extern char s__U_U_U_U_U_U_U_U_U_U_0057f298[45]; /* 0x57f298 */

/* Supplied declaration required: libc_sprintf. */
/* Supplied declaration required: textFormatBuffer. */
extern unsigned int FUN_0014bd84(unsigned int);
extern unsigned int FUN_00180114(unsigned int);
extern unsigned int contentEntryDataGet(unsigned int, unsigned int);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0021b390(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  unsigned char *temp_v1 [4];
  unsigned char *puStack_50;
  unsigned char *puStack_4c;
  unsigned char *puStack_48;
  unsigned char *puStack_44;
  
  if ((int)param_3 < 0) {
    libc_sprintf(param_4,0x21b4b4);
    return;
  }
  if ((param_2 == 0 || param_2 == 0xe) || param_2 == 1) {
    temp_v0 = FUN_00180114(param_3 & 0xffff);
    libc_sprintf(param_4,&LAB_0021b4d4,temp_v0);
    return;
  }
  if (param_2 == 2) {
    libc_sprintf(param_4,&LAB_0021b4d4,
                 *(unsigned int *)(s__U_U_U_U_U_U_U_U_U_U_0057f298 + param_3 * 4));
    return;
  }
  if (param_2 != 3) {
    if (param_2 == 4) {
      temp_v0 = FUN_0014bd84(param_3);
      libc_sprintf(param_4,&LAB_0021b4d4,temp_v0);
      return;
    }
    if (param_2 != 5) {
      if (param_2 != 6) {
        return;
      }
      temp_v1[0] = &DAT_005603ab;
      temp_v1[1] = &DAT_0055fee5;
      temp_v1[2] = &DAT_0055f51a;
      temp_v1[3] = &DAT_0055ed49;
      puStack_50 = &DAT_0055eabf;
      puStack_4c = &DAT_0055eff4;
      puStack_48 = &DAT_00560458;
      puStack_44 = &DAT_0055fa10;
      puVar2 = temp_v1[param_3];
    }
    else {
      rt_memcpy_w(temp_v1,&DAT_0052f2b4,0x54);
      puVar2 = temp_v1[param_3];
    }
    textFormatBuffer(param_4,&LAB_0021b4d4,puVar2);
    return;
  }
  temp_v0 = contentEntryDataGet(param_3,0);
  libc_sprintf(param_4,&LAB_0021b4d4,temp_v0);
  return;
}

} /* extern "C" */
