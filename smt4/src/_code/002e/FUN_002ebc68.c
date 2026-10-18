/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ebc68` (_code @ 0x2ebc68, 0x15c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e1f68; /* 0x4e1f68 */
extern unsigned char DAT_004e2f68; /* 0x4e2f68 */
extern unsigned int DAT_004e312c; /* 0x4e312c */
extern signed char DAT_004e3134; /* 0x4e3134 */
extern unsigned char DAT_004e3135; /* 0x4e3135 */
extern int DAT_004e3180; /* 0x4e3180 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001388dc. */
/* Supplied declaration required: FUN_00141fd0. */
/* Supplied declaration required: FUN_00266be4. */
extern int FUN_002bf684(unsigned char *);
extern char nw_snd_SoundStartable_StartSound(int, unsigned char *, int, unsigned int);


unsigned char FUN_002ebc68(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char *puVar6;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  
  temp_v3 = DAT_004e3180;
  temp_v4 = 0;
  puVar6 = &DAT_004e1f68;
  if ((((DAT_004e3134 != '\0') && (param_2 < 0x10)) &&
      (temp_v1 = FUN_002bf684(&DAT_004e1f68), temp_v1 != 0)) &&
     ((puVar3 = puVar6, FUN_00141fd0(&DAT_004e1f68,param_1),
      puVar3 != (unsigned char *)0x0 && temp_v3 != 0 && (temp_v2 = param_2, FUN_00266be4(), temp_v2 == 0))))
  {
    FUN_00141fd0(&DAT_004e1f68,param_1);
    if ((*(char *)(temp_v3 + 0x3b) != '\0') && (puVar6 == (unsigned char *)0x3)) {
      temp_v3 = param_1;
      FUN_001388dc();
      if (temp_v3 == 0) {
        return 0;
      }
    }
    else if (puVar6 != (unsigned char *)0x2) {
      return 0;
    }
    temp_v0 = nw_snd_SoundStartable_StartSound
                      (param_2 * 0x84 + 0x4e2728,&DAT_004e2f68 + param_2 * 4,param_1,0);
    temp_v4 = temp_v0 == '\0';
    if (DAT_004e3135 == 0) {
      temp_v5 = 0.0f;
    }
    else {
      temp_v5 = (float)VectorUnsignedToFloat((unsigned int)DAT_004e3135,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = (temp_v5 - 64.0f) * 0.015748031f + 1.0f;
      if ((int)temp_v5 >= 0x3f800001) {
        temp_v5 = 1.0f;
      }
    }
    *(float *)(param_2 * 0x84 + 0x4e2770) = temp_v5;
    if (temp_v4) {
      DAT_004e312c = DAT_004e312c | (1 << (param_2 & 0xff));
    }
  }
  return temp_v4;
}
