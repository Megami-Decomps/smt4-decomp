/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00141b24` (_code @ 0x141b24, 0x220 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdSoundObjectStop(int, int);
int asdMemFree(...);
int nw_snd_SoundHandle_DetachSound(...);
int nw_snd_SoundHeap_Destroy(int);
int nw_snd_SoundHeap_LoadState(int, unsigned int);

extern unsigned int DAT_0063e774; /* 0x63e774 */
extern unsigned int DAT_0063e900; /* 0x63e900 */
extern unsigned char DAT_0063e904; /* 0x63e904 */
extern unsigned char DAT_0063e905; /* 0x63e905 */
extern int *g_soundHandleList; /* 0x63e944 */
extern unsigned int DAT_0063e948; /* 0x63e948 */
extern unsigned char DAT_0063e984; /* 0x63e984 */
extern unsigned char DAT_0063e986; /* 0x63e986 */
extern unsigned char DAT_0063e987; /* 0x63e987 */

/* Supplied declaration required: asdSoundObjectStop. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: nw_snd_SoundHandle_DetachSound. */
/* Supplied declaration required: nw_snd_SoundHeap_Destroy. */
/* Supplied declaration required: nw_snd_SoundHeap_LoadState. */


void FUN_00141b24(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int *piVar6;
  int temp_v4;
  int temp_v5;
  
  temp_v2 = 0;
  do {
    if (temp_v2 < 4) {
      temp_v0 = temp_v2 * 0x70;
      if (*(int *)(temp_v0 + 0x63e71c) != 0) {
        (&DAT_0063e774)[temp_v2 * 0x1c] = 0x40;
        nw_snd_SoundHeap_LoadState(temp_v0 + 0x63e70c,*(unsigned int *)(temp_v0 + 0x63e770));
        *(unsigned int *)(temp_v0 + 0x63e770) = 0;
        nw_snd_SoundHeap_Destroy(temp_v0 + 0x63e70c);
        asdMemFree(*(unsigned int *)(temp_v0 + 0x63e76c));
      }
    }
    temp_v2 = temp_v2 + 1;
  } while ((int)temp_v2 < 4);
  temp_v2 = 0;
  do {
    temp_v0 = temp_v2 * 0x3c;
    if (*(int *)(temp_v0 + 0x63e8dc) != 0) {
      if (temp_v2 < 2) {
        (&DAT_0063e900)[temp_v2 * 0xf] = 0;
        (&DAT_0063e905)[temp_v0] = 0x40;
        (&DAT_0063e904)[temp_v0] = 0;
        nw_snd_SoundHeap_LoadState(temp_v0 + 0x63e8cc,*(unsigned int *)(temp_v0 + 0x63e8f8));
      }
      *(unsigned int *)(temp_v0 + 0x63e8f8) = 0;
      nw_snd_SoundHeap_Destroy(temp_v0 + 0x63e8cc);
      asdMemFree();
    }
    do {
      temp_v2 = temp_v2 + 1;
      piVar2 = g_soundHandleList;
      if ((int)temp_v2 >= 2) {
        while (piVar2 != (int *)0x0) {
          if (*piVar2 != 0) {
            asdSoundObjectStop(*piVar2,0);
            nw_snd_SoundHandle_DetachSound(piVar2);
          }
          piVar6 = (int *)piVar2[5];
          asdMemFree(piVar2);
          piVar2 = piVar6;
        }
        g_soundHandleList = (int *)0x0;
        temp_v2 = 0;
        DAT_0063e948 = 0;
        do {
          if (temp_v2 < 4) {
            temp_v0 = temp_v2 * 0x3c;
            temp_v5 = temp_v0 + 0x63e94c;
            if ((&DAT_0063e986)[temp_v0] != '\0') {
              temp_v3 = 0;
              do {
                temp_v4 = temp_v5 + temp_v3 * 4;
                temp_v1 = *(int *)(temp_v4 + 0x20);
                if (temp_v1 != 0) {
                  asdSoundObjectStop(temp_v1,0);
                  nw_snd_SoundHandle_DetachSound(temp_v4 + 0x20);
                }
                temp_v3 = temp_v3 + 1;
              } while (temp_v3 < 4);
              if ((&DAT_0063e987)[temp_v0] != '\0') {
                nw_snd_SoundHeap_Destroy(temp_v5);
                asdMemFree(*(unsigned int *)(temp_v0 + 0x63e97c));
                *(unsigned int *)(temp_v0 + 0x63e980) = 0;
                (&DAT_0063e987)[temp_v0] = 0;
              }
              (&DAT_0063e986)[temp_v0] = 0;
              if ((temp_v2 < 4) && (temp_v5 != 0)) {
                temp_v3 = 0;
                do {
                  temp_v1 = *(int *)(temp_v5 + temp_v3 * 4 + 0x20);
                  if (temp_v1 != 0) {
                    asdSoundObjectStop(temp_v1,0);
                  }
                  temp_v3 = temp_v3 + 1;
                } while (temp_v3 < 4);
                (&DAT_0063e984)[temp_v0] = 0x40;
                if ((&DAT_0063e987)[temp_v0] != '\0') {
                  nw_snd_SoundHeap_LoadState(temp_v5,*(unsigned int *)(temp_v0 + 0x63e980));
                }
              }
            }
          }
          temp_v2 = temp_v2 + 1;
        } while ((int)temp_v2 < 4);
        return;
      }
    } while (temp_v2 >= 2);
  } while( 1 );
}

} /* extern "C" */
