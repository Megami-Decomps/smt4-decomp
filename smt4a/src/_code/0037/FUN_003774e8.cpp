/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003774e8` (_code @ 0x3774e8, 0x4e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int randRange(...);
int aocRecordLookup83(void);
int flagValueAdd(int, int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_4: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_4_stack;

extern int g_mapDepart; /* 0x5806c4 */
extern unsigned char g_gameState; /* 0x5f15fc */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: randRange. */
extern int saveSlotFindSelected(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern int gameFlagIsSet(unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
extern int FUN_003e4d68(unsigned int);
/* Supplied declaration required: aocRecordLookup83. */
/* Supplied declaration required: flagValueAdd. */
extern int gamePackedFlagTest(int);


int FUN_003774e8(unsigned int param_1,int param_2,int param_3,int *param_4)

{
/* irregular: 14 goto(s); irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  short temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned char *pbVar11;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  unsigned char temp_v14;
  int temp_v15;
  unsigned char temp_v16;
  int temp_v17;
  unsigned char temp_v18;
  unsigned int in_fpscr;
  int temp_v19;
  short asStack_1e0 [200];
  int temp_v20;
  unsigned char *temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int uStack_34;
  int iStack_30;
  int temp_v26;
  int *piStack_28;
  
  temp_v5 = g_mapDepart;
  uStack_34 = param_1;
  iStack_30 = param_2;
  temp_v26 = param_3;
  piStack_28 = param_4;
  temp_v6 = dataTableGet(0x42,0);
  temp_v7 = dataTableGetEntries();
  temp_v8 = dataTableGetCount(temp_v6);
  if (param_1 < temp_v8) {
    temp_v22 = param_1 * 3;
    temp_v7 = temp_v7 + param_1 * 0xc;
    temp_v8 = 0;
    if (temp_v7 != 0) {
      temp_v8 = param_1;
    }
    if ((temp_v7 != 0 && param_1 != 0) && -1 < (int)temp_v8) {
      if ((*(signed char *)((unsigned char *)&g_gameState + 0x666)) == '\0') {
        temp_v6 = randRange(99);
        temp_v19 = VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
        if (temp_v19 >= 0x41a00000) {
          return 0;
        }
      }
      temp_v19 = 0;
      temp_v15 = 0;
      temp_v8 = 0;
      do {
        temp_v9 = FUN_003e4d68(temp_v8 & 0xffff);
        temp_v8 = temp_v8 + 1;
        if ((*(unsigned int *)(temp_v9 + 0x130) & 1) != 0) {
          temp_v15 = temp_v15 + 1;
        }
      } while ((int)temp_v8 < 0xc);
      if (0 < temp_v15) {
        if (temp_v15 < 3) {
          temp_v15 = 0;
        }
        else if (temp_v15 < 5) {
          temp_v15 = 1;
        }
        else {
          temp_v15 = 2;
        }
        pbVar11 = (unsigned char *)(temp_v7 + temp_v15 * 2);
        temp_v8 = (unsigned int)*pbVar11;
        temp_v7 = randRange((pbVar11[1] - temp_v8) & 0xffff);
        temp_v7 = temp_v7 + temp_v8;
        if (temp_v7 != 0) {
          *param_4 = temp_v7;
          temp_v20 = saveSlotFindSelected();
          if (temp_v20 != 0) {
            temp_v21 = (unsigned char *)asStack_1e0;
            temp_v6 = dataTableGet(0x42,0);
            temp_v15 = dataTableGetEntries();
            temp_v8 = dataTableGetCount(temp_v6);
            if (param_1 >= temp_v8) {
              temp_v15 = 0;
            }
            else {
              temp_v15 = temp_v15 + temp_v22 * 4;
            }
            temp_v22 = (unsigned int)*(unsigned char *)(temp_v15 + 8);
            temp_v0 = *(unsigned char *)(temp_v15 + 6);
            temp_v16 = *(unsigned char *)(temp_v15 + 7);
            temp_v23 = (unsigned int)*(unsigned char *)(temp_v15 + 9);
            temp_v24 = (unsigned int)*(unsigned char *)(temp_v15 + 10);
            temp_v25 = (unsigned int)*(unsigned char *)(temp_v15 + 0xb);
            temp_v14 = temp_v0;
            if (temp_v16 < temp_v0) {
              temp_v14 = temp_v16;
              temp_v16 = temp_v0;
            }
            temp_v8 = 0x3b7;
            temp_v15 = 0;
            do {
              temp_v10 = temp_v8;
              aocRecordLookup83();
              temp_v9 = temp_v20;
              if (((temp_v10 != 0) && (temp_v14 <= *(unsigned char *)(temp_v10 + 0x24))) &&
                 (*(unsigned char *)(temp_v10 + 0x24) <= temp_v16)) {
                temp_v12 = (unsigned int)*(unsigned char *)(temp_v10 + 0x25);
                if (temp_v12 == temp_v22) {
                  temp_v13 = temp_v15 * 2;
                  temp_v15 = temp_v15 + 1;
                  *(unsigned short *)(temp_v21 + temp_v13) = *(unsigned short *)(temp_v10 + 0x20);
                } else {
                  temp_v18 = temp_v12 != temp_v23;
                  temp_v3 = temp_v23;
                  if (temp_v18) {
                    temp_v3 = temp_v24;
                  }
                  temp_v4 = temp_v3;
                  if (temp_v18 && temp_v12 != temp_v3) {
                    temp_v4 = temp_v25;
                  }
                  if (!((temp_v18 && temp_v12 != temp_v3) && temp_v12 != temp_v4)) {
                    temp_v13 = temp_v15 * 2;
                    temp_v15 = temp_v15 + 1;
                    *(unsigned short *)(temp_v21 + temp_v13) = *(unsigned short *)(temp_v10 + 0x20);
                  }
                }
              }
              temp_v8 = temp_v8 + 1;
            } while (temp_v8 < 0x47f);
            if ((short)temp_v15 != 0) {
              *(unsigned int *)(temp_v5 + 0xa4) = 0;
              temp_v13 = 1;
              *(unsigned int *)(temp_v5 + 0xa8) = 0;
              if (0 < temp_v7) {
                temp_v21 = (unsigned char *)((int)(short)temp_v15 - 1);
                do {
                  temp_v15 = randRange((unsigned int)temp_v21 & 0xffff);
                  temp_v17 = (int)asStack_1e0[temp_v15];
                  temp_v15 = gamePackedFlagTest(temp_v17);
                  temp_v13 = 1;
                  *(unsigned char *)(temp_v26 + temp_v19) = temp_v15 == 0;
                  flagValueAdd(temp_v17,1);
                  temp_v15 = temp_v17;
                  aocRecordLookup83();
                  temp_v1 = *(char *)(temp_v15 + 0x25);
                  if (temp_v1 != '\t') {
                    if (temp_v1 == '\n') {
                      temp_v2 = *(short *)(temp_v9 + 300);
                      if (!((temp_v2 != 0xae && temp_v2 != 0xb0) && temp_v2 != 5)) {
LAB_00377948:
                        temp_v13 = 2;
                      }
                      goto LAB_0037794c;
                    }
                    if (temp_v1 == '\x01') {
                      temp_v2 = *(short *)(temp_v9 + 300);
                      if (((temp_v2 != 0xaf && temp_v2 != 0xb1) && (temp_v2 != 0xb2 && temp_v2 != 0xb3)) &&
                         ((temp_v2 != 0xbf && temp_v2 != 0xc0 && (temp_v2 != 0xb9 && temp_v2 != 0xba))))
                      goto LAB_0037799c;
                      goto LAB_00377948;
                    }
                    if (temp_v1 == '\x02') {
                      temp_v2 = *(short *)(temp_v9 + 300);
                      if (((temp_v2 != 0xb0 && temp_v2 != 0xb2) && (temp_v2 != 0xb3 && temp_v2 != 5)) &&
                         (temp_v2 != 0xb9 && temp_v2 != 0xba)) goto LAB_0037794c;
                      goto LAB_00377948;
                    }
                    if (temp_v1 == '\x03') {
                      temp_v2 = *(short *)(temp_v9 + 300);
                      if ((temp_v2 != 0xae && temp_v2 != 0xb2) && temp_v2 != 0xb9) goto LAB_0037794c;
                      goto LAB_00377948;
                    }
                    if (temp_v1 != '\x04') {
                      if (temp_v1 != '\x05') {
                        if (temp_v1 != '\x06') {
                          if (temp_v1 != '\a') {
                            if (temp_v1 != '\b') {
                              if (temp_v1 != '\v') goto LAB_0037794c;
                            }
                            else {
                              temp_v2 = *(short *)(temp_v9 + 300);
                              if (((temp_v2 != 0xaf && temp_v2 != 0xb1) &&
                                  (temp_v2 != 0xb2 && temp_v2 != 0xb3)) &&
                                 ((temp_v2 != 0xbf && temp_v2 != 0xc0 &&
                                  (temp_v2 != 0xb9 && temp_v2 != 0xba)))) goto LAB_0037799c;
                            }
                          }
                          else if (*(short *)(temp_v9 + 300) != 0xb0 && *(short *)(temp_v9 + 300) != 5
                                  ) goto LAB_0037794c;
                        }
                        else {
                          temp_v2 = *(short *)(temp_v9 + 300);
                          if (((temp_v2 != 0xae && temp_v2 != 0xaf) && (temp_v2 != 0xb1 && temp_v2 != 0xb3))
                             && ((temp_v2 != 0xbf && temp_v2 != 0xc0) && temp_v2 != 0xba))
                          goto LAB_0037799c;
                        }
                      }
                      else {
                        temp_v2 = *(short *)(temp_v9 + 300);
                        if ((temp_v2 != 0xb0 && temp_v2 != 0xb3) && temp_v2 != 0xba) goto LAB_0037794c;
                      }
                      goto LAB_00377948;
                    }
                    temp_v2 = *(short *)(temp_v9 + 300);
                    if ((temp_v2 == 0xae || temp_v2 == 0xaf) ||
                       ((temp_v2 == 0xb1 || temp_v2 == 0xbf) || temp_v2 == 0xc0)) goto LAB_00377948;
                  }
                  else {
                    temp_v2 = *(short *)(temp_v9 + 300);
                    if ((temp_v2 == 0xae || temp_v2 == 0xb2) || (temp_v2 == 5 || temp_v2 == 0xb9)) {
                      temp_v13 = 2;
                    }
LAB_0037794c:
                    if ((*(short *)(temp_v9 + 300) == 0xb1) &&
                       (temp_v11 = gameFlagIsSet(0xc2), temp_v11 == 0)) {
                      temp_v13 = 1;
                    }
                    else if ((temp_v13 == 2) &&
                            ((*(int *)(temp_v5 + 0xa8) == 0 ||
                             (*(int *)(temp_v5 + 0xa8) < (int)(unsigned int)*(unsigned char *)(temp_v15 + 0x24))))) {
                      *(unsigned int *)(temp_v5 + 0xa4) = (unsigned int)*(unsigned char *)(temp_v15 + 0x25);
                      *(unsigned int *)(temp_v5 + 0xa8) = (unsigned int)*(unsigned char *)(temp_v15 + 0x24);
                    }
                  }
LAB_0037799c:
                  if (param_2 != 0) {
                    *(int *)(param_2 + temp_v19 * 4) = temp_v17;
                  }
                  temp_v19 = temp_v19 + 1;
                } while (temp_v19 < temp_v7);
                if (*(int *)(temp_v5 + 0xa4) != 0) {
                  temp_v13 = 2;
                }
              }
              return temp_v13;
            }
          }
        }
      }
    }
  }
  return 0;
}

} /* extern "C" */
