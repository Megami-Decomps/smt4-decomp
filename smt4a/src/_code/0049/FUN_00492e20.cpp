/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00492e20` (_code @ 0x492e20, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "classes/Obj422594.h"
#include "classes/Obj4221a4.h"
#include "shard/W6_W6Match1_TouchRegionOwner.h"

extern "C" {

void FUN_004d091c(TouchRegionOwner* owner, u16 x, u16 y, u16 width, u16 height);
int touchRegisterFirstRegion(unsigned int, int, int);
int touchRegisterSecondRegion(unsigned int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: touchRegisterFirstRegion. */
/* Supplied declaration required: touchRegisterSecondRegion. */
extern int recordCompareKind(unsigned int);


void FUN_00492e20(unsigned int param_1, const void *source)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  ((Obj422594 *)param_1)->Obj422594::initialize(source);
  temp_v0 = recordCompareKind(param_1);
  temp_v0 = FUN_001834a4(0x13,*(unsigned int *)(temp_v0 * 4 + 0x587fe4));
  touchRegisterFirstRegion(param_1,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10));
  temp_v0 = recordCompareKind(param_1);
  temp_v0 = FUN_001834a4(0x13,*(unsigned int *)(temp_v0 * 4 + 0x587ff0));
  touchRegisterSecondRegion(param_1,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10));
  temp_v0 = recordCompareKind(param_1);
  temp_v0 = FUN_001834a4(0x13,*(unsigned int *)(temp_v0 * 4 + 0x587ffc));
  const Obj4221a4Entry* rectangle = reinterpret_cast<const Obj4221a4Entry*>(temp_v0);
  const TouchRegionInlineSize* inlineSize = reinterpret_cast<const TouchRegionInlineSize*>(rectangle->unk00);
  FUN_004d091c(reinterpret_cast<TouchRegionOwner*>(param_1),rectangle->x,rectangle->y,
               rectangle->size != NULL ? rectangle->size->width : inlineSize->width & 0x7fff,
               rectangle->size != NULL ? rectangle->size->height : inlineSize->height & 0x7fff);
  return;
}

} /* extern "C" */
