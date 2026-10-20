/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e0314` (_code @ 0x4e0314, 0x2b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003eaf20(...);
int FUN_003f1b3c(...);
int FUN_0047f7ac(...);
int FUN_004c9160(...);
int FUN_004c9d04(...);
int FUN_004fb43c(...);
int FUN_004fcf0c(...);
int FUN_004fdc9c(...);
int FUN_004fe764(...);

typedef struct fn_004e0314_arg1 fn_004e0314_arg1;
struct fn_004e0314_arg1 {
    unsigned char pad_0x0[0x8];
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x5a4];
    short field_0x5b0; /* +0x5b0 */
    short field_0x5b2; /* +0x5b2 */
    short field_0x5b4; /* +0x5b4 */
    short field_0x5b6; /* +0x5b6 */
};

/* stack frame of param_2: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern int g_btlScriptUnit; /* 0x57113c */
extern unsigned int DAT_00571148; /* 0x571148 */
extern unsigned int DAT_0057114c; /* 0x57114c */
extern unsigned int DAT_00571178; /* 0x571178 */
extern unsigned int DAT_0057117c; /* 0x57117c */
extern unsigned int g_btlActionReflect; /* 0x5712f0 */

extern unsigned int FUN_0019acdc(unsigned short, unsigned int);
extern int gameGetSlotRecord(void);
extern int gameGetSlotTable(void);
/* Supplied declaration required: FUN_003eaf20. */
/* Supplied declaration required: FUN_003f1b3c. */
extern int chainCountIdUnflagged(unsigned int);
/* Supplied declaration required: FUN_0047f7ac. */
/* Supplied declaration required: FUN_004c9160. */
/* Supplied declaration required: FUN_004c9d04. */
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: FUN_004fcf0c. */
/* Supplied declaration required: FUN_004fdc9c. */
/* Supplied declaration required: FUN_004fe764. */


unsigned int FUN_004e0314(int *param_1,fn_004e0314_arg1 *param_2)

{
/* irregular: 9 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  int *piVar7;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  
  temp_v1 = chainCountIdUnflagged(g_btlActionReflect);
  if (0 < temp_v1) {
    return 0;
  }
  if ((-1 < param_2->field_0x5b6) ||
     (-1 < param_2->field_0x5b4 || (-1 < param_2->field_0x5b2 || -1 < param_2->field_0x5b0))) {
    temp_v1 = param_2->field_0x8 + 1;
    param_2->field_0x8 = temp_v1;
    if (temp_v1 < 10) {
      return 0;
    }
    temp_v1 = *param_1;
    FUN_003eaf20();
    temp_v9 = temp_v1;
    FUN_004c9160(0x38,temp_v1,0,1);
    FUN_004fe764(0,param_2,0,10,6);
    FUN_004fb43c(0,param_2,0x1000296,0,1,0,0);
    temp_v1 = 0;
    do {
      puVar5 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v1 * 0x408);
      if ((((DAT_00571148 & *puVar5) != 0 || (DAT_0057114c & puVar5[1]) != 0) &&
          ((puVar5[1] & DAT_0057117c) == 0 && (*puVar5 & DAT_00571178) == 0)) &&
         ((puVar5[0x9d] & 0x400) != 0)) {
        FUN_004c9d04((int)*(short *)((int)puVar5 + 0x6e),0,0);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x6d);
    temp_v6 = 1;
    temp_v1 = gameGetSlotTable();
    temp_v5 = 0;
    do {
      temp_v0 = (&param_2->field_0x5b0)[temp_v5];
      if ((-1 < temp_v0) && (temp_v4 = 0, *(unsigned char *)(temp_v1 + 0x1ca3) != 0)) {
        do {
          if ((-1 < *(char *)(temp_v1 + temp_v4 + 0x1c88)) &&
             (temp_v2 = gameGetSlotRecord(), (unsigned int)*(unsigned short *)(temp_v2 + 0x62) == (int)temp_v0)) {
            *(unsigned short *)(temp_v2 + 0x60) = *(unsigned short *)(temp_v2 + 0x60) & 0xfbff;
            FUN_004fcf0c(temp_v6,param_2,0,temp_v4,temp_v5,0);
            temp_v6 = temp_v6 + 10;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < (int)(unsigned int)*(unsigned char *)(temp_v1 + 0x1ca3));
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 4);
    piVar7 = (int *)(temp_v9 + 0x400);
    temp_v3 = FUN_0019acdc(*(unsigned short *)(*(int *)(temp_v9 + 0x400) + 300),1);
    FUN_003f1b3c(*param_1,temp_v3,0xb,&temp_v7,&temp_v8);
    FUN_0047f7ac(0,temp_v8);
    FUN_004fdc9c(temp_v6 + 0xf,param_2,*(unsigned short *)(*piVar7 + 300),temp_v7);
  }
  *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x20;
  return 1;
}

} /* extern "C" */
