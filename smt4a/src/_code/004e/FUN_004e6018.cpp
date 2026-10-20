/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e6018` (_code @ 0x4e6018, 0x240 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(unsigned short [10], int, int, unsigned char *);
int dataTable04FindById(void);
int FUN_004a9308(...);
int source4CCopyHalves(unsigned int, unsigned short [10]);
int FUN_004c9160(int, unsigned int, int, int);
int btlUnitSetParam(int *, int, int, int);
int FUN_004eb838(int *, unsigned int *);

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned char LAB_003d4e98; /* 0x3d4e98 */
extern unsigned char LAB_003de0ac; /* 0x3de0ac */
extern int g_btlScriptUnit; /* 0x57113c */
extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */
extern unsigned int DAT_00571170; /* 0x571170 */
extern unsigned int DAT_00571174; /* 0x571174 */
extern unsigned int DAT_00571260; /* 0x571260 */
extern unsigned int DAT_00571264; /* 0x571264 */
extern unsigned int g_btlUiBlock; /* 0x57a9c8 */

/* Supplied declaration required: qsort. */
extern int lcgRandomRange(unsigned int);
/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: FUN_004a9308. */
/* Supplied declaration required: source4CCopyHalves. */
/* Supplied declaration required: FUN_004c9160. */
/* Supplied declaration required: btlUnitSetParam. */
/* Supplied declaration required: FUN_004eb838. */


unsigned int FUN_004e6018(int *param_1,unsigned int *param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned short temp_v6 [10];
  
  temp_v2 = lcgRandomRange(1);
  temp_v4 = 0;
  temp_v0 = (*(unsigned int *)(*param_1 + 0x45a0) & DAT_00571260) == 0;
  temp_v1 = (*(unsigned int *)(*param_1 + 0x45a4) & DAT_00571264) == 0;
  temp_v5 = temp_v0 && temp_v1;
  if (temp_v0 && temp_v1) {
    temp_v5 = temp_v2 == 1;
  }
  if (temp_v5) {
    temp_v6[0] = 0;
    temp_v6[1] = 0;
    temp_v6[2] = 0;
    temp_v6[3] = 0;
    temp_v6[4] = 0;
    temp_v6[5] = 0;
    temp_v6[6] = 0;
    temp_v6[7] = 0;
    temp_v6[8] = 0;
    temp_v6[9] = 0;
    source4CCopyHalves(param_2[8],temp_v6);
    temp_v2 = 0;
    do {
      temp_v3 = (unsigned int)temp_v6[temp_v2];
      if (temp_v3 != 0) {
        dataTable04FindById();
        if (((temp_v3 != 0) && ((*(unsigned int *)(temp_v3 + 0x28) & 0x600) != 0)) &&
           ((*(unsigned int *)(temp_v3 + 0x28) & 0x600) != 0x200)) {
          temp_v4 = temp_v4 + 1;
        }
        else {
          temp_v6[temp_v2] = 0;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 9);
    if (temp_v4 != 0) {
      qsort(temp_v6,9,2,&LAB_003de0ac);
      FUN_004c9160(10,param_2[8],0,1);
      qsort(temp_v6,temp_v4,2,&LAB_003d4e98);
      temp_v2 = lcgRandomRange((temp_v4 - 1U) & 0xffff);
      *(unsigned short *)(param_2[10] + 0x1be) = 2;
      *(unsigned short *)(param_2[10] + 0x1c0) = temp_v6[temp_v2];
      *param_2 = *param_2 | 0x8000;
      temp_v3 = (unsigned int)temp_v6[temp_v2];
      dataTable04FindById();
      if ((*(unsigned int *)(temp_v3 + 0x28) & 0x1ff) >> 5 == 4) {
        btlUnitSetParam(param_1,0xf,0,1);
      }
      else {
        btlUnitSetParam(param_1,2,0,1);
      }
      FUN_004eb838(param_1,param_2);
      return 1;
    }
  }
  FUN_004c9160(9,param_2[8],0,1);
  if (((DAT_00571170 | DAT_00571168) & *(unsigned int *)param_2[8]) == 0 &&
      ((DAT_0057116c | DAT_00571174) & ((unsigned int *)param_2[8])[1]) == 0) {
    FUN_004a9308(g_btlUiBlock,(short)param_2[0xb],0);
  }
  *(unsigned short *)(param_2[10] + 0x1be) = 0xf;
  *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x13;
  return 1;
}

} /* extern "C" */
