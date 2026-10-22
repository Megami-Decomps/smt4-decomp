/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fdff0` (_code @ 0x1fdff0, 0x138 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00254dfc(...);
int FUN_002a7838(void);
int asdMemFreeNonNull(int);
int asdOperatorNew(void);
int FUN_003b8158(void);
int FUN_003ba734(unsigned int, unsigned short [2]);
int FUN_003bb3fc(unsigned int);

/* stack frame of void: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned short sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char DAT_00422590; /* 0x422590 */
extern int DAT_0044cfd4; /* 0x44cfd4 */
extern unsigned int DAT_0044cfd8; /* 0x44cfd8 */
extern unsigned int DAT_0044cfdc; /* 0x44cfdc */

/* Supplied declaration required: FUN_00254dfc. */
extern int _ZN9Obj55ca08D1Ev(int);
extern int _ZN14SelectionFlagsC1Ev(int);
/* Supplied declaration required: FUN_002a7838. */
/* Supplied declaration required: asdMemFreeNonNull. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: FUN_003b8158. */
/* Supplied declaration required: FUN_003ba734. */
/* Supplied declaration required: FUN_003bb3fc. */


unsigned int FUN_001fdff0(void)

{
/* irregular: 7 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  int temp_v2;
  unsigned short temp_v3 [2];
  unsigned short temp_v4;
  
  temp_v1 = DAT_0044cfd4;
  temp_v0 = *(char *)(DAT_0044cfd4 + 5);
  if (temp_v0 != '\0') {
    if (temp_v0 != '\x01') {
      if (temp_v0 != '\x02') {
        if (temp_v0 == '\x03') {
          return 0xffffffff;
        }
      }
      else {
        *(unsigned char *)(DAT_0044cfd4 + 5) = 3;
        *(unsigned char *)(temp_v1 + 4) = 1;
        if (*(int *)(temp_v1 + 8) != 0) {
          FUN_002a7838();
          if (*(int *)(temp_v1 + 8) != 0) {
            temp_v2 = _ZN9Obj55ca08D1Ev(*(int *)(temp_v1 + 8) + 0x110);
            asdMemFreeNonNull(temp_v2 - 0x110);
          }
          *(unsigned int *)(temp_v1 + 8) = 0;
        }
      }
    }
    else {
      FUN_003bb3fc(*(unsigned int *)(DAT_0044cfd4 + 8));
      if (*(char *)(*(int *)(temp_v1 + 8) + 0x24) != '\0') {
        *(unsigned char *)(temp_v1 + 5) = 2;
      }
    }
  }
  else {
    puVar3 = (unsigned char *)0xeb0;
    asdOperatorNew();
    temp_v2 = 0;
    if (puVar3 != (unsigned char *)0x0) {
      *puVar3 = 0;
      puVar3[0x10] = 0;
      *(unsigned int *)(puVar3 + 0x20) = 0;
      temp_v2 = FUN_00254dfc(puVar3 + 0x3c);
      temp_v2 = FUN_00254dfc(temp_v2 + 6);
      temp_v2 = _ZN14SelectionFlagsC1Ev(temp_v2 + 0x5a);
      *(unsigned char **)(temp_v2 + 0x74) = &DAT_00422590;
      temp_v2 = temp_v2 - 0x9c;
    }
    *(int *)(temp_v1 + 8) = temp_v2;
    FUN_003b8158();
    FUN_00254dfc(temp_v3);
    temp_v3[0] = (unsigned short)DAT_0044cfd8;
    temp_v4 = (unsigned short)DAT_0044cfdc;
    FUN_003ba734(*(unsigned int *)(temp_v1 + 8),temp_v3);
    *(unsigned char *)(temp_v1 + 5) = 1;
  }
  return 0;
}

} /* extern "C" */
