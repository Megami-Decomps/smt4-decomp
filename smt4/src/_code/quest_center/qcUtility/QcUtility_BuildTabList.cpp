/* NON_MATCHING: romwright 0.5.0 decompilation of `QcUtility_BuildTabList` (_code @ 0x3814d4, 0x3f4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(int);
int asdMemoryAlloc(int, int, int, int, int);
int QcUtility_GetQuestTableChunkCount(int, int);
int SBORROW4(int, int);

/* stack frame of param_7: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_7_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int dataTable26GroupGetRecord(int, unsigned char, unsigned int);
extern int gameFlagIsSet(void);
extern int randNextInRange(unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdMemoryAlloc. */
extern int QcActive_GetField20(void);
extern int QcActive_GetField22(void);
extern int QcActive_GetField24(void);
extern int QcActive_GetField26(void);
extern int QcUtility_CountFlaggedSubQuests(void);
/* Supplied declaration required: QcUtility_GetQuestTableChunkCount. */


unsigned int
QcUtility_BuildTabList
          (unsigned char *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7)

{
/* irregular: 3 goto(s); 4 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned short *puVar7;
  unsigned short *puVar8;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int *puVar12;
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12;
  unsigned int temp_v13;
  
  temp_v3 = 0;
  puVar12 = (unsigned int *)(param_1 + param_2 * 0x50 + 0x10);
  temp_v6 = 0;
  temp_v13 = 0;
  do {
    puVar12[temp_v6] = 0xfffffffe;
    temp_v3 = temp_v3 + 2;
    puVar12[temp_v6 + 1] = 0xfffffffe;
    temp_v6 = temp_v6 + 2;
  } while (temp_v3 < 0x14);
  temp_v3 = param_3;
  QcUtility_GetQuestTableChunkCount(param_3,*param_1);
  temp_v6 = 0x100;
  asdMemoryAlloc(0x100,0x100,0,temp_v3 << 3,1);
  temp_v11 = 0;
  temp_v7 = 0;
  temp_v4 = dataTable26GroupGetRecord(param_3,*param_1,0);
  temp_v8 = 0;
  if (temp_v8 < temp_v3) {
    do {
      temp_v9 = temp_v4 + temp_v8 * 0x20;
      temp_v10 = temp_v9 + param_5;
      if ((*(char *)(temp_v10 + 0x1a) != '\0') &&
         ((*(short *)(temp_v9 + 0x18) == 0 || (temp_v5 = gameFlagIsSet(), temp_v5 == 0)))) {
        puVar7 = (unsigned short *)(temp_v6 + temp_v7 * 8);
        temp_v0 = *(unsigned char *)(temp_v10 + 0x1a);
        *puVar7 = (short)temp_v8;
        temp_v11 = temp_v11 + temp_v0;
        puVar7[1] = *(unsigned short *)(temp_v9 + 0x16);
        temp_v7 = (int)(short)((short)temp_v7 + 1);
        *(unsigned int *)(puVar7 + 2) = (unsigned int)*(unsigned char *)(temp_v10 + 0x1a);
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < temp_v3);
  }
  if ((*(short *)(param_1 + 0xc) != 0) && (temp_v3 = 0, 0 < temp_v7)) {
    do {
      if (*(short *)(temp_v6 + temp_v3 * 8 + 2) == *(short *)(param_1 + 0xc)) {
        puVar8 = (unsigned short *)(temp_v6 + temp_v3 * 8);
        *puVar12 = (unsigned int)*puVar8;
        temp_v3 = *(int *)(puVar8 + 2);
        puVar8[2] = 0;
        puVar8[3] = 0;
        temp_v11 = temp_v11 - temp_v3;
        break;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v7);
  }
  temp_v3 = 0;
  temp_v4 = QcUtility_CountFlaggedSubQuests();
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 != 2) {
        if (param_2 != 3) goto LAB_00381764;
        temp_v8 = QcActive_GetField26();
        temp_v3 = temp_v8 / 10 + temp_v4 / 10;
      }
      else {
        temp_v8 = QcActive_GetField24();
        temp_v3 = temp_v8 / 10 + temp_v4 / 10;
      }
    }
    else {
      temp_v8 = QcActive_GetField22();
      temp_v3 = temp_v8 / 10 + temp_v4 / 10;
    }
    if (temp_v8 < 10) {
      temp_v3 = 0;
    }
    else if (temp_v3 >= 0x51) {
      temp_v3 = 0x50;
    }
  }
  else {
    temp_v3 = QcActive_GetField20();
    temp_v3 = temp_v3 / 0x14 + temp_v4 / 10;
    if (temp_v3 >= 0x51) {
      temp_v3 = 0x50;
    }
  }
LAB_00381764:
  temp_v2 = 0;
  temp_v4 = 0;
  do {
    if (puVar12[temp_v4] == 0xfffffffe) {
      if (param_4 >= 0) {
        if (param_4 == temp_v4) {
LAB_003817d8:
          temp_v2 = 1;
          puVar12[temp_v4] = 0xffffffff;
          temp_v13 = 1;
          temp_v4 = temp_v4 + 1;
          if (temp_v4 >= 0x14) {
            asdMemFree(temp_v6);
            return temp_v13;
          }
          continue;
        }
      }
      else if ((((!temp_v2) && (param_6 <= temp_v4)) && (temp_v4 <= param_7)) &&
              ((temp_v4 == param_7 || ((temp_v3 != 0 && (temp_v8 = randNextInRange(99), temp_v8 < temp_v3))))))
      goto LAB_003817d8;
      temp_v8 = randNextInRange(temp_v11 & 0xffff);
      temp_v9 = 0;
      if (temp_v9 < temp_v7) {
        do {
          temp_v10 = temp_v6 + temp_v9 * 8;
          if ((*(int *)(temp_v10 + 4) != 0) && (temp_v8 = temp_v8 - *(int *)(temp_v10 + 4), temp_v8 < 1)) {
            temp_v1 = *(short *)(temp_v10 + 2);
            if ((temp_v1 == 3 || temp_v1 == 4) || temp_v1 == 5) {
              temp_v12 = SBORROW4(param_6,temp_v4);
              temp_v5 = param_6 - temp_v4;
              if (param_6 < temp_v4) {
                temp_v12 = SBORROW4(temp_v4,param_7);
                temp_v5 = temp_v4 - param_7;
              }
              if (temp_v5 < 0 == temp_v12) goto LAB_0038189c;
            }
            puVar12[temp_v4] = (unsigned int)*(unsigned short *)(temp_v6 + temp_v9 * 8);
            temp_v8 = *(int *)(temp_v10 + 4);
            *(unsigned int *)(temp_v10 + 4) = 0;
            temp_v11 = temp_v11 - temp_v8;
            break;
          }
LAB_0038189c:
          temp_v9 = temp_v9 + 1;
        } while (temp_v9 < temp_v7);
      }
    }
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 0x14) {
      asdMemFree(temp_v6);
      return temp_v13;
    }
  } while( 1 );
}

} /* extern "C" */
