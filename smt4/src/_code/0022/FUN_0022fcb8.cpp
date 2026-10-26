/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022fcb8` (_code @ 0x22fcb8, 0x56c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match1_BgmRequestChannel.h"
#include "shop/shopMain.h"

extern "C" {

int FUN_002302d8(...);
int listCursorSetPage(...);
int FUN_00233730(...);
int FUN_0029212c(...);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

/* Supplied declaration required: FUN_002302d8. */
/* Supplied declaration required: listCursorSetPage. */
/* Supplied declaration required: cellListAppend. */
extern int flaggedValueHolderGetTotal(int);
/* Supplied declaration required: FUN_00233730. */
/* Supplied declaration required: FUN_0029212c. */


void FUN_0022fcb8(int param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v4 = 0x30d;
  *(unsigned short *)(param_1 + 0x9ca4) = 0;
  temp_v0 = *(int *)(param_1 + 0x864);
  temp_v3 = 0x12d;
  temp_v5 = 0x1a5;
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        if (temp_v0 == 3) {
          temp_v4 = 1;
          do {
            temp_v0 = FUN_0028e9d0(temp_v4);
            if (temp_v0 != 0) {
              cellListAppend(param_1 + 0x8ca4,temp_v4 & 0xffff,0,0,0);
            }
            temp_v4 = temp_v4 + 1;
          } while ((int)temp_v4 < 0x3d);
        }
      }
      else {
        do {
          temp_v0 = FUN_0028e9d0(temp_v3);
          if (temp_v0 != 0) {
            cellListAppend(param_1 + 0x8ca4,temp_v3 & 0xffff,0,0,0);
          }
          temp_v3 = temp_v3 + 1;
        } while ((int)temp_v3 < 0x1a5);
        do {
          temp_v0 = FUN_0028e9d0(temp_v5);
          if (temp_v0 != 0) {
            cellListAppend(param_1 + 0x8ca4,temp_v5 & 0xffff,0,0,0);
          }
          temp_v5 = temp_v5 + 1;
        } while ((int)temp_v5 < 0x21d);
        temp_v4 = 0x21d;
        do {
          temp_v0 = FUN_0028e9d0(temp_v4);
          if (temp_v0 != 0) {
            cellListAppend(param_1 + 0x8ca4,temp_v4 & 0xffff,0,0,0);
          }
          temp_v4 = temp_v4 + 1;
        } while ((int)temp_v4 < 0x295);
        temp_v4 = 0x295;
        do {
          temp_v0 = FUN_0028e9d0(temp_v4);
          if (temp_v0 != 0) {
            cellListAppend(param_1 + 0x8ca4,temp_v4 & 0xffff,0,0,0);
          }
          temp_v4 = temp_v4 + 1;
        } while ((int)temp_v4 < 0x30d);
      }
    }
    else {
      temp_v3 = 0x3d;
      do {
        temp_v0 = FUN_0028e9d0(temp_v3);
        if (temp_v0 != 0) {
          cellListAppend(param_1 + 0x8ca4,temp_v3 & 0xffff,0,0,0);
        }
        temp_v3 = temp_v3 + 1;
      } while ((int)temp_v3 < 0xb5);
      temp_v3 = 0xb5;
      do {
        temp_v0 = FUN_0028e9d0(temp_v3);
        if (temp_v0 != 0) {
          cellListAppend(param_1 + 0x8ca4,temp_v3 & 0xffff,0,0,0);
        }
        temp_v3 = temp_v3 + 1;
      } while ((int)temp_v3 < 0x12d);
      do {
        temp_v0 = FUN_0028e9d0(temp_v4);
        if (temp_v0 != 0) {
          cellListAppend(param_1 + 0x8ca4,temp_v4 & 0xffff,0,0,0);
        }
        temp_v4 = temp_v4 + 1;
      } while ((int)temp_v4 < 0x33f);
    }
  }
  else {
    temp_v0 = param_1 + 0x8ca4;
    temp_v2 = 1;
    do {
      temp_v1 = FUN_0028e9d0(temp_v2);
      if (temp_v1 != 0) {
        cellListAppend(temp_v0,temp_v2 & 0xffff,0,0,0);
      }
      temp_v2 = temp_v2 + 1;
    } while ((int)temp_v2 < 0x3d);
    temp_v0 = param_1 + 0x8ca4;
    temp_v2 = 0x3d;
    do {
      temp_v1 = FUN_0028e9d0(temp_v2);
      if (temp_v1 != 0) {
        cellListAppend(temp_v0,temp_v2 & 0xffff,0,0,0);
      }
      temp_v2 = temp_v2 + 1;
    } while ((int)temp_v2 < 0xb5);
    temp_v0 = param_1 + 0x8ca4;
    temp_v2 = 0xb5;
    do {
      temp_v1 = FUN_0028e9d0(temp_v2);
      if (temp_v1 != 0) {
        cellListAppend(temp_v0,temp_v2 & 0xffff,0,0,0);
      }
      temp_v2 = temp_v2 + 1;
    } while ((int)temp_v2 < 0x12d);
    do {
      temp_v0 = FUN_0028e9d0(temp_v4);
      if (temp_v0 != 0) {
        cellListAppend(param_1 + 0x8ca4,temp_v4 & 0xffff,0,0,0);
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < 0x33f);
    do {
      temp_v0 = FUN_0028e9d0(temp_v3);
      if (temp_v0 != 0) {
        cellListAppend(param_1 + 0x8ca4,temp_v3 & 0xffff,0,0,0);
      }
      temp_v3 = temp_v3 + 1;
    } while ((int)temp_v3 < 0x1a5);
    do {
      temp_v0 = FUN_0028e9d0(temp_v5);
      if (temp_v0 != 0) {
        cellListAppend(param_1 + 0x8ca4,temp_v5 & 0xffff,0,0,0);
      }
      temp_v5 = temp_v5 + 1;
    } while ((int)temp_v5 < 0x21d);
    temp_v4 = 0x21d;
    do {
      temp_v0 = FUN_0028e9d0(temp_v4);
      if (temp_v0 != 0) {
        cellListAppend(param_1 + 0x8ca4,temp_v4 & 0xffff,0,0,0);
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < 0x295);
    temp_v4 = 0x295;
    do {
      temp_v0 = FUN_0028e9d0(temp_v4);
      if (temp_v0 != 0) {
        cellListAppend(param_1 + 0x8ca4,temp_v4 & 0xffff,0,0,0);
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < 0x30d);
  }
  FUN_00233730(param_1 + 0xc20,10,*(unsigned short *)(param_1 + 0x9ca4),0,1,1);
  *(unsigned char *)(param_1 + 0xc2d) = 1;
  listCursorSetPage(param_1 + 0xc20,0);
  FUN_002302d8(param_1,param_2);
  temp_v0 = *(int *)(param_1 + 0x860);
  temp_v1 = flaggedValueHolderGetTotal(param_1 + temp_v0 * 0x74 + 0x880);
  FUN_0029212c(*(unsigned short *)(param_1 + temp_v0 * 0x1002 + 0xc94 + temp_v1 * 4));
  return;
}

} /* extern "C" */
