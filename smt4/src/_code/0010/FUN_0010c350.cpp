/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010c350` (_code @ 0x10c350, 0x25c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bda30(int, int);
int asdMemFree(...);
int nw_snd_SoundHandle_DetachSound(...);
int nw_snd_SoundHeap_Destroy(int);
int nw_snd_SoundHeap_LoadState(int, unsigned int);

extern unsigned int DAT_004e246c; /* 0x4e246c */
extern unsigned int DAT_004e2598; /* 0x4e2598 */
extern unsigned char DAT_004e259c; /* 0x4e259c */
extern unsigned char DAT_004e259d; /* 0x4e259d */
extern unsigned int DAT_004e25e4; /* 0x4e25e4 */
extern unsigned char DAT_004e25e8; /* 0x4e25e8 */
extern unsigned char DAT_004e25e9; /* 0x4e25e9 */
extern unsigned char DAT_004e25ea; /* 0x4e25ea */
extern unsigned char DAT_004e2634; /* 0x4e2634 */
extern unsigned char DAT_004e2636; /* 0x4e2636 */
extern unsigned char DAT_004e2637; /* 0x4e2637 */

/* Supplied declaration required: FUN_002bda30. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: nw_snd_SoundHandle_DetachSound. */
/* Supplied declaration required: nw_snd_SoundHeap_Destroy. */
/* Supplied declaration required: nw_snd_SoundHeap_LoadState. */


void FUN_0010c350(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  int temp_v5;
  
  temp_v2 = 0;
  do {
    if (temp_v2 < 4) {
      temp_v0 = temp_v2 * 0x50;
      if (*(int *)(temp_v0 + 0x4e2434) != 0) {
        (&DAT_004e246c)[temp_v2 * 0x14] = 0x40;
        nw_snd_SoundHeap_LoadState(temp_v0 + 0x4e2424,*(unsigned int *)(temp_v0 + 0x4e2468));
        *(unsigned int *)(temp_v0 + 0x4e2468) = 0;
        nw_snd_SoundHeap_Destroy(temp_v0 + 0x4e2424);
        asdMemFree(*(unsigned int *)(temp_v0 + 0x4e2464));
      }
    }
    temp_v2 = temp_v2 + 1;
  } while ((int)temp_v2 < 4);
  temp_v2 = 0;
  do {
    temp_v0 = temp_v2 * 0x3c;
    if (*(int *)(temp_v0 + 0x4e2574) != 0) {
      if (temp_v2 < 2) {
        (&DAT_004e2598)[temp_v2 * 0xf] = 0;
        (&DAT_004e259d)[temp_v0] = 0x40;
        (&DAT_004e259c)[temp_v0] = 0;
        nw_snd_SoundHeap_LoadState(temp_v0 + 0x4e2564,*(unsigned int *)(temp_v0 + 0x4e2590));
      }
      *(unsigned int *)(temp_v0 + 0x4e2590) = 0;
      nw_snd_SoundHeap_Destroy(temp_v0 + 0x4e2564);
      asdMemFree();
    }
    do {
      temp_v2 = temp_v2 + 1;
      if ((int)temp_v2 >= 2) {
        temp_v2 = 0;
        do {
          temp_v0 = temp_v2 * 0x10;
          piVar5 = (int *)(temp_v0 + 0x4e25dc);
          if ((&DAT_004e25ea)[temp_v0] != '\0') {
            if (*piVar5 != 0) {
              FUN_002bda30(*piVar5,0);
              nw_snd_SoundHandle_DetachSound(piVar5);
            }
            (&DAT_004e25ea)[temp_v0] = 0;
            if (temp_v2 < 2) {
              if (*piVar5 != 0) {
                FUN_002bda30(*piVar5,0);
              }
              (&DAT_004e25e4)[temp_v2 * 4] = 0;
              (&DAT_004e25e9)[temp_v0] = 0x40;
              (&DAT_004e25e8)[temp_v0] = 0;
            }
          }
          do {
            temp_v2 = temp_v2 + 1;
            if ((int)temp_v2 >= 2) {
              temp_v2 = 0;
              do {
                temp_v0 = temp_v2 * 0x3c;
                temp_v5 = temp_v0 + 0x4e25fc;
                if ((&DAT_004e2636)[temp_v0] != '\0') {
                  temp_v3 = 0;
                  do {
                    temp_v4 = temp_v5 + temp_v3 * 4;
                    temp_v1 = *(int *)(temp_v4 + 0x20);
                    if (temp_v1 != 0) {
                      FUN_002bda30(temp_v1,0);
                      nw_snd_SoundHandle_DetachSound(temp_v4 + 0x20);
                    }
                    temp_v3 = temp_v3 + 1;
                  } while (temp_v3 < 4);
                  if ((&DAT_004e2637)[temp_v0] != '\0') {
                    nw_snd_SoundHeap_Destroy(temp_v5);
                    asdMemFree();
                    *(unsigned int *)(temp_v0 + 0x4e2630) = 0;
                    (&DAT_004e2637)[temp_v0] = 0;
                  }
                  (&DAT_004e2636)[temp_v0] = 0;
                  if ((temp_v2 < 4) && (temp_v5 != 0)) {
                    temp_v3 = 0;
                    do {
                      temp_v1 = *(int *)(temp_v5 + temp_v3 * 4 + 0x20);
                      if (temp_v1 != 0) {
                        FUN_002bda30(temp_v1,0);
                      }
                      temp_v3 = temp_v3 + 1;
                    } while (temp_v3 < 4);
                    (&DAT_004e2634)[temp_v0] = 0x40;
                    if ((&DAT_004e2637)[temp_v0] != '\0') {
                      nw_snd_SoundHeap_LoadState(temp_v5,*(unsigned int *)(temp_v0 + 0x4e2630));
                    }
                  }
                }
                do {
                  temp_v2 = temp_v2 + 1;
                  if ((int)temp_v2 >= 4) {
                    return;
                  }
                } while (temp_v2 >= 4);
              } while( 1 );
            }
          } while (temp_v2 >= 2);
        } while( 1 );
      }
    } while (temp_v2 >= 2);
  } while( 1 );
}

} /* extern "C" */
