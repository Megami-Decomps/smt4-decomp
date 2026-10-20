/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111a08` (_code @ 0x111a08, 0xc2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea3d0(int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_00111ad0; /* 0x111ad0 */
extern unsigned char LAB_00111b05; /* 0x111b05 */
extern signed char DAT_0059497b; /* 0x59497b */

extern int FUN_00111910(int, int);
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern int FUN_002eb5f4(void);
extern int FUN_002ee978(int);
extern int wordRefsEqual_002fd432(int *, unsigned int *);
extern int FUN_002fd444(int);
extern int FUN_002fd454(int);


void FUN_00111a08(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char *puVar6;
  unsigned char temp_v3 [16];
  int temp_v4;
  unsigned char temp_v5 [16];
  unsigned char *puVar5;
  
  puVar5 = temp_v3;
  temp_v0 = FUN_002eb5f4();
  if (temp_v0 != 0) {
    temp_v4 = *(unsigned int *)(param_1 + 0x1a0);
    piVar2 = (int *)(param_1 + 0x1ac);
    temp_v0 = wordRefsEqual_002fd432(piVar2,(unsigned int *)&temp_v4);
    if (temp_v0 != 0) {
      puVar6 = (unsigned char *)0x112049;
    }
    else {
      temp_v0 = FUN_002eb5f4();
      if (((*(int *)(temp_v0 + 0xd0) != 0) && (temp_v0 = FUN_00111910(param_1,*piVar2 + 8), temp_v0 == 0))
         && ((*(char *)(param_1 + 0x1a8) == '\0' ||
             (temp_v1 = *(unsigned int *)(*(int *)(param_1 + 0x88) + 0x30),
             (((temp_v1 & 0xff) == 0 && ((temp_v1 >> 8) & 0xff) == 0) && ((temp_v1 >> 0x10) & 0xff) == 0)
             && temp_v1 >> 0x18 == 0)))) {
        if ((DAT_0059497b != '\0') && (temp_v0 = FUN_002ee978(*piVar2 + 8), temp_v0 != 0)) {
          puVar6 = (unsigned char *)0x111d0d;
          puVar5 = temp_v5;
          temp_v2 = FUN_002ea3c0(puVar5,puVar6,0,&LAB_00111ad0);
          FUN_002ea3d0(param_1,temp_v2);
          return;
        }
        temp_v0 = FUN_002fd444(*piVar2 + 8);
        if ((temp_v0 << 0x1f < 0) && (temp_v0 = FUN_002fd454(*piVar2 + 8), temp_v0 != 0)) {
          puVar6 = (unsigned char *)0x111d0d;
          temp_v2 = FUN_002ea3c0(puVar5,puVar6,0,&LAB_00111ad0);
          FUN_002ea3d0(param_1,temp_v2);
          return;
        }
      }
      puVar6 = (unsigned char *)0x111b95;
    }
  }
  else {
    puVar6 = &LAB_00111b05;
  }
  puVar5 = temp_v5;
  temp_v2 = FUN_002ea3c0(puVar5,puVar6,0,&LAB_00111ad0);
  FUN_002ea3d0(param_1,temp_v2);
  return;
}

} /* extern "C" */
