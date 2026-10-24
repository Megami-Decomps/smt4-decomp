#include "common.h"

extern "C" {

/* A record found by ID; only the two sort keys are named. */
typedef struct SortRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ u16 order;
} SortRecord;

SortRecord *FUN_0039b984(u32 id);

/* Comparator over pointers to record IDs: sorts by order, then by id; unknown records sort as 999. */
int FUN_004039b4(const u16 *left, const u16 *right)
{
    SortRecord *a = FUN_0039b984(*left);
    SortRecord *b = FUN_0039b984(*right);
    int orderA = a != NULL ? a->order : 999;
    int orderB = b != NULL ? b->order : 999;
    int result = orderA - orderB;

    if (result == 0) {
        a = FUN_0039b984(*left);
        b = FUN_0039b984(*right);
        int idA = a != NULL ? a->id : 999;
        int idB = b != NULL ? b->id : 999;
        result = idA - idB;
    }
    return result;
}

} /* extern "C" */
