/* NON_MATCHING: compiler unrolls the ID search and changes return path. */
#include "common.h"
struct IdOwner {u8 unk00[52];u16 ids[8];s8 values[8];};
/* Finds the signed value associated with a matching ID. */
extern "C" s32 FUN_004bd098(IdOwner *owner,u32 id){if(owner==NULL)return 0;for(int i=0;i<8;++i)if(owner->ids[i]==id)return owner->values[i];return 0;}
