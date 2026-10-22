/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040082c` (_code @ 0x40082c, 0x1a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable8FindRecord(void);
int FUN_003ff73c(unsigned int *, int);
int FUN_00400284(int, int, int);
int FUN_004009d0(unsigned int, int);
int SCARRY4(unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_00573c90; /* 0x573c90 */
extern unsigned int DAT_00573c94; /* 0x573c94 */
extern unsigned int DAT_00573ca8; /* 0x573ca8 */
extern unsigned int DAT_00573cac; /* 0x573cac */
extern unsigned int DAT_00573cb8; /* 0x573cb8 */
extern unsigned int DAT_00573cbc; /* 0x573cbc */

/* Unsupported intrinsic, declaration required: SCARRY4 (INT_SCARRY). */
extern int btlGetMainState(void);
/* Supplied declaration required: dataTable8FindRecord. */
extern int gameGetSlotTable(void);
/* Supplied declaration required: FUN_003ff73c. */
/* Supplied declaration required: FUN_00400284. */
/* Supplied declaration required: FUN_004009d0. */


unsigned int FUN_0040082c(int param_1)

{
/* irregular: 5 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  
  if ((param_1 == 0) || (dataTable8FindRecord(), param_1 == 0)) {
    return 1;
  }
  if ((*(char *)(param_1 + 0x41) == '\x02' || *(char *)(param_1 + 0x41) == '\x03') &&
     (*(char *)(param_1 + 0x3b) == '\x01' || *(char *)(param_1 + 0x3b) == '\f')) {
    temp_v1 = (unsigned int)*(unsigned short *)(param_1 + 0x32);
    if (temp_v1 != 0) {
      FUN_004009d0(temp_v1,1);
      return temp_v1;
    }
    temp_v2 = btlGetMainState();
    if ((*(unsigned int *)(temp_v2 + 0x45ac) & DAT_00573cbc) == 0 &&
        (*(unsigned int *)(temp_v2 + 0x45a8) & DAT_00573cb8) == 0) {
      if ((*(unsigned int *)(param_1 + 0x68) & 0x10) != 0) {
        temp_v0 = *(short *)(temp_v2 + 0x4c70);
        if (temp_v0 < 8) {
          temp_v0 = *(short *)(temp_v2 + 0x4c72);
        }
        if (temp_v0 >= 8) {
          return 3;
        }
      }
      temp_v4 = 0;
      while( 1 ) {
        puVar5 = (unsigned int *)(*(int *)(temp_v2 + 0x1ffc) + temp_v4 * 0x408);
        if ((((DAT_00573c90 & *puVar5) != 0 || (DAT_00573c94 & puVar5[1]) != 0) &&
            ((*puVar5 & DAT_00573ca8) == 0 && (puVar5[1] & DAT_00573cac) == 0)) &&
           (FUN_003ff73c(puVar5,param_1), puVar5 == (unsigned int *)0x0)) break;
        temp_v4 = temp_v4 + 1;
        if (temp_v4 >= 4) {
          if (((*(unsigned char *)(param_1 + 0x3a) & 0x7f) == 1) || ((*(unsigned int *)(param_1 + 0x68) & 4) != 0)) {
            temp_v2 = gameGetSlotTable();
            temp_v4 = -1;
            temp_v1 = (unsigned int)*(unsigned char *)(temp_v2 + 0x1ca3);
            if (temp_v1 != 0xffffffff && !SCARRY4(temp_v1,1)) {
              do {
                temp_v3 = temp_v4;
                FUN_00400284(temp_v4,0,param_1);
                if (temp_v3 == 0) {
                  return 0;
                }
                temp_v4 = temp_v4 + 1;
              } while (temp_v4 < (int)(unsigned int)*(unsigned char *)(temp_v2 + 0x1ca3));
            }
          }
          return 3;
        }
      }
      return 0;
    }
    return 0;
  }
  return 2;
}

} /* extern "C" */
