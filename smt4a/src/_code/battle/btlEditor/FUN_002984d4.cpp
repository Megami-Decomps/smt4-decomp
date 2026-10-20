/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002984d4` (_code @ 0x2984d4, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001568f8(...);
int jobStop(...);
int FUN_0020214c(void);
int asdLoadFileSetUseRawPaths(...);
int asdListBoxCreate(...);
int asdListBoxAddItem(...);
int FUN_002e0898(...);
int FUN_002e342c(...);
int sysMemClear(...);
int FUN_002ea508(...);
int FUN_00317508(...);
int FUN_0037a854(void);
int FUN_003874fc(unsigned int);
int FUN_004f43f0(unsigned int *, int);
int FUN_004f452c(unsigned int *, int);
int FUN_004f4648(unsigned int *, int, unsigned int);
int FUN_004f479c(...);
int FUN_004f5144(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_00528144; /* 0x528144 */
extern unsigned int *DAT_00571508; /* 0x571508 */
extern unsigned int *DAT_005737e0; /* 0x5737e0 */

/* Supplied declaration required: FUN_001568f8. */
/* Supplied declaration required: jobStop. */
extern int jobGetWork(void);
extern int FUN_001656a0(unsigned int);
/* Supplied declaration required: FUN_0020214c. */
/* Supplied declaration required: asdLoadFileSetUseRawPaths. */
extern unsigned int asdLoadFileGetUseRawPaths(void);
/* Supplied declaration required: asdListBoxCreate. */
/* Supplied declaration required: asdListBoxAddItem. */
/* Supplied declaration required: FUN_002e0898. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_002ea508. */
extern unsigned int FUN_00317450(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00317508. */
extern unsigned int FUN_00340ec8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0037a854. */
/* Supplied declaration required: FUN_003874fc. */
extern unsigned int FUN_003efa38(int);
/* Supplied declaration required: FUN_004f43f0. */
/* Supplied declaration required: FUN_004f452c. */
/* Supplied declaration required: FUN_004f4648. */
/* Supplied declaration required: FUN_004f479c. */
/* Supplied declaration required: FUN_004f5144. */
extern int func_0x003f11ac(int, int);


unsigned int FUN_002984d4(void)

{
/* irregular: 2 goto(s); 18 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar7;
  unsigned int *puVar8;
  int *piVar9;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7 [34];
  
  temp_v1 = jobGetWork();
  puVar8 = DAT_005737e0;
  if (DAT_005737e0 == (unsigned int *)0x0) {
    return 0;
  }
  puVar4 = temp_v7;
  switch(*DAT_005737e0) {
  case 0:
    if (temp_v1 != 0) {
      piVar9 = (int *)(temp_v1 + 0x1ed4);
      temp_v4 = 0;
      if (*piVar9 != 0) {
        temp_v5 = 4;
        do {
          temp_v4 = temp_v5 + 1;
          temp_v5 = *piVar9 + temp_v5 * 0x1d0;
          temp_v3 = *(unsigned int *)(temp_v5 + 0x50);
          if ((temp_v3 & 1) != 0 && (temp_v3 & 0x80) != 0) {
            *(unsigned int *)(temp_v5 + 0x50) = temp_v3 & 0xfffffff7;
          }
          temp_v5 = temp_v4;
        } while (temp_v4 < 0x36);
      }
      if (temp_v1 != 0) {
        temp_v4 = *piVar9;
      }
      if (temp_v1 != 0 && temp_v4 != 0) {
        temp_v4 = 0;
        do {
          temp_v5 = temp_v4 + 1;
          temp_v4 = *piVar9 + temp_v4 * 0x1d0;
          *(unsigned int *)(temp_v4 + 0x6c) = *(unsigned int *)(temp_v4 + 0x70);
          temp_v4 = temp_v5;
        } while (temp_v5 < 0x6d);
      }
    }
    temp_v2 = *(unsigned int *)(temp_v1 + 0x7c);
    temp_v7[0] = 4;
    asdListBoxCreate(temp_v2,0xf0,0x10,0x20);
    puVar8[3] = temp_v2;
    FUN_0037a854();
    FUN_002e0898(puVar8[3],0xc);
    FUN_002ea508(puVar8[3],0x52821c);
    asdListBoxAddItem(puVar8[3],0x528214);
    asdListBoxAddItem(puVar8[3],0x52820c);
    asdListBoxAddItem(puVar8[3],0x528204);
    FUN_00317508(puVar8[3],1);
    temp_v2 = 1;
    break;
  case 1:
    temp_v4 = FUN_001656a0(0);
    if (temp_v4 == 0) {
      temp_v1 = FUN_001656a0(1);
      if (temp_v1 == 0) {
        return 0;
      }
      jobStop(puVar8[3],0);
      puVar8[3] = 0;
      return 0xffffffff;
    }
    temp_v4 = FUN_003874fc(puVar8[3]);
    jobStop(puVar8[3],0);
    puVar8[3] = 0;
    if (temp_v4 == 0) goto code_r0x004f4c54;
    if (temp_v4 == 1) {
      temp_v2 = 5;
    }
    else {
      if (temp_v4 != 2) {
        return 0xffffffff;
      }
      temp_v2 = 6;
    }
    break;
  case 2:
    temp_v4 = FUN_001656a0(0);
    if (temp_v4 != 0) {
      temp_v4 = FUN_003874fc(puVar8[3]);
      jobStop(puVar8[3],0);
      puVar8[3] = 0;
      if (temp_v4 == 0) {
        FUN_004f452c(puVar8,temp_v1);
        temp_v2 = 3;
        break;
      }
      if (temp_v4 == 1) goto code_r0x004f4d58;
    }
    else {
      temp_v1 = FUN_001656a0(1);
      if (temp_v1 == 0) {
        return 0;
      }
      jobStop(puVar8[3],0);
      puVar8[3] = 0;
    }
  case 5:
    temp_v2 = 0;
    break;
  case 3:
    temp_v4 = FUN_001656a0(0);
    if (temp_v4 == 0) {
      temp_v4 = FUN_001656a0(1);
      if (temp_v4 == 0) {
        FUN_004f43f0(puVar8,temp_v1);
        return 0;
      }
      temp_v2 = 0;
      break;
    }
    FUN_004f4648(puVar8,temp_v1,*(unsigned int *)(temp_v1 + 0x7c));
    temp_v2 = 7;
    break;
  case 4:
    temp_v4 = FUN_001656a0(0);
    if (temp_v4 != 0) {
      temp_v3 = FUN_003874fc(puVar8[3]);
      jobStop(puVar8[3],0);
      puVar8[3] = 0;
      if (temp_v3 < 3) {
        FUN_004f479c(puVar8,temp_v1,*(unsigned int *)(temp_v1 + 0x7c),temp_v3 & 0xffff);
        temp_v2 = 8;
        break;
      }
    }
    else {
      temp_v4 = FUN_001656a0(1);
      if (temp_v4 == 0) {
        return 0;
      }
      jobStop(puVar8[3],0);
      puVar8[3] = 0;
    }
code_r0x004f4c54:
    temp_v2 = *(unsigned int *)(temp_v1 + 0x7c);
    temp_v7[0] = 4;
    asdListBoxCreate(temp_v2,0xf0,0x10,0x20);
    puVar8[3] = temp_v2;
    FUN_0037a854();
    FUN_002e0898(puVar8[3],0xc);
    FUN_002ea508(puVar8[3],"MODE");
    asdListBoxAddItem(puVar8[3],"슌쪕튕垏");
    asdListBoxAddItem(puVar8[3],"䪃膃覃튕垏");
    FUN_00317508(puVar8[3],1);
    temp_v2 = 2;
    break;
  case 6:
    sysMemClear(temp_v7,0x80);
    temp_v2 = FUN_003efa38(temp_v1);
    FUN_002e342c(temp_v7,temp_v2);
    temp_v2 = asdLoadFileGetUseRawPaths();
    asdLoadFileSetUseRawPaths(1);
    FUN_0020214c();
    asdLoadFileSetUseRawPaths(temp_v2);
    if (*(char *)((int)puVar4 + 10) == '\x01') {
      FUN_004f5144(puVar8,temp_v1,puVar4);
    }
    *puVar8 = 0;
    return 0;
  case 7:
    temp_v4 = FUN_001656a0(1);
    if (temp_v4 == 0) {
      temp_v2 = puVar8[3];
      temp_v4 = *(int *)(temp_v1 + 0x1ed4) + *(short *)(puVar8 + 4) * 0x1d0;
      FUN_001568f8(temp_v1);
      temp_v1 = func_0x003f11ac(temp_v1,(int)*(short *)(puVar8 + 4));
      puVar8 = (unsigned int *)FUN_00340ec8(temp_v2,1);
      *(unsigned int *)(temp_v4 + 0xc) = *puVar8;
      puVar8 = (unsigned int *)FUN_00340ec8(temp_v2,2);
      *(unsigned int *)(temp_v4 + 0x10) = *puVar8;
      puVar8 = (unsigned int *)FUN_00340ec8(temp_v2,3);
      *(unsigned int *)(temp_v4 + 0x14) = *puVar8;
      if (temp_v1 == 0) {
        return 0;
      }
      *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v4 + 0xc);
      *(unsigned int *)(temp_v1 + 0x10) = *(unsigned int *)(temp_v4 + 0x10);
      *(unsigned int *)(temp_v1 + 0x14) = *(unsigned int *)(temp_v4 + 0x14);
      return 0;
    }
    jobStop(puVar8[3],0);
    puVar8[3] = 0;
    temp_v2 = 3;
    break;
  case 8:
    temp_v4 = FUN_001656a0(1);
    if (temp_v4 == 0) {
      temp_v0 = *(short *)(puVar8 + 5);
      temp_v2 = puVar8[3];
      if ((temp_v0 != 0) && (temp_v0 != 1)) {
        if (temp_v0 != 2) {
          return 0;
        }
        puVar8 = (unsigned int *)FUN_00317450(temp_v2,0);
        DAT_00571508[0xd] = *puVar8;
        return 0;
      }
      if (temp_v0 == 0) {
        puVar8 = (unsigned int *)(temp_v1 + 0x1ee0);
        puVar4 = DAT_00571508 + 7;
      }
      else {
        puVar8 = (unsigned int *)(temp_v1 + 0x1eec);
        puVar4 = DAT_00571508 + 10;
      }
      puVar7 = (unsigned int *)FUN_00340ec8(temp_v2,0);
      *puVar4 = *puVar7;
      puVar7 = (unsigned int *)FUN_00340ec8(temp_v2,1);
      puVar4[1] = *puVar7;
      puVar7 = (unsigned int *)FUN_00340ec8(temp_v2,2);
      puVar4[2] = *puVar7;
      temp_v2 = puVar4[1];
      temp_v6 = puVar4[2];
      *puVar8 = *puVar4;
      puVar8[1] = temp_v2;
      puVar8[2] = temp_v6;
      puVar8 = DAT_00571508;
      temp_v2 = puVar4[1];
      temp_v6 = puVar4[2];
      *DAT_00571508 = *puVar4;
      puVar8[1] = temp_v2;
      puVar8[2] = temp_v6;
      return 0;
    }
    jobStop(puVar8[3],0);
    puVar8[3] = 0;
code_r0x004f4d58:
    temp_v2 = *(unsigned int *)(temp_v1 + 0x7c);
    temp_v7[0] = 4;
    asdListBoxCreate(temp_v2,0xf0,0x10,0x20);
    puVar8[3] = temp_v2;
    FUN_0037a854();
    FUN_002e0898(puVar8[3],0xc);
    FUN_002ea508(puVar8[3],"CAMERA");
    asdListBoxAddItem(puVar8[3],0x52815c);
    asdListBoxAddItem(puVar8[3],0x528154);
    asdListBoxAddItem(puVar8[3],&DAT_00528144);
    FUN_00317508(puVar8[3],1);
    *puVar8 = 4;
    return 0;
  case 9:
    return 0xffffffff;
  default:
    return 0;
  }
  *puVar8 = temp_v2;
  return 0;
}

} /* extern "C" */
