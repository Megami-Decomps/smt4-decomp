/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cae6c` (_code @ 0x3cae6c, 0x3cc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00229a24(unsigned int);
int FUN_00229b10(int *, unsigned int *);
int FUN_00247478(unsigned char [4], int, unsigned int);
int FUN_002ae164(void);
int dataTable08Sub1GetRecord(void);
int FUN_0033a2c4(int, unsigned int);
int btlUiCopyStatePairs(unsigned int, char [4], unsigned int *, int *);
int FUN_003d0d1c(int *, unsigned int *);

/* stack frame of param_2: 6 slot(s), 16 byte(s) */
typedef struct {
    unsigned char sp35; /* 0x35: local_35 */
    unsigned short sp44; /* 0x44: local_44 */
    unsigned char sp4C; /* 0x4c: local_4c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_2_stack;

extern int g_btlScriptUnit; /* 0x43427c */
extern unsigned int g_btlUiBlock; /* 0x439ca8 */

/* Supplied declaration required: FUN_00229a24. */
/* Supplied declaration required: FUN_00229b10. */
/* Supplied declaration required: FUN_00247478. */
extern int playerPadTestBit(unsigned int);
/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: dataTable08Sub1GetRecord. */
/* Supplied declaration required: FUN_0033a2c4. */
/* Supplied declaration required: btlUiCopyStatePairs. */
extern int FUN_003af084(unsigned int);
/* Supplied declaration required: FUN_003d0d1c. */


unsigned int FUN_003cae6c(int *param_1,unsigned int *param_2)

{
/* irregular: 6 goto(s); 8 native warning(s); review required */
  unsigned int temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  short temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int uStack_5c;
  char temp_v9 [4];
  unsigned char temp_v10 [4];
  short temp_v11;
  char temp_v12;
  
  if ((*(unsigned int *)(*param_1 + 0x44a0) & 0x40) != 0) {
    if ((*param_2 & 0x80) == 0) {
      *param_2 = *param_2 | 0x880;
      *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 1;
      return 1;
    }
  }
  else if (((*(unsigned int *)(*param_1 + 0x44a0) & 0x100) != 0) && ((*param_2 & 0x1000) == 0)) {
    *param_2 = *param_2 | 0x1800;
    *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 1;
    return 1;
  }
  temp_v4 = FUN_003af084(g_btlUiBlock);
  if (temp_v4 == 0) {
    return 0;
  }
  temp_v9[0] = '\0';
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  uStack_5c = 0;
  btlUiCopyStatePairs(g_btlUiBlock,temp_v9,&temp_v6,&temp_v8);
  temp_v5 = param_2[10];
  if (temp_v9[0] == '\0') {
    if (*(short *)(temp_v5 + 0x14c) != 10) {
      *param_2 = *param_2 | 0x800;
      *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 1;
      return 1;
    }
    *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x1b;
    return 1;
  }
  temp_v3 = *(short *)(temp_v5 + 0x14c);
  if (temp_v3 != 9) {
    if (temp_v3 == 10) {
      if (temp_v7 == 0 && temp_v6 == 0) {
        *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x1b;
        return 1;
      }
      goto LAB_003cb044;
    }
    if (temp_v3 == 0xd) goto LAB_003cb044;
    if (temp_v3 != 2 && temp_v3 != 3) {
      if (temp_v3 == 8) {
        temp_v4 = (int)*(short *)(temp_v5 + 0x14e);
        dataTable08Sub1GetRecord();
        temp_v5 = (unsigned int)*(unsigned short *)(temp_v4 + 0x62);
        if ((temp_v5 != 0) && (FUN_002ae164(), temp_v5 != 0)) {
          temp_v1 = *(char *)(temp_v5 + 0x23);
          temp_v2 = *(unsigned char *)(temp_v5 + 0x35);
          goto LAB_003cb0a0;
        }
      }
LAB_003cb170:
      temp_v5 = 0;
LAB_003cb174:
      do {
        temp_v0 = 1 << (temp_v5 & 0xff);
        if ((temp_v7 & ((int)temp_v0 >> 0x1f)) != 0 || (temp_v6 & temp_v0) != 0) {
          if (temp_v5 != 0) {
            temp_v4 = *param_1;
            FUN_0033a2c4(temp_v4,temp_v5 - 1);
            if (temp_v4 < 0) {
              temp_v4 = temp_v5 + 0x6c;
            }
            *(unsigned char *)((int)param_2 + temp_v4 + 0x38) = 1;
          }
          else {
            *(unsigned char *)(param_2 + 0xe) = 1;
            temp_v4 = playerPadTestBit(1);
            if (temp_v4 != 0) {
              FUN_00247478(temp_v10,*param_1,param_2[8]);
              if (temp_v11 == 3) {
                if (!(temp_v12 == '\x0e' || temp_v12 == '\x11')) {
                  if (temp_v12 == '\x01') {
                    temp_v5 = 1;
                    goto LAB_003cb174;
                  }
                  *(unsigned char *)(param_2 + 0xe) = 0;
                }
              }
              else {
                *(unsigned char *)(param_2 + 0xe) = 0;
              }
            }
          }
        }
        temp_v5 = temp_v5 + 1;
      } while ((int)temp_v5 < 0x40);
      FUN_00229a24(g_btlUiBlock);
      FUN_00229b10(param_1,param_2);
      return 1;
    }
    temp_v4 = (int)*(short *)(temp_v5 + 0x14e);
    FUN_002ae164();
    if (temp_v4 == 0) goto LAB_003cb170;
    temp_v1 = *(char *)(temp_v4 + 0x23);
    temp_v2 = *(unsigned char *)(temp_v4 + 0x35);
LAB_003cb0a0:
    if (temp_v1 != '\a') goto LAB_003cb170;
    if ((temp_v2 & 8) != 0) {
      FUN_003d0d1c(param_1,param_2);
      temp_v5 = *param_2;
      *param_2 = temp_v5 | 0x4000;
      if ((*(unsigned int *)param_2[8] & 8) != 0) {
        *param_2 = temp_v5 | 0x4004;
      }
      FUN_00229a24(g_btlUiBlock);
      FUN_00229b10(param_1,param_2);
      return 1;
    }
    temp_v5 = 0;
    temp_v4 = 0x40;
    do {
      temp_v0 = 1 << (temp_v5 & 0xff);
      if ((temp_v7 & ((int)temp_v0 >> 0x1f)) != 0 || (temp_v0 & temp_v6) != 0) {
        *(unsigned char *)((int)param_2 + temp_v5 + 0x38) = 1;
      }
      temp_v5 = temp_v5 + 1;
      temp_v4 = temp_v4 - 1;
    } while (temp_v4 != 0);
  }
  else {
LAB_003cb044:
    temp_v5 = 0;
    temp_v4 = 0x40;
    do {
      temp_v0 = 1 << (temp_v5 & 0xff);
      if ((temp_v7 & ((int)temp_v0 >> 0x1f)) != 0 || (temp_v0 & temp_v6) != 0) {
        *(unsigned char *)((int)param_2 + temp_v5 + 0x38) = 1;
      }
      temp_v5 = temp_v5 + 1;
      temp_v4 = temp_v4 - 1;
    } while (temp_v4 != 0);
  }
  temp_v4 = *param_1;
  *(unsigned int *)(temp_v4 + 0x1fd0) = temp_v8;
  *(unsigned int *)(temp_v4 + 0x1fd4) = uStack_5c;
  FUN_00229a24(g_btlUiBlock);
  FUN_00229b10(param_1,param_2);
  return 1;
}

} /* extern "C" */
