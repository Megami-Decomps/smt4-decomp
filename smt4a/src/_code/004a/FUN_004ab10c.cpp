/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ab10c` (_code @ 0x4ab10c, 0x47c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "romwright_types.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {

int qsort(...);
int FUN_003eebf4(int, int);
int FUN_003f0e20(unsigned int *, int);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
} param_2_stack;

extern unsigned char LAB_002f8dfc; /* 0x2f8dfc */
extern unsigned int DAT_0057a9d0; /* 0x57a9d0 */
extern unsigned int DAT_0057a9d4; /* 0x57a9d4 */
extern unsigned int DAT_0057a9d8; /* 0x57a9d8 */
extern unsigned int DAT_0057a9dc; /* 0x57a9dc */
extern unsigned int DAT_0057a9e0; /* 0x57a9e0 */
extern unsigned int DAT_0057a9e4; /* 0x57a9e4 */
extern unsigned int DAT_0057a9e8; /* 0x57a9e8 */
extern unsigned int DAT_0057a9ec; /* 0x57a9ec */

/* Supplied declaration required: qsort. */
/* Supplied declaration required: btlGetMainState. */
extern int gameGetSaveSlotData(int);
extern int btlMainGetUnk14(void);
extern int FUN_00291e14(void);
/* Supplied declaration required: FUN_003eebf4. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: btlFindEntryValue. */


int FUN_004ab10c(unsigned int param_1,int param_2)

{
/* irregular: 2 goto(s); 5 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int *piVar8;
  int temp_v6;
  int *piVar10;
  unsigned int *puVar11;
  int temp_v7;
  int temp_v8;
  int aiStack_8c0 [218];
  unsigned int temp_v9 [218];
  int aiStack_1f0 [109];
  int temp_v10;
  int temp_v11 [4];
  int temp_v12;
  
  temp_v6 = 0;
  temp_v11[0] = 0;
  temp_v11[1] = 0;
  temp_v11[3] = param_1;
  temp_v12 = param_2;
  do {
    aiStack_8c0[temp_v6 * 2] = -1;
    temp_v9[temp_v6 * 2] = 0xffffffff;
    piVar10 = (int *)(btlGetMainState()->roster + temp_v6);
    if (piVar10 != (int *)0x0) {
      puVar4 = (unsigned int *)btlGetMainState();
      FUN_003f0e20(puVar4,(int)*(short *)((int)piVar10 + 0x6a));
      if (((puVar4 != (unsigned int *)0x0) &&
          ((puVar4[1] & DAT_0057a9ec) != 0 || (*puVar4 & DAT_0057a9e8) != 0)) && (piVar10[0x41] < 0)
         ) {
        temp_v7 = 0;
        temp_v2 = (int)btlGetMainState();
        FUN_003eebf4(temp_v2,1);
        if ((temp_v2 < 0) && ((char)piVar10[0xf] != '\x02')) {
          temp_v7 = 1;
        }
        temp_v0 = 0;
        temp_v2 = temp_v11[temp_v7];
        if (0 < temp_v2) {
          piVar8 = aiStack_8c0 + temp_v7 * 0xda;
          temp_v3 = temp_v2;
          do {
            temp_v8 = *piVar8;
            piVar8 = piVar8 + 2;
            if (temp_v8 == *(short *)((int)puVar4 + 0x6e)) {
              temp_v0 = 1;
            }
            temp_v3 = temp_v3 - 1;
          } while (temp_v3 != 0);
          if (!temp_v0) {
            aiStack_8c0[temp_v7 * 0xda + temp_v2 * 2] = (int)*(short *)((int)puVar4 + 0x6e);
            (aiStack_8c0 + temp_v7 * 0xda + temp_v2 * 2)[1] = *piVar10;
            temp_v11[temp_v7] = temp_v2 + 1;
          }
        }
        else {
          aiStack_8c0[temp_v7 * 0xda + temp_v2 * 2] = (int)*(short *)((int)puVar4 + 0x6e);
          (aiStack_8c0 + temp_v7 * 0xda + temp_v2 * 2)[1] = *piVar10;
          temp_v11[temp_v7] = temp_v2 + 1;
        }
      }
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 0x6d);
  if (temp_v11[0] >= 2) {
    qsort(aiStack_8c0,temp_v11[0],8,&LAB_002f8dfc);
  }
  if (temp_v11[1] >= 2) {
    qsort(temp_v9,temp_v11[1],8,&LAB_002f8dfc);
  }
  temp_v2 = 0;
  temp_v6 = 0;
  temp_v10 = 0;
  do {
    temp_v7 = (int)(btlGetMainState()->roster + temp_v6);
    if (temp_v7 != 0) {
      puVar4 = (unsigned int *)btlGetMainState();
      FUN_003f0e20(puVar4,(int)*(short *)(temp_v7 + 0x6a));
      if (puVar4 != (unsigned int *)0x0) {
        temp_v4 = *puVar4;
        temp_v5 = puVar4[1];
        if ((DAT_0057a9d4 & temp_v5) != 0 || (DAT_0057a9d0 & temp_v4) != 0) {
          puVar11 = (unsigned int *)(temp_v12 + temp_v2 * 0x18);
          if (!((DAT_0057a9d8 & temp_v4) == 0 && (DAT_0057a9dc & temp_v5) == 0)) {
            *puVar11 = 0xffffffff;
            *(unsigned char *)(puVar11 + 1) = 0;
            puVar11[2] = 0;
            puVar11[3] = 0;
          }
          else if (!((DAT_0057a9e0 & temp_v4) == 0 && (DAT_0057a9e4 & temp_v5) == 0)) {
            temp_v4 = 1;
            *puVar11 = (unsigned int)*(unsigned short *)((int)puVar4 + 0x166);
            *(unsigned char *)(puVar11 + 1) = 0;
            puVar11[2] = 0;
            do {
              temp_v3 = gameGetSaveSlotData(temp_v4 - 1);
              if ((temp_v3 != 0) && ((unsigned int)*(unsigned short *)(temp_v3 + 0x62) == *puVar11)) {
                puVar11[3] = temp_v4;
                break;
              }
              temp_v4 = temp_v4 + 1;
            } while ((int)temp_v4 < 4);
            temp_v3 = FUN_00291e14();
            if (((temp_v3 != 0) && (temp_v3 = btlMainGetUnk14(), temp_v3 != 0)) &&
               ((unsigned int)*(unsigned short *)(temp_v3 + 0x62) == *puVar11)) {
              temp_v4 = 0;
              puVar11[3] = temp_v4;
            }
          }
          else {
            if ((temp_v4 & DAT_0057a9e8) == 0 && (temp_v5 & DAT_0057a9ec) == 0) goto LAB_004ab560;
            temp_v0 = 0;
            if (0 < temp_v10) {
              piVar10 = aiStack_1f0;
              temp_v3 = temp_v10;
              do {
                if (*piVar10 == (int)*(short *)((int)puVar4 + 0x6e)) {
                  temp_v0 = 1;
                }
                temp_v3 = temp_v3 - 1;
                piVar10 = piVar10 + 1;
              } while (temp_v3 != 0);
              if (temp_v0) goto LAB_004ab560;
            }
            aiStack_1f0[temp_v10] = (int)*(short *)((int)puVar4 + 0x6e);
            temp_v10 = temp_v10 + 1;
            *puVar11 = (unsigned int)*(unsigned short *)((int)puVar4 + 0x166);
            *(unsigned char *)(puVar11 + 1) = 1;
            if (-1 < *(int *)(temp_v7 + 0x104)) {
              temp_v4 = 0;
              puVar11[2] = 1;
              puVar11[3] = temp_v4;
            }
            else {
              temp_v3 = (int)btlGetMainState();
              FUN_003eebf4(temp_v3,1);
              if ((temp_v3 < 0) && (*(char *)(temp_v7 + 0x3c) != '\x02')) {
                puVar11[2] = 1;
              }
              else {
                puVar11[2] = 0;
              }
              temp_v4 = 0;
              puVar11[3] = 0;
              if (0 < temp_v11[puVar11[2]]) {
                do {
                  if (aiStack_8c0[puVar11[2] * 0xda + temp_v4 * 2] == -1) break;
                  if (aiStack_8c0[puVar11[2] * 0xda + temp_v4 * 2] ==
                      (int)*(short *)((int)puVar4 + 0x6e)) {
                    puVar11[3] = temp_v4;
                    break;
                  }
                  temp_v4 = temp_v4 + 1;
                } while ((int)temp_v4 < temp_v11[puVar11[2]]);
              }
            }
          }
          *(short *)(puVar11 + 4) = (short)puVar4[0x9d];
          temp_v1 = btlFindEntryValue((int)*(short *)(temp_v7 + 0x6a),7);
          *(unsigned char *)((int)puVar11 + 0x12) = temp_v1;
          temp_v1 = btlFindEntryValue((int)*(short *)(temp_v7 + 0x6a),10);
          *(unsigned char *)((int)puVar11 + 0x13) = temp_v1;
          temp_v1 = btlFindEntryValue((int)*(short *)(temp_v7 + 0x6a),0xb);
          *(unsigned char *)(puVar11 + 5) = temp_v1;
          temp_v1 = btlFindEntryValue((int)*(short *)(temp_v7 + 0x6a),8);
          *(unsigned char *)((int)puVar11 + 0x15) = temp_v1;
          temp_v7 = btlFindEntryValue((int)*(short *)(temp_v7 + 0x6a),0x16);
          temp_v2 = temp_v2 + 1;
          *(unsigned char *)((int)puVar11 + 0x16) = temp_v7 != 0;
        }
      }
    }
LAB_004ab560:
    temp_v6 = temp_v6 + 1;
    if (temp_v6 >= 0x6d) {
      return temp_v2;
    }
  } while( 1 );
}

} /* extern "C" */
