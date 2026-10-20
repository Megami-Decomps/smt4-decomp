/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002765d0` (_code @ 0x2765d0, 0x32c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameFlagIsSet(...);
int dataTableGetCount(...);
int dataTableGet(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int g_aocSystem; /* 0x433158 */
extern int g_gameState; /* 0x49f91c */
extern int DAT_0049f920; /* 0x49f920 */
extern signed char DAT_0049f942; /* 0x49f942 */

extern int FUN_002757c8(void);
extern unsigned int FUN_00285574(void);
extern int FUN_00298dc8(short);
/* Supplied declaration required: gameFlagIsSet. */
/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(void);
/* Supplied declaration required: dataTableGet. */
extern int gameGetMapBlock(void);


unsigned char * FUN_002765d0(void)

{
/* irregular: 3 goto(s); 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char *pbVar8;
  unsigned char temp_v7;
  
  temp_v0 = gameGetMapBlock();
  temp_v1 = FUN_002757c8();
  if (DAT_0049f942 != '\0') {
    temp_v2 = FUN_00285574();
    if (temp_v2 != 0) {
      temp_v6 = 0;
      dataTableGet(0x23,7);
      temp_v3 = dataTableGetCount();
      if (0 < temp_v3 + *(int *)(g_aocSystem + 0x41c)) {
        do {
          temp_v4 = dataTableGet(0x23,7);
          temp_v3 = dataTableGetEntries();
          temp_v5 = dataTableGetCount(temp_v4);
          if (temp_v6 < temp_v5) {
            pbVar8 = (unsigned char *)(temp_v3 + temp_v6 * 0xc);
          }
          else if (temp_v6 >= temp_v5 + *(int *)(g_aocSystem + 0x41c)) {
            pbVar8 = (unsigned char *)0x0;
          }
          else {
            pbVar8 = (unsigned char *)(*(int *)(g_aocSystem + 0x420) + (temp_v6 - temp_v5) * 0xc);
          }
          temp_v5 = (unsigned int)*pbVar8;
          temp_v7 = temp_v5 == 2;
          if (temp_v7) {
            temp_v5 = (unsigned int)(char)pbVar8[3];
          }
          if (temp_v7 && temp_v5 == temp_v2) {
            if (*(short *)(pbVar8 + 4) != 0) {
              temp_v3 = gameFlagIsSet();
              if (temp_v3 != 0) {
                if (*(short *)(pbVar8 + 6) != 0) goto LAB_002766cc;
                if (((*(short *)(pbVar8 + 8) == 0) ||
                    (temp_v3 = FUN_00298dc8(*(short *)(pbVar8 + 8)), temp_v3 != 0)) &&
                   (*(short *)(pbVar8 + 10) != 1 || temp_v1 != 0)) {
                  if (*(unsigned int *)(temp_v0 + 0xe54) == temp_v6) {
                    return (unsigned char *)0x0;
                  }
                  *(unsigned int *)(temp_v0 + 0xe54) = temp_v6;
                  return pbVar8;
                }
              }
            }
            else if (*(short *)(pbVar8 + 6) != 0) {
LAB_002766cc:
              temp_v3 = gameFlagIsSet((int)*(short *)(pbVar8 + 6));
              if (temp_v3 == 0) {
                if (((*(short *)(pbVar8 + 8) == 0) ||
                    (temp_v3 = FUN_00298dc8(*(short *)(pbVar8 + 8)), temp_v3 != 0)) &&
                   (*(short *)(pbVar8 + 10) != 1 || temp_v1 != 0)) {
                  if (*(unsigned int *)(temp_v0 + 0xe54) == temp_v6) {
                    return (unsigned char *)0x0;
                  }
                  *(unsigned int *)(temp_v0 + 0xe54) = temp_v6;
                  return pbVar8;
                }
              }
            }
          }
          temp_v6 = temp_v6 + 1;
          dataTableGet(0x23,7);
          temp_v3 = dataTableGetCount();
        } while ((int)temp_v6 < temp_v3 + *(int *)(g_aocSystem + 0x41c));
      }
    }
  }
  else {
    temp_v6 = 0;
    dataTableGet(0x23,7);
    temp_v3 = dataTableGetCount();
    if (0 < temp_v3 + *(int *)(g_aocSystem + 0x41c)) {
      do {
        temp_v4 = dataTableGet(0x23,7);
        temp_v3 = dataTableGetEntries();
        temp_v2 = dataTableGetCount(temp_v4);
        if (temp_v6 < temp_v2) {
          pbVar8 = (unsigned char *)(temp_v3 + temp_v6 * 0xc);
        }
        else if (temp_v6 >= temp_v2 + *(int *)(g_aocSystem + 0x41c)) {
          pbVar8 = (unsigned char *)0x0;
        }
        else {
          pbVar8 = (unsigned char *)(*(int *)(g_aocSystem + 0x420) + (temp_v6 - temp_v2) * 0xc);
        }
        if (((*pbVar8 == 1) && ((char)pbVar8[1] == g_gameState)) &&
           ((char)pbVar8[2] == DAT_0049f920)) {
          if (*(short *)(pbVar8 + 4) != 0) {
            temp_v3 = gameFlagIsSet();
            if (temp_v3 != 0) {
              if (*(short *)(pbVar8 + 6) != 0) goto LAB_00276848;
LAB_00276870:
              if (((*(short *)(pbVar8 + 8) == 0) ||
                  (temp_v3 = FUN_00298dc8(*(short *)(pbVar8 + 8)), temp_v3 != 0)) &&
                 (*(short *)(pbVar8 + 10) != 1 || temp_v1 != 0)) {
                if (*(unsigned int *)(temp_v0 + 0xe54) == temp_v6) {
                  return (unsigned char *)0x0;
                }
                *(unsigned int *)(temp_v0 + 0xe54) = temp_v6;
                return pbVar8;
              }
            }
          }
          else if (*(short *)(pbVar8 + 6) != 0) {
LAB_00276848:
            temp_v3 = gameFlagIsSet((int)*(short *)(pbVar8 + 6));
            if (temp_v3 == 0) goto LAB_00276870;
          }
        }
        temp_v6 = temp_v6 + 1;
        dataTableGet(0x23,7);
        temp_v3 = dataTableGetCount();
      } while ((int)temp_v6 < temp_v3 + *(int *)(g_aocSystem + 0x41c));
    }
  }
  *(unsigned int *)(temp_v0 + 0xe54) = 0xffffffff;
  return (unsigned char *)0x0;
}

} /* extern "C" */
