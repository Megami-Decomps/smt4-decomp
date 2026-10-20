/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004743e4` (_code @ 0x4743e4, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGetEntries(void);
int dataTableFileGetTable(int, int);

typedef struct fn_004743e4_arg0 fn_004743e4_arg0;
struct fn_004743e4_arg0 {
    unsigned char pad_0x0[0x45];
    byte field_0x45; /* +0x45 */
    unsigned char pad_0x46[0x2];
    int field_0x48; /* +0x48 */
    int field_0x4c; /* +0x4c */
};

extern unsigned int dataTableGetCount(void);
/* Supplied declaration required: dataTableGetEntries. */
/* Supplied declaration required: dataTableFileGetTable. */


unsigned int FUN_004743e4(fn_004743e4_arg0 *param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  if (param_1->field_0x4c != 0) {
    temp_v3 = param_1->field_0x45 != 0;
    temp_v0 = 0;
    if (temp_v3) {
      temp_v0 = param_1->field_0x48;
    }
    if (temp_v3 && temp_v0 != 0) {
      dataTableFileGetTable(temp_v0,0);
      dataTableGetEntries();
    }
    temp_v3 = param_1->field_0x45 != 0;
    temp_v0 = 0;
    if (temp_v3) {
      temp_v0 = param_1->field_0x48;
    }
    if (temp_v3 && temp_v0 != 0) {
      dataTableFileGetTable(temp_v0,0);
      temp_v1 = dataTableGetCount();
      if (temp_v1 != 0) {
        param_3 = param_1->field_0x4c;
      }
      temp_v2 = 0;
      if (temp_v2 < temp_v1) {
        do {
          if ((*(char *)(param_3 + temp_v2 * 0x10 + 0xc) != '\0') &&
             (*(int *)(param_3 + temp_v2 * 0x10) == 0)) {
            return 0;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < temp_v1);
      }
    }
  }
  return 1;
}

} /* extern "C" */
