/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032bc14` (_code @ 0x32bc14, 0x188 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

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
/* Supplied declaration required: FUN_0011b558. */
/* Supplied declaration required: FUN_0011b590. */
/* Supplied declaration required: FUN_0011b5e8. */
/* Supplied declaration required: FUN_0011b6a8. */
/* Supplied declaration required: FUN_0034f808. */
/* Supplied declaration required: FUN_0034f840. */
extern int FUN_0034f878(unsigned int *);
/* Supplied declaration required: FUN_0034fc14. */
/* Supplied declaration required: FUN_0034fdd8. */
/* Supplied declaration required: FUN_0034fe60. */
/* Supplied declaration required: FUN_00350024. */
/* Supplied declaration required: FUN_00350530. */
extern int FUN_00350a64(unsigned char *);
/* Supplied declaration required: FUN_00350ea8. */
extern int FUN_00351028(unsigned char *);
/* Supplied declaration required: FUN_00351040. */
/* Supplied declaration required: FUN_00351208. */
/* Supplied declaration required: FUN_00351698. */


unsigned char FUN_0032bc14(void)

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
    temp_v0 = FUN_0034f878(&DAT_004c3af8);
    if (temp_v0 != 0) {
      FUN_0011b558(&DAT_004c3af8);
      FUN_0011b5e8(&DAT_004c3b20);
      FUN_0011b6a8(&DAT_004c3b20);
      FUN_0011b590(&DAT_004c3af8);
    }
    temp_v0 = FUN_00351028(&DAT_004c3b20);
    if (temp_v0 == 0) {
      puVar2 = &DAT_004c3b20;
      FUN_00351208();
      puVar3 = &DAT_004c3b20;
      if ((int)(temp_v1 - (DAT_0044d02c + (unsigned int)(puVar2 < DAT_0044d028))) < 0 ==
          (SBORROW4(temp_v1,DAT_0044d02c) !=
          SBORROW4(temp_v1 - DAT_0044d02c,(unsigned int)(puVar2 < DAT_0044d028)))) {
        FUN_0034fe60();
      }
      else {
        FUN_00350ea8();
        if (puVar3 != (unsigned char *)0x0) {
          FUN_00350024();
        }
      }
    }
    temp_v0 = FUN_00350a64(&DAT_004c3b20);
    if (temp_v0 != 0) {
      puVar2 = &DAT_004c3b20;
      FUN_00351208();
      temp_v0 = DAT_0044d02c * 6 + (int)(romwright_zext_4_8(DAT_0044d028) * 6 >> 0x20);
      temp_v5 = puVar2 < (unsigned char *)(romwright_zext_4_8(DAT_0044d028) * 6);
      if ((int)(temp_v2 - (temp_v0 + (unsigned int)temp_v5)) < 0 ==
          (SBORROW4(temp_v2,temp_v0) != SBORROW4(temp_v2 - temp_v0,(unsigned int)temp_v5))) {
        FUN_0034f808(&DAT_004c3af8);
        FUN_0034fc14(&DAT_004c3b20);
        FUN_0034fdd8(&DAT_004c3b20);
      }
      else if (-1 < temp_v2) {
        temp_v4 = 1;
        FUN_00351040(&DAT_004c3b20);
        FUN_0034f840(&DAT_004c3af8);
      }
    }
    if (DAT_0044d020 != '\0') {
      temp_v3 = 1;
    }
    FUN_00351698(&DAT_004c3b20);
  } while (((!temp_v4 && !temp_v3) && (DAT_004c3b2c != 7)) && (DAT_004c3b2c != 1));
  if (!temp_v4) {
    FUN_00350530(&DAT_004c3b20);
  }
  return temp_v4;
}
