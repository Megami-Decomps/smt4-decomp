/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a7a0` (_code @ 0x13a7a0, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00143b58(int, int, int);
int FUN_001448a8(int, int, int);
int FUN_001742e4(int, int);
int nw_snd_SoundHandle_DetachSound(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char g_soundVolumeSetting; /* 0x588fb4 */
extern unsigned char DAT_0061955c; /* 0x61955c */
extern int DAT_0063f500; /* 0x63f500 */

/* Supplied declaration required: FUN_00143b58. */
/* Supplied declaration required: FUN_001448a8. */
extern int FUN_00162ea4(void);
/* Supplied declaration required: FUN_001742e4. */
extern int jyoucyuGetTableEntry(unsigned int);
/* Supplied declaration required: nw_snd_SoundHandle_DetachSound. */


void FUN_0013a7a0(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  
  temp_v1 = 0;
  do {
    temp_v3 = *(int *)(&DAT_0061955c + temp_v1 * 4);
    if (temp_v3 != 0) {
      temp_v0 = jyoucyuGetTableEntry(1);
      if ((temp_v0 == 0) && (temp_v0 = FUN_00162ea4(), temp_v0 == 0)) {
        if (temp_v3 + 0xfeffff84U < 0x191) {
          FUN_001448a8(temp_v3,g_soundVolumeSetting,0);
        }
        else if (temp_v3 + 0xfefffdf3U < 0x106) {
          FUN_00143b58(temp_v3,g_soundVolumeSetting,0);
        }
      }
      *(unsigned int *)(&DAT_0061955c + temp_v1 * 4) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x20);
  temp_v3 = FUN_00162ea4();
  temp_v1 = DAT_0063f500;
  if (temp_v3 == 0) {
    return;
  }
  if (DAT_0063f500 != 0) {
    temp_v2 = 0;
    do {
      temp_v0 = temp_v1 + temp_v2 * 4;
      temp_v3 = *(int *)(temp_v0 + 0x20);
      if (temp_v3 != 0) {
        FUN_001742e4(temp_v3,0);
        nw_snd_SoundHandle_DetachSound(temp_v0 + 0x20);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x10);
  }
  return;
}

} /* extern "C" */
