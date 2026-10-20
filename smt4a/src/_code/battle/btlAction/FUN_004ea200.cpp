/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ea200` (_code @ 0x4ea200, 0x3e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192608(void);
int FUN_003e8bb0(unsigned short [26], int, unsigned int);
int FUN_004bfcfc(int, int, int, unsigned int *, int, int, int);
int FUN_004c4604(int, int, int, unsigned int *, int, int, int, unsigned char [8]);

/* stack frame of param_5: 12 slot(s), 43 byte(s) */
typedef struct {
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned short sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_5_stack;

extern unsigned int DAT_00571138; /* 0x571138 */
extern unsigned int DAT_00571150; /* 0x571150 */
extern unsigned int DAT_00571154; /* 0x571154 */
extern unsigned int *DAT_00571190; /* 0x571190 */
extern unsigned int DAT_00571194; /* 0x571194 */

extern int FUN_001801a4(void);
/* Supplied declaration required: FUN_00192608. */
extern int FUN_0026264c(unsigned short);
extern int FUN_002626e0(void);
/* Supplied declaration required: FUN_003e8bb0. */
extern int FUN_003e9b28(int);
/* Supplied declaration required: FUN_004bfcfc. */
/* Supplied declaration required: FUN_004c4604. */


unsigned int FUN_004ea200(int *param_1,int param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned int *puVar6;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8 [5];
  unsigned short temp_v9 [26];
  int temp_v10;
  unsigned char temp_v11 [8];
  
  puVar6 = (unsigned int *)**(unsigned int **)(param_2 + 0x20);
  if (!((DAT_00571150 & (unsigned int)puVar6) == 0 &&
       (DAT_00571154 & (*(unsigned int **)(param_2 + 0x20))[1]) == 0)) {
    temp_v6 = 1;
    temp_v8[0] = 1;
    temp_v0 = FUN_001801a4();
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 2);
    FUN_00192608();
    if (temp_v1 != 0) {
      temp_v6 = 2;
      temp_v8[1] = 2;
    }
  }
  else {
    temp_v6 = 1;
    temp_v8[0] = 0;
  }
  temp_v7 = 0;
  temp_v10 = param_2 + 0x38;
  do {
    temp_v1 = 0;
    *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1be) = 1;
    *(short *)(*(int *)(param_2 + 0x28) + 0x1c0) = (short)temp_v8[temp_v7];
    FUN_003e8bb0(temp_v9,*param_1,*(unsigned int *)(param_2 + 0x20));
    switch(temp_v9[0]) {
    case 1:
    case 6:
      temp_v1 = 1;
      break;
    case 2:
    case 3:
    case 4:
    case 7:
    case 8:
      return 0;
    }
    temp_v4 = 0;
    temp_v8[3] = 0;
    temp_v11[0] = 0;
    if (param_4 != 0) {
      do {
        puVar4 = *(unsigned int **)(param_3 + temp_v4 * 4);
        puVar6 = DAT_00571190;
        if ((*puVar4 & (unsigned int)DAT_00571190) != 0 || (puVar4[1] & DAT_00571194) != 0) {
          temp_v0 = FUN_0026264c(*(unsigned short *)((int)puVar4 + 0x166));
          if (temp_v0 == 0) {
            temp_v2 = (unsigned int)*(unsigned short *)(*(int *)(param_3 + temp_v4 * 4) + 0x166);
            if ((*(int *)(*param_1 + 0xec) < 0) || ((*(unsigned int *)(*param_1 + 0x110) & 0x80) == 0)) {
              temp_v0 = 0;
              if (temp_v2 != 0x493) {
                temp_v0 = temp_v2 - 0x400;
              }
              if (((temp_v2 != 0x493 && temp_v0 != 0x94) && (temp_v2 != 0x495 && temp_v2 != 0x496)) &&
                 ((temp_v0 = FUN_002626e0(), temp_v0 == 0 ||
                  (temp_v0 = FUN_003e9b28(*param_1), temp_v0 != 0)))) goto LAB_004ea470;
            }
          }
          puVar6 = (unsigned int *)(int)*(short *)(*(int *)(param_2 + 0x24) + 0x6a);
          temp_v0 = 0;
          FUN_004c4604(0,0,1,puVar6,(int)*(short *)(*(int *)(param_3 + temp_v4 * 4) + 8),0,1,temp_v11)
          ;
          temp_v2 = (unsigned int)((temp_v0 == 1 || temp_v0 == 2) || temp_v0 == 3);
          if ((temp_v2 & temp_v1) != 0) {
            return 0;
          }
          if ((temp_v2 & ~temp_v1) == 0) {
            puVar6 = (unsigned int *)(int)*(short *)(*(int *)(param_2 + 0x24) + 0x6a);
            temp_v0 = 0;
            FUN_004bfcfc(0,0,0,puVar6,(int)*(short *)(*(int *)(param_3 + temp_v4 * 4) + 8),1,1);
            if (((param_5 == 0) || (temp_v0 == 2)) && (temp_v8[3] = 1, temp_v1 == 0)) {
              *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1be) = 1;
              *(short *)(*(int *)(param_2 + 0x28) + 0x1c0) = (short)temp_v8[temp_v7];
              *(unsigned char *)(*(short *)(*(int *)(param_3 + temp_v4 * 4) + 0x6e) + temp_v10) = 1;
              return 1;
            }
          }
        }
LAB_004ea470:
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < param_4);
    }
    if ((temp_v8[3] & temp_v1) != 0) {
      *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1be) = 1;
      *(short *)(*(int *)(param_2 + 0x28) + 0x1c0) = (short)temp_v8[temp_v7];
      puVar1 = DAT_00571190;
      temp_v1 = DAT_00571194;
      if (param_4 == 0) {
        temp_v4 = 0;
      }
      else {
        temp_v4 = param_4 & 1;
        if (temp_v4 != 0) {
          puVar6 = &DAT_00571138;
        }
        temp_v0 = 0;
        if (temp_v4 != 0) {
          temp_v2 = puVar6[0x16];
          temp_v3 = puVar6[0x17];
          do {
            puVar4 = *(unsigned int **)(param_3 + temp_v0 * 4);
            if ((*puVar4 & temp_v2) != 0 || (puVar4[1] & temp_v3) != 0) {
              *(unsigned char *)(*(short *)((int)puVar4 + 0x6e) + temp_v10) = 1;
            }
            temp_v0 = temp_v0 + 1;
            puVar1 = DAT_00571190;
            temp_v1 = DAT_00571194;
          } while (temp_v0 < (int)temp_v4);
        }
      }
      for (; temp_v2 = DAT_00571194, puVar6 = DAT_00571190, temp_v4 < param_4; temp_v4 = temp_v4 + 2) {
        puVar4 = *(unsigned int **)(param_3 + temp_v4 * 4);
        temp_v3 = *puVar4 & (unsigned int)DAT_00571190;
        temp_v5 = puVar4[1] & DAT_00571194;
        DAT_00571190 = puVar1;
        DAT_00571194 = temp_v1;
        if (temp_v5 != 0 || temp_v3 != 0) {
          *(unsigned char *)(*(short *)((int)puVar4 + 0x6e) + temp_v10) = 1;
        }
        puVar4 = *(unsigned int **)(param_3 + temp_v4 * 4 + 4);
        if ((puVar4[1] & temp_v2) != 0 || (*puVar4 & (unsigned int)puVar6) != 0) {
          *(unsigned char *)(*(short *)((int)puVar4 + 0x6e) + temp_v10) = 1;
        }
        puVar1 = DAT_00571190;
        temp_v1 = DAT_00571194;
        DAT_00571194 = temp_v2;
        DAT_00571190 = puVar6;
      }
      DAT_00571190 = puVar1;
      DAT_00571194 = temp_v1;
      return 1;
    }
    temp_v7 = temp_v7 + 1;
    if (temp_v6 <= temp_v7) {
      return 0;
    }
  } while( 1 );
}

} /* extern "C" */
