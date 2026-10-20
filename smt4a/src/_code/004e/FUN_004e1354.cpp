/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e1354` (_code @ 0x4e1354, 0x294 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004e0114(int *, unsigned int *, int, int, int, int);
int FUN_004e753c(int *, unsigned int *, int);
int FUN_004e81bc(int *, unsigned int *, int);
int FUN_004f8f08(unsigned int);
int FUN_004fbeac(int, unsigned int *, int, int, int);
int FUN_004fe764(int, unsigned int *, unsigned int, int, int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int g_btlScriptUnit; /* 0x57113c */
extern unsigned int DAT_00571260; /* 0x571260 */
extern unsigned int DAT_00571264; /* 0x571264 */
extern unsigned int DAT_005712f0; /* 0x5712f0 */
extern unsigned int DAT_00573808; /* 0x573808 */
extern unsigned int g_btlEvent; /* 0x573898 */

extern int FUN_0040de1c(unsigned int, unsigned int *);
extern int FUN_004d84e8(unsigned int);
/* Supplied declaration required: FUN_004e0114. */
/* Supplied declaration required: FUN_004e753c. */
/* Supplied declaration required: FUN_004e81bc. */
/* Supplied declaration required: FUN_004f8f08. */
/* Supplied declaration required: FUN_004fbeac. */
/* Supplied declaration required: FUN_004fe764. */


unsigned int FUN_004e1354(int *param_1,unsigned int *param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  temp_v0 = *param_1;
  if ((((*(unsigned int *)(temp_v0 + 0x45a4) & DAT_00571264) == 0 &&
        (*(unsigned int *)(temp_v0 + 0x45a0) & DAT_00571260) == 0) &&
      ((*(unsigned int *)(temp_v0 + 0x10c) & 0x40000) != 0)) && ((*param_2 & 0x2000) == 0)) {
    temp_v0 = FUN_0040de1c(DAT_005712f0,param_2);
    if (temp_v0 == 0) {
      *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 1;
      FUN_004f8f08(DAT_00573808);
      return 1;
    }
    return 0;
  }
  if (*(int *)(temp_v0 + 0xa8) != 4) {
    FUN_004e81bc(param_1,param_2,0);
    piVar2 = param_1;
    FUN_004e753c(param_1,param_2,0);
    if (param_2[0x15b] == 0x20) {
      FUN_004fe764(0,param_2,*(unsigned int *)(*param_1 + 0x1ed4),9,0xb);
    }
    if (param_2[0x15b] == 0x25) {
      FUN_004fbeac(0,param_2,0,2,0);
    }
    param_2[0x15b] = param_2[0x15b] + 1;
    temp_v0 = FUN_0040de1c(DAT_005712f0,param_2);
    if (0 < temp_v0) {
      return 0;
    }
    if (piVar2 != (int *)0x0) {
      param_2[0x48c] = 0;
      *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x1d;
      *param_2 = *param_2 & 0xffffdfff;
      return 1;
    }
    if (*(int *)(*param_1 + 0xa8) != 4) {
      return 0;
    }
  }
  temp_v0 = FUN_004d84e8(g_btlEvent);
  if (temp_v0 == 0) {
    FUN_004e81bc(param_1,param_2,1);
    piVar2 = param_1;
    FUN_004e753c(param_1,param_2,1);
    param_2[0x15b] = param_2[0x15b] + 1;
    temp_v0 = FUN_0040de1c(DAT_005712f0,param_2);
    if ((temp_v0 < 1) && (piVar2 != (int *)0x0)) {
      param_2[0x48c] = 0x1e;
      FUN_004e0114(param_1,param_2,(int)*(short *)(param_2[9] + 0x6a),0,0x11,0x11);
      *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x1d;
      *param_2 = *param_2 & 0xffffdfff;
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
