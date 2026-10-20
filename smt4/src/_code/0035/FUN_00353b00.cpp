/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00353b00` (_code @ 0x353b00, 0x4c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00239ed0(unsigned int *, unsigned char *);
int FUN_00239fc4(unsigned int *, unsigned int);
int FUN_002ba8e8(int *);
int FUN_002baa40(...);
int FUN_003535f0(unsigned int *, int);
int FUN_003538bc(unsigned int, unsigned int, unsigned int, int);
int FUN_00353948(void);
int FUN_00361140(unsigned char *);
int FUN_003611b8(unsigned char *);

/* stack frame of param_7: 9 slot(s), 34 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned short sp40; /* 0x40: local_40 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_7_stack;

extern unsigned char DAT_004c7000; /* 0x4c7000 */
extern unsigned int DAT_004c7008; /* 0x4c7008 */
extern unsigned int DAT_004c700c; /* 0x4c700c */
extern unsigned int DAT_004c7010; /* 0x4c7010 */
extern unsigned int DAT_004c7014; /* 0x4c7014 */
extern unsigned int DAT_004c7018; /* 0x4c7018 */
extern unsigned char DAT_004c7030; /* 0x4c7030 */
extern int DAT_004c7230; /* 0x4c7230 */
extern unsigned int DAT_004c7438; /* 0x4c7438 */
extern unsigned char DAT_004c743c; /* 0x4c743c */
extern unsigned char DAT_004c8000; /* 0x4c8000 */

extern unsigned long long libc_strtoul(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00239ed0. */
extern unsigned int *FUN_00239f84(unsigned char *, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00239fc4. */
extern int FUN_002a12d8(unsigned int *);
extern unsigned int FUN_002b5c44(void);
/* Supplied declaration required: FUN_002ba8e8. */
/* Supplied declaration required: FUN_002baa40. */
extern int FUN_002c55b4(void);
extern int appletIsExitRequested(void);
extern unsigned int *FUN_003520d8(unsigned char *, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_003535f0. */
extern unsigned int *FUN_00353840(unsigned int, unsigned int *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_003538bc. */
/* Supplied declaration required: FUN_00353948. */
/* Supplied declaration required: FUN_00361140. */
/* Supplied declaration required: FUN_003611b8. */


void FUN_00353b00(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,unsigned int param_5,
                 unsigned int *param_6,unsigned int param_7)

{
/* irregular: 9 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned char *puVar5;
  unsigned int temp_v3;
  unsigned int *puVar7;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned long long temp_v6;
  unsigned int temp_v7;
  unsigned char *temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned char *puStack_54;
  unsigned char temp_v12 [16];
  unsigned short temp_v13;
  unsigned char temp_v14 [4];
  unsigned int *temp_v15;
  unsigned int *temp_v16;
  unsigned int *temp_v17;
  unsigned int *puStack_28;
  
  temp_v15 = param_1;
  temp_v16 = param_2;
  temp_v17 = param_3;
  puStack_28 = param_4;
  if (param_7 >= 0x41) {
    FUN_002baa40(param_1,0xe0613881);
    return;
  }
  temp_v3 = 0;
  if (temp_v3 < param_7) {
    do {
      temp_v0 = *(char *)(param_6 + temp_v3 * 2 + 1);
      if (temp_v0 == '\0') {
        temp_v2 = 0x8c;
      }
      else if (temp_v0 == '\x01') {
        temp_v2 = 0xd;
      }
      else if ((temp_v0 == '\x02') || (temp_v0 != '\x03')) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = 0x10;
      }
      if ((temp_v2 != 0x8c) && (temp_v2 != 0xd)) {
        FUN_002baa40(param_1,0xe0e13883);
        return;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < param_7);
  }
  puVar4 = param_6;
  FUN_00239fc4(param_6,param_7);
  if (-1 < (int)puVar4) {
    temp_v7 = 1;
    FUN_00361140(&DAT_004c7000);
    temp_v0 = (char)param_4[1];
    if (temp_v0 == '\0') {
      DAT_004c700c = 0x8c;
    }
    else if (temp_v0 == '\x01') {
      DAT_004c700c = 0xd;
    }
    else if ((temp_v0 == '\x02') || (temp_v0 != '\x03')) {
      DAT_004c700c = 0;
    }
    else {
      DAT_004c700c = 0x10;
    }
    DAT_004c700c = DAT_004c700c | 0x40000;
    DAT_004c7008 = (unsigned int)*(unsigned char *)((int)param_4 + 5) | ((*param_4 & 0xff0fffff) << 8);
    temp_v6 = libc_strtoul(param_5,0,10);
    DAT_004c7014 = (unsigned int)((unsigned long long)temp_v6 >> 0x20);
    DAT_004c7010 = (unsigned int)temp_v6;
    DAT_004c7018 = temp_v7;
    FUN_003611b8(&DAT_004c8000);
    DAT_004c7230 = 0;
    temp_v3 = 0;
    if (temp_v3 < param_7) {
      do {
        puVar7 = param_6 + temp_v3 * 2;
        temp_v0 = (char)puVar7[1];
        if (temp_v0 == '\0') {
          temp_v2 = 0x8c;
        }
        else if (temp_v0 == '\x01') {
          temp_v2 = 0xd;
        }
        else if ((temp_v0 == '\x02') || (temp_v0 != '\x03')) {
          temp_v2 = 0;
        }
        else {
          temp_v2 = 0x10;
        }
        temp_v4 = *puVar7;
        temp_v1 = *(unsigned char *)((int)puVar7 + 5);
        if (temp_v2 == 0x8c) {
          temp_v2 = DAT_004c7230 * 8;
          DAT_004c7230 = DAT_004c7230 + 1;
          *(unsigned int *)(temp_v2 + 0x4c7034) = 0x4008c;
          *(unsigned int *)(&DAT_004c7030 + temp_v2) = (unsigned int)temp_v1 | ((temp_v4 & 0xff0fffff) << 8);
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < param_7);
    }
    puVar4 = (unsigned int *)FUN_00239f84(temp_v14,&DAT_004c7000,0);
    if (-1 < (int)puVar4) {
      temp_v2 = appletIsExitRequested();
      if ((temp_v2 != 0) || (temp_v2 = FUN_002c55b4(), temp_v2 != 0)) {
        FUN_002baa40(temp_v15,0xc9413891);
        return;
      }
      FUN_00239ed0(&temp_v7,&DAT_004c7000);
      temp_v11 = temp_v7;
      puStack_54 = temp_v8;
      temp_v2 = FUN_002a12d8(&temp_v11);
      if (temp_v2 < 0) {
        *temp_v15 = temp_v11;
        temp_v15[1] = (unsigned int)puStack_54;
        return;
      }
      temp_v10 = FUN_002b5c44();
      FUN_002ba8e8(&temp_v9);
      temp_v8 = &DAT_004c743c;
      temp_v7 = param_5;
      puVar4 = (unsigned int *)FUN_00353840(temp_v10,(unsigned int *)&temp_v9,*param_4,param_4[1]);
      if (-1 < (int)puVar4) {
        temp_v3 = 0;
        if (temp_v3 < DAT_004c7438) {
          do {
            temp_v7 = *(unsigned int *)(temp_v3 * 8 + 0x4c7238);
            temp_v8 = *(unsigned char **)(temp_v3 * 8 + 0x4c723c);
            puVar4 = (unsigned int *)FUN_003520d8(temp_v12,1,&temp_v7);
            if ((int)puVar4 < 0) {
              FUN_002baa40(temp_v15,puVar4);
              return;
            }
            temp_v4 = (temp_v7 >> 8) | ((int)temp_v8 << 0x18);
            temp_v5 = (unsigned int)temp_v8 >> 0xe == 0x10;
            if (temp_v5) {
              temp_v4 = (unsigned int)temp_v8 & 0xffff;
            }
            if (temp_v5 && temp_v4 == 0x8c) {
              temp_v4 = 0;
            }
            else {
              temp_v5 = (unsigned int)temp_v8 >> 0xe == 0x10;
              puVar5 = temp_v8;
              if (temp_v5) {
                puVar5 = (unsigned char *)((unsigned int)temp_v8 & 0xffff);
              }
              if (temp_v5 && puVar5 == (unsigned char *)0xd) {
                temp_v4 = 1;
              }
              else {
                temp_v4 = 0xff;
              }
            }
            FUN_003538bc(temp_v10,(temp_v7 >> 8) & 0xfffff,
                         temp_v4 | ((temp_v7 & 0xff) << 8) | ((unsigned int)temp_v13 << 0x10),temp_v9);
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < DAT_004c7438);
        }
        temp_v3 = 0;
        if (temp_v3 < param_7) {
          do {
            puVar7 = param_6 + temp_v3 * 2;
            temp_v0 = (char)puVar7[1];
            if (temp_v0 == '\0') {
              temp_v2 = 0x8c;
            }
            else if (temp_v0 == '\x01') {
              temp_v2 = 0xd;
            }
            else if ((temp_v0 == '\x02') || (temp_v0 != '\x03')) {
              temp_v2 = 0;
            }
            else {
              temp_v2 = 0x10;
            }
            if (temp_v2 != 0x8c) {
              if (temp_v2 == 0x8c) {
                temp_v4 = 0;
              }
              else if (temp_v2 == 0xd) {
                temp_v4 = 1;
              }
              else {
                temp_v4 = 0xff;
              }
              FUN_003538bc(temp_v10,*puVar7 & 0xfffff,
                           temp_v4 | ((unsigned int)*(unsigned char *)((int)puVar7 + 5) << 8),temp_v9);
            }
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < param_7);
        }
        puVar4 = (unsigned int *)&temp_v9;
        FUN_00353948();
        if ((-1 < (int)puVar4) &&
           (puVar4 = temp_v16, FUN_003535f0(temp_v16,temp_v9), -1 < (int)puVar4)) {
          *temp_v17 = temp_v9;
          FUN_002baa40(temp_v15,0);
          return;
        }
      }
    }
  }
  FUN_002baa40(temp_v15,puVar4);
  return;
}

} /* extern "C" */
