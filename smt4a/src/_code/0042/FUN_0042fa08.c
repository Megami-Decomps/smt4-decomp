/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042fa08` (_code @ 0x42fa08, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0042fa08_arg0 fn_0042fa08_arg0;
struct fn_0042fa08_arg0 {
    int field_0x0; /* +0x0 */
    undefined4 field_0x4; /* +0x4 */
    byte field_0x8; /* +0x8 */
};

extern signed char DAT_005b448b; /* 0x5b448b */
extern signed char DAT_005b448c; /* 0x5b448c */
extern signed char DAT_005b448e; /* 0x5b448e */
extern signed char DAT_005b448f; /* 0x5b448f */
extern unsigned int DAT_006426cc; /* 0x6426cc */

/* Supplied declaration required: FUN_0042d5b4. */
/* Supplied declaration required: FUN_0042e870. */
/* Supplied declaration required: FUN_00430e58. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


unsigned int FUN_0042fa08(fn_0042fa08_arg0 *param_1)

{
/* irregular: 5 native warning(s); review required */
  param_1->field_0x4 = 0;
  if (DAT_005b448b != '\0') {
    FUN_0042e870(param_1,0);
  }
  nn_os_CriticalSection_Enter(&DAT_006426cc);
  if (DAT_005b448e != '\0') {
    FUN_00430e58(param_1[0x4e].field_0x0);
    DAT_005b448e = '\0';
  }
  nn_os_CriticalSection_Leave(&DAT_006426cc);
  nn_os_CriticalSection_Enter(&DAT_006426cc);
  if (DAT_005b448f != '\0') {
    FUN_00430e58(param_1[0x72].field_0x0);
    DAT_005b448f = '\0';
  }
  nn_os_CriticalSection_Leave(&DAT_006426cc);
  if (DAT_005b448c != '\0') {
    FUN_0042d5b4(0);
    DAT_005b448c = '\0';
  }
  if (param_1->field_0x8 != 0) {
    param_1->field_0x8 = 0;
  }
  return 0;
}
