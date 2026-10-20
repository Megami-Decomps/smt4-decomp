/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b760` (_code @ 0x38b760, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNewB(void);
int dataTableFileGetTable(int, int);
int dataTableGetEntries(void);
int FUN_002c5d5c(void);

typedef struct fn_0038b760_arg0 fn_0038b760_arg0;
struct fn_0038b760_arg0 {
    unsigned char pad_0x0[0x45];
    byte field_0x45; /* +0x45 */
    unsigned char pad_0x46[0x2];
    int field_0x48; /* +0x48 */
    int field_0x4c; /* +0x4c */
};

/* Supplied declaration required: asdOperatorNewB. */
/* Supplied declaration required: dataTableFileGetTable. */
extern int dataTableGetCount(void);
/* Supplied declaration required: dataTableGetEntries. */
/* Supplied declaration required: FUN_002c5d5c. */


void FUN_0038b760(fn_0038b760_arg0 *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v1 = param_1->field_0x45 != 0;
  temp_v0 = 0;
  if (temp_v1) {
    temp_v0 = param_1->field_0x48;
  }
  if (temp_v1 && temp_v0 != 0) {
    dataTableFileGetTable(temp_v0,0);
    dataTableGetEntries();
  }
  temp_v1 = param_1->field_0x45 != 0;
  temp_v0 = 0;
  if (temp_v1) {
    temp_v0 = param_1->field_0x48;
  }
  if (temp_v1 && temp_v0 != 0) {
    dataTableFileGetTable(temp_v0,0);
    temp_v0 = dataTableGetCount();
    if (temp_v0 != 0) {
      temp_v0 = temp_v0 << 4;
      asdOperatorNewB();
      if (temp_v0 != 0) {
        FUN_002c5d5c();
      }
      param_1->field_0x4c = temp_v0;
    }
  }
  return;
}

} /* extern "C" */
