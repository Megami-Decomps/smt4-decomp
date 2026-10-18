/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e980c` (_code @ 0x4e980c, 0x2d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char LAB_003d2d7c; /* 0x3d2d7c */
extern unsigned int DAT_00571150; /* 0x571150 */
extern unsigned int DAT_00571154; /* 0x571154 */
extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */
extern unsigned int DAT_00571170; /* 0x571170 */
extern unsigned int DAT_00571174; /* 0x571174 */

/* Supplied declaration required: FUN_0010063a. */
/* Supplied declaration required: FUN_00184310. */
extern int FUN_001ab854(int);
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_002e3d04. */
/* Supplied declaration required: FUN_002e6490. */
extern int FUN_004bd340(int, unsigned int);


void FUN_004e980c(int *param_1,int param_2)

{
/* irregular: 1 unstructured edge(s); 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char *pbVar5;
  int temp_v4;
  int temp_v5;
  unsigned char *pbVar8;
  unsigned int *puVar9;
  unsigned int temp_v6;
  unsigned char *pbVar11;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned char *pbVar16;
  
  temp_v2 = DAT_00571174;
  temp_v1 = DAT_00571170;
  temp_v0 = DAT_0057116c;
  temp_v8 = DAT_00571168;
  temp_v10 = DAT_00571154;
  temp_v9 = DAT_00571150;
  temp_v7 = 0;
  do {
    puVar9 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v7 * 0x408);
    temp_v3 = *puVar9;
    temp_v6 = puVar9[1];
    if ((((temp_v3 & temp_v9) == 0 && (temp_v6 & temp_v10) == 0) &&
        ((temp_v3 & temp_v1) == 0 && (temp_v6 & temp_v2) == 0)) &&
       ((temp_v3 & temp_v8) == 0 && (temp_v6 & temp_v0) == 0)) {
      *(unsigned char *)(param_2 + temp_v7 + 0x38) = 1;
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 4);
  FUN_001b4a90(*param_1 + 0x2018,3,0xffffffff);
  temp_v7 = FUN_001ab888();
  temp_v10 = (unsigned int)*(unsigned char *)(temp_v7 + 0x1ca3);
  pbVar5 = (unsigned char *)(temp_v10 * 6);
  FUN_002e3d04();
  temp_v9 = 0;
  if (temp_v10 != 0) {
    pbVar16 = pbVar5;
    pbVar8 = pbVar5 + 2;
    pbVar11 = pbVar5 + 4;
    temp_v8 = temp_v10;
    do {
      *pbVar16 = 0xff;
      *(unsigned short *)(pbVar8 + 0) = 0;
      temp_v8 = temp_v8 - 1;
      *pbVar11 = 0;
      pbVar16 = pbVar16 + 6;
      pbVar8 = pbVar8 + 6;
      pbVar11 = pbVar11 + 6;
    } while (temp_v8 != 0);
  }
  temp_v7 = 0;
  if (temp_v10 != 0) {
    do {
      temp_v4 = FUN_001ab888();
      if (-1 < *(char *)(temp_v4 + temp_v7 + 0x1c88)) {
        temp_v4 = FUN_001ab888();
        temp_v4 = FUN_001ab854((int)*(char *)(temp_v4 + temp_v7 + 0x1c88));
        if (((temp_v4 != 0) && (temp_v5 = FUN_004bd340(temp_v4,1), temp_v5 == 0)) &&
           (temp_v5 = FUN_004bd340(temp_v4,10), temp_v5 == 0)) {
          pbVar16 = pbVar5 + temp_v9 * 6;
          *pbVar16 = (unsigned char)temp_v7;
          *(unsigned short *)(pbVar16 + 2) = *(unsigned short *)(temp_v4 + 100);
          temp_v8 = (unsigned int)*(unsigned short *)(temp_v4 + 0x62);
          FUN_00184310();
          temp_v9 = temp_v9 + 1;
          pbVar16[4] = *(unsigned char *)(temp_v8 + 2);
        }
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < (int)temp_v10);
    if (temp_v9 != 0) {
      FUN_0010063a(pbVar5,temp_v9,6,&LAB_003d2d7c);
      if ((int)temp_v9 >= 4) {
        temp_v9 = 3;
      }
      if (0 >= (int)temp_v9) {
        temp_v10 = 0;
      }
      else {
        temp_v10 = temp_v9 & 1;
        if (temp_v10 == 1) {
          temp_v7 = *param_1;
          temp_v8 = 1 << ((*pbVar5 + 1) & 0xff);
          *(unsigned int *)(temp_v7 + 0x2008) = temp_v8 | *(unsigned int *)(temp_v7 + 0x2008);
          *(unsigned int *)(temp_v7 + 0x200c) = *(unsigned int *)(temp_v7 + 0x200c) | ((int)temp_v8 >> 0x1f);
          *(unsigned char *)(*param_1 + 0x2018) = *pbVar5 + 1;
        }
      }
      for (; (int)temp_v10 < (int)temp_v9; temp_v10 = temp_v10 + 2) {
        temp_v7 = *param_1;
        pbVar16 = pbVar5 + temp_v10 * 6;
        temp_v8 = 1 << ((*pbVar16 + 1) & 0xff);
        *(unsigned int *)(temp_v7 + 0x2008) = temp_v8 | *(unsigned int *)(temp_v7 + 0x2008);
        *(unsigned int *)(temp_v7 + 0x200c) = *(unsigned int *)(temp_v7 + 0x200c) | ((int)temp_v8 >> 0x1f);
        *(unsigned char *)(*param_1 + temp_v10 + 0x2018) = *pbVar16 + 1;
        temp_v7 = *param_1;
        temp_v8 = 1 << ((pbVar16[6] + 1) & 0xff);
        *(unsigned int *)(temp_v7 + 0x2008) = temp_v8 | *(unsigned int *)(temp_v7 + 0x2008);
        *(unsigned int *)(temp_v7 + 0x200c) = *(unsigned int *)(temp_v7 + 0x200c) | ((int)temp_v8 >> 0x1f);
        *(unsigned char *)(*param_1 + temp_v10 + 0x2019) = pbVar16[6] + 1;
      }
    }
  }
  FUN_002e6490(pbVar5);
  return;
}
