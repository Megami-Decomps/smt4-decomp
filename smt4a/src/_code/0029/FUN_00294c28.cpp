#include "romwright_types.h"

extern "C" {

int FUN_00152f44(void);
int FUN_00162e8c(void);

extern int *g_popupState; /* 0x58104c */
extern unsigned char g_gameState; /* 0x5f15fc */

extern int FUN_0014bef4(unsigned int);
/* Supplied declaration required: FUN_00152f44. */
extern int FUN_0015688c(void);
/* Supplied declaration required: FUN_00162e8c. */
extern int FUN_0018719c(unsigned int);
extern int FUN_002d8b58(unsigned int, unsigned short);


void FUN_00294c28(void)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  
  FUN_00162e8c();
  FUN_00152f44();
  if (((((*(signed char *)((unsigned char *)&g_gameState + 0x18)) == '\0') && (*g_popupState == 0)) && (temp_v0 = FUN_0018719c(0x49a), temp_v0 != 0)
      ) && ((temp_v0 = FUN_0015688c(), temp_v0 != 0 &&
            ((temp_v1 = FUN_0018719c(0x1a2), temp_v1 == 0 ||
             (temp_v1 = FUN_0014bef4(99), temp_v1 + 1 > 0x32)))))) {
    temp_v1 = FUN_0014bef4(99);
    if ((temp_v1 + 1 > 0x3c) && (temp_v1 = FUN_0018719c(0x10), temp_v1 != 0)) {
      temp_v2 = 0xad;
    }
    else {
      temp_v2 = *(unsigned short *)(temp_v0 + 300);
    }
    temp_v0 = FUN_002d8b58(0,temp_v2);
    piVar1 = g_popupState;
    g_popupState[5] = temp_v0;
    *piVar1 = 2;
    piVar1[1] = 0;
  }
  return;
}

} /* extern "C" */
