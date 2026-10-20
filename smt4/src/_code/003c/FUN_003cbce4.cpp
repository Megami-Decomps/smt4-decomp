/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cbce4` (_code @ 0x3cbce4, 0x244 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002296f4(int *, int, int, int, int, int);
int FUN_00229a3c(int, int, int, int, int);
int FUN_0022a304(unsigned int);
int FUN_00240530(int, int, unsigned int, int, int);
int FUN_003cfc84(int *, int, int);
int FUN_003d0220(int *, int, int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int DAT_0043427c; /* 0x43427c */
extern unsigned int DAT_00434290; /* 0x434290 */
extern unsigned int DAT_00435d18; /* 0x435d18 */
extern unsigned int DAT_00435d48; /* 0x435d48 */

/* Supplied declaration required: FUN_002296f4. */
/* Supplied declaration required: FUN_00229a3c. */
/* Supplied declaration required: FUN_0022a304. */
/* Supplied declaration required: FUN_00240530. */
extern int FUN_0027e3b8(unsigned int);
extern int FUN_0027e6bc(unsigned int, int);
/* Supplied declaration required: FUN_003cfc84. */
/* Supplied declaration required: FUN_003d0220. */


unsigned int FUN_003cbce4(int *param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  temp_v0 = *param_1;
  if (((*(unsigned int *)(temp_v0 + 0x44a0) & 0x40000) == 0) && ((*(unsigned int *)(temp_v0 + 0xe0) & 0x40000) != 0)) {
    temp_v0 = FUN_0027e6bc(DAT_00434290,param_2);
    if (temp_v0 == 0) {
      *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 1;
      FUN_0022a304(DAT_00435d18);
      return 1;
    }
    return 0;
  }
  if (*(int *)(temp_v0 + 0x88) != 4) {
    FUN_003d0220(param_1,param_2,0);
    piVar2 = param_1;
    FUN_003cfc84(param_1,param_2,0);
    if (*(int *)(param_2 + 0x56c) == 0x20) {
      FUN_00240530(0,param_2,*(unsigned int *)(*param_1 + 0x1e98),9,0xb);
    }
    if (*(int *)(param_2 + 0x56c) == 0x25) {
      FUN_00229a3c(0,param_2,0,2,0);
    }
    *(int *)(param_2 + 0x56c) = *(int *)(param_2 + 0x56c) + 1;
    temp_v0 = FUN_0027e6bc(DAT_00434290,param_2);
    if (0 < temp_v0) {
      return 0;
    }
    if (piVar2 != (int *)0x0) {
      *(unsigned int *)(param_2 + 0xf04) = 0;
      *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x1b;
      return 1;
    }
    if (*(int *)(*param_1 + 0x88) != 4) {
      return 0;
    }
  }
  temp_v0 = FUN_0027e3b8(DAT_00435d48);
  if (temp_v0 == 0) {
    FUN_003d0220(param_1,param_2,1);
    piVar2 = param_1;
    FUN_003cfc84(param_1,param_2,1);
    *(int *)(param_2 + 0x56c) = *(int *)(param_2 + 0x56c) + 1;
    temp_v0 = FUN_0027e6bc(DAT_00434290,param_2);
    if ((temp_v0 < 1) && (piVar2 != (int *)0x0)) {
      *(unsigned int *)(param_2 + 0xf04) = 0x1e;
      FUN_002296f4(param_1,param_2,(int)*(short *)(*(int *)(param_2 + 0x24) + 0x62),0,0x11,0x11);
      *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x1b;
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
