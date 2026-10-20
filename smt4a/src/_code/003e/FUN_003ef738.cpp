/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ef738` (_code @ 0x3ef738, 0x220 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_001aba54(void);

extern unsigned int DAT_0057113c; /* 0x57113c */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_00184310. */
extern int FUN_0019acdc(unsigned short, unsigned int);
/* Supplied declaration required: FUN_001aba54. */
extern int FUN_004aba3c(unsigned int);
extern int FUN_004ee568(unsigned int);


void FUN_003ef738(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  
  temp_v0 = FUN_004ee568(DAT_0057113c);
  temp_v3 = temp_v0 == 0;
  temp_v1 = 0;
  if (!temp_v3) {
    temp_v1 = *(int *)(temp_v0 + 0x20);
  }
  temp_v4 = temp_v1 == 0;
  if (!temp_v3 && !temp_v4) {
    temp_v1 = *(int *)(temp_v1 + 0x400);
  }
  if (((temp_v3 || temp_v4) || temp_v1 == 0) ||
     (temp_v1 = FUN_0019acdc(*(unsigned short *)(temp_v1 + 300),0), temp_v1 != 1)) {
    temp_v0 = FUN_004ee568(DAT_0057113c);
    temp_v3 = temp_v0 != 0;
    temp_v1 = 0;
    if (temp_v3) {
      temp_v1 = *(int *)(temp_v0 + 0x20);
    }
    temp_v4 = temp_v1 != 0;
    if (temp_v3 && temp_v4) {
      temp_v1 = *(int *)(temp_v1 + 0x400);
    }
    if (((!temp_v3 || !temp_v4) || temp_v1 == 0) ||
       (temp_v1 = FUN_0019acdc(*(unsigned short *)(temp_v1 + 300),0), temp_v1 != 4)) {
      temp_v0 = FUN_004ee568(DAT_0057113c);
      temp_v3 = temp_v0 != 0;
      temp_v1 = 0;
      if (temp_v3) {
        temp_v1 = *(int *)(temp_v0 + 0x20);
      }
      temp_v4 = temp_v1 != 0;
      if (temp_v3 && temp_v4) {
        temp_v1 = *(int *)(temp_v1 + 0x400);
      }
      if ((!temp_v3 || !temp_v4) || temp_v1 == 0) {
        return;
      }
      temp_v1 = FUN_0019acdc(*(unsigned short *)(temp_v1 + 300),0);
      if (temp_v1 != 3) {
        return;
      }
    }
  }
  temp_v1 = FUN_004aba3c(DAT_0057a9c8);
  if (temp_v1 != -1) {
    temp_v1 = FUN_004aba3c(DAT_0057a9c8);
  }
  else {
    temp_v1 = FUN_004ee568(DAT_0057113c);
    if (*(short *)(*(int *)(temp_v1 + 0x28) + 0x1be) != 2) {
      return;
    }
    temp_v1 = (int)*(short *)(*(int *)(temp_v1 + 0x28) + 0x1c0);
  }
  FUN_001aba54();
  if (temp_v1 != 0) {
    temp_v2 = FUN_004ee568(DAT_0057113c);
    temp_v3 = temp_v2 != 0;
    temp_v0 = 0;
    if (temp_v3) {
      temp_v0 = *(int *)(temp_v2 + 0x20);
    }
    temp_v4 = temp_v0 != 0;
    if (temp_v3 && temp_v4) {
      temp_v0 = *(int *)(temp_v0 + 0x400);
    }
    if ((!((temp_v3 && temp_v4) && temp_v0 != 0)) ||
       (temp_v0 = FUN_0019acdc(*(unsigned short *)(temp_v0 + 300),0), temp_v0 != 1)) {
      temp_v2 = FUN_004ee568(DAT_0057113c);
      temp_v3 = temp_v2 != 0;
      temp_v0 = 0;
      if (temp_v3) {
        temp_v0 = *(int *)(temp_v2 + 0x20);
      }
      temp_v4 = temp_v0 != 0;
      if (temp_v3 && temp_v4) {
        temp_v0 = *(int *)(temp_v0 + 0x400);
      }
      if ((!((temp_v3 && temp_v4) && temp_v0 != 0)) ||
         (temp_v0 = FUN_0019acdc(*(unsigned short *)(temp_v0 + 300),0), temp_v0 != 4)) {
        temp_v2 = FUN_004ee568(DAT_0057113c);
        temp_v3 = temp_v2 != 0;
        temp_v0 = 0;
        if (temp_v3) {
          temp_v0 = *(int *)(temp_v2 + 0x20);
        }
        temp_v4 = temp_v0 != 0;
        if (temp_v3 && temp_v4) {
          temp_v0 = *(int *)(temp_v0 + 0x400);
        }
        if ((((temp_v3 && temp_v4) && temp_v0 != 0) &&
            (temp_v0 = FUN_0019acdc(*(unsigned short *)(temp_v0 + 300),0), temp_v0 == 3)) &&
           (*(short *)(temp_v1 + 0x5e) != 0)) {
          FUN_00184310();
          return;
        }
      }
      else if (*(short *)(temp_v1 + 0x5c) != 0) {
        FUN_00184310();
        return;
      }
    }
    else if (*(short *)(temp_v1 + 0x5a) != 0) {
      FUN_00184310();
      return;
    }
  }
  return;
}

} /* extern "C" */
