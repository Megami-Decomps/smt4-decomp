/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b8598` (_code @ 0x4b8598, 0x234 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_0020401c(...);
int FUN_004072b0(...);
int linkSlotSetFlag1C(...);
int linkSlotSetFlag20(...);
int FUN_0040792c(...);
int FUN_00407ab0(...);
int FUN_00407eb0(...);
int FUN_004080bc(...);
int FUN_004b96a0(...);
int dataTable33Entries(...);
int dataTable33TypeCount(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_004b87d0; /* 0x4b87d0 */
extern unsigned char LAB_004b87d8; /* 0x4b87d8 */

/* Supplied declaration required: FUN_00100388. */
extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);
extern int gameFlagIsSet(void);
/* Supplied declaration required: FUN_0020401c. */
/* Supplied declaration required: FUN_004072b0. */
/* Supplied declaration required: linkSlotSetFlag1C. */
/* Supplied declaration required: linkSlotSetFlag20. */
/* Supplied declaration required: FUN_0040792c. */
/* Supplied declaration required: FUN_00407ab0. */
/* Supplied declaration required: FUN_00407eb0. */
/* Supplied declaration required: FUN_004080bc. */
/* Supplied declaration required: FUN_004b96a0. */
extern int menu4CGetCurrentEntry(int);
/* Supplied declaration required: dataTable33Entries. */
/* Supplied declaration required: dataTable33TypeCount. */


void FUN_004b8598(int param_1)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char *puVar6;
  unsigned char temp_v4;
  unsigned char temp_v5 [128];
  unsigned char temp_v6 [128];
  unsigned char temp_v7 [8];
  
  temp_v0 = asdTMTexTableNodeIsLoaded(0x18,*(unsigned int *)(param_1 + 0x90));
  if (temp_v0 != 0) {
    temp_v4 = *(int *)(param_1 + 0x1128) != 0;
    temp_v0 = 0;
    if (temp_v4) {
      temp_v0 = *(int *)(param_1 + 0x112c);
    }
    if (temp_v4 && temp_v0 != 0) {
      FUN_004b96a0(param_1);
      *(unsigned int *)(param_1 + 0x28) = 3;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      if (*(char *)(*(int *)(param_1 + 0x1118) + 0x40) != '0') {
        *(unsigned char *)(param_1 + 0x1214) = 1;
        FUN_00100388(temp_v5,&LAB_004b87d0,"mikado/",*(int *)(param_1 + 0x1118) + 0x40);
        if (((*(short *)(*(int *)(param_1 + 0x1118) + 100) != 0) &&
            (temp_v0 = gameFlagIsSet(), temp_v0 != 0)) ||
           ((*(short *)(*(int *)(param_1 + 0x1118) + 0x66) != 0 &&
            (temp_v0 = gameFlagIsSet(), temp_v0 != 0)))) {
          FUN_00100388(temp_v6,&LAB_004b87d0,"mikado/",*(int *)(param_1 + 0x1118) + 0x68);
          FUN_00407ab0(*(unsigned int *)(param_1 + 0x1218),temp_v5,temp_v6);
        }
        else {
          FUN_00407ab0(*(unsigned int *)(param_1 + 0x1218),temp_v5,0);
        }
        temp_v0 = menu4CGetCurrentEntry(param_1 + 0x9c);
        FUN_004080bc(*(unsigned int *)(param_1 + 0x1218),0,0xffffffff);
        FUN_00407eb0(*(unsigned int *)(param_1 + 0x1218),(int)*(short *)(temp_v0 + 0x28),1);
        if (-1 < *(int *)(*(int *)(param_1 + 0x1118) + 0x60)) {
          puVar6 = temp_v7;
          dataTable33Entries();
          if (puVar6 != (unsigned char *)0x0) {
            temp_v3 = 0;
            puVar2 = temp_v7;
            dataTable33TypeCount(puVar2,*(unsigned int *)(*(int *)(param_1 + 0x1118) + 0x60));
            if (0 < (int)puVar2) {
              do {
                FUN_00100388(temp_v5,&LAB_004b87d8,"mikado/",puVar6);
                FUN_004072b0(*(unsigned int *)(param_1 + 0x1218),temp_v5,temp_v3);
                puVar6 = puVar6 + 0x20;
                temp_v3 = temp_v3 + 1;
                puVar2 = temp_v7;
                dataTable33TypeCount(puVar2,*(unsigned int *)(*(int *)(param_1 + 0x1118) + 0x60));
              } while (temp_v3 < (int)puVar2);
            }
            FUN_0040792c(*(unsigned int *)(param_1 + 0x1218),(int)*(char *)(temp_v0 + 0x2b));
          }
        }
        if ((!(*(short *)(param_1 + 0x3c) == 4 || *(short *)(param_1 + 0x3c) == 3)) ||
           (!(*(short *)(temp_v0 + 0x28) == 0 || *(short *)(temp_v0 + 0x28) == 6))) {
          linkSlotSetFlag20(*(unsigned int *)(param_1 + 0x1218),0);
          temp_v1 = *(unsigned int *)(param_1 + 0x1218);
          temp_v2 = 1;
        }
        else {
          linkSlotSetFlag20(*(unsigned int *)(param_1 + 0x1218),1);
          temp_v1 = *(unsigned int *)(param_1 + 0x1218);
          temp_v2 = 0;
        }
        linkSlotSetFlag1C(temp_v1,temp_v2);
      }
      if (*(int *)(param_1 + 0x116c) != 1) {
        FUN_0020401c(*(int *)(param_1 + 0x1118) + 2);
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
