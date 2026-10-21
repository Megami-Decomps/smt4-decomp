/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039f874` (_code @ 0x39f874, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "classes/Obj4221a4.h"
#include "shard/W6_W6Match1_TouchRegionOwner.h"

extern "C" {

int FUN_00152530(void);
void FUN_002346ac(TouchRegionOwner* owner, u16 x, u16 y, u16 width, u16 height);
int touchRegisterSecondRegion(unsigned int, int, int);
int touchRegisterFirstRegion(unsigned int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00152530. */
extern int recordCompareKind(unsigned int);
/* Supplied declaration required: touchRegisterSecondRegion. */
/* Supplied declaration required: touchRegisterFirstRegion. */
extern int FUN_002bf4f8(unsigned int, unsigned int);


void FUN_0039f874(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_00152530();
  temp_v0 = recordCompareKind(param_1);
  temp_v0 = FUN_002bf4f8(0x1c,*(unsigned int *)(temp_v0 * 4 + 0x44cf78));
  touchRegisterFirstRegion(param_1,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10));
  temp_v0 = recordCompareKind(param_1);
  temp_v0 = FUN_002bf4f8(0x1c,*(unsigned int *)(temp_v0 * 4 + 0x44cf84));
  touchRegisterSecondRegion(param_1,(int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10));
  temp_v0 = recordCompareKind(param_1);
  temp_v0 = FUN_002bf4f8(0x1c,*(unsigned int *)(temp_v0 * 4 + 0x44cf90));
  const Obj4221a4Entry* rectangle = reinterpret_cast<const Obj4221a4Entry*>(temp_v0);
  const TouchRegionInlineSize* inlineSize = reinterpret_cast<const TouchRegionInlineSize*>(rectangle->unk00);
  FUN_002346ac(reinterpret_cast<TouchRegionOwner*>(param_1),rectangle->x,rectangle->y,
               rectangle->size != NULL ? rectangle->size->width : inlineSize->width & 0x7fff,
               rectangle->size != NULL ? rectangle->size->height : inlineSize->height & 0x7fff);
  return;
}

} /* extern "C" */
