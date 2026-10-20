/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_Battle_PlayPositionedEffect` (_code @ 0x312864, 0x2ac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ARM_common_memcpy4_9(int *, char *);
int FUN_00245420(int, unsigned int, int, unsigned int);
int FUN_002454c4(int, int *, int, int);
int FUN_0024550c(void);
int FUN_00282820(int, unsigned int, int, int);
int btlMainFindEntryByListedId(unsigned int *, int);
int btlGetMainState(void);
int scrGetArg(int);
int libc_strcmp(int, unsigned char *);

/* stack frame of void: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} void_stack;

extern unsigned char DAT_00400440; /* 0x400440 */
extern unsigned int g_btlScriptUnit; /* 0x43427c */
extern int DAT_00435d18; /* 0x435d18 */
extern unsigned int g_btlEvent; /* 0x435d48 */

/* Supplied declaration required: ARM_common_memcpy4_9. */
/* Supplied declaration required: FUN_00245420. */
/* Supplied declaration required: FUN_002454c4. */
/* Supplied declaration required: FUN_0024550c. */
extern int FUN_0027e3b8(unsigned int);
extern unsigned int btlUnitGet(unsigned int);
/* Supplied declaration required: FUN_00282820. */
/* Supplied declaration required: btlMainFindEntryByListedId. */
extern int FUN_0028299c(int);
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: libc_strcmp. */
extern int libc_strlen(int);


void scrComm_Battle_PlayPositionedEffect(void)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  char *pcVar5;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int *temp_v18;
  int temp_v19;
  int *temp_v20;
  
  temp_v17 = scrGetArg(0);
  temp_v0 = scrGetArg(1);
  temp_v1 = FUN_0027e3b8(g_btlEvent);
  if (((temp_v1 == 0) || (temp_v1 = DAT_00435d18, FUN_0024550c(), temp_v1 != 0)) && (temp_v0 != 0)) {
    temp_v8 = 0;
    temp_v9 = 0;
    temp_v10 = 0;
    temp_v11 = 0;
    temp_v12 = 0;
    temp_v13 = 0;
    temp_v14 = 0;
    temp_v15 = 0;
    if (temp_v0 < 0) {
      pcVar5 = "commonDw";
    }
    else {
      pcVar5 = "commonUp";
    }
    ARM_common_memcpy4_9(&temp_v8,pcVar5);
    FUN_002454c4(DAT_00435d18,&temp_v8,1,0);
    temp_v1 = btlGetMainState();
    temp_v16 = btlUnitGet(g_btlScriptUnit);
    temp_v7 = 0;
    temp_v5 = *(int *)(DAT_00435d18 + 0x1cfc);
    temp_v20 = (int *)(temp_v1 + 0x1e98);
    temp_v19 = 0;
    do {
      temp_v1 = btlGetMainState();
      puVar3 = (unsigned int *)(*(int *)(temp_v1 + 0x1fc0) + temp_v19 * 0x288);
      temp_v3 = *puVar3;
      if ((((temp_v3 & 1) != 0) && ((temp_v3 & 0x40) == 0)) &&
         (temp_v1 = (int)(short)puVar3[2], -1 < temp_v1)) {
        temp_v1 = *temp_v20 + temp_v1 * 0x114;
        temp_v9 = temp_v19 << 3;
        temp_v10 = 0xffffffff;
        temp_v8 = temp_v0;
        FUN_00245420(temp_v7 << 3,temp_v16,temp_v1,temp_v17);
        temp_v14 = temp_v16;
        temp_v12 = (int)*(short *)(temp_v1 + 0x62);
        temp_v13 = temp_v12;
        temp_v18 = (unsigned int *)btlGetMainState();
        temp_v1 = 0;
        do {
          temp_v4 = temp_v5 + temp_v1 * 0x16;
          temp_v6 = temp_v4 + 0x58;
          temp_v2 = libc_strlen(temp_v6);
          if ((temp_v2 != 0) && (libc_strcmp(temp_v6,&DAT_00400440), temp_v6 != 0)) {
            temp_v3 = (unsigned int)*(unsigned short *)(temp_v4 + 0x6a);
            temp_v2 = FUN_0028299c(DAT_00435d18);
            temp_v6 = 2;
            if (temp_v0 < 0) {
              temp_v6 = 3;
            }
            switch(temp_v3) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 0xc:
              if ((((temp_v3 != 0xc) || (temp_v12 < 0)) ||
                  (puVar3 = temp_v18, btlMainFindEntryByListedId(temp_v18,temp_v12), puVar3 == (unsigned int *)0x0)) ||
                 ((*puVar3 & 2) != 0)) {
                temp_v11 = temp_v4 + 0x58;
                temp_v8 = 6;
                temp_v9 = temp_v6;
                temp_v10 = temp_v3;
                FUN_00282820((int)*(short *)(temp_v4 + 0x68) + temp_v2 * temp_v7,temp_v14,temp_v13,
                             temp_v12);
              }
            }
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 4);
        temp_v7 = temp_v7 + 1;
      }
      temp_v19 = temp_v19 + 1;
    } while (temp_v19 < 4);
  }
  return;
}

} /* extern "C" */
