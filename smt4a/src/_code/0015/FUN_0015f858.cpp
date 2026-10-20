/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015f858` (_code @ 0x15f858, 0x20c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(unsigned char *, unsigned int, unsigned int, int, unsigned char *);
int FUN_001762d4(unsigned char *, unsigned char *);
int FUN_001763a4(unsigned char *, unsigned char *);
int FUN_00192550(void);
int FUN_00192608(void);
int FUN_001a6858(unsigned char *, unsigned char *);

/* stack frame of param_1: 3 slot(s), 8 byte(s) */
typedef struct {
    unsigned short sp28; /* 0x28: local_28 */
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char LAB_00167224; /* 0x167224 */
extern unsigned char LAB_00169230; /* 0x169230 */
extern unsigned char LAB_0019e30c; /* 0x19e30c */
extern unsigned char *g_aocSystem; /* 0x570280 */

#ifndef ROMWRIGHT_SUBPIECE_4_2_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_2_0_DEFINED
#define romwright_subpiece_4_2_0(value, offset) ((unsigned short)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_00100854. */
/* Supplied declaration required: FUN_001762d4. */
/* Supplied declaration required: FUN_001763a4. */
extern int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_00192608. */
extern unsigned int dataTableGetCount(int);
extern unsigned int dataTableGetEntries(void);
extern int FUN_0019c06c(void);
/* Supplied declaration required: FUN_001a6858. */


/* WARNING: Type propagation algorithm not settling */

void FUN_0015f858(unsigned char *param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [4];
  unsigned char temp_v5 [28];
  unsigned short temp_v6;
  unsigned short temp_v7;
  
  if (param_1 != (unsigned char *)0x0) {
    temp_v1 = FUN_0019c06c();
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = *(unsigned char *)(temp_v1 + 8);
    }
    temp_v6 = romwright_subpiece_4_2_0(param_1,0);
    puVar3 = g_aocSystem;
    temp_v7 = temp_v6;
    switch(temp_v0) {
    case 0:
      if ((*(int *)(g_aocSystem + 0x3a0) == 0) ||
         (FUN_001a6858(g_aocSystem,param_1), puVar3 == (unsigned char *)0x0)) {
        temp_v1 = dataTableGet(8,0);
        if (temp_v1 == 0) {
          return;
        }
        temp_v2 = dataTableGetEntries();
        temp_v3 = dataTableGetCount(temp_v1);
        puVar3 = temp_v5;
        FUN_00100854(puVar3,temp_v2,temp_v3,0x28,&LAB_0019e30c);
      }
      break;
    case 1:
    case 0xc:
      FUN_00192550();
      puVar3 = param_1;
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      FUN_00192608();
      puVar3 = param_1;
      break;
    case 9:
      if ((*(int *)(g_aocSystem + 0x3c4) == 0) ||
         (FUN_001762d4(g_aocSystem,param_1), puVar3 == (unsigned char *)0x0)) {
        temp_v1 = dataTableGet(8,3);
        if (temp_v1 == 0) {
          return;
        }
        temp_v2 = dataTableGetEntries();
        temp_v3 = dataTableGetCount(temp_v1);
        puVar3 = temp_v4;
        FUN_00100854(puVar3,temp_v2,temp_v3,0x3c,&LAB_00167224);
      }
      break;
    case 10:
      if ((*(int *)(g_aocSystem + 0x3d0) == 0) ||
         (FUN_001763a4(g_aocSystem,param_1), puVar3 == (unsigned char *)0x0)) {
        temp_v1 = dataTableGet(8,4);
        if (temp_v1 == 0) {
          return;
        }
        temp_v2 = dataTableGetEntries();
        temp_v3 = dataTableGetCount(temp_v1);
        puVar3 = temp_v5;
        FUN_00100854(puVar3,temp_v2,temp_v3,0x30,&LAB_00169230);
      }
      break;
    default:
      return;
    }
    if (puVar3 != (unsigned char *)0x0) {
      return;
    }
  }
  return;
}

} /* extern "C" */
