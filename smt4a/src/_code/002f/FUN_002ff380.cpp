/* NON_MATCHING: retail emits 'ldr r6, [r0, #4]'; compiler emits 'ldr r6, [r0, #0]' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Range {
    u32 *begin,*end;
};
s32 rangeIsEmpty2(Range *);
u32 *_ZSt4copyIPKPvPS0_ET0_T_S5_S4_(Range *,u32 *,u32 *);
void FUN_002ff380(Range *range) {
    u32 *begin=range->begin,*end=range->end;
    if(!rangeIsEmpty2(range)) {
        begin=_ZSt4copyIPKPvPS0_ET0_T_S5_S4_(range,begin,end);
        range->end=begin;
    }
}
}
