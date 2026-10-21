#include "common.h"
struct IdOwner { u8 unk00[52];u16 ids[8]; };
/* Counts the nonzero IDs up to the first empty entry. */
extern "C" s32 FUN_004bd068(IdOwner *owner) { s32 count=0;for(s32 i=0;i<8;++i){if(owner->ids[i]==0)break;++count;}return count; }
