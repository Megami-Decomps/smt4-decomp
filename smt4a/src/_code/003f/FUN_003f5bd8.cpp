/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f5bd8` (_code @ 0x3f5bd8, 0x1b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(...);
int asdOperatorNewD(...);
int asdOperatorDeleteC(...);
int rt_memclr(...);
int FUN_003ff160(...);
int rt_memcpy(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int entryCompareByRank(...); /* 0x2b26b0 */

/* Supplied declaration required: qsort. */
extern int gameFlagIsSet(void);
/* Supplied declaration required: asdOperatorNewD. */
/* Supplied declaration required: asdOperatorDeleteC. */
/* Supplied declaration required: rt_memclr. */
/* Supplied declaration required: FUN_003ff160. */
extern int flagsBGetBit0(unsigned short);
extern unsigned long long flagsBGetBit1(unsigned short);
/* Supplied declaration required: rt_memcpy. */


void FUN_003f5bd8(int param_1,int param_2)

{
/* irregular: 2 goto(s); 7 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned short *puVar8;
  unsigned int temp_v7;
  unsigned long long temp_v8;
  
  *(unsigned int *)(param_1 + 0x6b0) = 0;
  *(unsigned char *)(param_1 + 0x40) = 0;
  temp_v1 = param_2 * 0x34;
  asdOperatorNewD();
  rt_memclr();
  rt_memcpy(temp_v1,*(unsigned int *)(param_1 + 0x20),param_2 * 0x34);
  temp_v4 = 0x34;
  qsort(temp_v1,param_2,0x34,entryCompareByRank);
  temp_v6 = 0;
  if (param_2 < 1) {
    asdOperatorDeleteC(temp_v1);
    return;
  }
  do {
    puVar8 = (unsigned short *)(temp_v1 + temp_v6 * 0x34);
    temp_v0 = *puVar8;
    if (temp_v0 != 0) {
      temp_v2 = flagsBGetBit0(temp_v0);
      if (temp_v2 == 0) {
        if ((puVar8[0x19] != 0) && (temp_v2 = gameFlagIsSet(), temp_v2 == 0)) goto LAB_003f5d78;
        FUN_003ff160(temp_v0);
      }
      temp_v8 = flagsBGetBit1(temp_v0);
      temp_v2 = (int)((unsigned long long)temp_v8 >> 0x20);
      if ((int)temp_v8 != 0) {
        *(unsigned char *)(param_1 + 0x40) = 1;
      }
      temp_v5 = *(unsigned int *)(param_1 + 0x38);
      if ((int)temp_v5 < 1) {
        temp_v7 = 0;
      }
      else {
        temp_v7 = temp_v5 & 1;
        if (temp_v7 != 0) {
          temp_v2 = *(int *)(param_1 + 0x20);
          temp_v4 = (unsigned int)*puVar8;
        }
        temp_v3 = 0;
        if (temp_v7 != 0) {
          do {
            if (*(unsigned short *)(temp_v2 + temp_v3 * 0x34) == temp_v4) goto LAB_003f5d5c;
            temp_v3 = temp_v3 + 1;
          } while ((int)temp_v3 < (int)temp_v7);
        }
      }
      temp_v3 = 0xffffffff;
      if ((int)temp_v7 < (int)temp_v5) {
        temp_v4 = (unsigned int)*puVar8;
        do {
          temp_v3 = temp_v7;
          if (*(unsigned short *)(*(int *)(param_1 + 0x20) + temp_v7 * 0x34) == temp_v4) break;
          if (*(unsigned short *)(*(int *)(param_1 + 0x20) + temp_v7 * 0x34 + 0x34) == temp_v4) {
            temp_v3 = temp_v7 + 1;
            break;
          }
          temp_v7 = temp_v7 + 2;
          temp_v3 = 0xffffffff;
        } while ((int)temp_v7 < (int)temp_v5);
      }
LAB_003f5d5c:
      *(short *)(param_1 + *(int *)(param_1 + 0x6b0) * 2 + 0x5e6) = (short)temp_v3;
      *(int *)(param_1 + 0x6b0) = *(int *)(param_1 + 0x6b0) + 1;
    }
LAB_003f5d78:
    do {
      temp_v6 = temp_v6 + 1;
      if (param_2 <= temp_v6) {
        asdOperatorDeleteC(temp_v1);
        return;
      }
    } while (temp_v6 >= 100);
  } while( 1 );
}

} /* extern "C" */
