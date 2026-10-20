/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105f98` (_code @ 0x105f98, 0xe8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012655c(int, int, int);
int FUN_00126850(int, int, int);
int FUN_002bda30(int, int);
int nw_snd_SoundHandle_DetachSound(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char DAT_0044e0b0; /* 0x44e0b0 */
extern unsigned char DAT_004c5404; /* 0x4c5404 */
extern int DAT_004e316c; /* 0x4e316c */

/* Supplied declaration required: FUN_0012655c. */
/* Supplied declaration required: FUN_00126850. */
/* Supplied declaration required: FUN_002bda30. */
extern int FUN_002c1d5c(void);
extern int jyoucyuGetTableEntry(unsigned int);
/* Supplied declaration required: nw_snd_SoundHandle_DetachSound. */


void FUN_00105f98(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  
  temp_v1 = 0;
  do {
    temp_v3 = *(int *)(&DAT_004c5404 + temp_v1 * 4);
    if (temp_v3 != 0) {
      temp_v0 = jyoucyuGetTableEntry(1);
      if ((temp_v0 == 0) && (temp_v0 = FUN_002c1d5c(), temp_v0 == 0)) {
        if (temp_v3 + 0xfeffff94U < 0x100) {
          FUN_00126850(temp_v3,DAT_0044e0b0,0);
        }
        else if (temp_v3 + 0xfefffe94U < 0xfc) {
          FUN_0012655c(temp_v3,DAT_0044e0b0,0);
        }
      }
      *(unsigned int *)(&DAT_004c5404 + temp_v1 * 4) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x20);
  temp_v3 = FUN_002c1d5c();
  temp_v1 = DAT_004e316c;
  if (temp_v3 == 0) {
    return;
  }
  if (DAT_004e316c != 0) {
    temp_v2 = 0;
    do {
      temp_v0 = temp_v1 + temp_v2 * 4;
      temp_v3 = *(int *)(temp_v0 + 0x20);
      if (temp_v3 != 0) {
        FUN_002bda30(temp_v3,0);
        nw_snd_SoundHandle_DetachSound(temp_v0 + 0x20);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 8);
  }
  return;
}

} /* extern "C" */
