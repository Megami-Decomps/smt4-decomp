/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eafa0` (_code @ 0x3eafa0, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memclr(int, int);
int clearTwoWords(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
} param_2_stack;

extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_00573990; /* 0x573990 */
extern unsigned int DAT_00573994; /* 0x573994 */
extern unsigned int DAT_00573998; /* 0x573998 */
extern unsigned int DAT_0057399c; /* 0x57399c */
extern unsigned int DAT_005739a0; /* 0x5739a0 */
extern unsigned int DAT_005739a4; /* 0x5739a4 */

/* Supplied declaration required: rt_memclr. */
/* Supplied declaration required: clearTwoWords. */


void FUN_003eafa0(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  do {
    temp_v0 = (int)*(short *)(*(int *)(param_1 + 0x1ed4) + temp_v3 * 0x1d0 + 0x68);
    if (-1 < temp_v0) {
      puVar3 = (unsigned int *)(*(int *)(param_1 + 0x1ffc) + temp_v0 * 0x408);
      temp_v1 = *puVar3;
      temp_v2 = puVar3[1];
      if ((((temp_v2 & DAT_0057397c) != 0 || (DAT_00573978 & temp_v1) != 0) &&
          ((temp_v2 & DAT_005739a4) == 0 && (DAT_005739a0 & temp_v1) == 0)) &&
         (temp_v0 = *(int *)(param_1 + 0x1ffc) + temp_v0 * 0x408 + 0x164, temp_v0 != 0)) {
        if (param_2 != 0) {
          if ((param_2 != 1) || ((temp_v1 & DAT_00573990) != 0 || (temp_v2 & DAT_00573994) != 0)) {
            *(unsigned int *)(temp_v0 + 0x228) = 0;
            clearTwoWords(temp_v0 + 0x1be);
            rt_memclr(temp_v0 + 0x1d6,0x50);
          }
        }
        else if (((DAT_00573990 & temp_v1) == 0 && (DAT_00573994 & temp_v2) == 0) &&
                ((temp_v1 & DAT_00573998) == 0 && (temp_v2 & DAT_0057399c) == 0)) {
          *(unsigned int *)(temp_v0 + 0x228) = 0;
          clearTwoWords(temp_v0 + 0x1be);
          rt_memclr(temp_v0 + 0x1d6,0x50);
        }
      }
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 0x6d) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
