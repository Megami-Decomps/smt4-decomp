/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a169c` (_code @ 0x3a169c, 0x198 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00247bf4(void);
int FUN_00285e44(int, int);
int FUN_00289880(void);
int FUN_002898e4(void);
int buttonHelpCreate(void);
int buttonHelpAcquireResources(void);
int asdLoadFileAsyncSimple(...);
int asdTMTexTableLoadSprites(int);
int FUN_002c58c8(int, int);
int FUN_002fdff4(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00247bf4. */
/* Supplied declaration required: FUN_00285e44. */
/* Supplied declaration required: FUN_00289880. */
/* Supplied declaration required: FUN_002898e4. */
/* Supplied declaration required: buttonHelpCreate. */
/* Supplied declaration required: buttonHelpAcquireResources. */
/* Supplied declaration required: asdLoadFileAsyncSimple. */
/* Supplied declaration required: asdTMTexTableLoadSprites. */
/* Supplied declaration required: FUN_002c58c8. */
/* Supplied declaration required: FUN_002fdff4. */


void FUN_003a169c(int param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  unsigned int temp_v1;
  int temp_v2;
  
  FUN_002898e4();
  FUN_00289880();
  buttonHelpAcquireResources();
  buttonHelpCreate();
  asdLoadFileAsyncSimple("shop/shop.bf",param_1 + 0x160,0);
  asdTMTexTableLoadSprites(0x2b);
  FUN_002c58c8(0x2b,0);
  temp_v1 = 0;
  temp_v2 = 0;
  if (*(char *)(param_1 + 0x14) != '\0') {
    if (*(char *)(param_1 + 0x14) == '\x01') {
      temp_v0 = *(int *)(param_1 + 0x18);
      if (temp_v0 != 9) {
        if (temp_v0 != 5) {
          if (temp_v0 != 10) {
            pcVar2 = "shop/shop_tkyitm.mbm";
            temp_v1 = 0x5b;
          }
          else {
            pcVar2 = "shop/shop_tkyitm.mbm";
            temp_v1 = 0x89;
            temp_v2 = 0xa3;
          }
        }
        else {
          pcVar2 = "shop/shop_tkyitm.mbm";
          temp_v1 = 0x8b;
          temp_v2 = 0x50;
        }
      }
      else {
        pcVar2 = "shop/shop_mkditm.mbm";
        temp_v1 = 0x59;
        temp_v2 = 0x1a;
      }
      asdLoadFileAsyncSimple(pcVar2,param_1 + 0x164,0);
    }
  }
  else {
    temp_v0 = *(int *)(param_1 + 0x18);
    if (temp_v0 != 8) {
      if (!(temp_v0 == 6 || temp_v0 == 7)) {
        if (temp_v0 != 9) {
          pcVar2 = "shop/shop_tkywpn.mbm";
          temp_v1 = 0x5a;
        }
        else {
          pcVar2 = "shop/shop_tkywpn.mbm";
          temp_v1 = 0x88;
          temp_v2 = 0xa2;
        }
      }
      else {
        pcVar2 = "shop/shop_ginzawpn.mbm";
        temp_v1 = 0x8b;
        temp_v2 = 0x50;
      }
    }
    else {
      pcVar2 = "shop/shop_mkdwpn.mbm";
      temp_v1 = 0x58;
      temp_v2 = 0x19;
    }
    asdLoadFileAsyncSimple(pcVar2,param_1 + 0x164,0);
  }
  FUN_002fdff4();
  *(unsigned int *)(param_1 + 0x15d40) = temp_v1;
  if (temp_v2 != 0) {
    FUN_00285e44(temp_v2,0);
    *(int *)(param_1 + 0x15d44) = temp_v2;
    FUN_00247bf4();
    return;
  }
  return;
}

} /* extern "C" */
