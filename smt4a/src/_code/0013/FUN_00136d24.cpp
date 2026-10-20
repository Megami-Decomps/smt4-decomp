/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00136d24` (_code @ 0x136d24, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162808(void);

extern unsigned int DAT_006357dc; /* 0x6357dc */
extern unsigned char DAT_006357e8; /* 0x6357e8 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00162808. */


void FUN_00136d24(void)

{
/* irregular: 2 goto(s); irregular input(s): in_d8; 1 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned char temp_v3;
  unsigned int temp_v4;
  unsigned long long in_d8;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v3 = 0;
  temp_v6 = 0;
  temp_v5 = 0x3f800000;
  do {
    temp_v0 = temp_v3 * 0x14;
    puVar4 = (unsigned int *)(temp_v0 + 0x6357d8);
    temp_v1 = (&DAT_006357e8)[temp_v0];
    temp_v2 = (&DAT_006357dc)[temp_v3 * 5];
    if (temp_v1 == '\x02') {
      in_d8 = romwright_piece_4_4(temp_v5,temp_v6);
    }
    (&DAT_006357dc)[temp_v3 * 5] = temp_v2 + 1;
    if (temp_v1 != '\x02') {
      if (temp_v1 == '\x01') {
        in_d8 = romwright_piece_4_4(temp_v6,temp_v5);
        goto LAB_00136d94;
      }
      if (temp_v1 == '\0') {
        *puVar4 = temp_v6;
      }
      else {
        if (temp_v1 != '\x03') goto LAB_00136d94;
        *puVar4 = temp_v5;
      }
    }
    else {
LAB_00136d94:
      if (temp_v2 + 1 >= *(int *)(temp_v0 + 0x6357e0)) {
        if (temp_v1 == '\x02') {
          (&DAT_006357dc)[temp_v3 * 5] = 0;
          (&DAT_006357e8)[temp_v0] = 0;
        }
        else if (temp_v1 == '\x01') {
          (&DAT_006357dc)[temp_v3 * 5] = 0;
          (&DAT_006357e8)[temp_v0] = 3;
        }
        *puVar4 = (int)in_d8;
      }
      else {
        temp_v4 = (unsigned int)((unsigned long long)in_d8 >> 0x20);
        FUN_00162808();
        *puVar4 = temp_v4;
      }
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 2) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
