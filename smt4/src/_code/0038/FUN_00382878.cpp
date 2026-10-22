/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00382878` (_code @ 0x382878, 0x450 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00287528(unsigned char **);
int FUN_00287704(int);
int gameFlagSetValue(int, int);
int FUN_00296b3c(...);
int libc_strcat(...);
int FUN_002bcf4c(void);
int FUN_002bcfc0(...);
int gameFlagIsSet(int);
int FUN_00381490(unsigned int, int, int, int, unsigned int);
int FUN_00381958(unsigned int, int, unsigned int, int);
int FUN_00381ac0(void);

/* stack frame of param_1: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned char sp48; /* 0x48: local_48 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_1_stack;

extern unsigned char LAB_00382cd0; /* 0x382cd0 */

extern int storyModeCanProceed(unsigned char);
extern int dataTable26GroupGetRecord(int, unsigned char, unsigned int);
/* Supplied declaration required: FUN_00287528. */
extern int objectFlagBitIsSet(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00287704. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_00296b3c. */
/* Supplied declaration required: libc_strcat. */
/* Supplied declaration required: FUN_002bcf4c. */
/* Supplied declaration required: FUN_002bcfc0. */
extern unsigned int FUN_002bd1fc(void);
/* Supplied declaration required: gameFlagIsSet. */
/* Supplied declaration required: FUN_00381490. */
/* Supplied declaration required: FUN_00381958. */
extern int FUN_003819b8(void);
/* Supplied declaration required: FUN_00381ac0. */
extern int dataTable26GroupGetRecordS2(int, unsigned char, unsigned int);


void FUN_00382878(int param_1)

{
/* irregular: 11 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned short temp_v8;
  unsigned char *puVar10;
  unsigned char *temp_v9;
  unsigned char temp_v10 [72];
  unsigned char temp_v11 [36];
  
  temp_v1 = storyModeCanProceed(*(unsigned char *)(param_1 + 0x18));
  if (temp_v1 != 0) {
    temp_v9 = (unsigned char *)0xffffffff;
    FUN_00287528(&temp_v9);
    if (*(unsigned char **)(param_1 + 0x1c) != temp_v9) {
      *(unsigned char **)(param_1 + 0x1c) = temp_v9;
      FUN_00287704(*(unsigned char *)(param_1 + 0x18));
      FUN_00381ac0();
    }
    temp_v2 = FUN_00287704(*(unsigned char *)(param_1 + 0x18));
    temp_v1 = objectFlagBitIsSet(temp_v2,4);
    if (temp_v1 == 0) {
      temp_v8 = 0;
      if (*(char *)(param_1 + 0x18) == '\0') {
        temp_v7 = 0;
        do {
          temp_v1 = gameFlagIsSet(*(unsigned short *)(temp_v7 * 4 + 0x44db62));
          if (temp_v1 != 0) {
            temp_v8 = *(unsigned short *)(temp_v7 * 4 + 0x44db64);
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < 4);
      }
      else if (*(char *)(param_1 + 0x18) == '\x01') {
        temp_v7 = 0;
        do {
          temp_v1 = gameFlagIsSet(*(unsigned short *)(temp_v7 * 4 + 0x44db72));
          if (temp_v1 != 0) {
            temp_v8 = *(unsigned short *)(temp_v7 * 4 + 0x44db74);
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < 4);
      }
      temp_v2 = FUN_00287704(*(unsigned char *)(param_1 + 0x18));
      FUN_00381958(temp_v2,param_1 + 0x20,*(unsigned int *)(param_1 + 0x1c),temp_v8);
      if (*(int *)(param_1 + 0x1c) == 0) {
        gameFlagSetValue(0x424,1);
      }
    }
  }
  else {
    FUN_00287704(*(unsigned char *)(param_1 + 0x18));
    temp_v1 = FUN_003819b8();
    if (temp_v1 != 5) {
      temp_v2 = 0;
      if (*(char *)(param_1 + 0x18) != '\0') {
        if (*(char *)(param_1 + 0x18) == '\x01') {
          temp_v2 = 0x14;
          temp_v3 = gameFlagIsSet(0x6c);
          if (temp_v3 != 0) {
            temp_v3 = gameFlagIsSet(0x7c);
            temp_v2 = 5;
            if (temp_v3 != 0) {
              temp_v2 = 0;
            }
          }
        }
      }
      else {
        temp_v2 = 0x14;
        temp_v3 = gameFlagIsSet(0x25);
        if (temp_v3 != 0) {
          temp_v3 = gameFlagIsSet(0x55);
          temp_v2 = 5;
          if (temp_v3 != 0) {
            temp_v2 = 0;
          }
        }
      }
      temp_v3 = FUN_00287704(*(unsigned char *)(param_1 + 0x18));
      *(unsigned short *)(temp_v3 + 0xc) = 0;
      if ((*(char *)(param_1 + 0x18) == '\0') && (temp_v3 = gameFlagIsSet(0x55), temp_v3 == 0)) {
        temp_v3 = FUN_00287704(*(unsigned char *)(param_1 + 0x18));
        *(unsigned short *)(temp_v3 + 0xc) = 8;
      }
      temp_v8 = 0;
      if (*(char *)(param_1 + 0x18) == '\0') {
        temp_v7 = 0;
        do {
          temp_v3 = gameFlagIsSet(*(unsigned short *)(temp_v7 * 4 + 0x44db62));
          if (temp_v3 != 0) {
            temp_v8 = *(unsigned short *)(temp_v7 * 4 + 0x44db64);
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < 4);
      }
      else if (*(char *)(param_1 + 0x18) == '\x01') {
        temp_v7 = 0;
        do {
          temp_v3 = gameFlagIsSet(*(unsigned short *)(temp_v7 * 4 + 0x44db72));
          if (temp_v3 != 0) {
            temp_v8 = *(unsigned short *)(temp_v7 * 4 + 0x44db74);
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < 4);
      }
      temp_v6 = FUN_00287704(*(unsigned char *)(param_1 + 0x18));
      temp_v9 = (unsigned char *)0x14;
      FUN_00381490(temp_v6,temp_v1,param_1 + 0x20,temp_v8,temp_v2);
    }
  }
  temp_v1 = FUN_00287704(*(unsigned char *)(param_1 + 0x18));
  temp_v3 = dataTable26GroupGetRecordS2(param_1 + 0x20,*(unsigned char *)(param_1 + 0x18),0);
  temp_v4 = dataTable26GroupGetRecord(param_1 + 0x20,*(unsigned char *)(param_1 + 0x18),0);
  puVar10 = (unsigned char *)(temp_v3 + (unsigned int)*(unsigned char *)(temp_v1 + 10) * 0x20);
  temp_v5 = storyModeCanProceed(*(unsigned char *)(param_1 + 0x18));
  if ((temp_v5 != 0) && (*(int *)(param_1 + 0x1c) == 0)) {
    puVar10 = (unsigned char *)(temp_v3 + (unsigned int)*(unsigned char *)(temp_v1 + 10) * 0x20 + 0x20);
  }
  FUN_002bcfc0(puVar10,0);
  temp_v9 = puVar10;
  FUN_00296b3c(*(unsigned int *)(param_1 + 0x28c),3,0xffffffff,0,0);
  temp_v0 = *(unsigned char *)(temp_v1 + 10);
  temp_v3 = 0;
  do {
    temp_v11[0] = 0;
    temp_v5 = *(int *)(temp_v1 + (unsigned int)temp_v0 * 0x50 + 0x10 + temp_v3 * 4);
    if (temp_v5 != -2) {
      if (temp_v5 != -1) {
        temp_v7 = (unsigned int)*(unsigned short *)(temp_v4 + temp_v5 * 0x20 + 0x16);
        if (temp_v7 != 0) {
          FUN_002bcf4c();
          libc_strcat(temp_v11,temp_v7);
        }
        else {
          libc_strcat(temp_v11);
        }
      }
      else {
        temp_v2 = FUN_002bd1fc();
        libc_strcat(temp_v11,temp_v2);
      }
    }
    else {
      libc_strcat(temp_v11,&LAB_00382cd0);
    }
    FUN_002bcfc0(temp_v11,temp_v10);
    if (temp_v3 != 0) {
      if (temp_v3 != 1) {
        if (temp_v3 == 2) {
          temp_v9 = temp_v10;
          FUN_00296b3c(*(unsigned int *)(param_1 + 0x298),2,0xffffffff,0,0);
          return;
        }
      }
      else {
        temp_v2 = *(unsigned int *)(param_1 + 0x294);
        temp_v6 = 3;
        temp_v9 = temp_v10;
        FUN_00296b3c(temp_v2,temp_v6,0xffffffff,0,0);
      }
    }
    else {
      temp_v2 = *(unsigned int *)(param_1 + 0x290);
      temp_v6 = 4;
      temp_v9 = temp_v10;
      FUN_00296b3c(temp_v2,temp_v6,0xffffffff,0,0);
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 3) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
