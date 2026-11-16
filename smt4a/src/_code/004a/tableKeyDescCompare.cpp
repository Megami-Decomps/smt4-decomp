#include "common.h"
struct SortRecord {u8 unk00[6];u16 key;};
extern "C" {SortRecord *devilGetRecord(u32 id);
/* Sorts by descending record key, then ascending ID. */
s32 tableKeyDescCompare(const u16 *left,const u16 *right){SortRecord *leftRecord=devilGetRecord(*left);SortRecord *rightRecord=devilGetRecord(*right);s32 result=rightRecord->key-leftRecord->key;return result!=0?result:*left-*right;}}
