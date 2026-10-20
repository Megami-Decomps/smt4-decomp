/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c0404` (_code @ 0x1c0404, 0x2e4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192884(void);
int FUN_00193be8(void);
int FUN_001a8748(void);
int FUN_001ad98c(void);
int FUN_001dc720(void);
int FUN_001dc994(void);
int FUN_001ddb40(void);
int FUN_001ed7bc(void);
int FUN_001f4c50(void);
int FUN_002012f0(void);
int FUN_00201ac8(void);
int FUN_00211d00(void);
int FUN_00223b84(void);
int FUN_0026f824(int);
int FUN_0028d9b0(void);
int asdTMTexTableLoadSprites(int);
int FUN_002c5620(void);
int asdSequenceRequest(int, int);
int FUN_002c58c8(int, int);
int asdTMTexTableLoadTmx(int, int);
int FUN_002fc1a8(void);
int FUN_00317e78(void);
int FUN_00324a20(void);
int FUN_0033c618(void);
int FUN_0033f784(void);
int FUN_003af160(unsigned int);

extern unsigned int DAT_00439ca8; /* 0x439ca8 */
extern unsigned char DAT_00446db4; /* 0x446db4 */

/* Supplied declaration required: FUN_00192884. */
/* Supplied declaration required: FUN_00193be8. */
/* Supplied declaration required: FUN_001a8748. */
/* Supplied declaration required: FUN_001ad98c. */
/* Supplied declaration required: FUN_001dc720. */
/* Supplied declaration required: FUN_001dc994. */
/* Supplied declaration required: FUN_001ddb40. */
/* Supplied declaration required: FUN_001ed7bc. */
/* Supplied declaration required: FUN_001f4c50. */
/* Supplied declaration required: FUN_002012f0. */
/* Supplied declaration required: FUN_00201ac8. */
/* Supplied declaration required: FUN_00211d00. */
/* Supplied declaration required: FUN_00223b84. */
/* Supplied declaration required: FUN_0026f824. */
/* Supplied declaration required: FUN_0028d9b0. */
/* Supplied declaration required: asdTMTexTableLoadSprites. */
/* Supplied declaration required: FUN_002c5620. */
/* Supplied declaration required: asdSequenceRequest. */
/* Supplied declaration required: FUN_002c58c8. */
/* Supplied declaration required: asdTMTexTableLoadTmx. */
/* Supplied declaration required: FUN_002fc1a8. */
/* Supplied declaration required: FUN_00317e78. */
/* Supplied declaration required: FUN_00324a20. */
/* Supplied declaration required: FUN_0033c618. */
/* Supplied declaration required: FUN_0033f784. */
/* Supplied declaration required: FUN_003af160. */


unsigned int FUN_001c0404(int *param_1)

{
/* irregular: 26 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *param_1;
  temp_v0 = *(int *)(temp_v1 + 8);
  if (temp_v0 == 7) {
    FUN_001ed7bc();
    FUN_00211d00();
    *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
    return 0;
  }
  if (temp_v0 >= 8) {
    if (temp_v0 == 0xb) {
      FUN_00193be8();
      FUN_0026f824(0);
      FUN_002c5620();
      FUN_001a8748();
      *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
      return 0;
    }
    if (temp_v0 < 0xc) {
      if (temp_v0 == 8) {
        FUN_0028d9b0();
        FUN_00192884();
        FUN_00201ac8();
        FUN_001ad98c();
        FUN_00223b84();
        FUN_001ddb40();
        FUN_003af160(DAT_00439ca8);
        FUN_00317e78();
        *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
        return 0;
      }
      if (temp_v0 != 9) {
        if (temp_v0 != 10) {
          return 0;
        }
        FUN_001f4c50();
        *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
        return 0;
      }
      FUN_00324a20();
      *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
      return 0;
    }
    if (temp_v0 != 0xc) {
      if (temp_v0 == 100) {
        *(unsigned int *)(temp_v1 + 8) = 0x65;
        return 0;
      }
      if (temp_v0 != 0x65) {
        return 0;
      }
      DAT_00446db4 = 1;
      asdSequenceRequest(0x16,0);
      return 0xffffffff;
    }
    temp_v0 = 100;
    *(int *)(temp_v1 + 8) = temp_v0;
    return 0;
  }
  switch(temp_v0) {
  case 0:
    *(unsigned int *)(temp_v1 + 8) = 1;
    break;
  case 1:
    temp_v0 = 2;
    *(int *)(temp_v1 + 8) = temp_v0;
    break;
  case 2:
    FUN_002fc1a8();
    temp_v0 = *(int *)(temp_v1 + 8) + 1;
    *(int *)(temp_v1 + 8) = temp_v0;
    break;
  case 3:
    FUN_0033c618();
    temp_v0 = *(int *)(temp_v1 + 8) + 1;
    *(int *)(temp_v1 + 8) = temp_v0;
    break;
  case 4:
    FUN_002012f0();
    FUN_0033f784();
    asdTMTexTableLoadTmx(0xc,0);
    asdTMTexTableLoadTmx(0x18,0);
    asdTMTexTableLoadTmx(2,0);
    asdTMTexTableLoadTmx(3,0);
    asdTMTexTableLoadTmx(4,0);
    asdTMTexTableLoadTmx(0x1f,0);
    asdTMTexTableLoadTmx(0x20,0);
    asdTMTexTableLoadTmx(0x26,0);
    asdTMTexTableLoadSprites(0x32);
    asdTMTexTableLoadSprites(0x28);
    asdTMTexTableLoadTmx(0x16,0);
    *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
    break;
  case 5:
    FUN_002c58c8(5,2);
    FUN_002c58c8(5,3);
    FUN_001dc994();
    *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
    break;
  case 6:
    FUN_001dc720();
    *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
  }
  return 0;
}

} /* extern "C" */
