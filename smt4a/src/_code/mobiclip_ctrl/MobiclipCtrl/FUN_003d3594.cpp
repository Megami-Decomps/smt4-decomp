/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d3594` (_code @ 0x3d3594, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001582dc(unsigned int *);
int FUN_00158314(unsigned int *);
int FUN_0015836c(unsigned char *);
int FUN_0015842c(unsigned char *);
int FUN_00423c0c(unsigned int *);
int playHandleStart(unsigned int *);
int FUN_00424018(unsigned char *);
int FUN_004241e0(unsigned char *);
int FUN_00424268(void);
int block158OwnerCheck(void);
int FUN_00424938(unsigned char *);
int FUN_004252b0(void);
int FUN_00425448(unsigned char *);
int FUN_00425610(void);
int FUN_00425aa0(unsigned char *);
int SBORROW4(...);

extern signed char DAT_00588020; /* 0x588020 */
extern unsigned int DAT_00588028; /* 0x588028 */
extern int DAT_0058802c; /* 0x58802c */
extern unsigned int DAT_00617f18; /* 0x617f18 */
extern unsigned char DAT_00617f40; /* 0x617f40 */
extern int DAT_00617f4c; /* 0x617f4c */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
#ifndef ROMWRIGHT_ZEXT_4_8_DEFINED
#define ROMWRIGHT_ZEXT_4_8_DEFINED
#define romwright_zext_4_8(value) ((unsigned long long)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_001582dc. */
/* Supplied declaration required: FUN_00158314. */
/* Supplied declaration required: FUN_0015836c. */
/* Supplied declaration required: FUN_0015842c. */
extern int FUN_0031f03c(void);
/* Supplied declaration required: FUN_00423c0c. */
/* Supplied declaration required: playHandleStart. */
extern int FUN_00423c7c(unsigned int *);
/* Supplied declaration required: FUN_00424018. */
/* Supplied declaration required: FUN_004241e0. */
/* Supplied declaration required: FUN_00424268. */
/* Supplied declaration required: block158OwnerCheck. */
/* Supplied declaration required: FUN_00424938. */
extern int block158OwnerReady(unsigned char *);
/* Supplied declaration required: FUN_004252b0. */
extern int block158OwnerHasRemaining(unsigned char *);
/* Supplied declaration required: FUN_00425448. */
/* Supplied declaration required: FUN_00425610. */
/* Supplied declaration required: FUN_00425aa0. */


unsigned char FUN_003d3594(void)

{
/* irregular: 18 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned char *puVar3;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  
  temp_v3 = 0;
  temp_v4 = 0;
  do {
    temp_v0 = FUN_0031f03c();
    if (temp_v0 == 0) {
      temp_v3 = 1;
    }
    temp_v0 = FUN_00423c7c(&DAT_00617f18);
    if (temp_v0 != 0) {
      FUN_001582dc(&DAT_00617f18);
      FUN_0015836c(&DAT_00617f40);
      FUN_0015842c(&DAT_00617f40);
      FUN_00158314(&DAT_00617f18);
    }
    temp_v0 = block158OwnerHasRemaining(&DAT_00617f40);
    if (temp_v0 == 0) {
      puVar2 = &DAT_00617f40;
      FUN_00425610();
      puVar3 = &DAT_00617f40;
      if ((int)(temp_v1 - (DAT_0058802c + (unsigned int)((unsigned int)puVar2 < DAT_00588028))) < 0 ==
          (SBORROW4(temp_v1,DAT_0058802c) !=
          SBORROW4(temp_v1 - DAT_0058802c,(unsigned int)((unsigned int)puVar2 < DAT_00588028)))) {
        FUN_00424268();
      }
      else {
        FUN_004252b0();
        if (puVar3 != (unsigned char *)0x0) {
          block158OwnerCheck();
        }
      }
    }
    temp_v0 = block158OwnerReady(&DAT_00617f40);
    if (temp_v0 != 0) {
      puVar2 = &DAT_00617f40;
      FUN_00425610();
      temp_v0 = DAT_0058802c * 6 + (int)(romwright_zext_4_8(DAT_00588028) * 6 >> 0x20);
      temp_v5 = puVar2 < (unsigned char *)(romwright_zext_4_8(DAT_00588028) * 6);
      if ((int)(temp_v2 - (temp_v0 + (unsigned int)temp_v5)) < 0 ==
          (SBORROW4(temp_v2,temp_v0) != SBORROW4(temp_v2 - temp_v0,(unsigned int)temp_v5))) {
        FUN_00423c0c(&DAT_00617f18);
        FUN_00424018(&DAT_00617f40);
        FUN_004241e0(&DAT_00617f40);
      }
      else if (-1 < temp_v2) {
        temp_v4 = 1;
        FUN_00425448(&DAT_00617f40);
        playHandleStart(&DAT_00617f18);
      }
    }
    if (DAT_00588020 != '\0') {
      temp_v3 = 1;
    }
    FUN_00425aa0(&DAT_00617f40);
  } while (((!temp_v4 && !temp_v3) && (DAT_00617f4c != 7)) && (DAT_00617f4c != 1));
  if (!temp_v4) {
    FUN_00424938(&DAT_00617f40);
  }
  return temp_v4;
}

} /* extern "C" */
