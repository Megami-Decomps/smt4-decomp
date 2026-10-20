/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246128` (_code @ 0x246128, 0x204 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018719c(...);
int FUN_00192748(unsigned int);
int FUN_00192798(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int *DAT_0058104c; /* 0x58104c */
extern unsigned char DAT_005f15fc; /* 0x5f15fc */

extern int FUN_0014bef4(unsigned int);
extern int FUN_0015688c(void);
extern int FUN_001801a4(void);
extern unsigned int FUN_00187180(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0018719c. */
/* Supplied declaration required: FUN_00192748. */
/* Supplied declaration required: FUN_00192798. */
extern int FUN_002d8b58(unsigned int);
extern int FUN_00480c28(void);


void FUN_00246128(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int *puVar9;
  
  if (*DAT_0058104c != 0) {
    return;
  }
  temp_v1 = FUN_001801a4();
  temp_v0 = *(unsigned short *)(temp_v1 + 0x62);
  temp_v1 = FUN_00480c28();
  if (temp_v0 < 0x15) {
    if (temp_v1 < 5000) {
      (*(int *)((unsigned char *)&DAT_005f15fc + 0x394)) = 0;
      return;
    }
  }
  else if (temp_v0 < 0x33) {
    if (temp_v1 < 10000) {
      (*(int *)((unsigned char *)&DAT_005f15fc + 0x394)) = 0;
      return;
    }
  }
  else if (temp_v1 < 15000) {
    (*(int *)((unsigned char *)&DAT_005f15fc + 0x394)) = 0;
    return;
  }
  if (((*(int *)((unsigned char *)&DAT_005f15fc + 0x394)) != 0) && ((*(int *)((unsigned char *)&DAT_005f15fc + 0x394)) = (*(int *)((unsigned char *)&DAT_005f15fc + 0x394)) + 1, (*(int *)((unsigned char *)&DAT_005f15fc + 0x394)) >= 0x15)) {
    (*(int *)((unsigned char *)&DAT_005f15fc + 0x394)) = 0;
  }
  temp_v1 = FUN_0015688c();
  if (((temp_v1 != 0) &&
      (((temp_v2 = FUN_0018719c(0x8d), temp_v2 == 0 || (temp_v2 = FUN_0018719c(0xc2), temp_v2 != 0)) ||
       (*(short *)(temp_v1 + 300) != 0xb1)))) &&
     ((temp_v2 = FUN_0018719c(0x1a2), temp_v2 == 0 || (temp_v2 = FUN_0014bef4(99), temp_v2 + 1 >= 0x33)))) {
    temp_v3 = FUN_00187180(0x43,0);
    FUN_00192798();
    temp_v2 = FUN_00192748(temp_v3);
    temp_v6 = 0;
    if (0 < temp_v2) {
      while( 1 ) {
        temp_v3 = FUN_00187180(0x43,0);
        temp_v4 = FUN_00192798();
        temp_v5 = FUN_00192748(temp_v3);
        if (temp_v6 >= temp_v5) {
          puVar9 = (unsigned int *)0x0;
        }
        else {
          puVar9 = (unsigned int *)(temp_v4 + temp_v6 * 0x20);
        }
        if ((((puVar9[1] == 0x12) && (*puVar9 == (unsigned int)*(unsigned short *)(temp_v1 + 300))) &&
            (((short)puVar9[2] == 0 || (temp_v4 = FUN_0018719c(), temp_v4 != 0)))) &&
           (((*(short *)((int)puVar9 + 10) == 0 || (temp_v4 = FUN_0018719c(), temp_v4 == 0)) &&
            ((*(int *)((unsigned char *)&DAT_005f15fc + 0x394)) == 0)))) break;
        temp_v6 = temp_v6 + 1;
        if (temp_v2 <= (int)temp_v6) {
          return;
        }
      }
      (*(int *)((unsigned char *)&DAT_005f15fc + 0x394)) = 1;
      DAT_0058104c[6] = (unsigned int)*(unsigned short *)(temp_v1 + 300);
      temp_v1 = FUN_002d8b58(0x12);
      piVar2 = DAT_0058104c;
      DAT_0058104c[5] = temp_v1;
      *piVar2 = 0x11;
      piVar2[1] = 0;
      return;
    }
  }
  return;
}

} /* extern "C" */
