/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002761fc` (_code @ 0x2761fc, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_001681cc(...);
int FUN_0019a5a0(void);
int FUN_00275bc8(...);
int FUN_00275f44(...);
int FUN_002804b0(...);
int FUN_002e6354(...);
int FUN_003756c8(...);
int FUN_0046c010(unsigned int, unsigned int, unsigned int *, unsigned char [120]);
int FUN_0046c084(...);
int FUN_0046e1c4(unsigned int, unsigned int, unsigned int *, unsigned char [8]);
int FUN_004aa8b0(...);
int FUN_004f741c(...);
int FUN_004f89e8(...);
int FUN_004f8f08(...);
int FUN_004f9080(void);
int FUN_004fb670(...);
int FUN_004feecc(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00570260; /* 0x570260 */
extern unsigned int DAT_00570280; /* 0x570280 */
extern int DAT_00571508; /* 0x571508 */
extern int DAT_00573808; /* 0x573808 */
extern unsigned int *DAT_00573898; /* 0x573898 */
extern unsigned int DAT_005738b8; /* 0x5738b8 */
extern unsigned int DAT_005738bc; /* 0x5738bc */
extern unsigned int DAT_005738c0; /* 0x5738c0 */
extern unsigned int DAT_005738c4; /* 0x5738c4 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_00100388. */
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_001681cc. */
extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);
/* Supplied declaration required: FUN_0019a5a0. */
extern unsigned int FUN_001a6f60(int, unsigned int);
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_003756c8. */
/* Supplied declaration required: FUN_0046c010. */
/* Supplied declaration required: FUN_0046c084. */
extern int FUN_0046c4b4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0046e1c4. */
/* Supplied declaration required: FUN_004aa8b0. */
extern unsigned int FUN_004d7e20(unsigned int *, int);
extern unsigned int FUN_004d83b4(unsigned int *, int);
extern int FUN_004f2708(int, int, unsigned int);
/* Supplied declaration required: FUN_004f741c. */
/* Supplied declaration required: FUN_004f89e8. */
/* Supplied declaration required: FUN_004f8f08. */
/* Supplied declaration required: FUN_004f9080. */
extern int FUN_004f9c2c(int);
/* Supplied declaration required: FUN_004fb670. */
/* Supplied declaration required: FUN_004feecc. */


unsigned int FUN_002761fc(void)

{
/* irregular: 5 goto(s); 18 native warning(s); review required */
  char temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar8;
  unsigned char temp_v6 [120];
  unsigned char temp_v7 [8];
  unsigned char temp_v8 [128];
  
  temp_v1 = FUN_00164a9c();
  puVar2 = DAT_00573898;
  if (DAT_00573898 == (unsigned int *)0x0) {
    return 0;
  }
  switch(*DAT_00573898) {
  case 1:
    FUN_002e6354(temp_v7,0x80);
    FUN_00100388(temp_v7,"battle/event/%s/ProTable_%s.tbb",temp_v1 + 0x130);
    temp_v2 = FUN_0046c4b4(DAT_00570280,*(unsigned int *)(temp_v1 + 0xf0));
    if (temp_v2 != 0) {
      FUN_0046e1c4(DAT_00570280,*(unsigned int *)(temp_v1 + 0xf0),puVar2 + 2,temp_v7);
    }
    else {
      FUN_002804b0(temp_v7,puVar2 + 2,0);
    }
    *puVar2 = 2;
    if (puVar2[2] == 0) {
      return 0;
    }
    temp_v4 = FUN_001a6f60(puVar2[2],0);
    temp_v3 = FUN_00192798();
    puVar2[6] = temp_v3;
    temp_v4 = FUN_00192748(temp_v4);
    *puVar2 = 3;
    puVar2[7] = temp_v4;
    temp_v4 = FUN_004d83b4(puVar2,temp_v1);
    return temp_v4;
  case 2:
    if (DAT_00573898[2] == 0) {
      return 0;
    }
    temp_v4 = FUN_001a6f60(DAT_00573898[2],0);
    temp_v3 = FUN_00192798();
    puVar2[6] = temp_v3;
    temp_v4 = FUN_00192748(temp_v4);
    *puVar2 = 3;
    puVar2[7] = temp_v4;
    goto code_r0x004d83b4;
  case 3:
code_r0x004d83b4:
    FUN_002e6354(temp_v6,0x80);
    FUN_00100388(temp_v6,"battle/event/%s/%s.mbm",temp_v1 + 0x130);
    temp_v2 = FUN_0046c4b4(DAT_00570280,*(unsigned int *)(temp_v1 + 0xf0));
    if (temp_v2 != 0) {
      FUN_0046c010(DAT_00570280,*(unsigned int *)(temp_v1 + 0xf0),puVar2 + 3,temp_v6);
    }
    else {
      FUN_002804b0(temp_v6,puVar2 + 3,0);
    }
    *puVar2 = 4;
    temp_v4 = 0;
    if (puVar2[3] != 0) {
      *puVar2 = 5;
      FUN_002e6354(temp_v8,0x80);
      FUN_00100388(temp_v8,"battle/event/%s/%s.bf",temp_v1 + 0x130);
      temp_v2 = FUN_0046c4b4(DAT_00570280,*(unsigned int *)(temp_v1 + 0xf0));
      if (temp_v2 != 0) {
        FUN_0046c084(DAT_00570280,*(unsigned int *)(temp_v1 + 0xf0),puVar2 + 4,temp_v8);
      }
      else {
        FUN_002804b0(temp_v8,puVar2 + 4,0);
      }
      *puVar2 = 6;
      if (puVar2[4] == 0) {
        temp_v4 = 0;
      }
      else {
        *puVar2 = 7;
        temp_v4 = FUN_004d7e20(puVar2,temp_v1);
      }
    }
    return temp_v4;
  case 4:
    if (DAT_00573898[3] == 0) {
      return 0;
    }
    *DAT_00573898 = 5;
    FUN_002e6354(temp_v7,0x80);
    FUN_00100388(temp_v7,"battle/event/%s/%s.bf",temp_v1 + 0x130);
    temp_v2 = FUN_0046c4b4(DAT_00570280,*(unsigned int *)(temp_v1 + 0xf0));
    if (temp_v2 != 0) {
      FUN_0046c084(DAT_00570280,*(unsigned int *)(temp_v1 + 0xf0),puVar2 + 4,temp_v7);
    }
    else {
      FUN_002804b0(temp_v7,puVar2 + 4,0);
    }
    *puVar2 = 6;
    temp_v2 = puVar2[4];
    if (temp_v2 != 0) {
      *puVar2 = 7;
      temp_v4 = FUN_004d7e20(puVar2,temp_v1);
      return temp_v4;
    }
    break;
  case 5:
    FUN_002e6354(temp_v7,0x80);
    FUN_00100388(temp_v7,"battle/event/%s/%s.bf",temp_v1 + 0x130);
    temp_v2 = FUN_0046c4b4(DAT_00570280,*(unsigned int *)(temp_v1 + 0xf0));
    if (temp_v2 != 0) {
      FUN_0046c084(DAT_00570280,*(unsigned int *)(temp_v1 + 0xf0),puVar2 + 4,temp_v7);
    }
    else {
      FUN_002804b0(temp_v7,puVar2 + 4,0);
    }
    *puVar2 = 6;
    temp_v2 = puVar2[4];
    if (temp_v2 != 0) {
      *puVar2 = 7;
      temp_v4 = FUN_004d7e20(puVar2,temp_v1);
      return temp_v4;
    }
    break;
  case 6:
    if (DAT_00573898[4] != 0) {
      *DAT_00573898 = 7;
      goto code_r0x004d7e20;
    }
    break;
  case 7:
code_r0x004d7e20:
    temp_v5 = *(unsigned int *)(DAT_00570260 + 0x754);
    *(unsigned int *)(DAT_00570260 + 0x754) = temp_v5 & 0xffffff8f;
    if ((temp_v5 & 0x10) != 0) {
      *puVar2 = 1;
      if (puVar2[2] != 0) {
        FUN_0019a5a0();
        puVar2[2] = 0;
      }
      if (puVar2[3] != 0) {
        FUN_0019a5a0();
        puVar2[3] = 0;
      }
      if (puVar2[4] != 0) {
        FUN_0019a5a0();
        puVar2[4] = 0;
      }
      return 0;
    }
    temp_v1 = puVar2[4];
    FUN_00275bc8(temp_v1,puVar2[3]);
    puVar2[5] = temp_v1;
    *(unsigned int *)(temp_v1 + 0x108) = 2;
    *puVar2 = 0;
    return 0;
  case 8:
    temp_v0 = *(char *)(DAT_00573898 + 0xb);
    if (temp_v0 != '\0') {
      if (temp_v0 == '\x01') goto LAB_004d7f68;
      if (temp_v0 == '\x02') {
        temp_v2 = FUN_004f9c2c(DAT_00573808);
        if (temp_v2 == 0) {
          return 0;
        }
        *(unsigned char *)(puVar2 + 0xb) = 3;
      }
    }
    else {
      FUN_004f741c(DAT_00573808);
      *(unsigned char *)(puVar2 + 0xb) = 1;
LAB_004d7f68:
      temp_v2 = DAT_00573808;
      FUN_004f9080();
      if (temp_v2 == 0) {
        return 0;
      }
      FUN_004f89e8(DAT_00573808);
      *(unsigned char *)(puVar2 + 0xb) = 2;
      temp_v2 = FUN_004f9c2c(DAT_00573808);
      if (temp_v2 == 0) {
        return 0;
      }
      *(unsigned char *)(puVar2 + 0xb) = 3;
    }
    *puVar2 = 9;
    if ((int)puVar2[8] < 0) {
      return 0;
    }
    FUN_00275f44(puVar2[5]);
    *puVar2 = 10;
    puVar8 = (unsigned int *)(temp_v1 + 0x45a0);
    puVar2[10] = 0;
    if ((*puVar8 & DAT_005738b8) != 0 || (*(unsigned int *)(temp_v1 + 0x45a4) & DAT_005738bc) != 0) {
      FUN_001681cc(0xdf);
    }
    if (puVar2[9] == 5) {
      temp_v5 = *(unsigned int *)(temp_v1 + 0x45a4) | DAT_005738bc;
      *puVar8 = DAT_005738b8 | *puVar8;
      *(unsigned int *)(temp_v1 + 0x45a4) = temp_v5;
      FUN_001681cc(0xdf);
    }
FUN_004d7ca8:
    puVar8 = (unsigned int *)(temp_v1 + 0x45a0);
    if (((*puVar8 & DAT_005738b8) != 0 || (*(unsigned int *)(temp_v1 + 0x45a4) & DAT_005738bc) != 0) &&
       ((puVar2[1] & 1) == 0)) {
      if ((-1 < *(int *)(DAT_00571508 + 0x7cc)) &&
         (temp_v2 = FUN_004f2708(DAT_00571508,temp_v1,1), temp_v2 != 0)) {
        FUN_004fb670(0,0);
      }
      FUN_004feecc(1,0);
      puVar2[1] = puVar2[1] | 1;
    }
    temp_v2 = FUN_00224880(puVar2[5]);
    if (temp_v2 == 2) {
      if (((DAT_005738b8 & *puVar8) != 0 || (*(unsigned int *)(temp_v1 + 0x45a4) & DAT_005738bc) != 0) &&
         (FUN_003756c8(0),
         (*puVar8 & DAT_005738c0) != 0 || (*(unsigned int *)(temp_v1 + 0x45a4) & DAT_005738c4) != 0)) {
        FUN_004aa8b0(DAT_0057a9c8,0);
        temp_v5 = ~DAT_005738c4;
        *puVar8 = *puVar8 & ~DAT_005738c0;
        *(unsigned int *)(temp_v1 + 0x45a4) = *(unsigned int *)(temp_v1 + 0x45a4) & temp_v5;
      }
      *puVar2 = 0;
      temp_v5 = ~DAT_005738b8;
      *(unsigned int *)(temp_v1 + 0x45a4) = *(unsigned int *)(temp_v1 + 0x45a4) & ~DAT_005738bc;
      *puVar8 = *puVar8 & temp_v5;
      FUN_004f8f08(DAT_00573808);
    }
    if ((int)puVar2[10] < 0xffff) {
      puVar2[10] = puVar2[10] + 1;
    }
    return 0;
  case 9:
    if (-1 < (int)DAT_00573898[8]) {
      FUN_00275f44(DAT_00573898[5]);
      *puVar2 = 10;
      puVar8 = (unsigned int *)(temp_v1 + 0x45a0);
      puVar2[10] = 0;
      if ((*puVar8 & DAT_005738b8) != 0 || (*(unsigned int *)(temp_v1 + 0x45a4) & DAT_005738bc) != 0) {
        FUN_001681cc(0xdf);
      }
      if (puVar2[9] == 5) {
        temp_v5 = DAT_005738bc | *(unsigned int *)(temp_v1 + 0x45a4);
        *puVar8 = *puVar8 | DAT_005738b8;
        *(unsigned int *)(temp_v1 + 0x45a4) = temp_v5;
        FUN_001681cc(0xdf);
      }
      goto FUN_004d7ca8;
    }
    break;
  case 10:
    goto FUN_004d7ca8;
  }
  return 0;
}

} /* extern "C" */
