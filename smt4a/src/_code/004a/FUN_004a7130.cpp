#include "common.h"
struct SortRecord {u8 unk00[6];u16 key;};
extern "C" {SortRecord *FUN_00184310(u32 id);
/* Sorts by descending record key, then ascending ID. */
s32 FUN_004a7130(const u16 *left,const u16 *right){SortRecord *leftRecord=FUN_00184310(*left);SortRecord *rightRecord=FUN_00184310(*right);s32 result=rightRecord->key-leftRecord->key;return result!=0?result:*left-*right;}}
