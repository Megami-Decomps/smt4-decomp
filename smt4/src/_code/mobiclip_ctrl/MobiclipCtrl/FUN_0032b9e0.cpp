/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032b9e0` (_code @ 0x32b9e0, 0x188 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011b638(unsigned int *);
int FUN_0011b670(unsigned int *);
int FUN_0011b6c8(unsigned char *);
int FUN_0011b788(unsigned char *);
int FUN_0034f5f8(unsigned int *);
int FUN_0034f630(unsigned int *);
int FUN_0034fa04(unsigned char *);
int FUN_0034fbc8(unsigned char *);
int FUN_0034fc50(void);
int FUN_0034fe14(void);
int FUN_00350320(unsigned char *);
int FUN_00350c98(void);
int FUN_00350e30(unsigned char *);
int FUN_00350ff8(void);
int FUN_00351488(unsigned char *);
int SBORROW4(...);

extern signed char DAT_0044d020; /* 0x44d020 */
extern unsigned int DAT_0044d028; /* 0x44d028 */
extern int DAT_0044d02c; /* 0x44d02c */
extern unsigned int DAT_004c3af8; /* 0x4c3af8 */
extern unsigned char DAT_004c3b20; /* 0x4c3b20 */
extern int DAT_004c3b2c; /* 0x4c3b2c */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
#ifndef ROMWRIGHT_ZEXT_4_8_DEFINED
#define ROMWRIGHT_ZEXT_4_8_DEFINED
#define romwright_zext_4_8(value) ((unsigned long long)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_0011b638. */
/* Supplied declaration required: FUN_0011b670. */
/* Supplied declaration required: FUN_0011b6c8. */
/* Supplied declaration required: FUN_0011b788. */
/* Supplied declaration required: FUN_0034f5f8. */
/* Supplied declaration required: FUN_0034f630. */
extern int FUN_0034f668(unsigned int *);
/* Supplied declaration required: FUN_0034fa04. */
/* Supplied declaration required: FUN_0034fbc8. */
/* Supplied declaration required: FUN_0034fc50. */
/* Supplied declaration required: FUN_0034fe14. */
/* Supplied declaration required: FUN_00350320. */
extern int FUN_00350854(unsigned char *);
/* Supplied declaration required: FUN_00350c98. */
extern int FUN_00350e18(unsigned char *);
/* Supplied declaration required: FUN_00350e30. */
/* Supplied declaration required: FUN_00350ff8. */
/* Supplied declaration required: FUN_00351488. */


unsigned char FUN_0032b9e0(void)

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
    temp_v0 = FUN_0034f668(&DAT_004c3af8);
    if (temp_v0 != 0) {
      FUN_0011b638(&DAT_004c3af8);
      FUN_0011b6c8(&DAT_004c3b20);
      FUN_0011b788(&DAT_004c3b20);
      FUN_0011b670(&DAT_004c3af8);
    }
    temp_v0 = FUN_00350e18(&DAT_004c3b20);
    if (temp_v0 == 0) {
      puVar2 = &DAT_004c3b20;
      FUN_00350ff8();
      puVar3 = &DAT_004c3b20;
      if ((int)(temp_v1 - (DAT_0044d02c + (unsigned int)((unsigned int)puVar2 < DAT_0044d028))) < 0 ==
          (SBORROW4(temp_v1,DAT_0044d02c) !=
          SBORROW4(temp_v1 - DAT_0044d02c,(unsigned int)((unsigned int)puVar2 < DAT_0044d028)))) {
        FUN_0034fc50();
      }
      else {
        FUN_00350c98();
        if (puVar3 != (unsigned char *)0x0) {
          FUN_0034fe14();
        }
      }
    }
    temp_v0 = FUN_00350854(&DAT_004c3b20);
    if (temp_v0 != 0) {
      puVar2 = &DAT_004c3b20;
      FUN_00350ff8();
      temp_v0 = DAT_0044d02c * 6 + (int)(romwright_zext_4_8(DAT_0044d028) * 6 >> 0x20);
      temp_v5 = puVar2 < (unsigned char *)(romwright_zext_4_8(DAT_0044d028) * 6);
      if ((int)(temp_v2 - (temp_v0 + (unsigned int)temp_v5)) < 0 ==
          (SBORROW4(temp_v2,temp_v0) != SBORROW4(temp_v2 - temp_v0,(unsigned int)temp_v5))) {
        FUN_0034f5f8(&DAT_004c3af8);
        FUN_0034fa04(&DAT_004c3b20);
        FUN_0034fbc8(&DAT_004c3b20);
      }
      else if (-1 < temp_v2) {
        temp_v4 = 1;
        FUN_00350e30(&DAT_004c3b20);
        FUN_0034f630(&DAT_004c3af8);
      }
    }
    if (DAT_0044d020 != '\0') {
      temp_v3 = 1;
    }
    FUN_00351488(&DAT_004c3b20);
  } while (((!temp_v4 && !temp_v3) && (DAT_004c3b2c != 7)) && (DAT_004c3b2c != 1));
  if (!temp_v4) {
    FUN_00350320(&DAT_004c3b20);
  }
  return temp_v4;
}

} /* extern "C" */
