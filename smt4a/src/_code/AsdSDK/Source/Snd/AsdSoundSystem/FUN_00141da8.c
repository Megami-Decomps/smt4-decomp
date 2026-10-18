/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00141da8` (_code @ 0x141da8, 0x1a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char DAT_0063e984; /* 0x63e984 */
extern unsigned char DAT_0063e986; /* 0x63e986 */
extern unsigned char DAT_0063e987; /* 0x63e987 */
extern unsigned int DAT_0063f4c8; /* 0x63f4c8 */
extern unsigned int DAT_0063f4cc; /* 0x63f4cc */
extern unsigned int DAT_0063f4d0; /* 0x63f4d0 */
extern unsigned int DAT_0063f4d4; /* 0x63f4d4 */
extern unsigned int DAT_0063f4d8; /* 0x63f4d8 */
extern unsigned char DAT_0063f4e0; /* 0x63f4e0 */
extern unsigned char DAT_0063f4e2; /* 0x63f4e2 */
extern signed char DAT_0063f4ff; /* 0x63f4ff */
extern int DAT_0063f50c; /* 0x63f50c */

/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: FUN_001742e4. */
/* Supplied declaration required: nw_snd_SoundHeap_Create. */
/* Supplied declaration required: nw_snd_SoundHeap_LoadState. */
extern unsigned int nw_snd_SoundHeap_SaveState(int);


unsigned int FUN_00141da8(unsigned int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  if (param_1 < 4) {
    temp_v0 = param_1 * 0x3c;
    if ((&DAT_0063e986)[temp_v0] == '\0') {
      if (param_2 != 0) {
        temp_v1 = 0x10000;
        FUN_001630d4(0x10000,0x100,0,param_2,1);
        *(unsigned int *)(temp_v0 + 0x63e97c) = temp_v1;
        nw_snd_SoundHeap_Create(temp_v0 + 0x63e94c,temp_v1,param_2);
        temp_v1 = nw_snd_SoundHeap_SaveState(temp_v0 + 0x63e94c);
        *(unsigned int *)(temp_v0 + 0x63e980) = temp_v1;
        (&DAT_0063e987)[temp_v0] = 1;
      }
      (&DAT_0063e986)[temp_v0] = 1;
      *(char *)(temp_v0 + 0x63e985) = (char)param_1;
      (&DAT_0063e984)[temp_v0] = 0x40;
      DAT_0063f4c8 = 0x3f000000;
      DAT_0063f4e0 = DAT_0063f4e0 | 1;
      DAT_0063f4cc = 0x1e;
      DAT_0063f4d0 = 0x1e;
      DAT_0063f4d4 = 0xf;
      DAT_0063f4d8 = 0xf;
      if (DAT_0063f4ff != '\0') {
        DAT_0063f4e2 = 1;
      }
      temp_v2 = 0;
      while ((&DAT_0063e986)[temp_v2 * 0x3c] == '\0') {
        temp_v2 = temp_v2 + 1;
        if ((int)temp_v2 >= 4) {
          DAT_0063f4d8 = 0xf;
          DAT_0063f4d4 = 0xf;
          DAT_0063f4d0 = 0x1e;
          DAT_0063f4cc = 0x1e;
          DAT_0063f4c8 = 0x3f000000;
          return 1;
        }
      }
      if (temp_v2 == 0xffffffff) {
        DAT_0063f4c8 = 0x3f000000;
        DAT_0063f4cc = 0x1e;
        DAT_0063f4d0 = 0x1e;
        DAT_0063f4d4 = 0xf;
        DAT_0063f4d8 = 0xf;
        DAT_0063f50c = 0;
        return 1;
      }
      if (temp_v2 >= 4) {
        DAT_0063f4c8 = 0x3f000000;
        DAT_0063f4cc = 0x1e;
        DAT_0063f4d0 = 0x1e;
        DAT_0063f4d4 = 0xf;
        DAT_0063f4d8 = 0xf;
        return 1;
      }
      temp_v0 = temp_v2 * 0x3c;
      if ((&DAT_0063e986)[temp_v0] == '\0') {
        DAT_0063f4c8 = 0x3f000000;
        DAT_0063f4cc = 0x1e;
        DAT_0063f4d0 = 0x1e;
        DAT_0063f4d4 = 0xf;
        DAT_0063f4d8 = 0xf;
        return 1;
      }
      if (DAT_0063f4e0 != 0) {
        temp_v4 = 0;
        do {
          temp_v3 = *(int *)(temp_v0 + 0x63e94c + temp_v4 * 4 + 0x20);
          if (temp_v3 != 0) {
            FUN_001742e4(temp_v3,0);
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 4);
        (&DAT_0063e984)[temp_v0] = 0x40;
        if ((&DAT_0063e987)[temp_v0] != '\0') {
          nw_snd_SoundHeap_LoadState(temp_v0 + 0x63e94c,*(unsigned int *)(temp_v0 + 0x63e980));
        }
      }
      DAT_0063f50c = temp_v0 + 0x63e94c;
      return 1;
    }
  }
  return 0;
}
