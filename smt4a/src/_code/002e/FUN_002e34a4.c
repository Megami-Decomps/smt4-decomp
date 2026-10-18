/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e34a4` (_code @ 0x2e34a4, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern signed char DAT_00580204; /* 0x580204 */
extern signed char DAT_00580205; /* 0x580205 */
extern unsigned int DAT_005ed634; /* 0x5ed634 */
extern unsigned int DAT_005ed638; /* 0x5ed638 */
extern unsigned int DAT_005ed63c; /* 0x5ed63c */
extern unsigned int DAT_005ed640; /* 0x5ed640 */
extern unsigned int DAT_005ed644; /* 0x5ed644 */
extern unsigned int DAT_005ed648; /* 0x5ed648 */
extern unsigned int DAT_005ed64c; /* 0x5ed64c */
extern unsigned int DAT_005ed650; /* 0x5ed650 */
extern unsigned int DAT_005ed654; /* 0x5ed654 */
extern unsigned int DAT_005ed658; /* 0x5ed658 */
extern unsigned int DAT_005ed65c; /* 0x5ed65c */
extern unsigned int DAT_005ed660; /* 0x5ed660 */
extern unsigned char DAT_005f199e; /* 0x5f199e */
extern unsigned char DAT_005f199f; /* 0x5f199f */


unsigned char FUN_002e34a4(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  temp_v1 = DAT_005ed63c;
  temp_v0 = DAT_005ed638;
  DAT_005f199e = DAT_00580205 != '\0';
  temp_v2 = DAT_00580204 == '\0';
  if (temp_v2) {
    DAT_005f199f = 0;
  }
  else {
    DAT_005f199f = DAT_00580205 == '\0';
    *param_1 = DAT_005ed634;
    param_1[1] = temp_v0;
    param_1[2] = temp_v1;
    temp_v1 = DAT_005ed648;
    temp_v0 = DAT_005ed644;
    *param_2 = DAT_005ed640;
    param_2[1] = temp_v0;
    param_2[2] = temp_v1;
    temp_v1 = DAT_005ed654;
    temp_v0 = DAT_005ed650;
    *param_3 = DAT_005ed64c;
    param_3[1] = temp_v0;
    param_3[2] = temp_v1;
    temp_v1 = DAT_005ed660;
    temp_v0 = DAT_005ed65c;
    *param_4 = DAT_005ed658;
    param_4[1] = temp_v0;
    param_4[2] = temp_v1;
  }
  return !temp_v2;
}
