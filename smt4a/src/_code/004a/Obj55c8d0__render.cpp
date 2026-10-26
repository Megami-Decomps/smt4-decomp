/* NON_MATCHING: Retail keeps the input object in r0 across render callbacks; the draft spills the owner and schedules color reset differently. */
#include "romwright_types.h"
#include "classes/Obj55c8d0.h"
#include "util/skinObjectUpdateMatrices.h"

extern "C" {

int renderCtxResetColorScale(...);
int FUN_00183bb0(...);
int FUN_004a5344(...);
int FUN_004a559c(...);

typedef struct fn_004a45e8_arg0 fn_004a45e8_arg0;
struct fn_004a45e8_arg0 {
    unsigned char pad_0x0[0x14];
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x83b];
    unsigned char field_0x850; /* +0x850 */
    unsigned char pad_0x851[0xf];
    unsigned char field_0x860; /* +0x860 */
    unsigned char pad_0x861[0x977];
    undefined4 field_0x11d8; /* +0x11d8 */
    undefined4 field_0x11dc; /* +0x11dc */
    undefined4 field_0x11e0; /* +0x11e0 */
    undefined4 field_0x11e4; /* +0x11e4 */
    undefined1 field_0x11e8; /* +0x11e8 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_004a5344. */
/* Supplied declaration required: FUN_004a559c. */


} /* extern "C" */

void Obj55c8d0::render()

{
    fn_004a45e8_arg0 *param_1 = (fn_004a45e8_arg0 *)this;
/* irregular: 5 native warning(s); review required */
  if (0 < *(int *)&param_1->field_0x14) {
    FUN_00183bb0();
    if (param_1->field_0x860 != '\0') {
      *(unsigned int *)&param_1->field_0x850 = 0x97;
      FUN_004a559c(param_1);
    }
    else {
      *(unsigned int *)&param_1->field_0x850 = 0x1f;
      FUN_004a5344(param_1);
    }
    skinObjectUpdateMatrices(reinterpret_cast<SkinObject *>(g_renderCtx));
    renderCtxResetColorScale(g_renderCtx);
    return;
  }
  return;
}

