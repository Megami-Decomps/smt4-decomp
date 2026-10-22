/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd1f4` (_code @ 0x2bd1f4, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNew(void);
int FUN_0019e290(void);
int asdOperatorDelete(int);
int FUN_004b6fc4(void);
int menu4CSetValue42(unsigned int, unsigned short [2]);
int uiTextScreenRunPhaseUpdate(unsigned int);
int clearThreeHalfwords(...);

/* stack frame of void: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned short sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char DAT_0055ca10; /* 0x55ca10 */
extern int DAT_00588014; /* 0x588014 */
extern unsigned int DAT_00588018; /* 0x588018 */
extern unsigned int DAT_0058801c; /* 0x58801c */

/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: FUN_0019e290. */
/* Supplied declaration required: asdOperatorDelete. */
/* Supplied declaration required: FUN_004b6fc4. */
/* Supplied declaration required: menu4CSetValue42. */
/* Supplied declaration required: uiTextScreenRunPhaseUpdate. */
/* Supplied declaration required: clearThreeHalfwords. */
extern int _ZN14SelectionFlagsC1Ev(int);
extern int _ZN9Obj55ca08D1Ev(int);


unsigned int FUN_002bd1f4(void)

{
/* irregular: 7 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  int temp_v2;
  unsigned short temp_v3 [2];
  unsigned short temp_v4;
  
  temp_v1 = DAT_00588014;
  temp_v0 = *(char *)(DAT_00588014 + 5);
  if (temp_v0 != '\0') {
    if (temp_v0 != '\x01') {
      if (temp_v0 != '\x02') {
        if (temp_v0 == '\x03') {
          return 0xffffffff;
        }
      }
      else {
        *(unsigned char *)(DAT_00588014 + 5) = 3;
        *(unsigned char *)(temp_v1 + 4) = 1;
        if (*(int *)(temp_v1 + 8) != 0) {
          FUN_0019e290();
          if (*(int *)(temp_v1 + 8) != 0) {
            temp_v2 = _ZN9Obj55ca08D1Ev(*(int *)(temp_v1 + 8) + 0x110);
            asdOperatorDelete(temp_v2 - 0x110);
          }
          *(unsigned int *)(temp_v1 + 8) = 0;
        }
      }
    }
    else {
      uiTextScreenRunPhaseUpdate(*(unsigned int *)(DAT_00588014 + 8));
      if (*(char *)(*(int *)(temp_v1 + 8) + 0x24) != '\0') {
        *(unsigned char *)(temp_v1 + 5) = 2;
      }
    }
  }
  else {
    puVar3 = (unsigned char *)0x126c;
    asdOperatorNew();
    temp_v2 = 0;
    if (puVar3 != (unsigned char *)0x0) {
      *puVar3 = 0;
      puVar3[0x10] = 0;
      *(unsigned int *)(puVar3 + 0x20) = 0;
      temp_v2 = clearThreeHalfwords(puVar3 + 0x3c);
      temp_v2 = clearThreeHalfwords(temp_v2 + 6);
      temp_v2 = _ZN14SelectionFlagsC1Ev(temp_v2 + 0x5a);
      *(unsigned char **)(temp_v2 + 0x74) = &DAT_0055ca10;
      temp_v2 = temp_v2 - 0x9c;
    }
    *(int *)(temp_v1 + 8) = temp_v2;
    FUN_004b6fc4();
    clearThreeHalfwords(temp_v3);
    temp_v3[0] = (unsigned short)DAT_00588018;
    temp_v4 = (unsigned short)DAT_0058801c;
    menu4CSetValue42(*(unsigned int *)(temp_v1 + 8),temp_v3);
    *(unsigned char *)(temp_v1 + 5) = 1;
  }
  return 0;
}

} /* extern "C" */
