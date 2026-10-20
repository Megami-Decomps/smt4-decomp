/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00428a58` (_code @ 0x428a58, 0x5e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016cd0c(int *);
int sysFatalBreak(void);
int FUN_001b57a8(...);
int FUN_00427a10(unsigned int *, unsigned char *);
int FUN_00427ac4(unsigned int *, unsigned int);
int FUN_00428308(unsigned int *, int);
int FUN_004287ec(unsigned int, unsigned int, unsigned int, int);
int FUN_00428878(void);
int initBlockE30(unsigned char *);
int clearBlock10808(unsigned char *);

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

extern unsigned char DAT_0061b000; /* 0x61b000 */
extern unsigned int DAT_0061b008; /* 0x61b008 */
extern unsigned int DAT_0061b00c; /* 0x61b00c */
extern unsigned int DAT_0061b010; /* 0x61b010 */
extern unsigned int DAT_0061b014; /* 0x61b014 */
extern unsigned int DAT_0061b018; /* 0x61b018 */
extern unsigned char DAT_0061b030; /* 0x61b030 */
extern int DAT_0061b230; /* 0x61b230 */
extern unsigned int DAT_0061b438; /* 0x61b438 */
extern unsigned char DAT_0061b43c; /* 0x61b43c */
extern unsigned char DAT_0061c000; /* 0x61c000 */

extern int FUN_0015a410(void);
extern int appletIsExitRequested(void);
extern unsigned int FUN_0016ccfc(void);
/* Supplied declaration required: FUN_0016cd0c. */
/* Supplied declaration required: sysFatalBreak. */
/* Supplied declaration required: FUN_001b57a8. */
extern int FUN_001d25ec(unsigned int *);
extern unsigned long long FUN_00302420(unsigned int, unsigned int, unsigned int);
extern unsigned int *FUN_004267fc(unsigned char *, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_00427a10. */
/* Supplied declaration required: FUN_00427ac4. */
extern unsigned int *FUN_00427e28(unsigned char *, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00428308. */
extern unsigned int *FUN_00428730(unsigned int, unsigned int *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_004287ec. */
/* Supplied declaration required: FUN_00428878. */
/* Supplied declaration required: initBlockE30. */
/* Supplied declaration required: clearBlock10808. */


void FUN_00428a58(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,unsigned int param_5,
                 unsigned int *param_6,unsigned int param_7)

{
/* irregular: 10 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int *puVar5;
  unsigned char *puVar6;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned long long temp_v9;
  unsigned int temp_v10;
  unsigned char *temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned char *puStack_54;
  unsigned char temp_v15 [16];
  unsigned short temp_v16;
  unsigned char temp_v17 [4];
  unsigned int *temp_v18;
  unsigned int *temp_v19;
  unsigned int *temp_v20;
  unsigned int *puStack_28;
  
  temp_v18 = param_1;
  temp_v19 = param_2;
  temp_v20 = param_3;
  puStack_28 = param_4;
  if (param_7 >= 0x41) {
    FUN_001b57a8(param_1,0xe0613881);
    return;
  }
  temp_v6 = 0;
  if (temp_v6 < param_7) {
    do {
      switch(*(unsigned char *)(param_6 + temp_v6 * 2 + 1)) {
      case 0:
        temp_v5 = 0x8c;
        break;
      case 1:
        temp_v5 = 0xd;
        break;
      default:
        temp_v5 = 0;
        break;
      case 3:
        temp_v5 = 0x10;
        break;
      case 4:
        temp_v5 = 0x30;
      }
      temp_v0 = *(char *)((int)param_6 + temp_v6 * 8 + 6);
      if ((temp_v0 != '\0') && (temp_v0 != '\x01')) {
        sysFatalBreak();
      }
      if ((temp_v5 != 0x8c) && (temp_v5 != 0xd)) {
        FUN_001b57a8(temp_v18,0xe0e13883);
        return;
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < param_7);
  }
  puVar5 = param_6;
  FUN_00427ac4(param_6,param_7);
  if (-1 < (int)puVar5) {
    initBlockE30(&DAT_0061b000);
    switch((char)param_4[1]) {
    case 0:
      temp_v6 = 0x8c;
      break;
    case 1:
      temp_v6 = 0xd;
      break;
    default:
      temp_v6 = 0;
      break;
    case 3:
      temp_v6 = 0x10;
      break;
    case 4:
      temp_v6 = 0x30;
    }
    temp_v4 = *param_4;
    temp_v1 = *(unsigned char *)((int)param_4 + 5);
    temp_v5 = 0;
    if (*(char *)((int)param_4 + 6) != '\0') {
      if (*(char *)((int)param_4 + 6) == '\x01') {
        temp_v5 = 2;
      }
      else {
        sysFatalBreak();
        temp_v5 = 0;
      }
    }
    DAT_0061b008 = (temp_v5 << 0x1c) | (unsigned int)temp_v1 | ((temp_v4 & 0xfffff) << 8);
    DAT_0061b00c = temp_v6 | 0x40000;
    temp_v9 = FUN_00302420(param_5,0,10);
    DAT_0061b014 = (unsigned int)((unsigned long long)temp_v9 >> 0x20);
    DAT_0061b010 = (unsigned int)temp_v9;
    DAT_0061b018 = 1;
    clearBlock10808(&DAT_0061c000);
    temp_v5 = 0;
    temp_v6 = 0;
    if (temp_v6 < param_7) {
      do {
        puVar3 = param_6 + temp_v6 * 2;
        switch((char)puVar3[1]) {
        case 0:
          temp_v7 = 0x8c;
          break;
        case 1:
          temp_v7 = 0xd;
          break;
        default:
          temp_v7 = 0;
          break;
        case 3:
          temp_v7 = 0x10;
          break;
        case 4:
          temp_v7 = 0x30;
        }
        temp_v10 = *puVar3;
        temp_v11 = (unsigned char *)(unsigned int)*(unsigned char *)((int)puVar3 + 5);
        if (*(char *)((int)puVar3 + 6) == '\0') {
          temp_v2 = 0;
        }
        else if (*(char *)((int)puVar3 + 6) == '\x01') {
          temp_v2 = 2;
        }
        else {
          sysFatalBreak();
          temp_v2 = 0;
        }
        if (temp_v7 == 0x8c) {
          temp_v7 = temp_v5 * 8;
          temp_v5 = temp_v5 + 1;
          *(unsigned int *)(&DAT_0061b030 + temp_v7) =
               (temp_v2 << 0x1c) | (((unsigned int)temp_v11 | (temp_v10 << 8)) & 0xfffffff);
          *(unsigned int *)(temp_v7 + 0x61b034) = 0x4008c;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < param_7);
    }
    DAT_0061b230 = temp_v5;
    puVar5 = (unsigned int *)FUN_00427e28(temp_v17,&DAT_0061b000,0);
    if (-1 < (int)puVar5) {
      temp_v5 = appletIsExitRequested();
      if ((temp_v5 != 0) || (temp_v5 = FUN_0015a410(), temp_v5 != 0)) {
        FUN_001b57a8(temp_v18,0xc9413891);
        return;
      }
      FUN_00427a10(&temp_v10,&DAT_0061b000);
      temp_v14 = temp_v10;
      puStack_54 = temp_v11;
      temp_v5 = FUN_001d25ec(&temp_v14);
      if (temp_v5 < 0) {
        *temp_v18 = temp_v14;
        temp_v18[1] = (unsigned int)puStack_54;
        return;
      }
      temp_v13 = FUN_0016ccfc();
      FUN_0016cd0c(&temp_v12);
      temp_v11 = &DAT_0061b43c;
      temp_v10 = param_5;
      puVar5 = (unsigned int *)FUN_00428730(temp_v13,(unsigned int *)&temp_v12,*param_4,param_4[1]);
      if (-1 < (int)puVar5) {
        temp_v6 = 0;
        if (temp_v6 < DAT_0061b438) {
          do {
            temp_v10 = *(unsigned int *)(temp_v6 * 8 + 0x61b238);
            temp_v11 = *(unsigned char **)(temp_v6 * 8 + 0x61b23c);
            puVar5 = (unsigned int *)FUN_004267fc(temp_v15,1,&temp_v10);
            if ((int)puVar5 < 0) {
              FUN_001b57a8(temp_v18,puVar5);
              return;
            }
            temp_v4 = (temp_v10 >> 8) | ((int)temp_v11 << 0x18);
            temp_v8 = (unsigned int)temp_v11 >> 0xe == 0x10;
            if (temp_v8) {
              temp_v4 = (unsigned int)temp_v11 & 0xffff;
            }
            if (temp_v8 && temp_v4 == 0x8c) {
              temp_v4 = 0;
            }
            else {
              temp_v8 = (unsigned int)temp_v11 >> 0xe == 0x10;
              puVar6 = temp_v11;
              if (temp_v8) {
                puVar6 = (unsigned char *)((unsigned int)temp_v11 & 0xffff);
              }
              if (temp_v8 && puVar6 == (unsigned char *)0xd) {
                temp_v4 = 1;
              }
              else {
                temp_v4 = 0xff;
              }
            }
            FUN_004287ec(temp_v13,(temp_v10 >> 8) & 0xfffff,
                         temp_v4 | ((temp_v10 & 0xff) << 8) | ((unsigned int)temp_v16 << 0x10),temp_v12);
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < DAT_0061b438);
        }
        temp_v6 = 0;
        if (temp_v6 < param_7) {
          do {
            puVar3 = param_6 + temp_v6 * 2;
            switch((char)puVar3[1]) {
            case 0:
              temp_v5 = 0x8c;
              break;
            case 1:
              temp_v5 = 0xd;
              break;
            default:
              temp_v5 = 0;
              break;
            case 3:
              temp_v5 = 0x10;
              break;
            case 4:
              temp_v5 = 0x30;
            }
            temp_v4 = *puVar3;
            temp_v1 = *(unsigned char *)((int)puVar3 + 5);
            if ((*(char *)((int)puVar3 + 6) != '\0') && (*(char *)((int)puVar3 + 6) != '\x01')) {
              sysFatalBreak();
            }
            if (temp_v5 != 0x8c) {
              if (temp_v5 == 0x8c) {
                temp_v3 = 0;
              }
              else if (temp_v5 == 0xd) {
                temp_v3 = 1;
              }
              else {
                temp_v3 = 0xff;
              }
              FUN_004287ec(temp_v13,temp_v4 & 0xfffff,temp_v3 | ((unsigned int)temp_v1 << 8),temp_v12);
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < param_7);
        }
        puVar5 = (unsigned int *)&temp_v12;
        FUN_00428878();
        if ((-1 < (int)puVar5) &&
           (puVar5 = temp_v19, FUN_00428308(temp_v19,temp_v12), -1 < (int)puVar5)) {
          *temp_v20 = temp_v12;
          FUN_001b57a8(temp_v18,0);
          return;
        }
      }
    }
  }
  FUN_001b57a8(temp_v18,puVar5);
  return;
}

} /* extern "C" */
