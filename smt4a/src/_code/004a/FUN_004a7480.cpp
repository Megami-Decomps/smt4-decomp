#include "common.h"
struct SortRecord {u8 unk00[6];u16 key;};
extern "C" {SortRecord *FUN_00184310(u32 id);
/* Sorts by ascending record key, then descending ID. */
s32 FUN_004a7480(const u16 *left,const u16 *right){SortRecord *leftRecord=FUN_00184310(*left);SortRecord *rightRecord=FUN_00184310(*right);s32 result=leftRecord->key-rightRecord->key;return result!=0?result:*right-*left;}}
