/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001177e0` (_code @ 0x1177e0, 0x284 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char DAT_004e1f68; /* 0x4e1f68 */
extern unsigned char DAT_004e20ec; /* 0x4e20ec */
extern unsigned char DAT_004e21ac; /* 0x4e21ac */
extern int DAT_004e23d0; /* 0x4e23d0 */
extern int DAT_004e23d4; /* 0x4e23d4 */
extern int DAT_004e23d8; /* 0x4e23d8 */
extern int DAT_004e23dc; /* 0x4e23dc */
extern unsigned char DAT_004e23e4; /* 0x4e23e4 */
extern unsigned char DAT_004e26ec; /* 0x4e26ec */
extern unsigned char DAT_004e26f8; /* 0x4e26f8 */
extern unsigned char DAT_004e2f68; /* 0x4e2f68 */
extern unsigned char DAT_004e30cc; /* 0x4e30cc */
extern unsigned int DAT_004e3130; /* 0x4e3130 */
extern signed char DAT_004e3134; /* 0x4e3134 */
extern int DAT_004e316c; /* 0x4e316c */
extern unsigned int DAT_004e3170; /* 0x4e3170 */
extern unsigned int DAT_004e3178; /* 0x4e3178 */
extern int DAT_004e3180; /* 0x4e3180 */

/* Supplied declaration required: FUN_00119da8. */
/* Supplied declaration required: FUN_0011a1b8. */
/* Supplied declaration required: FUN_00126770. */
/* Supplied declaration required: FUN_0012f664. */
/* Supplied declaration required: FUN_0012f7e4. */
/* Supplied declaration required: FUN_0012f844. */
/* Supplied declaration required: FUN_0014047c. */
/* Supplied declaration required: FUN_002bda30. */
extern int FUN_002bf684(unsigned char *);
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: nw_snd_SoundHandle_DetachSound. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_erase_2B743C. */


void FUN_001177e0(void)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  unsigned int *puVar6;
  
  temp_v0 = FUN_002bf684(&DAT_004e1f68);
  temp_v1 = DAT_004e316c;
  if (temp_v0 == 0) {
    return;
  }
  if (DAT_004e316c != 0) {
    temp_v2 = 0;
    do {
      temp_v3 = temp_v1 + temp_v2 * 4;
      temp_v0 = *(int *)(temp_v3 + 0x20);
      if (temp_v0 != 0) {
        FUN_002bda30(temp_v0,0);
        nw_snd_SoundHandle_DetachSound(temp_v3 + 0x20);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 8);
  }
  temp_v2 = 0;
  do {
    if (temp_v2 < 2) {
      puVar2 = &DAT_004e2f68 + temp_v2 * 4;
      temp_v1 = (&DAT_004e3170)[temp_v2];
      if (temp_v1 != 0) {
        puVar2 = *(unsigned char **)(temp_v1 + 0x20);
      }
      if (temp_v1 != 0 && puVar2 != (unsigned char *)0x0) {
        FUN_002bda30(puVar2,0);
        nw_snd_SoundHandle_DetachSound(temp_v1 + 0x20);
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 2);
  temp_v2 = 0;
  do {
    puVar2 = &DAT_004e2f68 + temp_v2 * 4;
    puVar6 = (unsigned int *)(&DAT_004e3178)[temp_v2];
    if (puVar6 != (unsigned int *)0x0) {
      puVar2 = (unsigned char *)*puVar6;
    }
    if (puVar6 != (unsigned int *)0x0 && puVar2 != (unsigned char *)0x0) {
      FUN_002bda30(puVar2,0);
      nw_snd_SoundHandle_DetachSound(puVar6);
    }
    do {
      temp_v1 = DAT_004e3180;
      temp_v2 = temp_v2 + 1;
      if (temp_v2 >= 2) {
        if (DAT_004e3180 != 0) {
          temp_v2 = 0;
          do {
            temp_v3 = temp_v1 + temp_v2 * 4;
            temp_v0 = *(int *)(temp_v3 + 0x20);
            if (temp_v0 != 0) {
              FUN_002bda30(temp_v0,0);
              nw_snd_SoundHandle_DetachSound(temp_v3 + 0x20);
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 4);
        }
        DAT_004e316c = 0;
        FUN_00126770(0xffffffff);
        FUN_0011a1b8(0xffffffff);
        FUN_00119da8(0xffffffff);
        if (DAT_004e3134 == '\x01') {
          temp_v2 = 0;
          do {
            temp_v1 = *(int *)(&DAT_004e2f68 + temp_v2 * 4);
            if (temp_v1 != 0) {
              FUN_002bda30(temp_v1,0);
              nw_snd_SoundHandle_DetachSound(&DAT_004e2f68 + temp_v2 * 4);
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 0x10);
          nw_ut_internal_LinkListImpl_erase_2B743C(&DAT_004e26f8,&DAT_004e30cc);
          FUN_0012f664(&DAT_004e26ec);
          FUN_002c415c(DAT_004e3130);
        }
        DAT_004e23e4 = 0;
        FUN_0012f7e4(&DAT_004e21ac);
        FUN_0012f844(&DAT_004e20ec);
        FUN_0014047c(&DAT_004e1f68);
        if (DAT_004e23d0 != 0) {
          FUN_002c415c();
        }
        if (DAT_004e23d4 != 0) {
          FUN_002c415c();
        }
        if (DAT_004e23d8 != 0) {
          FUN_002c415c();
        }
        if (DAT_004e23dc == 0) {
          return;
        }
        FUN_002c415c();
        return;
      }
    } while (temp_v2 >= 2);
  } while( 1 );
}
