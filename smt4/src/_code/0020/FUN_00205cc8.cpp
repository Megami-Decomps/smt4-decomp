/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00205cc8` (_code @ 0x205cc8, 0x534 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002630e0(unsigned int *, int, unsigned int);
int btlGetMainState(void);
int FUN_00295eb0(...);
int FUN_002963ec(...);
int uiSpriteSetImageKeyframe(int, int, int);
int pairSetFirstResetSecond(int, unsigned int);
int FUN_002bee58(...);
int FUN_002bf818(int);
int FUN_003adca8(int, int, unsigned int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int g_btlUiBlock; /* 0x439ca8 */

/* Supplied declaration required: FUN_002630e0. */
extern int FUN_00293230(void);
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_00295eb0. */
/* Supplied declaration required: FUN_002963ec. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: pairSetFirstResetSecond. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002bf818. */
extern unsigned int FUN_002c501c(void);
/* Supplied declaration required: FUN_003adca8. */


void FUN_00205cc8(int param_1)

{
/* irregular: 3 goto(s); 9 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  char temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  char *pcVar8;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  
  temp_v8 = 0;
  do {
    temp_v7 = param_1 + temp_v8 * 0x400;
    if (*(char *)(temp_v7 + 0x832c) != '\0') {
      temp_v3 = *(int *)(temp_v7 + 0x8344);
      if (temp_v3 >= 10000) {
        temp_v3 = 5;
      }
      else if (temp_v3 >= 1000) {
        temp_v3 = 4;
      }
      else if (temp_v3 >= 100) {
        temp_v3 = 3;
      }
      else if (temp_v3 < 10) {
        temp_v3 = 1;
      }
      else {
        temp_v3 = 2;
      }
      if (*(char *)(param_1 + temp_v8 + 0xd5ec) < *(char *)(param_1 + temp_v8 + 0xd5fc)) {
        if (*(int *)(temp_v7 + 0x8330) >= 11) {
          *(unsigned char *)(temp_v7 + 0x832c) = 0;
        }
      }
      else if (*(int *)(temp_v7 + 0x8330) >= 0x12) {
        if (*(short *)(temp_v7 + 0x8264) != 0xc) {
          temp_v6 = 0;
          if (temp_v6 < temp_v3) {
            do {
              uiSpriteSetImageKeyframe(temp_v7 + temp_v6 * 0x8c + 0x7f4c,0xc,0);
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < temp_v3);
          }
          uiSpriteSetImageKeyframe(temp_v7 + 0x8208,0xc,0);
          uiSpriteSetImageKeyframe(temp_v7 + 0x8294,0xc,0);
        }
        else if (*(char *)(temp_v7 + 0x7fd6) != '\0') {
          *(unsigned char *)(temp_v7 + 0x832c) = 0;
        }
        if (((*(short *)(temp_v7 + 0x7fa8) == 0xc) && (*(int *)(temp_v7 + 0x7fa4) != 0)) &&
           ((int)(*(unsigned short *)(*(int *)(temp_v7 + 0x7fa4) + 8) - 4) <= (int)*(short *)(temp_v7 + 0x7faa))
           ) {
          *(unsigned char *)(temp_v7 + 0x8348) = 1;
        }
      }
      temp_v6 = 0;
      if (temp_v6 < temp_v3) {
        do {
          FUN_002bf818(temp_v7 + temp_v6 * 0x8c + 0x7f4c);
          temp_v4 = temp_v7 + temp_v6 * 4;
          temp_v6 = temp_v6 + 1;
          *(int *)(temp_v4 + 0x8330) = *(int *)(temp_v4 + 0x8330) + 1;
        } while (temp_v6 < temp_v3);
      }
      FUN_002bf818(temp_v7 + 0x8208);
      FUN_002bf818(temp_v7 + 0x8294);
      if (*(char *)(temp_v7 + 0x832c) == '\0') goto LAB_00205ea4;
    }
    else {
LAB_00205ea4:
      temp_v7 = param_1 + temp_v8;
      if ((int)*(char *)(temp_v7 + 0xd5ec) < (int)*(char *)(temp_v7 + 0xd5fc)) {
        temp_v3 = param_1 + temp_v8 * 0xc0 + *(char *)(temp_v7 + 0xd5ec) * 0x18;
        temp_v1 = *(short *)(temp_v3 + 0xca00);
        if (0 < temp_v1) {
          *(short *)(temp_v3 + 0xca00) = temp_v1 - 1;
        }
        else {
          temp_v10 = (unsigned int)*(unsigned char *)(temp_v3 + 0xca03);
          temp_v9 = (unsigned int)*(unsigned char *)(temp_v3 + 0xca02);
          temp_v11 = (int)*(char *)(temp_v3 + 0xc9f9);
          FUN_003adca8(param_1,temp_v8,*(unsigned int *)(temp_v3 + 0xc9fc));
          *(unsigned char *)(temp_v3 + 0xc9f8) = 0;
          pcVar8 = (char *)(temp_v7 + 0xd5ec);
          temp_v2 = *(char *)(temp_v7 + 0xd5ec) + '\x01';
          *pcVar8 = temp_v2;
        }
      }
      else {
        temp_v2 = '\0';
        pcVar8 = (char *)(temp_v7 + 0xd5fc);
        *(unsigned char *)(temp_v7 + 0xd5ec) = 0;
        *pcVar8 = temp_v2;
      }
    }
    temp_v7 = param_1 + temp_v8 * 0xa0;
    if (*(char *)(temp_v7 + 0xbfe4) != '\0') {
      if (*(char *)(param_1 + temp_v8 + 0xe00c) < *(char *)(param_1 + temp_v8 + 0xe01c)) {
        if (*(int *)(temp_v7 + 0xbfe8) >= 11) {
          *(unsigned char *)(temp_v7 + 0xbfe4) = 0;
        }
        if (*(int *)(temp_v7 + 0xbfe8) >= 3) {
          FUN_002bf818(temp_v7 + 0xbf4c);
        }
      }
      else {
        btlGetMainState();
        temp_v3 = FUN_00293230();
        if (temp_v3 != 0) {
          if (*(int *)(temp_v7 + 0xbfe8) >= 0xc) {
LAB_00205fe0:
            if (*(short *)(temp_v7 + 0xbfa8) != 0xc) {
              uiSpriteSetImageKeyframe(temp_v7 + 0xbf4c,0xc,0);
              if (*(int *)(temp_v7 + 0xbfe8) >= 3) {
                FUN_002bf818(temp_v7 + 0xbf4c);
              }
            }
            else if (*(char *)(temp_v7 + 0xbfd6) != '\0') {
              *(unsigned int *)(temp_v7 + 0xbfe8) = 0;
              *(unsigned char *)(temp_v7 + 0xbfe4) = 0;
            }
            else if (*(int *)(temp_v7 + 0xbfe8) >= 3) {
              FUN_002bf818(temp_v7 + 0xbf4c);
            }
          }
          else if (*(int *)(temp_v7 + 0xbfe8) >= 3) {
            FUN_002bf818(temp_v7 + 0xbf4c);
          }
        }
        else {
          if (*(int *)(temp_v7 + 0xbfe8) >= 0x12) goto LAB_00205fe0;
          if (*(int *)(temp_v7 + 0xbfe8) >= 3) {
            FUN_002bf818(temp_v7 + 0xbf4c);
          }
        }
      }
      *(int *)(temp_v7 + 0xbfe8) = *(int *)(temp_v7 + 0xbfe8) + 1;
      if (*(char *)(temp_v7 + 0xbfe4) == '\0') goto LAB_00206088;
    }
    else {
LAB_00206088:
      temp_v3 = g_btlUiBlock;
      temp_v6 = param_1 + temp_v8;
      if ((int)*(char *)(temp_v6 + 0xe00c) < (int)*(char *)(temp_v6 + 0xe01c)) {
        temp_v7 = temp_v7 + *(char *)(temp_v6 + 0xe00c) * 0x14;
        temp_v2 = *(char *)(temp_v7 + 0xd61a);
        temp_v11 = *(int *)(temp_v7 + 0xd614);
        temp_v9 = *(unsigned int *)(temp_v7 + 0xd60c);
        temp_v10 = *(unsigned int *)(temp_v7 + 0xd610);
        temp_v0 = *(char *)(temp_v7 + 0xd619);
        if (temp_v0 != '\0') {
          temp_v5 = FUN_002c501c();
          FUN_002630e0(&temp_v9,0,temp_v5);
        }
        temp_v3 = temp_v3 + temp_v8 * 0xa0;
        *(unsigned char *)(temp_v3 + 0xbfe4) = 1;
        *(char *)(temp_v3 + 0xbfe5) = temp_v0;
        *(unsigned int *)(temp_v3 + 0xbfe8) = 0;
        *(unsigned int *)(temp_v3 + 0xbfd8) = temp_v9;
        *(unsigned int *)(temp_v3 + 0xbfdc) = temp_v10;
        temp_v5 = 0;
        if (temp_v2 == '\0') {
          temp_v5 = 0x3ee;
        }
        *(int *)(temp_v3 + 0xbfe0) = temp_v11;
        if (temp_v2 != '\0') {
          if (temp_v2 == '\x01') {
            temp_v5 = 0x3ef;
          }
          else if (temp_v2 == '\x02') {
            temp_v5 = 0x3f0;
          }
          else if (temp_v2 == '\x03') {
            temp_v5 = 0x3f1;
          }
        }
        temp_v4 = temp_v3 + 0xbf4c;
        pairSetFirstResetSecond(temp_v4,temp_v5);
        FUN_00295eb0(temp_v4,0x15,0x416);
        FUN_002963ec(temp_v4,(int)(short)(int)*(float *)(temp_v3 + 0xbfd8),
                     (int)(short)(int)*(float *)(temp_v3 + 0xbfdc));
        FUN_002bee58(temp_v4,10);
        *(unsigned char *)(temp_v7 + 0xd618) = 0;
        *(char *)(temp_v6 + 0xe00c) = *(char *)(temp_v6 + 0xe00c) + '\x01';
      }
      else {
        *(unsigned char *)(temp_v6 + 0xe00c) = 0;
        *(unsigned char *)(temp_v6 + 0xe01c) = 0;
      }
    }
    temp_v8 = temp_v8 + 1;
    if (temp_v8 >= 0x10) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
