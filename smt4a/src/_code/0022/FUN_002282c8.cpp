/* NON_MATCHING: switch default placement, dispatch register, and constructor-case ordering differ. */
#include "common.h"

struct BattleFilter;

extern "C" {
extern const u8 DAT_00570df0[];
extern const u8 DAT_00570e30[];
extern const u8 DAT_00570e7c[];
extern const u8 DAT_00570ebc[];
extern const u8 DAT_00570efc[];
extern const u8 DAT_00570f58[];
extern const u8 DAT_00570f98[];
extern const u8 DAT_00570fd8[];
extern const u8 DAT_00571018[];
extern const u8 DAT_00571058[];
extern const u8 DAT_00571098[];
BattleFilter *FUN_004151b0(const void *configuration, u32 resource, s32 mode);
BattleFilter *FUN_00415be0(const void *configuration, u32 resource, s32 mode);
BattleFilter *FUN_0041cbac(const void *configuration, u32 resource, s32 mode);
BattleFilter *FUN_0041d6bc(const void *configuration, u32 resource, s32 mode);

BattleFilter *FUN_002282c8(u32 kind, u32 resource, s32 mode)
{
    switch (kind) {
    case 0: return FUN_004151b0(DAT_00570df0, resource, mode);
    case 1: return FUN_00415be0(DAT_00570e30, resource, mode);
    case 2: return FUN_0041cbac(DAT_00570e7c, resource, mode);
    case 3: return FUN_004151b0(DAT_00570ebc, resource, mode);
    case 4: return FUN_0041d6bc(DAT_00570efc, resource, mode);
    case 5: return FUN_004151b0(DAT_00570f58, resource, mode);
    case 6: return FUN_004151b0(DAT_00570f98, resource, mode);
    case 7: return FUN_004151b0(DAT_00570fd8, resource, mode);
    case 8: return FUN_004151b0(DAT_00571018, resource, mode);
    case 9: return FUN_004151b0(DAT_00571058, resource, mode);
    case 10: return FUN_004151b0(DAT_00571098, resource, mode);
    default: return NULL;
    }
}
}
