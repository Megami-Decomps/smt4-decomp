/* NON_MATCHING: romwright 0.5.0 decompilation of `sysPlaySe` (_code @ 0x1681cc, 0x29c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00182084(void);
int FUN_00183318(int);
int FUN_00183c0c(void);
int FUN_00183e58(void);
int FUN_00183f58(...);
int FUN_00184aa8(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int DAT_0057f0c8; /* 0x57f0c8 */
extern unsigned int DAT_0057f0d4; /* 0x57f0d4 */

/* Supplied declaration required: FUN_00182084. */
/* Supplied declaration required: FUN_00183318. */
/* Supplied declaration required: FUN_00183c0c. */
/* Supplied declaration required: FUN_00183e58. */
/* Supplied declaration required: FUN_00183f58. */
/* Supplied declaration required: FUN_00184aa8. */


void sysPlaySe(unsigned int param_1)

{
/* irregular: 7 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  unsigned int temp_v4;
  unsigned int temp_v5;
  char *pcVar7;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10 [12];
  
  temp_v1 = DAT_0057f0c8;
  if (*(unsigned short *)(DAT_0057f0c8 + 0x5e6) != param_1) {
    if ((int)DAT_0057f0d4 < 0) {
      temp_v2 = 0;
      do {
        if (*(char *)(DAT_0057f0c8 + temp_v2 + 0x5d4) != '\0') {
          DAT_0057f0d4 = param_1;
          return;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 6);
    }
    DAT_0057f0d4 = -1;
    temp_v2 = FUN_00184aa8((unsigned int)*(unsigned short *)(DAT_0057f0c8 + 0x5e6));
    temp_v3 = FUN_00184aa8(param_1);
    if (temp_v2 != 0 && temp_v3 != 0) {
      if ((*(char *)(temp_v2 + 0xc) == '\0') && (*(char *)(temp_v3 + 0xc) != '\0')) {
        FUN_00183318(1);
      }
      else {
        FUN_00183e58();
      }
    }
    temp_v2 = FUN_00184aa8(*(unsigned short *)(temp_v1 + 0x5e6));
    temp_v3 = FUN_00184aa8(param_1);
    if (temp_v2 != 0 && temp_v3 != 0) {
      *(unsigned short *)(temp_v1 + 0x5e8) = *(unsigned short *)(temp_v1 + 0x5e6);
      *(short *)(temp_v1 + 0x5e6) = (short)param_1;
      temp_v4 = 0x102;
      temp_v8 = 0;
      temp_v10[0] = 5;
      temp_v10[1] = 6;
      temp_v10[2] = 4;
      temp_v10[3] = 3;
      temp_v10[4] = 2;
      temp_v10[5] = 1;
      temp_v10[6] = 0;
      temp_v10[7] = 0;
      do {
        temp_v9 = *(short *)(temp_v3 + temp_v8 * 2) != 0;
        if (temp_v9) {
          temp_v4 = (unsigned int)temp_v10[temp_v8];
        }
        if (!temp_v9) {
          temp_v4 = 0x12;
        }
        FUN_00183f58(temp_v8 & 0xff,temp_v4);
        temp_v8 = temp_v8 + 1;
        temp_v4 = temp_v5;
      } while ((int)temp_v8 < 6);
      temp_v4 = 0;
      temp_v8 = 0;
      temp_v7 = 6;
      pcVar7 = (char *)(temp_v1 + 0x5ac);
      puVar5 = (unsigned short *)(temp_v1 + 0x5ae);
      do {
        temp_v0 = *pcVar7;
        if (temp_v0 == '\x01') {
          temp_v6 = (unsigned int)*puVar5;
          temp_v4 = temp_v4 & 0xffff0000;
          temp_v4 = temp_v4 | temp_v6;
        }
        else if (temp_v0 != '\x02') {
          if (temp_v0 == '\x05') {
            temp_v6 = (unsigned int)*puVar5;
            temp_v8 = temp_v8 & 0xffff0000;
            temp_v8 = temp_v8 | temp_v6;
          }
          else if (temp_v0 == '\x06') {
            temp_v8 = temp_v8 & 0xffff;
            temp_v6 = (unsigned int)*puVar5 << 0x10;
            temp_v8 = temp_v8 | temp_v6;
          }
        }
        else {
          temp_v4 = temp_v4 & 0xffff;
          temp_v6 = (unsigned int)*puVar5 << 0x10;
          temp_v4 = temp_v4 | temp_v6;
        }
        temp_v7 = temp_v7 - 1;
        pcVar7 = pcVar7 + 4;
        puVar5 = puVar5 + 2;
        if (temp_v7 == 0) {
          temp_v6 = temp_v4 & 0xffff;
          if (((temp_v6 != 0) && (temp_v4 = temp_v4 >> 0x10, temp_v4 != 0)) && (temp_v6 == temp_v4)) {
            FUN_00183f58(5,0,0);
            temp_v6 = 4;
            FUN_00183f58(4,0x14,temp_v4 & 0xff,0);
          }
          temp_v9 = (temp_v8 & 0xffff) == 0;
          if (!temp_v9) {
            temp_v6 = temp_v8 >> 0x10;
            temp_v9 = temp_v6 == 0;
          }
          if ((!temp_v9) && ((temp_v8 & 0xffff) == temp_v6)) {
            FUN_00183f58(1,0,0);
            FUN_00183f58(0,0x15,temp_v8 & 0xff);
          }
          if (*(char *)(temp_v2 + 0xc) != '\0') {
            if (*(char *)(temp_v3 + 0xc) == '\0') {
              *(unsigned char *)(DAT_0057f0c8 + 0x5e1) = 1;
              FUN_00182084();
              return;
            }
            *(unsigned char *)(DAT_0057f0c8 + 0x5e1) = 0;
          }
          else {
            *(unsigned char *)(DAT_0057f0c8 + 0x5e1) = 1;
          }
          FUN_00183c0c();
          return;
        }
      } while( 1 );
    }
  }
  return;
}

} /* extern "C" */
