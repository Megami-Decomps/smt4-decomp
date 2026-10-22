/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00150784` (_code @ 0x150784, 0x268 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00154890(unsigned int);
int FUN_00169614(unsigned int);
int FUN_00173a94(unsigned char *);
int FUN_00173c1c(unsigned char *);
int FUN_00173c7c(unsigned char *);
int asdSoundObjectStop(...);
int uiTextStateReset(unsigned char *);
int asdMemFree(...);
int FUN_001b6668(unsigned char *, unsigned char *);
int nw_snd_SoundHandle_DetachSound(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char g_asdSoundSystem; /* 0x63e1e8 */
extern unsigned char DAT_0063e37c; /* 0x63e37c */
extern unsigned char DAT_0063e494; /* 0x63e494 */
extern int DAT_0063e6b8; /* 0x63e6b8 */
extern int DAT_0063e6bc; /* 0x63e6bc */
extern int DAT_0063e6c0; /* 0x63e6c0 */
extern int DAT_0063e6c4; /* 0x63e6c4 */
extern unsigned char DAT_0063e6cc; /* 0x63e6cc */
extern int *g_soundHandleList; /* 0x63e944 */
extern int DAT_0063e948; /* 0x63e948 */
extern unsigned char DAT_0063ea3c; /* 0x63ea3c */
extern unsigned char DAT_0063ea48; /* 0x63ea48 */
extern unsigned char g_asdSoundHandleState; /* 0x63f1e8 */
extern unsigned char DAT_0063f45c; /* 0x63f45c */
extern unsigned int DAT_0063f4c0; /* 0x63f4c0 */
extern signed char DAT_0063f4c4; /* 0x63f4c4 */
extern int DAT_0063f500; /* 0x63f500 */
extern unsigned int DAT_0063f504; /* 0x63f504 */
extern int DAT_0063f50c; /* 0x63f50c */

/* Supplied declaration required: FUN_00154890. */
extern int nw_snd_SoundArchive_IsAvailable(unsigned char *);
/* Supplied declaration required: FUN_00169614. */
/* Supplied declaration required: FUN_00173a94. */
/* Supplied declaration required: FUN_00173c1c. */
/* Supplied declaration required: FUN_00173c7c. */
/* Supplied declaration required: asdSoundObjectStop. */
/* Supplied declaration required: uiTextStateReset. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_001b6668. */
/* Supplied declaration required: nw_snd_SoundHandle_DetachSound. */


void FUN_00150784(void)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar6;
  
  temp_v0 = nw_snd_SoundArchive_IsAvailable(&g_asdSoundSystem);
  temp_v3 = DAT_0063f500;
  if (temp_v0 != 0) {
    if (DAT_0063f500 != 0) {
      temp_v1 = 0;
      do {
        temp_v2 = temp_v3 + temp_v1 * 4;
        temp_v0 = *(int *)(temp_v2 + 0x20);
        if (temp_v0 != 0) {
          asdSoundObjectStop(temp_v0,0);
          nw_snd_SoundHandle_DetachSound(temp_v2 + 0x20);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x10);
    }
    temp_v1 = 0;
    do {
      if (temp_v1 < 2) {
        puVar2 = &g_asdSoundHandleState + temp_v1 * 4;
        temp_v3 = (&DAT_0063f504)[temp_v1];
        if (temp_v3 != 0) {
          puVar2 = *(unsigned char **)(temp_v3 + 0x20);
        }
        if (temp_v3 != 0 && puVar2 != (unsigned char *)0x0) {
          asdSoundObjectStop(puVar2,0);
          nw_snd_SoundHandle_DetachSound(temp_v3 + 0x20);
        }
      }
      piVar6 = g_soundHandleList;
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 2);
    temp_v3 = 0;
    if (temp_v3 < DAT_0063e948) {
      do {
        if (piVar6 == (int *)0x0) break;
        if (*piVar6 != 0) {
          asdSoundObjectStop(*piVar6,0);
          nw_snd_SoundHandle_DetachSound(piVar6);
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < DAT_0063e948);
    }
    temp_v3 = DAT_0063f50c;
    if (DAT_0063f50c != 0) {
      temp_v1 = 0;
      do {
        temp_v2 = temp_v3 + temp_v1 * 4;
        temp_v0 = *(int *)(temp_v2 + 0x20);
        if (temp_v0 != 0) {
          asdSoundObjectStop(temp_v0,0);
          nw_snd_SoundHandle_DetachSound(temp_v2 + 0x20);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 4);
    }
    DAT_0063f500 = 0;
    FUN_00169614(0xffffffff);
    FUN_00154890(0xffffffff);
    if (DAT_0063f4c4 == '\x01') {
      temp_v1 = 0;
      do {
        piVar6 = (int *)(temp_v1 * 4 + 0x63f2f8);
        temp_v3 = *piVar6;
        if (temp_v3 != 0) {
          asdSoundObjectStop(temp_v3,0);
          nw_snd_SoundHandle_DetachSound(piVar6);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x10);
      FUN_001b6668(&DAT_0063ea48,&DAT_0063f45c);
      FUN_00173a94(&DAT_0063ea3c);
      asdMemFree(DAT_0063f4c0);
    }
    DAT_0063e6cc = 0;
    FUN_00173c1c(&DAT_0063e494);
    FUN_00173c7c(&DAT_0063e37c);
    uiTextStateReset(&g_asdSoundSystem);
    if (DAT_0063e6b8 != 0) {
      asdMemFree();
    }
    if (DAT_0063e6bc != 0) {
      asdMemFree();
    }
    if (DAT_0063e6c0 != 0) {
      asdMemFree();
    }
    if (DAT_0063e6c4 != 0) {
      asdMemFree();
      return;
    }
  }
  return;
}

} /* extern "C" */
