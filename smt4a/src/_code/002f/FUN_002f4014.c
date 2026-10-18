/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4014` (_code @ 0x2f4014, 0x240 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f69c; /* 0x57f69c */

/* Supplied declaration required: FUN_002e59f8. */
extern int FUN_004bd340(int, unsigned int);
/* Supplied declaration required: FUN_004bd3ec. */
/* Supplied declaration required: FUN_004bd400. */


void FUN_002f4014(int param_1)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  unsigned int temp_v5;
  
  temp_v3 = DAT_0057f69c;
  puVar6 = (unsigned int *)(DAT_0057f69c + 0x27e8c);
  temp_v4 = DAT_0057f69c + 0x8c;
  temp_v5 = (unsigned int)*(short *)(DAT_0057f69c + 0x27e94);
  *(unsigned short *)(DAT_0057f69c + 0x27e94) = *(unsigned short *)(param_1 + 0x34);
  *(unsigned char *)(temp_v3 + 0x27e96) = *(unsigned char *)(param_1 + 0x21);
  *puVar6 = *(unsigned int *)(param_1 + 0x24);
  *(unsigned int *)(temp_v3 + 0x27e90) = *(unsigned int *)(param_1 + 0x30);
  FUN_002e59f8(param_1,temp_v3 + 0x27e98,0xe);
  *(unsigned char *)(temp_v3 + 0x27ea6) = *(unsigned char *)(param_1 + 0x22);
  *(unsigned char *)(temp_v3 + 0x27ea7) = *(unsigned char *)(param_1 + 0x23);
  FUN_002e59f8(param_1 + 0xe,temp_v3 + 0x27ea8);
  *(unsigned char *)(temp_v3 + 0x27eba) = *(unsigned char *)(param_1 + 0x42);
  if ((int)*(short *)(temp_v3 + 0x27e94) == 0) {
    temp_v3 = 0;
    do {
      temp_v0 = (int)*(char *)(temp_v4 + temp_v3 + 0x1c88);
      if ((-1 < temp_v0) && (temp_v0 = FUN_004bd340(DAT_0057f69c + temp_v0 * 300 + 0xf4,2), temp_v0 != 0)) {
        FUN_004bd400(DAT_0057f69c + *(char *)(temp_v4 + temp_v3 + 0x1c88) * 300 + 0xf4,4);
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x18);
    return;
  }
  temp_v0 = 0;
  while( 1 ) {
    temp_v2 = (int)*(char *)(temp_v4 + temp_v0 + 0x1ca0);
    if ((-1 < temp_v2) &&
       ((unsigned int)*(unsigned short *)(DAT_0057f69c + temp_v2 * 300 + 0x156) == (int)*(short *)(temp_v3 + 0x27e94)))
    break;
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 3) {
LAB_002f4150:
      temp_v0 = 0;
      do {
        temp_v2 = (int)*(char *)(temp_v4 + temp_v0 + 0x1c88);
        if (-1 < temp_v2) {
          temp_v2 = DAT_0057f69c + 0x8c + temp_v2 * 300;
          temp_v1 = temp_v2 + 0x68;
          if ((unsigned int)*(unsigned short *)(temp_v2 + 0xca) == (int)*(short *)(temp_v3 + 0x27e94)) {
            temp_v1 = FUN_004bd3ec(temp_v1,2);
          }
          if (temp_v5 != 0) {
            temp_v1 = (unsigned int)*(short *)(temp_v3 + 0x27e94);
          }
          if ((temp_v5 != 0 && temp_v1 != temp_v5) &&
             (temp_v2 = DAT_0057f69c + 0x8c + *(char *)(temp_v4 + temp_v0 + 0x1c88) * 300,
             *(unsigned short *)(temp_v2 + 0xca) == temp_v5)) {
            FUN_004bd400(temp_v2 + 0x68,4);
          }
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x18);
      return;
    }
  }
  temp_v1 = FUN_004bd3ec(DAT_0057f69c + *(char *)(temp_v0 + temp_v4 + 0x1ca0) * 300 + 0xf4,2);
  if (temp_v5 != 0) {
    temp_v1 = (unsigned int)*(short *)(temp_v3 + 0x27e94);
  }
  if ((temp_v5 != 0 && temp_v1 != temp_v5) &&
     (temp_v0 = DAT_0057f69c + 0x8c + *(char *)(temp_v4 + temp_v0 + 0x1ca0) * 300,
     *(unsigned short *)(temp_v0 + 0xca) == temp_v5)) {
    FUN_004bd400(temp_v0 + 0x68,4);
  }
  goto LAB_002f4150;
}
