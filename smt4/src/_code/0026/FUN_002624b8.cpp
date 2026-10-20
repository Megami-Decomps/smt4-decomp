/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002624b8` (_code @ 0x2624b8, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029e974(void);
int FUN_0029eaa4(int, unsigned int);
int FUN_002b7bca(int, unsigned int, int, unsigned char *);
int FUN_002b9024(void);
int FUN_00311cbc(...);
int FUN_003c9754(int, unsigned int, unsigned int, unsigned int);

extern unsigned char LAB_002c6f08; /* 0x2c6f08 */

/* Supplied declaration required: FUN_0029e974. */
/* Supplied declaration required: FUN_0029eaa4. */
/* Supplied declaration required: FUN_002b7bca. */
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_00311cbc. */
extern int FUN_003c8db4(int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_003c9754. */


int FUN_002624b8(int param_1,int param_2,int param_3,unsigned int *param_4)

{
/* irregular: 6 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  
  temp_v4 = (unsigned int)*(unsigned short *)(param_3 + 0x46);
  temp_v3 = (unsigned int)*(unsigned short *)(param_2 + 0x46);
  temp_v6 = 0;
  if (temp_v3 < temp_v4) {
    temp_v2 = temp_v3;
    FUN_00311cbc(temp_v3,temp_v4);
  }
  else {
    temp_v2 = temp_v4;
    FUN_00311cbc();
  }
  if (((temp_v2 != 0) && ((*(unsigned int *)(temp_v2 + 4) & 0xffff) != 0)) &&
     (temp_v1 = param_1, FUN_0029eaa4(param_1,*(unsigned int *)(temp_v2 + 4) & 0xffff), temp_v1 != 0)) {
    temp_v1 = FUN_003c8db4(param_1,temp_v3,temp_v4,*(unsigned int *)(temp_v2 + 4) & 0xffff);
    temp_v6 = 0;
    if (temp_v1 != 0) {
      temp_v5 = param_4[1];
      *param_4 = (*param_4 & 0xc0000000) | (temp_v3 & 0xffff7fff) | ((temp_v4 & 0x7fff) << 0xf);
      param_4[1] = temp_v5;
      param_4[1] = (temp_v5 & 3) | ((*(unsigned int *)(temp_v2 + 4) & 0x7fff) << 2);
      temp_v2 = *(unsigned int *)(temp_v2 + 4) & 0xffff;
      FUN_002b9024();
      temp_v6 = 0;
      do {
        temp_v0 = *(short *)(temp_v2 + 0x3c + temp_v6 * 2);
        if (temp_v0 != 0) {
          *(short *)(param_1 + *(int *)(param_1 + 0x178) * 2 + 0x146) = temp_v0;
          *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 8);
      if (*(int *)(param_1 + 0x178) < 0x18) {
        *(unsigned short *)(param_1 + *(int *)(param_1 + 0x178) * 2 + 0x146) = 0;
      }
      temp_v6 = 0;
      do {
        temp_v1 = param_1 + temp_v6 * 2;
        temp_v5 = (unsigned int)*(unsigned short *)(temp_v1 + 0x146);
        if ((temp_v5 != 0) && (FUN_0029e974(), (*(unsigned char *)(temp_v5 + 3) & 0x20) == 0)) {
          *(unsigned short *)(temp_v1 + 0x146) = 0;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0x18);
      FUN_002b7bca(param_1 + 0x146,*(unsigned int *)(param_1 + 0x178),2,&LAB_002c6f08);
      temp_v1 = *(int *)(param_1 + 0x178);
      temp_v6 = 0;
      *(unsigned int *)(param_1 + 0x178) = 0;
      if (0 < temp_v1) {
        do {
          if (*(short *)(param_1 + temp_v6 * 2 + 0x146) == 0) break;
          temp_v6 = temp_v6 + 1;
          *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
        } while (temp_v6 < temp_v1);
      }
      if (*(char *)(param_1 + 0x17d) != '\0') {
        temp_v1 = (unsigned int)*(unsigned short *)(temp_v2 + 0x1e) + (unsigned int)*(unsigned char *)(temp_v2 + 3) * 0x14 +
                (unsigned int)*(unsigned short *)(temp_v2 + 0x1a) + (unsigned int)*(unsigned short *)(temp_v2 + 0x1c) +
                (unsigned int)*(unsigned short *)(temp_v2 + 0x20) + (unsigned int)*(unsigned short *)(temp_v2 + 0x22);
        temp_v6 = 0;
        do {
          temp_v2 = (unsigned int)*(unsigned short *)(param_1 + temp_v6 * 2 + 0x146);
          if (temp_v2 == 0) break;
          FUN_0029e974();
          temp_v6 = temp_v6 + 1;
          temp_v1 = temp_v1 + (*(unsigned char *)(temp_v2 + 3) & 0x1f) * 5;
        } while (temp_v6 < 0x18);
        param_4[1] = (param_4[1] & 0x1ffff) | (temp_v1 << 0x11);
      }
      FUN_003c9754(param_1,temp_v3,temp_v4,(param_4[1] & 0x1ffff) >> 2);
      temp_v6 = param_1;
    }
  }
  return temp_v6;
}

} /* extern "C" */
