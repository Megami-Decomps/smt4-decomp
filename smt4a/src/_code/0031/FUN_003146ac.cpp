/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003146ac` (_code @ 0x3146ac, 0x4c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0046e800(int, unsigned int);
int flagValueAdd(unsigned int, int);
int FUN_004813bc(...);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp4C; /* 0x4c: local_4c */
} param_2_stack;

extern int g_aocSystem; /* 0x570280 */
#ifndef ROMWRIGHT_STORAGE_s__a_a_00587f08_9_1_DEFINED
#define ROMWRIGHT_STORAGE_s__a_a_00587f08_9_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__a_a_00587f08_9_1 {
    char whole[9];
    unsigned char u1[9];
    signed char s1[9];
};
typedef char romwright_storage_s__a_a_00587f08_9_1_size_check[(sizeof(union romwright_storage_s__a_a_00587f08_9_1) == 9) ? 1 : -1];
typedef char romwright_storage_s__a_a_00587f08_9_1_u1_width_check[(sizeof(((union romwright_storage_s__a_a_00587f08_9_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__a_a_00587f08_9_1_s1_width_check[(sizeof(((union romwright_storage_s__a_a_00587f08_9_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__a_a_00587f08_9_1 s__a_a_00587f08; /* 0x587f08 */
extern unsigned int DAT_005f176c; /* 0x5f176c */

extern int gameDataBlocksGetSaveData(void);
extern int randRange(unsigned int);
extern int gameFlagsGetBlock(void);
extern int FUN_001774d8(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern int gameFlagIsSet(void);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
extern int FUN_001ba3d4(unsigned int);
/* Supplied declaration required: FUN_0046e800. */
/* Supplied declaration required: flagValueAdd. */
/* Supplied declaration required: FUN_004813bc. */


unsigned int FUN_003146ac(unsigned int param_1,int param_2)

{
/* irregular: 3 goto(s); 3 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned short *puVar6;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  short *psVar10;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10 [7];
  
  *(unsigned char *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0x14) = 0;
  temp_v2 = dataTableGet(0x20,0);
  temp_v3 = dataTableGetEntries();
  temp_v4 = dataTableGetCount(temp_v2);
  if ((param_1 < temp_v4) && (puVar6 = (unsigned short *)(temp_v3 + param_1 * 4), puVar6 != (unsigned short *)0x0)) {
    temp_v4 = (unsigned int)*puVar6;
    *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0x18) = (unsigned int)puVar6[1];
    temp_v3 = g_aocSystem;
    FUN_0046e800(g_aocSystem,temp_v4);
    if (temp_v3 == 0) {
      temp_v2 = dataTableGet(0x20,1);
      temp_v3 = dataTableGetEntries();
      temp_v7 = dataTableGetCount(temp_v2);
      if (temp_v7 <= temp_v4) {
        return 0;
      }
      temp_v3 = temp_v3 + temp_v4 * 0x30;
    }
    if (temp_v3 != 0) {
      if (((!(param_2 == 3 || param_2 == 4)) && (!(param_2 == 5 || param_2 == 7))) &&
         (!(param_2 == 0xd || param_2 == 0xf))) {
        if ((!(param_2 == 8 || param_2 == 9)) && (!(param_2 == 10 || param_2 == 0x10))) {
          temp_v8 = 0;
          temp_v9 = temp_v8;
          do {
            temp_v10[temp_v8] = 0;
            temp_v5 = (*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v8 * 4;
            *(unsigned int *)(temp_v5 + 0xcac) = 0;
            *(unsigned int *)(temp_v5 + 0xcbc) = 0;
            *(unsigned int *)(temp_v5 + 0xccc) = 0;
            psVar10 = (short *)(temp_v3 + temp_v8 * 0xc);
            if ((*psVar10 != 0) && ((psVar10[2] == 0 || (temp_v5 = gameFlagIsSet(), temp_v5 != 0)))) {
              temp_v9 = temp_v9 + (unsigned int)(unsigned short)psVar10[1];
            }
            temp_v8 = temp_v8 + 1;
          } while (temp_v8 < 4);
          if (temp_v9 != 0) {
            temp_v9 = randRange((temp_v9 - 1U) & 0xffff);
            temp_v5 = 0;
            temp_v8 = 0;
            do {
              psVar10 = (short *)(temp_v3 + temp_v8 * 0xc);
              if ((*psVar10 != 0) &&
                 (((psVar10[2] == 0 || (temp_v6 = gameFlagIsSet(), temp_v6 != 0)) &&
                  (temp_v2 = (*(unsigned int *)&s__a_a_00587f08.u1[0]), temp_v5 = temp_v5 + (unsigned int)(unsigned short)psVar10[1],
                  temp_v9 <= temp_v5)))) {
                temp_v10[0] = (unsigned int)*(unsigned short *)(temp_v3 + temp_v8 * 0xc);
                *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcac) = temp_v10[0];
                *(int *)(temp_v2 + 0xcbc) = (int)(char)psVar10[3];
                *(unsigned char *)(temp_v2 + 0xcdc) = 1;
                temp_v3 = FUN_004813bc(temp_v10[0]);
                if (temp_v3 == 0) {
                  *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xccc) = 1;
                }
                flagValueAdd(temp_v10[0],(int)(char)psVar10[3]);
                return 0;
              }
              temp_v8 = temp_v8 + 1;
            } while (temp_v8 < 4);
          }
        }
        else {
          *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcfc) = *(unsigned int *)(temp_v3 + 8);
          if ((int)param_1 < 0x200) {
            temp_v3 = gameFlagsGetBlock();
            *(unsigned char *)(temp_v3 + param_1 * 2 + 0x10a8) = 0xff;
          }
          else {
            temp_v3 = gameDataBlocksGetSaveData();
            *(unsigned char *)(temp_v3 + (param_1 - 0x200) * 2 + 0x29708) = 0xff;
          }
          *(unsigned char *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xcdc) = 1;
        }
      }
      else {
        temp_v9 = 0;
        do {
          temp_v8 = (*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v9 * 4;
          puVar6 = (unsigned short *)(temp_v3 + temp_v9 * 0xc);
          *(unsigned int *)(temp_v8 + 0xcac) = 0;
          *(unsigned int *)(temp_v8 + 0xcbc) = 0;
          *(unsigned int *)(temp_v8 + 0xccc) = 0;
          temp_v10[temp_v9] = 0;
          temp_v10[temp_v9] = (unsigned int)*puVar6;
          temp_v8 = (int)(char)puVar6[3];
          if ((int)param_1 < 0x200) {
            temp_v5 = gameFlagsGetBlock();
            if (temp_v9 >= 3) goto LAB_00314960;
            temp_v1 = *(char *)(temp_v5 + param_1 * 2 + temp_v9 + 0x10a8);
LAB_00314950:
            temp_v5 = (int)temp_v1;
            if (0 < temp_v5) {
              temp_v8 = temp_v5;
            }
            if (-1 < temp_v5) goto LAB_00314960;
            temp_v10[temp_v9] = 0;
          }
          else {
            temp_v5 = gameDataBlocksGetSaveData();
            if (temp_v9 < 3) {
              temp_v1 = *(char *)(temp_v5 + (param_1 - 0x200) * 2 + temp_v9 + 0x29708);
              goto LAB_00314950;
            }
LAB_00314960:
            if (temp_v10[temp_v9] != 0) {
              temp_v5 = FUN_001774d8();
              temp_v6 = FUN_001ba3d4(temp_v10[temp_v9]);
              temp_v2 = (*(unsigned int *)&s__a_a_00587f08.u1[0]);
              if (temp_v5 < temp_v6 + temp_v8) {
                temp_v6 = temp_v5 - temp_v6;
                if (0 < temp_v6) {
                  temp_v5 = 1;
                }
                *(unsigned char *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0x14) = 1;
                if (0 < temp_v6) {
                  *(unsigned char *)(temp_v2 + 0xcdc) = 1;
                  temp_v8 = temp_v2 + temp_v9 * 4;
                  *(unsigned int *)(temp_v8 + 0xcac) = temp_v10[temp_v9];
                  *(int *)(temp_v8 + 0xcbc) = temp_v6;
                  temp_v8 = FUN_004813bc();
                  if (temp_v8 == 0) {
                    *(int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v9 * 4 + 0xccc) = temp_v5;
                  }
                  flagValueAdd(temp_v10[temp_v9],temp_v6);
                }
                temp_v6 = (char)puVar6[3] - temp_v6;
                if (-1 < temp_v6) {
                  temp_v0 = (unsigned char)temp_v6;
                  if ((int)param_1 < 0x200) {
                    temp_v8 = gameFlagsGetBlock();
                    if (temp_v9 < 3) {
                      *(unsigned char *)(temp_v8 + param_1 * 2 + temp_v9 + 0x10a8) = temp_v0;
                    }
                  }
                  else {
                    temp_v8 = gameDataBlocksGetSaveData();
                    if (temp_v9 < 3) {
                      *(unsigned char *)(temp_v8 + (param_1 - 0x200) * 2 + temp_v9 + 0x29708) = temp_v0;
                    }
                  }
                }
                (&DAT_005f176c)[temp_v9] = temp_v10[temp_v9];
              }
              else {
                temp_v5 = (*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v9 * 4;
                *(unsigned int *)(temp_v5 + 0xcac) = temp_v10[temp_v9];
                *(int *)(temp_v5 + 0xcbc) = temp_v8;
                *(unsigned char *)(temp_v2 + 0xcdc) = 1;
                temp_v5 = FUN_004813bc(*(unsigned int *)(temp_v5 + 0xcac));
                if (temp_v5 == 0) {
                  *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v9 * 4 + 0xccc) = 1;
                }
                flagValueAdd(temp_v10[temp_v9],temp_v8);
                if ((int)param_1 < 0x200) {
                  temp_v8 = gameFlagsGetBlock();
                  if (temp_v9 < 3) {
                    *(unsigned char *)(temp_v8 + param_1 * 2 + temp_v9 + 0x10a8) = 0xff;
                  }
                }
                else {
                  temp_v8 = gameDataBlocksGetSaveData();
                  if (temp_v9 < 3) {
                    *(unsigned char *)(temp_v8 + (param_1 - 0x200) * 2 + temp_v9 + 0x29708) = 0xff;
                  }
                }
              }
            }
          }
          temp_v9 = temp_v9 + 1;
        } while (temp_v9 < 2);
      }
    }
  }
  return 0;
}

} /* extern "C" */
