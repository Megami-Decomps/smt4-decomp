/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004aa8c8` (_code @ 0x4aa8c8, 0x17c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192550(void);
int dataTable04FindById(void);
int FUN_00280030(void);
int FUN_002ccde8(int, short [4], short [2]);
int FUN_002fa7a8(int);
int FUN_00336da0(int);
int owner2DCInitSub(int);
int menu32EnterState27(int);

/* stack frame of void: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned short sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned char g_btlUi; /* 0x57a9b8 */

/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: FUN_00280030. */
/* Supplied declaration required: FUN_002ccde8. */
/* Supplied declaration required: FUN_002fa7a8. */
/* Supplied declaration required: FUN_00336da0. */
/* Supplied declaration required: owner2DCInitSub. */
/* Supplied declaration required: menu32EnterState27. */
extern int menu32ModeIsNot5(int);


void FUN_004aa8c8(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char *puVar5;
  short temp_v4 [2];
  short temp_v5 [4];
  
  temp_v0 = (*(int *)((unsigned char *)&g_btlUi + 0x10));
  puVar5 = (unsigned char *)((*(int *)((unsigned char *)&g_btlUi + 0x10)) + 0x74b0);
  *puVar5 = 0;
  temp_v5[0] = 0;
  temp_v4[0] = 0;
  temp_v1 = temp_v0 + 0x28c4;
  FUN_002ccde8(temp_v1,temp_v5,temp_v4);
  if (!(temp_v5[0] == 2 || temp_v5[0] == 3)) {
    if (temp_v5[0] == 8) {
      temp_v2 = (int)temp_v4[0];
      FUN_00192550();
      temp_v3 = (unsigned int)*(unsigned short *)(temp_v2 + 0x32);
      if (temp_v3 != 0) {
        dataTable04FindById();
        temp_v3 = *(unsigned int *)(temp_v3 + 0x28);
        if (!(((temp_v3 & 0x1ff) >> 5 != 2 && (temp_v3 & 0x1ff) >> 5 != 3) && (temp_v3 & 0x1ff) >> 5 != 4)
           ) {
          *puVar5 = 1;
        }
      }
      else if ((*(unsigned int *)(temp_v2 + 0x68) & 4) == 0) {
        temp_v2 = (int)temp_v4[0];
        FUN_00192550();
        if ((*(unsigned char *)(temp_v2 + 0x3a) & 0x7f) != 1) {
          *puVar5 = 1;
        }
      }
    }
  }
  else {
    temp_v2 = (int)temp_v4[0];
    dataTable04FindById();
    temp_v3 = *(unsigned int *)(temp_v2 + 0x28);
    if (!(((temp_v3 & 0x1ff) >> 5 != 2 && (temp_v3 & 0x1ff) >> 5 != 3) && (temp_v3 & 0x1ff) >> 5 != 4)) {
      *puVar5 = 1;
    }
  }
  if (*(char *)(temp_v0 + 0x74b0) != '\0') {
    *(unsigned int *)(temp_v0 + 0x74a0) = 0x10;
    FUN_002fa7a8(temp_v1);
  }
  else {
    *(unsigned int *)(temp_v0 + 0x74a0) = 0xc;
    menu32EnterState27(temp_v1);
    temp_v0 = (*(int *)((unsigned char *)&g_btlUi + 0x10));
    temp_v1 = menu32ModeIsNot5((*(int *)((unsigned char *)&g_btlUi + 0x10)) + 8);
    if (temp_v1 != 0) {
      temp_v1 = temp_v0 + 0x24bc;
      FUN_00280030();
      if (temp_v1 != 0) {
        FUN_00336da0(temp_v0 + 8);
        owner2DCInitSub(temp_v0 + 0x24bc);
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
