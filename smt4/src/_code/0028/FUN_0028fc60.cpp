/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028fc60` (_code @ 0x28fc60, 0x1a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00232b68(...);
int dataTable08Sub1GetRecord(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_00232b68. */
extern int gameGetSlotTable(void);
/* Supplied declaration required: dataTable08Sub1GetRecord. */


unsigned int FUN_0028fc60(int param_1)

{
/* irregular: 2 goto(s); 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  if ((param_1 - 1U < 0x3c) &&
     (temp_v0 = param_1, dataTable08Sub1GetRecord(),
     *(char *)(temp_v0 + 0x6d) == '\x01' || *(char *)(temp_v0 + 0x6d) == '\x03')) {
    if ((*(unsigned char *)(temp_v0 + 0x6a) & 0x80) == 0) {
      temp_v3 = gameGetSlotTable();
      temp_v0 = -1;
LAB_0028fd54:
      temp_v1 = param_1;
      dataTable08Sub1GetRecord();
      if (temp_v1 == 0) goto LAB_0028fde8;
      temp_v2 = -1;
      FUN_00232b68(0xffffffff,temp_v1,1,0,0);
      do {
        if (temp_v2 == 0) {
          return 1;
        }
        while( 1 ) {
          temp_v0 = temp_v0 + 1;
          if (temp_v0 >= 0x18) {
            return 0;
          }
          if (temp_v0 < 0) goto LAB_0028fd54;
          temp_v1 = (int)*(char *)(temp_v3 + temp_v0 + 0x90f0);
          if (temp_v1 < 0) break;
          temp_v2 = param_1;
          dataTable08Sub1GetRecord();
          if (temp_v2 != 0) {
            FUN_00232b68(temp_v1,temp_v2,1,0,0);
            temp_v2 = temp_v1;
            if (temp_v1 == 0) {
              return 1;
            }
          }
          else {
LAB_0028fde8:
            temp_v2 = 1;
          }
        }
      } while( 1 );
    }
    dataTable08Sub1GetRecord();
    if (param_1 != 0) {
      temp_v0 = -1;
      FUN_00232b68(0xffffffff,param_1,1,0,0);
      temp_v4 = temp_v0 == 0;
      temp_v0 = gameGetSlotTable();
      temp_v3 = 0;
      do {
        temp_v1 = (int)*(char *)(temp_v0 + temp_v3 + 0x90f0);
        if ((-1 < temp_v1) && (FUN_00232b68(temp_v1,param_1,1,0,0), temp_v1 == 0)) {
          temp_v4 = 1;
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0x18);
      if (temp_v4) {
        return 1;
      }
    }
  }
  return 0;
}

} /* extern "C" */
