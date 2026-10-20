/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c97cc` (_code @ 0x4c97cc, 0x348 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_001568f8(int, int);
int sysPlaySe(int);
int FUN_00184310(void);
int FUN_00275bc8(void);
int FUN_00275f44(int, int);
int FUN_002804b0(...);
int FUN_003756c8(int);
int FUN_004aa8b0(unsigned int, int);
int FUN_004f741c(int);
int FUN_004f89e8(int);
int FUN_004f9080(void);
int FUN_004fb670(int, int);
int FUN_004fcde0(int);
int FUN_004feecc(int, int);

extern unsigned int DAT_005712f0; /* 0x5712f0 */
extern int DAT_00571508; /* 0x571508 */
extern int DAT_00573808; /* 0x573808 */
extern unsigned int DAT_0057a7c0; /* 0x57a7c0 */
extern unsigned int DAT_0057a7c4; /* 0x57a7c4 */
extern unsigned int DAT_0057a7c8; /* 0x57a7c8 */
extern unsigned int DAT_0057a7cc; /* 0x57a7cc */
extern unsigned int DAT_0057a7d0; /* 0x57a7d0 */
extern unsigned int DAT_0057a7d4; /* 0x57a7d4 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_001568f8. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00184310. */
extern int FUN_00224880(int);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_003756c8. */
extern int chainCountIdUnflagged(unsigned int, unsigned int);
/* Supplied declaration required: FUN_004aa8b0. */
extern int FUN_004f2708(int, int, unsigned int);
/* Supplied declaration required: FUN_004f741c. */
/* Supplied declaration required: FUN_004f89e8. */
/* Supplied declaration required: FUN_004f9080. */
extern int FUN_004f9c2c(int);
/* Supplied declaration required: FUN_004fb670. */
/* Supplied declaration required: FUN_004fcde0. */
/* Supplied declaration required: FUN_004feecc. */


unsigned int FUN_004c97cc(int *param_1,int param_2)

{
/* irregular: 15 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned char temp_v3;
  unsigned char temp_v4 [132];
  
  switch(param_1[6]) {
  case 0:
    temp_v2 = *param_1;
    FUN_001568f8(temp_v2,param_1[8]);
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v2 + 2);
    FUN_00184310();
    FUN_00100388(temp_v4,"battle/talk/Tone%s.tbb",
                 *(unsigned int *)((unsigned int)*(unsigned char *)(temp_v1 + 0x38) * 4 + 0x57a7d8));
    FUN_002804b0(temp_v4,param_1 + 2,1);
    temp_v0 = *(unsigned char *)(temp_v1 + 0x38);
    param_1[0x52] = (unsigned int)temp_v0;
    FUN_00100388(temp_v4,"battle/talk/TalkTone%s.mbm",*(unsigned int *)((unsigned int)temp_v0 * 4 + 0x57a7d8)
                );
    FUN_002804b0(temp_v4,param_1 + 5,1);
    FUN_002804b0("battle/talk/talk.bf",param_1 + 3,1);
    FUN_004f741c(DAT_00573808);
    param_1[6] = 1;
    if ((-1 < *(int *)(DAT_00571508 + 0x7cc)) &&
       (temp_v2 = FUN_004f2708(DAT_00571508,*param_1,1), temp_v2 != 0)) {
      FUN_004fb670(0,0);
    }
    FUN_004feecc(1,0);
    return 0;
  case 1:
    if ((char)param_1[0x51] != '\0') {
      if ((char)param_1[0x51] == '\x01') {
        temp_v2 = FUN_004f9c2c(DAT_00573808);
        if (temp_v2 == 0) {
          return 0;
        }
        param_2 = 2;
        *(unsigned char *)(param_1 + 0x51) = 2;
      }
    }
    else {
      temp_v2 = DAT_00573808;
      FUN_004f9080();
      if (temp_v2 == 0) {
        return 0;
      }
      FUN_004f89e8(DAT_00573808);
      *(unsigned char *)(param_1 + 0x51) = 1;
      temp_v2 = FUN_004f9c2c(DAT_00573808);
      if (temp_v2 == 0) {
        return 0;
      }
      param_2 = 2;
      *(unsigned char *)(param_1 + 0x51) = 2;
    }
    temp_v3 = param_1[2] == 0;
    temp_v2 = 0;
    if (!temp_v3) {
      temp_v2 = param_1[3];
    }
    if (!temp_v3 && temp_v2 != 0) {
      param_2 = param_1[5];
    }
    if ((temp_v3 || temp_v2 == 0) || param_2 == 0) {
      return 0;
    }
    FUN_00275bc8();
    param_1[4] = temp_v2;
    *(unsigned int *)(temp_v2 + 0x108) = 1;
    FUN_00275f44(param_1[4],0);
    sysPlaySe(0x3e);
    temp_v2 = 2;
    break;
  case 2:
    temp_v2 = FUN_00224880(param_1[4]);
    if (temp_v2 != 2) {
      return 0;
    }
    FUN_003756c8(0);
    *(int *)(*param_1 + 0x2358) = param_1[0x4e];
    *(int *)(*param_1 + 0x235c) = param_1[0x4f];
    *(int *)(*param_1 + 0x2360) = param_1[0x50];
    if (param_1[0x4e] == 2) {
      temp_v2 = 4;
      do {
        puVar4 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v2 * 0x408);
        if ((((DAT_0057a7c0 & *puVar4) != 0 || (DAT_0057a7c4 & puVar4[1]) != 0) &&
            ((*puVar4 & DAT_0057a7c8) == 0 && (puVar4[1] & DAT_0057a7cc) == 0)) &&
           (puVar4 != (unsigned int *)0x0)) {
          FUN_004fcde0(0);
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0x36);
    }
    temp_v2 = 4;
    break;
  case 3:
    if (param_1[5] == 0) {
      return 0;
    }
    *(int *)(param_1[4] + 0xc0) = param_1[5];
    temp_v2 = 2;
    break;
  case 4:
    temp_v2 = chainCountIdUnflagged(DAT_005712f0,0);
    if (0 < temp_v2) {
      return 0;
    }
    if ((DAT_0057a7d0 & *(unsigned int *)(*param_1 + 0x45a0)) != 0 ||
        (DAT_0057a7d4 & *(unsigned int *)(*param_1 + 0x45a4)) != 0) {
      FUN_004aa8b0(DAT_0057a9c8,0);
      temp_v2 = *param_1;
      temp_v1 = ~DAT_0057a7d4;
      *(unsigned int *)(temp_v2 + 0x45a0) = *(unsigned int *)(temp_v2 + 0x45a0) & ~DAT_0057a7d0;
      *(unsigned int *)(temp_v2 + 0x45a4) = *(unsigned int *)(temp_v2 + 0x45a4) & temp_v1;
    }
    temp_v2 = 5;
    break;
  case 5:
    return 0xffffffff;
  default:
    return 0;
  }
  param_1[6] = temp_v2;
  return 0;
}

} /* extern "C" */
