/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039e338` (_code @ 0x39e338, 0x1fc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int FUN_004c8340(unsigned int, int, unsigned int, int, unsigned int);
int FUN_004fb43c(...);
int FUN_004fcffc(...);
int FUN_004fda78(int, int, unsigned int, int, int, int);
int FUN_004fdb18(int, unsigned int, int, int, int);

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned int DAT_005710e8; /* 0x5710e8 */
extern unsigned int DAT_005710ec; /* 0x5710ec */
extern unsigned int DAT_00571108; /* 0x571108 */
extern unsigned int DAT_0057110c; /* 0x57110c */
extern unsigned int g_btlScriptUnit; /* 0x57113c */

extern int btlGetMainState(void);
/* Supplied declaration required: scrGetArg. */
extern unsigned int FUN_004bf9a0(unsigned int);
/* Supplied declaration required: FUN_004c8340. */
extern unsigned int btlUnitGet(unsigned int);
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: FUN_004fcffc. */
/* Supplied declaration required: FUN_004fda78. */
/* Supplied declaration required: FUN_004fdb18. */


unsigned int FUN_0039e338(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int *puVar10;
  int *piVar11;
  
  temp_v1 = scrGetArg(0);
  temp_v2 = scrGetArg(1);
  temp_v3 = scrGetArg(2);
  temp_v4 = btlUnitGet(g_btlScriptUnit);
  temp_v5 = btlGetMainState();
  temp_v0 = 1 << (temp_v1 & 0xff);
  temp_v8 = 0;
  piVar11 = (int *)(temp_v5 + 0x1ed4);
  do {
    puVar10 = (unsigned int *)(*(int *)(temp_v5 + 0x1ffc) + temp_v8 * 0x408);
    if ((DAT_005710e8 & *puVar10) != 0 || (puVar10[1] & DAT_005710ec) != 0) {
      if (((puVar10[1] & DAT_0057110c) == 0 && (*puVar10 & DAT_00571108) == 0) &&
         (-1 < (short)puVar10[2])) {
        if (temp_v2 != 0) {
          if (temp_v3 != 0) {
            temp_v6 = FUN_004bf9a0(temp_v1);
            temp_v7 = 0xffffffff;
            FUN_004c8340(0xffffffff,(int)(short)puVar10[2],temp_v6,2,0xffffffff);
            if ((temp_v7 & 0x10000) != 0) {
              FUN_004fda78(0,0,temp_v4,*piVar11 + (short)puVar10[2] * 0x1d0,4,0);
              FUN_004fb43c(0,temp_v4,0x100028c,0,1,0,0);
              temp_v8 = temp_v8 + 1;
              if (temp_v8 >= 4) {
                return 1;
              }
              continue;
            }
          }
          FUN_004fdb18(0,temp_v4,*piVar11 + (short)puVar10[2] * 0x1d0,temp_v0,1);
          if (temp_v1 != 4) {
            FUN_004fb43c(0,temp_v4,0x100025f,0,0,0,0);
          }
          else {
            FUN_004fb43c(0,temp_v4,0x1000275,0,0,0,0);
          }
        }
        else {
          FUN_004fcffc(0,temp_v4,*piVar11 + (short)puVar10[2] * 0x1d0,temp_v0);
        }
      }
    }
    temp_v8 = temp_v8 + 1;
    if (temp_v8 >= 4) {
      return 1;
    }
  } while( 1 );
}

} /* extern "C" */
