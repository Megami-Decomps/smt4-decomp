/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00205020` (_code @ 0x205020, 0x3e4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_00151404(); /* 0x151404 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00152af8. */
/* Supplied declaration required: FUN_00254c6c. */
/* Supplied declaration required: FUN_002637b4. */
extern int FUN_0026394c(unsigned int);
extern unsigned int FUN_00263e48(char *);
/* Supplied declaration required: FUN_002872a4. */
/* Supplied declaration required: FUN_00287990. */
extern unsigned int FUN_0029a2d0(char *, unsigned int);
/* Supplied declaration required: FUN_0029bdb4. */
/* Supplied declaration required: FUN_0029c56c. */
/* Supplied declaration required: FUN_002a0678. */
/* Supplied declaration required: FUN_002a06c8. */
/* Supplied declaration required: FUN_002a06dc. */
/* Supplied declaration required: FUN_002a0790. */
/* Supplied declaration required: FUN_002a0c54. */
/* Supplied declaration required: FUN_002a5a54. */
/* Supplied declaration required: FUN_002a7604. */
/* Supplied declaration required: FUN_002a7aa0. */
extern int FUN_002ae16c(void);
/* Supplied declaration required: FUN_002ae18c. */
/* Supplied declaration required: FUN_002b2d48. */
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c1774. */
extern int FUN_002c1f28(void);
/* Supplied declaration required: FUN_002c1ffc. */
/* Supplied declaration required: FUN_002c20a8. */
/* Supplied declaration required: FUN_002f5070. */


unsigned int FUN_00205020(void)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 23 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  int *piVar5;
  unsigned int in_fpscr;
  float in_s0;
  
  temp_v0 = FUN_002c0ac8();
  switch(*(unsigned int *)(temp_v0 + 0x564)) {
  case 0:
    temp_v1 = FUN_002c1f28();
    if (temp_v1 == 0) {
      FUN_002a0c54("event/oc/oc_loop.bcenv",0);
      *(unsigned int *)(temp_v0 + 0x558) = 0;
      temp_v2 = FUN_00263e48("event/oc/oc_loop.bccam");
      *(unsigned int *)(temp_v0 + 0x55c) = temp_v2;
      temp_v2 = FUN_00263e48("event/oc/oc_start.bccam");
      *(unsigned int *)(temp_v0 + 0x560) = temp_v2;
      temp_v2 = FUN_0029a2d0("event/oc/oc_loop.bam",0x38);
      *(unsigned int *)(temp_v0 + 0x554) = temp_v2;
    }
    break;
  case 1:
    piVar4 = (int *)(temp_v0 + 0x554);
    if ((*(int *)(temp_v0 + 0x554) == 0) || (temp_v1 = FUN_002ae16c(), temp_v1 != 0)) {
      temp_v1 = *(int *)(temp_v0 + 0x554);
      *(unsigned int *)(temp_v0 + 0x570) = 1;
      if ((temp_v1 != 0) && (*(int *)(*(int *)(temp_v1 + 8) + 0xc) < 0)) {
        FUN_002a06c8(temp_v1,1);
        FUN_00254c6c(*(unsigned int *)(*piVar4 + 8),1);
        FUN_002a5a54(*(unsigned int *)(*piVar4 + 8),*(unsigned int *)(temp_v0 + 0x570));
        FUN_002872a4(*(unsigned int *)(*piVar4 + 8));
        FUN_0029bdb4(*(unsigned int *)(*piVar4 + 8));
      }
      FUN_002a0790(0);
      temp_v2 = *(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0x570) * 4 + 0x55c);
      *(unsigned int *)(temp_v0 + 0x558) = temp_v2;
      FUN_002a06dc(temp_v2,0);
      temp_v1 = *(int *)(*(int *)(temp_v0 + 0x55c) + 4);
      *(romwright_code **)(temp_v1 + 0x4c) = FUN_00151404;
      *(unsigned char *)(temp_v1 + 0x58) = 1;
      *(unsigned char *)(temp_v0 + 0x56c) = 1;
      FUN_002ae18c(temp_v0 + 0x50c,*(unsigned int *)(temp_v0 + 0x558));
      FUN_002c1774(temp_v0 + 4);
      FUN_002c20a8(temp_v0 + 4,temp_v0 + 0x50c,temp_v0 + 0x518,temp_v0 + 0x524);
      FUN_002c1ffc(temp_v0 + 4,1);
      FUN_00287990(0);
      FUN_002a0678(1,10);
      *(unsigned int *)(temp_v0 + 0x564) = 2;
      *(unsigned int *)(temp_v0 + 0x568) = 0;
    }
    break;
  case 2:
    temp_v1 = FUN_0026394c(*(unsigned int *)(temp_v0 + 0x558));
    if ((temp_v1 != 0) || (temp_v1 = FUN_002c1f28(), temp_v1 != 0)) {
      piVar5 = (int *)(temp_v0 + 0x554);
      FUN_002b2d48(*(unsigned int *)(*(int *)(temp_v0 + 0x554) + 8));
      temp_v1 = (int)in_s0;
      FUN_002f5070(*(unsigned int *)(*piVar5 + 8));
      piVar4 = (int *)(temp_v0 + 0x570);
      FUN_002a5a54(*(unsigned int *)(*piVar5 + 8),*(unsigned int *)(temp_v0 + 0x570));
      FUN_0029c56c(*(unsigned int *)(temp_v0 + 0x558),0);
      VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      *piVar4 = 0;
      FUN_002a5a54(*(unsigned int *)(*piVar5 + 8),0);
      temp_v2 = *(unsigned int *)(temp_v0 + *piVar4 * 4 + 0x55c);
      *(unsigned int *)(temp_v0 + 0x558) = temp_v2;
      FUN_002a06dc(temp_v2,0);
      temp_v1 = *(int *)(*(int *)(temp_v0 + *piVar4 * 4 + 0x55c) + 4);
      temp_v2 = *(unsigned int *)(temp_v1 + 0x44);
      (**(romwright_code **)(temp_v1 + 0x4c))(*(unsigned int *)(temp_v1 + 0x50));
      *(unsigned int *)(temp_v1 + 0x3c) = *(unsigned int *)(temp_v1 + 0x38);
      *(unsigned int *)(temp_v1 + 0x38) = temp_v2;
      *(unsigned char *)(temp_v1 + 0x58) = 1;
      *(unsigned int *)(temp_v0 + 0x564) = 3;
      *(unsigned int *)(temp_v0 + 0x568) = 0;
    }
  case 3:
    FUN_002ae18c(temp_v0 + 0x50c,*(unsigned int *)(temp_v0 + 0x558));
    FUN_002c1774(temp_v0 + 4);
    FUN_002c20a8(temp_v0 + 4,temp_v0 + 0x50c,temp_v0 + 0x518,temp_v0 + 0x524);
    FUN_002c1ffc(temp_v0 + 4,1);
    break;
  case 4:
    if (*(int *)(temp_v0 + 0x568) != 0) {
      if (*(char *)(temp_v0 + 0x56c) != '\0') {
        FUN_0029c56c(*(unsigned int *)(temp_v0 + 0x558),0);
      }
      FUN_002637b4(*(unsigned int *)(temp_v0 + 0x55c));
      FUN_002637b4(*(unsigned int *)(temp_v0 + 0x560));
      *(unsigned int *)(temp_v0 + 0x55c) = 0;
      *(unsigned int *)(temp_v0 + 0x560) = 0;
      FUN_002a7604(0);
      if (*(int *)(temp_v0 + 0x554) != 0) {
        FUN_002a7aa0();
      }
      *(unsigned int *)(temp_v0 + 0x558) = 0;
      *(unsigned int *)(temp_v0 + 0x554) = 0;
      return 0xffffffff;
    }
    FUN_00152af8(*(unsigned int *)(temp_v0 + 0x554));
    *(int *)(temp_v0 + 0x568) = *(int *)(temp_v0 + 0x568) + 1;
  }
  return 0;
}
