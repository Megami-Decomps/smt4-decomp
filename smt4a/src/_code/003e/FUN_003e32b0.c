/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e32b0` (_code @ 0x3e32b0, 0x380 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned short sp3A; /* 0x3a: local_3a */
} param_1_stack;

extern unsigned char LAB_003e3630; /* 0x3e3630 */
extern unsigned char LAB_003e3644; /* 0x3e3644 */
extern unsigned char LAB_003e3658; /* 0x3e3658 */
extern unsigned char LAB_003e3670; /* 0x3e3670 */
extern unsigned char LAB_003e3688; /* 0x3e3688 */
extern unsigned char LAB_003e36a0; /* 0x3e36a0 */
extern unsigned char LAB_003e36b8; /* 0x3e36b8 */
extern unsigned char LAB_003e36cc; /* 0x3e36cc */

/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: FUN_00184310. */
extern int FUN_0018719c(void);
extern int FUN_00224880(unsigned int);
extern int FUN_00239234(unsigned short, unsigned char *);
/* Supplied declaration required: FUN_00275f44. */
extern int FUN_002a4b74(void);
/* Supplied declaration required: FUN_003180c4. */
extern int FUN_00331194(void);
extern int FUN_00357bc8(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_003c1060. */
/* Supplied declaration required: FUN_003c3e14. */
/* Supplied declaration required: FUN_0050d778. */


void FUN_003e32b0(int param_1)

{
/* irregular: 2 goto(s); 8 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned short *puVar3;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7 [54];
  unsigned short temp_v8;
  
  temp_v1 = *(int *)(param_1 + 8);
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if (temp_v1 != 2) {
        if ((temp_v1 == 3) && (temp_v1 = FUN_00224880(*(unsigned int *)(param_1 + 0x18)), temp_v1 == 2)) {
          *(unsigned char *)(param_1 + 0x98) = 1;
          *(unsigned int *)(param_1 + 8) = 0;
        }
      }
      else {
        temp_v1 = FUN_00224880(*(unsigned int *)(param_1 + 0x18));
        if (temp_v1 == 2) {
          *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 4);
          *(unsigned int *)(param_1 + 4) = 7;
          *(unsigned int *)(param_1 + 8) = 0;
          return;
        }
      }
    }
    else {
      temp_v1 = FUN_00224880(*(unsigned int *)(param_1 + 0x18));
      if ((temp_v1 == 2) && (temp_v1 = FUN_00331194(), temp_v1 != 0)) {
        temp_v1 = FUN_002a4b74();
        if (!(temp_v1 == -1 || temp_v1 == 3)) {
          temp_v1 = *(int *)(param_1 + temp_v1 * 4 + 0x8c);
          *(int *)(param_1 + 0xa0) = temp_v1;
          if (temp_v1 < 0) {
            temp_v1 = FUN_00357bc8(*(unsigned int *)(param_1 + 0x14),&LAB_003e36cc);
            if (-1 < temp_v1) {
              FUN_00275f44(*(unsigned int *)(param_1 + 0x18));
            }
            temp_v4 = 3;
            *(unsigned int *)(param_1 + 8) = temp_v4;
            return;
          }
          *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 4);
          *(unsigned int *)(param_1 + 4) = 4;
          *(unsigned int *)(param_1 + 8) = 0;
        }
        else {
          *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 4);
          *(unsigned int *)(param_1 + 4) = 6;
          *(unsigned int *)(param_1 + 8) = 0;
        }
        FUN_003c3e14();
        FUN_001681cc(0);
        return;
      }
    }
    return;
  }
  temp_v6 = 0;
  FUN_0050d778(param_1 + 0x8c,0xffffffff);
  temp_v1 = 0;
  do {
    temp_v5 = param_1 + temp_v1 * 0x24;
    puVar3 = (unsigned short *)(unsigned int)*(unsigned short *)(temp_v5 + 0x22);
    FUN_00184310();
    if ((puVar3 != (unsigned short *)0x0) &&
       ((puVar3[0x1f] == 0 || (temp_v2 = FUN_0018719c(), temp_v2 != 0)))) {
      temp_v0 = puVar3[0x1e];
      if ((temp_v0 & 1) != 0) {
        if ((temp_v0 & 0xfffe) != 0) {
          temp_v2 = FUN_00239234(temp_v0 >> 1,temp_v7);
        }
        else {
          temp_v2 = FUN_00239234(*puVar3,temp_v7);
        }
        if ((temp_v2 == 0) || ((temp_v8 & 0xfc) == 0)) goto LAB_003e33d0;
      }
      temp_v3 = (unsigned int)*(unsigned short *)(temp_v5 + 0x22);
      FUN_00180118(temp_v3);
      FUN_003180c4(temp_v6,temp_v3);
      temp_v5 = temp_v6 * 4;
      temp_v6 = temp_v6 + 1;
      *(int *)(param_1 + temp_v5 + 0x8c) = temp_v1;
    }
LAB_003e33d0:
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  FUN_003c1060();
  if (temp_v6 == 0) {
    temp_v1 = FUN_00357bc8(*(unsigned int *)(param_1 + 0x14),&LAB_003e3644);
    if (-1 < temp_v1) {
      FUN_00275f44(*(unsigned int *)(param_1 + 0x18),temp_v1);
    }
    temp_v4 = 2;
    *(unsigned int *)(param_1 + 8) = temp_v4;
    return;
  }
  if (temp_v6 != 1) {
    if (temp_v6 != 2) {
      if (temp_v6 != 3) {
        return;
      }
      if ((*(int *)(param_1 + 0xc) == 5 || *(int *)(param_1 + 0xc) == 4) ||
         (*(char *)(param_1 + 0x98) != '\0')) {
        temp_v1 = FUN_00357bc8(*(unsigned int *)(param_1 + 0x14),&LAB_003e3630);
      }
      else {
        temp_v1 = FUN_00357bc8(*(unsigned int *)(param_1 + 0x14),&LAB_003e36b8);
      }
    }
    else {
      if ((*(int *)(param_1 + 0xc) != 5 && *(int *)(param_1 + 0xc) != 4) &&
         (*(char *)(param_1 + 0x98) == '\0')) {
        temp_v1 = FUN_00357bc8(*(unsigned int *)(param_1 + 0x14),&LAB_003e36a0);
        goto joined_r0x003e34b8;
      }
      temp_v1 = FUN_00357bc8(*(unsigned int *)(param_1 + 0x14),&LAB_003e3688);
    }
    if (temp_v1 < 0) {
      *(unsigned int *)(param_1 + 8) = 1;
      return;
    }
    temp_v4 = *(unsigned int *)(param_1 + 0x18);
  }
  else {
    if ((*(int *)(param_1 + 0xc) == 5 || *(int *)(param_1 + 0xc) == 4) ||
       (*(char *)(param_1 + 0x98) != '\0')) {
      temp_v1 = FUN_00357bc8(*(unsigned int *)(param_1 + 0x14),&LAB_003e3658);
    }
    else {
      temp_v1 = FUN_00357bc8(*(unsigned int *)(param_1 + 0x14),&LAB_003e3670);
    }
joined_r0x003e34b8:
    if (temp_v1 < 0) {
      *(unsigned int *)(param_1 + 8) = 1;
      return;
    }
    temp_v4 = *(unsigned int *)(param_1 + 0x18);
  }
  FUN_00275f44(temp_v4,temp_v1);
  *(unsigned int *)(param_1 + 8) = 1;
  return;
}
